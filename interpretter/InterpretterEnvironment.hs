module InterpretterEnvironment where

import AbsCPP
import JustinControl
import ErrM
import qualified Data.Map as Map

type Env = (FunctionTable, [Context])
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

lookUpVar :: Id -> Env -> Err Value
lookUpVar id (_, []) = Bad "TYPECHECKER ERROR: Empty Context Stack"
lookUpVar id (_sig, (currBlock:[])) = Map.lookup id currBlock |> errIfNothing ("Uninitialized variable" ++ (removeId id))
lookUpVar id (_sig, (currBlock:blocks)) = case Map.lookup id currBlock of
  Just x -> Ok x
  _ -> lookUpVar id (_sig, blocks)

initializeVar id value (_sig, (currBlock:blocks)) = 
  if Map.member id currBlock then
    Bad "Variable is already initialzied"
  else
    Ok (_sig, ((Map.insert id value currBlock):blocks)) 


cycleBlocks id value topBlocks [] = Bad "Variable is uninitialized"
cycleBlocks id value topBlocks (currBlock:blocks) =
  if Map.member id currBlock then
    Ok $ (reverse topBlocks) ++ ((Map.insert id value currBlock):blocks)
  else cycleBlocks id value (currBlock:topBlocks) blocks

updateVar id value (_sig, []) = Bad "Type checker error"
updateVar id value (_sig, blocks) = case cycleBlocks id value [] blocks of
  Ok newBlocks -> Ok (_sig, newBlocks)
  Bad s -> Bad s
    

updateFun :: Id -> (Type, [Arg], [Stm]) -> Env -> Err Env
updateFun id function (functionTable, _context) =
  if Map.member id functionTable then Bad $ "There is a redclaration(function) of: " ++ (removeId id)
  else
    ((Map.insert id function functionTable), _context) |> Ok

lookUpFun :: Id -> Env -> Err (Type, [Arg], [Stm])
lookUpFun id (functionTable, _context) =
  Map.lookup id functionTable |> errIfNothing ("function not defined: " ++ (removeId id))

newBlock :: Env -> Env
newBlock (functionTable, context) = (functionTable, Map.empty:context)

emptyEnv = (Map.empty, [])
newEnv (functionTable, _) = (functionTable, [])

exitBlock :: Env -> Err Env
exitBlock (functionTable, []) = Bad "Internal error, no more blocks to exit"
exitBlock (functionTable, _x:blocks) = Ok (functionTable, blocks)

