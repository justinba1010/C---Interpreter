module TypeCheckAux where

import AbsCPP
import TypeEnvironment
import Control.Exception
import Control.Monad
import JustinControl

-- Not checking type of functions
-- Will use stacks for environments
inferBin :: [Type] -> Env -> Exp -> Exp -> Maybe Type
inferBin types env exp1 exp2 = do
  typ <- (inferExp env exp1)
  if elem typ types then
      checkExp env exp2 typ
    else
      Nothing

inferExp :: Env -> Exp -> Maybe Type
inferExp env exp = case exp of
  ETrue -> Just Type_bool
  EFalse -> Just Type_bool
  EInt _integer -> Just Type_bool
  EDouble _double -> Just Type_bool
  EString _string -> Just Type_bool
  EId id -> Just Type_bool
  EApp id exps -> Just Type_bool
  EPIncr exp -> Just Type_bool
  EPDecr exp -> Just Type_bool
  EIncr exp -> Just Type_bool
  EDecr exp -> Just Type_bool
  ETimes exp1 exp2 -> Just Type_bool
  EDiv exp1 exp2 -> Just Type_bool
  EPlus exp1 exp2 -> Just Type_bool
  EMinus exp1 exp2 -> Just Type_bool
  ELt exp1 exp2 -> Just Type_bool
  EGt exp1 exp2 -> Just Type_bool
  ELtEq exp1 exp2 -> Just Type_bool
  EGtEq exp1 exp2 -> Just Type_bool
  EEq exp1 exp2 -> Just Type_bool
  ENEq exp1 exp2 -> Just Type_bool
  EAnd exp1 exp2 -> Just Type_bool
  EOr exp1 exp2 -> Just Type_bool
  EAss exp1 exp2 -> Just Type_bool
  ETyped exp type_ -> Just Type_bool

checkExp :: Env -> Exp -> Type -> Maybe Type
checkExp env exp type_ = do
  type2 <- inferExp env exp
  if (type2 == type_) then
    Just type2
  else
    Nothing

checkStm :: Env -> Maybe Type -> Stm -> Maybe Env
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
    (if expType == valtype then env else env) |> Just
  SReturnVoid -> env |> Just
  SWhile exp stm -> do
    _ <- checkExp env exp Type_bool
    checkStm (copyBlock env) val stm >>= exitBlock
  SBlock stms -> checkStms (copyBlock env) Nothing stms >>= exitBlock
  SIfElse exp stm1 stm2 -> do
  _ <- checkExp env exp Type_bool
  checkStm env val stm1 >>= \x -> checkStm x val stm2

checkStms :: Env -> Maybe Type -> [Stm] -> Maybe Env
checkStms env val stms = foldM
  (\env stm ->
    checkStm env val stm
  ) env stms

checkArg :: Env -> Arg -> Maybe Env
checkArg env arg = case arg of
  ADecl type_ id -> updateVar env id type_

checkArgs :: Env -> [Arg] -> Maybe Env
checkArgs env args = foldM
  (\env arg ->
    checkArg env arg
  ) env args

checkDef :: Env -> Def -> Maybe Env
checkDef env def = case def of
  DFun type_ id args stms ->
    updateFun env id ([], type_)
    >>= (\env -> checkArgs env args)
    >>= \x -> checkStms x (Just type_) stms

checkProgram program = case program of
 PDefs defs -> foldM(
  \env def ->
    checkDef env def
  ) (emptyEnv |> newBlock) defs

typeCheck _ program = case (checkProgram program) of
  Just _ -> True
  Nothing -> False
