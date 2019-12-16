module Interpret where
import AbsGrammar
eval :: Exp -> Integer
eval x =
  case x of
    EInt n -> n
    EAdd exp1 exp2 -> (eval exp1) + (eval exp2)
    EMul exp1 exp2 -> (eval exp1) * (eval exp2)
