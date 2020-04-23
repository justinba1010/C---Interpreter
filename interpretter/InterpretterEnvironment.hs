module InterpretterEnvironment where

import AbsCPP
import JustinControl
import ErrM
import qualified Data.Map as Map

type Env = (FunctionTable, [Context], Value, [String])
type FunctionTable = Map.Map Id (Type, [Arg], [Stm])
type Context = Map.Map Id Value
data Value = 
  VIntUninitialized
  | VDoubleUninitialized
  | VStringUninitialized
  | VBoolUninitialized
  | VInt Integer
  | VDouble Double
  | VString String
  | VBool Bool
  | VVoid
  | VUndefined
  deriving (Eq)

lookUpVar :: Id -> Env -> Err Value
lookUpVar id (_, [], _, _) = Bad "TYPE ERROR ERROR: Empty Context Stack"
lookUpVar id (_sig, (currBlock:[]), exitCode, prints) = Map.lookup id currBlock |> errIfNothing ("TYPE ERROR ERROR: Uninitialized variable" ++ (removeId id))
lookUpVar id (_sig, (currBlock:blocks), exitCode, prints) = case Map.lookup id currBlock of
  Just x -> Ok x
  _ -> lookUpVar id (_sig, blocks, exitCode, prints)

initializeVar id value (_sig, (currBlock:blocks), exitCode, prints) = 
  if Map.member id currBlock then
    Bad "TYPE ERROR ERROR: Variable is already initialzied"
  else
    Ok (_sig, ((Map.insert id value currBlock):blocks), exitCode, prints) 


cycleBlocks id value topBlocks [] = Bad "TYPE ERROR ERROR: Variable is uninitialized"
cycleBlocks id value topBlocks (currBlock:blocks) =
  if Map.member id currBlock then
    Ok $ (reverse topBlocks) ++ ((Map.insert id value currBlock):blocks)
  else cycleBlocks id value (currBlock:topBlocks) blocks

updateVar id value (_sig, [], _, _) = Bad "TYPE ERROR ERROR: Type checker error"
updateVar id value (_sig, blocks, exitCode, prints) = case cycleBlocks id value [] blocks of
  Ok newBlocks -> Ok (_sig, newBlocks, exitCode, prints)
  Bad s -> Bad s
    

updateFun :: Id -> (Type, [Arg], [Stm]) -> Env -> Err Env
updateFun id function (functionTable, _context, exitCode, prints) =
  if Map.member id functionTable then Bad $ "TYPE ERROR ERROR: There is a redclaration(function) of: " ++ (removeId id)
  else
    ((Map.insert id function functionTable), _context, exitCode, prints) |> Ok

lookUpFun :: Id -> Env -> Err (Type, [Arg], [Stm])
lookUpFun id (functionTable, _context, _, _) =
  Map.lookup id functionTable |> errIfNothing ("TYPE ERROR ERROR: function not defined: " ++ (removeId id))

newBlock :: Env -> Env
newBlock (functionTable, context, exitCode, prints) = (functionTable, Map.empty:context, exitCode, prints)

emptyEnv = (Map.empty, [], VIntUninitialized, [])
newEnv (functionTable, _, exitCode, prints) = (functionTable, [], exitCode, [])

exitBlock :: Env -> Err Env
exitBlock (functionTable, [], _, _) = Bad "TYPE ERROR ERROR: Internal error, no more blocks to exit"
exitBlock (functionTable, _x:blocks, exitCode, prints) = Ok (functionTable, blocks, exitCode, prints)

changeReturnVal :: Env -> Value -> Env
changeReturnVal (fxTable, context, oldVal, prints) newVal = (fxTable, context, (
  if (elem oldVal [VDoubleUninitialized, VIntUninitialized, VStringUninitialized, VBoolUninitialized]) then newVal else oldVal
  ), prints)

addPrints (fxTable, context, val1, ogPrints) (_, _, _, newPrints) = (fxTable, context, val1, newPrints ++ ogPrints)

isReturned (_, _, val, _) = not (elem val [VDoubleUninitialized, VIntUninitialized, VStringUninitialized, VBoolUninitialized])

getReturnVal :: Env -> Value
getReturnVal (fxTable, context, val, prints) = val
