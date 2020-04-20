module InterpretterEnvironment where

import AbsCPP
import JustinControl
import ErrM
import qualified Data.Map as Map

type Env = (FunctionTable, [Context])
type FunctionTable = Map.Map Id (Type, [Arg], [Stm])
type Context = Map.Map Id Value
data Value = 
  | VIntUninitialized
  | VDoubleUninitialized
  | VStringUninitialized
  | VInt Integer
  | VDouble Double
  | VString String
  | VVoid
  | VUndefined

lookUpVar :: Id -> Env -> Err Value
lookUpVar id (_, []) = fail "TYPECHECKER ERROR: Empty Context Stack"
lookUpVar id (_sig, (currBlock:[])) = Map.lookup id currBlock |> errIfNothing ("Uninitialized variable" ++ (removeId id))
lookUpVar id (_sig, (currBlock:blocks)) = case Map.lookup id currBlock of
  Just x -> Ok x
  _ -> lookUpVar id (_sig, blocks)



updateVar id value env = ()

updateFun :: Id -> (Type, [Arg], [Stm]) -> Env -> Err Env
updateFun id function (functionTable, _context) =
  if Map.member id functionTable then Bad $ "There is a redclaration(function) of: " ++ (removeId id)
  else
    ((Map.insert id function functionTable), _context) |> Ok

lookUpFun :: Id -> Env -> Err (Type, [Arg], [Stm])
lookUpFun id (functionTable, _context) =
  Map.lookup id functionTable |> errIfNothing ("function not defined: " ++ (removeId id))

newBlock (sig, context) = (sig, []:context)

emptyEnv = (Map.empty, [])
newEnv functionTable = (functionTable, [])
