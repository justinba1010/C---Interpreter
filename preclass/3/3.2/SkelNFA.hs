module SkelNFA where

-- Haskell module generated by the BNF converter

import AbsNFA
import ErrM
type Result = Err String

failure :: Show a => a -> Result
failure x = Bad $ "Undefined case: " ++ show x

transLetter :: Letter -> Result
transLetter x = case x of
  Letter string -> failure x
transExp :: Exp -> Result
transExp x = case x of
  EExpr exp -> failure x
  ESymbol letter -> failure x
  ESequence exp1 exp2 -> failure x
  EClosure exp -> failure x
  EUnion exp1 exp2 -> failure x

