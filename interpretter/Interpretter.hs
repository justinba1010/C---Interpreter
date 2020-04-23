module Interpretter where

import AbsCPP
import InterpretterEnvironment
import JustinControl
import Control.Monad
import PrintCPP (printTree)
import ErrM
import UnsafeJustinIO

justinReturnUnsafe = Id "__UNSAFE_JUSTIN_RETURN_1998CSCE531_0xD34DB33F__"

addDefToEnv def env = case def of
  DFun type_ id args stms -> updateFun id (type_, args, stms) env

getFunctions defs env =
  foldM
    (\env def -> addDefToEnv def env) env defs

evalExps [] vals env = Ok (vals, env)
evalExps (exp:exps) vals env = case interpretExp exp env of
  Ok (value, env1) -> evalExps exps (value:vals) env1
  Bad s -> Bad s

addArgumentsToEnv [] [] env = Ok env
addArgumentsToEnv (_) [] env = Bad $ "TYPE ERROR:Not enough arguments"
addArgumentsToEnv [] _ env = Bad $ "TYPE ERROR:Not enough arguments"
addArgumentsToEnv (val:vals) (arg:args) env = case arg of
  ADecl type_ id ->
    case (type_, val) of
      (Type_bool, VBool x) -> initializeVar id val env >>= addArgumentsToEnv vals args
      (Type_int, VInt x) ->initializeVar id val env >>= addArgumentsToEnv vals args
      (Type_string, VString x) ->initializeVar id val env >>= addArgumentsToEnv vals args
      (Type_double, VDouble x) ->initializeVar id val env >>= addArgumentsToEnv vals args
      _ -> "TYPE ERROR: return wrong type" |> Bad

type InterpretReturn = Err (Value, Env)

getEnvFromIR :: InterpretReturn -> Err Env
getEnvFromIR interpretReturn = case interpretReturn of
  Ok (_, env) -> Ok env
  Bad s -> Bad s


