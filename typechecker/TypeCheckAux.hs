module TypeCheckAux where

import AbsCPP
import TypeEnvironment
import Control.Exception
import JustinControl

-- Not checking type of functions
-- Will use stacks for environments

inferExp :: Env -> Exp -> InternalType
inferExp env exp =
  let checkIntDouble env exp1 exp2 =
        case ((inferExp env exp1), (inferExp env exp2)) of 
          (TInt, TInt) -> TInt 
          (TDouble, TDouble) -> TDouble
          _ -> throw ArithmeticTypeException
      checkIntDoubleBool env exp1 exp2 =
        case (inferExp env exp1, inferExp env exp2) of
          (TInt, TInt) -> TInt
          (TDouble, TDouble) -> TDouble
          _ -> throw ArithmeticTypeException
      checkSameType env exp1 exp2 =
        if inferExp env exp1 == inferExp env exp2 then inferExp env exp1 else throw AssignmentTypeException
  in
  case exp of
    ETrue -> TBool
    EFalse -> TBool
    EInt _ -> TInt
    EDouble _ -> TDouble
    EString _ -> TString
    EId ident -> lookupType env (removeId ident) |> throwIfNothing UnassignedVariableException
    EApp ident _ -> lookupType env (removeId ident) |> throwIfNothing UnassignedVariableException
    EPIncr exp_ -> inferExp env exp_
    EPDecr exp_ -> inferExp env exp_
    ETimes exp1 exp2 -> checkIntDouble env exp1 exp2
    EDiv exp1 exp2 -> checkIntDouble env exp1 exp2
    EPlus exp1 exp2 -> checkIntDouble env exp1 exp2
    EMinus exp1 exp2 -> checkIntDouble env exp1 exp2
    ELt exp1 exp2 -> checkIntDouble env exp1 exp2
    EGt exp1 exp2 -> checkIntDouble env exp1 exp2
    ELtEq exp1 exp2 -> checkIntDouble env exp1 exp2
    EGtEq exp1 exp2 -> checkIntDouble env exp1 exp2
    EEq exp1 exp2 -> checkIntDoubleBool env exp1 exp2
    ENEq exp1 exp2 -> checkIntDoubleBool env exp1 exp2
    EAnd exp1 exp2 -> checkIntDoubleBool env exp1 exp2
    EOr exp1 exp2 -> checkIntDoubleBool env exp1 exp2
    EAss exp1 exp2 -> checkSameType env exp1 exp2
    ETyped exp1 type_ ->
      let expType = inferExp env exp1
      in if (expType == transformType type_) then expType else throw ReassignmentTypeException

    

checkType :: Env -> Exp -> InternalType -> Bool
checkType env exp type_ =
  True;

checkStms :: Env -> [Stm] -> Bool
checkStms env stms =
  foldl (\(bool, env) stm -> case stm of
    SExp exp -> (bool, env)
    SDecls type_ ids -> (bool, env)
    SInit type_ id exp -> (bool, env)
    SReturn exp -> (bool, env)
    SReturnVoid -> (bool, env)
    SWhile exp stm -> (bool, env)
    SBlock stms -> (bool, env)
    SIfElse exp stm1 stm2 -> (bool, env)
    )
    (True, env)
    stms
    |> (\(bool, _) -> bool)

checkDef :: Env -> Def -> Bool
-- Need way to add functions to environment
checkDef env (DFun type_ ident args stms) =
  let newEnv = env
  in checkStms newEnv stms

checkProgram :: Program -> Bool
checkProgram program = case program of
  PDefs defs -> 
    foldl (\acc def ->
      case acc of
        (bool, env) ->
          let newAcc = bool && (checkDef env def)
          in (newAcc, env))
    (True, (newBlock emptyEnv)) defs
      |> (\(bool, _) -> bool)

