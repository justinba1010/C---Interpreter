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
      fail $ "This expression: " ++ printTree exp1 ++ " has type: " ++ show typ ++ "\n does not match this expression: " ++ printTree exp2 ++ "  which has type: " ++ getWithErrString (inferExp env exp2) ++ "\n can only have types of: " ++ show types

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
        ) env zipped `okSwap` type_
  EPIncr exp -> checkExpIn env exp [Type_void]
  EPDecr exp -> checkExpIn env exp [Type_void] 
  EIncr exp -> checkExpIn env exp [Type_int]
  EDecr exp -> checkExpIn env exp [Type_int]
  ETimes exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EDiv exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EPlus exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2 
  EMinus exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  ELt exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EGt exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  ELtEq exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EGtEq exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EEq exp1 exp2 -> inferBin [Type_int, Type_double, Type_string] env exp1 exp2
  ENEq exp1 exp2 -> inferBin [Type_int, Type_double, Type_string] env exp1 exp2
  EAnd exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EOr exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  EAss exp1 exp2 -> inferBin [Type_int, Type_double] env exp1 exp2
  ETyped exp type_ ->
    -- Fix this as well
    Ok Type_bool

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
    fail ("Type of: " ++ printTree exp ++ "\n" ++
      "expected: " ++ printTree type_ ++ "\n" ++
      "but found: " ++ printTree type2)

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
  SInit type_ id exp -> do
    checkExp env exp type_
    updateVar env id type_
  SReturn exp -> do
    valtype <- val
    expType <- inferExp env exp
    (if expType == valtype then Ok env else Bad $ "Expecting " ++ show valtype ++ " but received " ++ show expType)
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

argsToTypes :: [Arg] -> [Type]
argsToTypes args = map
  (\x -> case x of
    ADecl type_ _id -> type_)
    args

checkDef :: Env -> Def -> Err Env
checkDef env def = case def of
  DFun type_ id args stms ->
    updateFun env id (argsToTypes args, type_)
    >>= (\env -> checkArgs env args)
    >>= \x -> checkStms x (Ok type_) stms
    >>= \x -> exitBlock x

checkProgram program = case program of
 PDefs defs -> foldM(
  \env def ->
    checkDef (newBlock env) def
  ) (emptyEnv |> newBlock) defs

typeCheck program = case (checkProgram program) of
  Ok _ -> True
  _-> False
