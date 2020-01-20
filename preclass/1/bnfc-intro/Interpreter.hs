module Interpreter where

import AbsCalc


eval :: Exp -> Integer
eval x = case x of
  EAdd exp1 exp2 -> eval exp1 + eval exp2
  ESub exp1 exp2 -> eval exp1 - eval exp2
  EMul exp1 exp2 -> eval exp1 * eval exp2
  EDiv exp1 exp2 -> eval exp1 // eval exp2
  EPow exp1 exp2 -> eval exp1 ^ eval exp2
  EInt n -> n
  where (//) = div
