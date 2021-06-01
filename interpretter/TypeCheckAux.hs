module TypeCheckAux where

import AbsCPP
import TypeEnvironment
import Control.Exception
import Control.Monad
import JustinControl
import PrintCPP (printTree)
import ErrM

inferBin :: [Type] -> Env -> Exp -> Exp -> Err Type
inferBin types env exp1 exp2 = do
  typ <- (inferExp env exp1)
  if elem typ types then
      checkExp env exp2 typ
    else
      Bad $ "This expression: " ++ printTree exp1 ++ " has type: " ++ show typ ++ "\n does not match this expression: " ++ printTree exp2 ++ "  which has type: " ++ getWithErrString (inferExp env exp2) ++ "\n can only have types of: " ++ show types

inferExp :: Env -> Exp -> Err Type
inferExp env exp = case exp of
  ETrue -> Ok Type_bool
  EFalse -> Ok Type_bool
  EInt _integer -> Ok Type_int
  EDouble _double -> Ok Type_double
  EString _string -> Ok Type_string
  EId id -> lookUpVar env id
  EApp id exps ->
    do
      (types, type_) <- lookUpFunc env id
      zipped <- zipWithError exps types (removeId id)
      foldM
        (\env signature ->
         let (exp, type_) = signature in
          okSwap (checkExp env exp type_) env 
        ) env zipped >> Ok type_
  EPIncr exp -> checkExpIn env exp [Type_int, Type_double]
  EPDecr exp -> checkExpIn env exp [Type_int, Type_double] 
  EIncr exp -> checkExpIn env exp [Type_int, Type_double]
  EDecr exp -> checkExpIn env exp [Type_int, Type_double]
  ETimes exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EDiv exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EPlus exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2 
  EMinus exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  ELt exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2 >> Ok Type_bool
  EGt exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2 >> Ok Type_bool
  EStrApp exp1 exp2 -> inferBin [Type_string] env exp1 exp2 >> Ok Type_string
  ELtEq exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2 >> Ok Type_bool
  EGtEq exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2 >> Ok Type_bool
  EEq exp1 exp2 -> inferBin [Type_int, Type_double, Type_string, Type_bool] env exp1 exp2 >> Ok Type_bool
  ENEq exp1 exp2 -> inferBin [Type_int, Type_double, Type_string, Type_bool] env exp1 exp2 >> Ok Type_bool
  EAnd exp1 exp2 -> inferBin [Type_bool] env exp1 exp2 >> Ok Type_bool
  EOr exp1 exp2 -> inferBin [Type_bool] env exp1 exp2 >> Ok Type_bool
  EAss exp1 exp2 -> do
    type_ <- inferExp env exp1
    checkExp env exp2 type_
    Ok type_
  ETyped exp type_ ->
    -- No annotations atm
    Ok Type_bool
  SReadInt ->
    Ok Type_int
  SReadDouble ->
    Ok Type_double

checkExpIn :: Env -> Exp -> [Type] -> Err Type
checkExpIn env exp types = do
  type_ <- inferExp env exp
  if (elem type_ types) then
    Ok type_
  else Bad $ "Expected: " ++ (show types) ++ "\nreceived: " ++ (show type_)


checkExp :: Env -> Exp -> Type -> Err Type
checkExp env exp type_ = do
  type2 <- inferExp env exp
  if (type2 == type_) then
    Ok type2
  else
    Bad ("Type of: " ++ printTree exp ++ "\n" ++
      "expected: " ++ printTree type_ ++ "\n" ++
      "but found: " ++ printTree type2)

checkStm :: Env -> Err Type -> Stm -> Err Env
checkStm env val x = case x of
  SPrintInt exp ->
    checkExp env exp Type_int >> Ok env
  SPrintDouble exp ->
    checkExp env exp Type_double >> Ok env
  SPrintString exp ->
    checkExp env exp Type_string >> Ok env
  SExp exp -> do
    inferExp env exp
    Ok env
  SDecls typ ids ->
    foldM
      (\env id ->
        updateVar env id typ
      ) env ids
  SInit type_ id exp -> do
    checkExp env exp type_
    updateVar env id type_
  SReturn exp -> do
    valtype <- val
    expType <- inferExp env exp
    (if expType == valtype then Ok env else Bad $ "Expecting a return: " ++ show valtype ++ " but received " ++ show expType)
  SReturnVoid -> do
    valtype <- val
    (if valtype == Type_void then Ok env else Bad $ "Expecting a return: " ++ show valtype ++ " but received void")
  SWhile exp stm -> do
    _ <- checkExp env exp Type_bool
    checkStm (newBlock env) val stm >>= exitBlock
  SBlock stms -> checkStms (newBlock env) (val) stms >>= exitBlock
  SIfElse exp stm1 stm2 -> do
  _ <- checkExp env exp Type_bool
  checkStm (newBlock env) val stm1 >>= exitBlock >>= \x -> checkStm (newBlock env) val stm2 >>= exitBlock

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

argsToTypes :: [Arg] -> [Type]
argsToTypes args = map
  (\x -> case x of
    ADecl type_ _id -> type_)
    args

loadDef :: Env -> Def -> Err Env
loadDef env def = case def of
  DFun type_ id args _stms ->
    updateFun env id (argsToTypes args, type_)

loadDefs :: [Def] -> Err Env
loadDefs defs = foldM(
  \env def ->
    loadDef env def
    ) (emptyEnv) defs 

checkDef :: Env -> Def -> Err Env
checkDef env def = case def of
  DFun type_ id args stms ->
    checkArgs env args
    >>= \x -> checkStms x (Ok type_) stms
    >>= \x -> exitBlock x

checkProgram program = case program of
  PDefs [] -> Bad "Empty program :("
  PDefs defs -> 
    loadDefs defs >>= \env -> foldM(
      \env def ->
        checkDef (newBlock env) def
    ) (env) defs

typeCheck program = case (checkProgram program) of
  Ok _ -> True
  _-> False