interpretExp :: Exp -> Env -> InterpretReturn
interpretExp exp env = case exp of
  SReadInt -> Ok (VInt $ readInt (), env)
  SReadDouble -> Ok (VDouble $ readDouble (), env)
  ETrue -> Ok (VBool True, env)
  EFalse -> Ok (VBool False, env)
  EInt int -> Ok (VInt int, env)
  EDouble double -> Ok (VDouble double, env)
  EString string -> Ok (VString string, env)
  EId id -> case lookUpVar id env of
    Ok v -> Ok (v, env)
    Bad s -> Bad s
  EApp id exps -> do
    (type_, args, stms) <- lookUpFun id env
    (vals, env1) <- evalExps exps [] env
    newEnv <- addArgumentsToEnv vals args (newEnv env |> newBlock)
    case interpretStms stms type_ newEnv of
      Ok newnewEnv -> Ok (getReturnVal newnewEnv, addPrints env1 newnewEnv)
      Bad s -> Bad s
  EPIncr (EId (id)) -> do -- Post
    (value, env1) <- interpretExp (EId (id)) env
    case (value) of
      VInt x -> do
        env2 <- updateVar id (VInt (x+1)) env1
        Ok (VInt x, env2)
      VDouble x -> do
        env2 <- updateVar id (VDouble (x+1)) env1
        Ok (VDouble x, env2)
  EPDecr (EId (id)) -> do -- Post
    (value, env1) <- interpretExp (EId (id)) env
    case (value) of
      VInt x -> do
        env2 <- updateVar id (VInt (x-1)) env1
        Ok (VInt x, env2)
      VDouble x -> do
        env2 <- updateVar id (VDouble (x-1)) env1
        Ok (VDouble x, env2)
  EIncr (EId (id)) -> do
    (value, env1) <- interpretExp (EId (id)) env
    case (value) of
      VInt x -> do
        env2 <- updateVar id (VInt (x+1)) env1
        Ok (VInt (x+1), env2)
      VDouble x -> do
        env2 <- updateVar id (VDouble (x+1)) env1
        Ok (VDouble (x+1), env2)
  EDecr (EId (id)) -> do
    (value, env1) <- interpretExp (EId (id)) env
    case (value) of
      VInt x -> do
        env2 <- updateVar id (VInt (x-1)) env1
        Ok (VInt (x-1), env2)
      VDouble x -> do
        env2 <- updateVar id (VDouble (x-1)) env1
        Ok (VDouble (x-1), env2)
  ETimes exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VInt (x*y), env2)
      (VDouble x, VDouble y) -> Ok (VDouble (x*y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (*)" ++ (show exp1) ++ " and " ++ (show exp2)
  EDiv exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VInt (div x y), env2)
      (VDouble x, VDouble y) -> Ok (VDouble (x/y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (/)" ++ (show exp1) ++ " and " ++ (show exp2)
  EPlus exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VInt (x+y), env2)
      (VDouble x, VDouble y) -> Ok (VDouble (x+y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (+)" ++ (show exp1) ++ " and " ++ (show exp2)
  EMinus exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VInt (x-y), env2)
      (VDouble x, VDouble y) -> Ok (VDouble (x-y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (-)" ++ (show exp1) ++ " and " ++ (show exp2)
  ELt exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VBool (x < y), env2)
      (VDouble x, VDouble y) -> Ok(VBool (x < y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (<)" ++ (show exp1) ++ " and " ++ (show exp2)
  EGt exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VBool (x > y), env2)
      (VDouble x, VDouble y) -> Ok (VBool (x > y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (>)" ++ (show exp1) ++ " and " ++ (show exp2)
  ELtEq exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VBool (x <= y), env2)
      (VDouble x, VDouble y) -> Ok (VBool (x <= y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (<=)" ++ (show exp1) ++ " and " ++ (show exp2)
  EGtEq exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VBool (x >= y), env2)
      (VDouble x, VDouble y) -> Ok (VBool (x >= y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (>=)" ++ (show exp1) ++ " and " ++ (show exp2)
  EEq exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VBool (x == y), env2)
      (VDouble x, VDouble y) -> Ok (VBool (x == y), env2)
      (VBool x, VBool y) -> Ok (VBool (x==y), env2)
      (VString x, VString y) -> Ok (VBool (x==y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (==)" ++ (show exp1) ++ " and " ++ (show exp2)
  ENEq exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VBool (x /= y), env2)
      (VDouble x, VDouble y) -> Ok (VBool (x /= y), env2)
      (VBool x, VBool y) -> Ok (VBool (x/=y), env2)
      (VString x, VString y) -> Ok (VBool (x/=y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (!=)" ++ (show exp1) ++ " and " ++ (show exp2)
  EAnd exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VBool x, VBool y) -> Ok (VBool (x && y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (&&)" ++ (show exp1) ++ " and " ++ (show exp2)
  EOr exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VBool x, VBool y) -> Ok (VBool (x || y), env2)
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for operation (||)" ++ (show exp1) ++ " and " ++ (show exp2)
  EAss (EId id) exp2 -> do
    (val1, env1) <- interpretExp exp2 env
    val2 <- lookUpVar (id) env1
    case (val2, val1) of
      (VIntUninitialized, VInt x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VInt x, y))
      (VInt _, VInt x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VInt x, y))
      (VDoubleUninitialized, VDouble x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VDouble x, y))
      (VDouble _, VDouble x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VDouble x, y))
      (VBoolUninitialized, VBool x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VBool x, y))
      (VBool _, VBool x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VBool x, y))
      (VStringUninitialized, VString x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VString x, y))
      (VString _, VString x) ->
        updateVar (id) val1 env1 >>= (\y -> Ok (VString x, y))
      _ -> Bad $ "TYPE ERROR:Mismatched or incorrect types for assignment " ++ show(id) ++ " = " ++ (show exp2)
  EAss exp1 exp2 -> Bad $ "TYPE ERROR:Cannot assign an expression a value at this time: " ++ (show exp1) ++ " = " ++ (show exp2)

interpretStm :: Type -> Stm -> Env -> Err Env
interpretStm type_ stm env = if isReturned env then Ok env else case stm of
  SExp exp -> getEnvFromIR $ interpretExp exp env
  SDecls typ ids ->
    foldM (\env id ->
      initializeVar id (
        case typ of
          Type_int -> VIntUninitialized
          Type_double -> VDoubleUninitialized
          Type_string -> VStringUninitialized
          Type_bool -> VBoolUninitialized
      ) env
    ) env ids
  SInit type_ id exp -> do
    (val, env1) <- interpretExp exp env 
    (case (val, type_) of
      (VInt x, Type_int) -> initializeVar id (VInt x) env1
      (VDouble x, Type_double) -> initializeVar id (VDouble x) env1
      (VString x, Type_string) -> initializeVar id (VString x) env1
      (VBool x, Type_bool) -> initializeVar id (VBool x) env1
      _ -> Bad "TYPE ERROR:")
  SReturn exp -> do
    (val, (functionTable, context, _, prints)) <- interpretExp exp env
    Ok (changeReturnVal env val)
  SReturnVoid -> Bad $ "TYPE ERROR:INTERNAL VOID RETURN"
  SWhile exp stm -> whileLOOP exp stm (newBlock env) >>= exitBlock
  SBlock stms -> interpretStms stms type_ env
  SIfElse exp stmTrue stmFalse -> ifThenElse exp stmTrue stmFalse (newBlock env) >>= exitBlock
  SPrintInt exp -> case interpretExp exp env of
    Ok (VInt int, newEnv) ->
      printInt int newEnv
    _ -> Bad $ "TYPE ERROR:Type error: expecting an integer for printInt"
  SPrintDouble exp -> case interpretExp exp env of
    Ok (VDouble double, newEnv) ->
      printDouble double newEnv
    _ -> Bad $ "TYPE ERROR:Type error: expecting double, got " ++ show exp

ifThenElse exp stmTrue stmFalse env =
  case interpretExp exp env of
    Ok (VBool True, newEnv) -> interpretStm Type_void stmTrue env
    Ok (VBool False, newEnv) -> interpretStm Type_void stmFalse env
    Ok _ -> Bad $ "TYPE ERROR:This expression does not evaluate to a boolean" ++ (show exp)
    Bad s -> Bad s

whileLOOP exp stm env = if isReturned env then Ok env else 
  case interpretExp exp env of
    Ok (VBool True, newEnv) -> interpretStm Type_void stm env >>= whileLOOP exp stm
    Ok (VBool False, newEnv) -> Ok newEnv
    _ -> Bad $ "TYPE ERROR:The expression " ++ (show exp) ++ " does not evaluate to a boolean, or has an issue with it."

interpretStms :: [Stm] -> Type -> Env -> Err Env 
interpretStms stms type_ env = foldM
  (\env stm -> interpretStm type_ stm env) env stms

executeMain :: Env -> Err Env
executeMain env = case lookUpFun (Id "main") env of
  Ok (type_, [], stms) -> interpretStms stms type_ (newBlock env)
  Ok (type_, args, stms) -> Bad "Command line arguments are unimplemented currently."
  _ -> Bad "There is no main entry function."

runProgram program = case program of
  PDefs [] -> Bad "No main program :("
  PDefs defs ->
    getFunctions defs (emptyEnv)
    >>= executeMain
