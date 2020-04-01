module TypeCheck where

import AbsCPP

data Env = Enviro;

instance Exception TypeError;

inferType :: Env -> Exp -> Type
inferType env exp = 
  case exp of
    EIndex exp int  -> inferType env exp
    EDeref exp      -> Tpointer (inferType env exp)
    EAddr exp       -> Taddress (inferType env exp)
    EInt int        -> Tint
    EDouble double  -> Tdouble
    EString string  -> Tstring
    EMul exp1 exp2  ->
      case ((inferType env exp1), (inferType env exp2)) of
        (x,y) ->
          | x == y -> x
          | otherwise -> throw (TypeError)
    _               -> Tint

infer :: Env -> Exp -> Exp
infer env exp = exp

checkExp :: Env -> Exp -> Type -> Exp
checkExp env exp type_ = exp

checkStms :: Env -> [Stm] -> [Stm]
checkStms env stms = stms

checkDef :: Env -> Def -> Def
checkDef env def = def

checkPrg :: Program -> Program
checkPrg program = program
