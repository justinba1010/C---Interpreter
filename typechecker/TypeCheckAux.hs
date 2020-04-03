module TypeCheckAux where

import AbsCPP
import TypeEnvironment
import Control.Exception
import Control.Monad
import JustinControl
import PrintCPP (printTree)
import ErrM

-- Not checking type of functions
-- Will use stacks for environments
inferBin :: [Type] -> Env -> Exp -> Exp -> Err Type
inferBin types env exp1 exp2 = do
  typ <- (inferExp env exp1)
  if elem typ types then
      checkExp env exp2 typ
    else
      fail "Not a valid type"

inferExp :: Env -> Exp -> Err Type
inferExp env exp = case exp of
  ETrue -> Ok Type_bool
  EFalse -> Ok Type_bool
  EInt _integer -> Ok Type_bool
  EDouble _double -> Ok Type_bool
  EString _string -> Ok Type_bool
  EId id -> Ok Type_bool
  EApp id exps -> Ok Type_bool
  EPIncr exp -> Ok Type_bool
  EPDecr exp -> Ok Type_bool
  EIncr exp -> Ok Type_bool
  EDecr exp -> Ok Type_bool
  ETimes exp1 exp2 -> Ok Type_bool
  EDiv exp1 exp2 -> Ok Type_bool
  EPlus exp1 exp2 -> Ok Type_bool
  EMinus exp1 exp2 -> Ok Type_bool
  ELt exp1 exp2 -> Ok Type_bool
  EGt exp1 exp2 -> Ok Type_bool
  ELtEq exp1 exp2 -> Ok Type_bool
  EGtEq exp1 exp2 -> Ok Type_bool
  EEq exp1 exp2 -> Ok Type_bool
  ENEq exp1 exp2 -> Ok Type_bool
  EAnd exp1 exp2 -> Ok Type_bool
  EOr exp1 exp2 -> Ok Type_bool
  EAss exp1 exp2 -> Ok Type_bool
  ETyped exp type_ -> Ok Type_bool

checkExp :: Env -> Exp -> Type -> Err Type
checkExp env exp type_ = do
  type2 <- inferExp env exp
  if (type2 == type_) then
    Ok type2
  else
    fail ("Type of: " ++ printTree exp ++ "\n" ++
      "expected: " ++ printTree type2 ++ "\n" ++
      "but found: " ++ printTree type_)

checkStm :: Env -> Err Type -> Stm -> Err Env
checkStm env val x = case x of
  SExp exp -> do
    inferExp env exp
    return env
  SDecls typ ids ->
    foldM
      (\env id ->
        updateVar env id typ
      ) env ids
  SInit type_ id exp ->
    updateVar env id type_
  SReturn exp -> do
    valtype <- val
    expType <- inferExp env exp
    (if expType == valtype then env else env) |> Ok
  SReturnVoid -> env |> Ok
  SWhile exp stm -> do
    _ <- checkExp env exp Type_bool
    checkStm (copyBlock env) val stm >>= exitBlock
  SBlock stms -> checkStms (copyBlock env) (Ok Type_bool) stms >>= exitBlock
  SIfElse exp stm1 stm2 -> do
  _ <- checkExp env exp Type_bool
  checkStm env val stm1 >>= \x -> checkStm x val stm2

checkStms :: Env -> Err Type -> [Stm] -> Err Env
checkStms env val stms = foldM
  (\env stm ->
    checkStm env val stm
  ) env stms

checkArg :: Env -> Arg -> Err Env
checkArg env arg = case arg of
  ADecl type_ id -> updateVar env id type_

checkArgs :: Env -> [Arg] -> Err Env
checkArgs env args = foldM
  (\env arg ->
    checkArg env arg
  ) env args

checkDef :: Env -> Def -> Err Env
checkDef env def = case def of
  DFun type_ id args stms ->
    updateFun env id ([], type_)
    >>= (\env -> checkArgs env args)
    >>= \x -> checkStms x (Ok type_) stms

checkProgram program = case program of
 PDefs defs -> foldM(
  \env def ->
    checkDef env def
  ) (emptyEnv |> newBlock) defs

typeCheck program = case (checkProgram program) of
  Ok _ -> True
  _-> False
