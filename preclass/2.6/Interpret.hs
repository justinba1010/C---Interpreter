module Interpret where
import AbsCalc
intSqrt = floor . sqrt . fromInteger
eval :: Exp -> Integer
eval x =
  case x of
    EAdd exp1 exp2 -> eval exp1 + eval exp2
    ESub exp1 exp2 -> eval exp1 - eval exp2
    EMul exp1 exp2 -> eval exp1 * eval exp2
    EDiv exp1 exp2 -> eval exp1 `div` eval exp2
    ESqrt exp -> intSqrt (eval exp)
    EInt n -> n
