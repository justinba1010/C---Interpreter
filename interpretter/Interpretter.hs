module Interpretter where

import AbsCPP
import InterpretterEnvironment
import JustinControl
import Control.Monad
import PrintCPP (printTree)
import ErrM
import UnsafeJustinIO

addDefToEnv def env = case def of
  DFun type_ id args stms -> updateFun id (type_, args, stms) env

getFunctions defs env =
  foldM
    (\env def -> addDefToEnv def env) env defs

type InterpretReturn = Err (Value, Env)

getEnvFromIR :: InterpretReturn -> Err Env
getEnvFromIR interpretReturn = case interpretReturn of
  Ok (_, env) -> Ok env
  Bad s -> Bad s

interpretExp :: Exp -> Env -> InterpretReturn
interpretExp exp env = case exp of
  ETrue -> Ok (VBool True, env)
  EFalse -> Ok (VBool False, env)
  EInt int -> Ok (VInt int, env)
  EDouble double -> Ok (VDouble double, env)
  EString string -> Ok (VString string, env)
  EId id -> case lookUpVar id env of
    Ok v -> Ok (v, env)
    Bad s -> Bad s
  EApp id exps -> Bad "Application is undefined at the moment"
  EPIncr (EId (id)) -> do
    (value, env1) <- interpretExp (EId (id)) env
    case (value) of
      VInt x -> do
        env2 <- updateVar id (VInt (x+1)) env1
        Ok (VInt x, env2)
      VDouble x -> do
        env2 <- updateVar id (VDouble (x+1)) env1
        Ok (VDouble x, env2)
  EPDecr (EId (id)) -> do
    (value, env1) <- interpretExp (EId (id)) env
    case (value) of
      VInt x -> Ok (VInt x, env1)
  ETimes exp1 exp2 -> do
    (val1, env1) <- interpretExp exp1 env
    (val2, env2) <- interpretExp exp2 env1
    case (val1, val2) of
      (VInt x, VInt y) -> Ok (VInt (x+y), env2)
      (VDouble x, VDouble y) -> Ok (VDouble (x+y), env2)
      _ -> Bad "Need to write a good error message"


interpretStm :: Type -> Stm -> Env -> Err Env
interpretStm type_ stm env = case stm of
  SExp exp -> getEnvFromIR $ interpretExp exp env
  SDecls typ ids ->
    foldM (\env id ->
      updateVar id (
        case typ of
          Type_int -> VIntUninitialized
          Type_double -> VDoubleUninitialized
          Type_string -> VStringUninitialized
      ) env
    ) env ids
  SInit type_ id exp -> updateVar id (
    case type_ of
      Type_int -> VIntUninitialized
      Type_double -> VDoubleUninitialized
      Type_string -> VStringUninitialized
    ) env
  SReturn exp -> Ok env
  SReturnVoid -> Ok env
  SWhile exp stm -> Ok env
  SBlock stms -> Ok env
  SIfElse exp stmTrue stmFalse -> Ok env
  SPrintInt exp -> case interpretExp exp env of
    Ok (VInt int, newEnv) ->
      let () = printInt int
      in Ok env
    _ -> Bad $ "Type error: expecting integer, got " ++ show exp
  SPrintDouble exp -> case interpretExp exp env of
    Ok (VDouble double, newEnv) ->
      let () = printDouble double
      in Ok env
    _ -> Bad $ "Type error: expecting double, got " ++ show exp

interpretStms :: [Stm] -> Type -> Env -> Err Env 
interpretStms stms type_ env = foldM
  (\env stm -> interpretStm type_ stm env) env stms

executeMain :: Env -> Err Env
executeMain env = case lookUpFun (Id "main") env of
  Ok (type_, [], stms) -> interpretStms stms type_ (newBlock env)
  Ok (type_, args, stms) -> fail "Command line arguments are unimplemented currently."
  _ -> fail "There is no main entry function."

runProgram program = case program of
  PDefs [] -> Bad "No main program :("
  PDefs defs ->
    getFunctions defs (emptyEnv)
    >>= executeMain
