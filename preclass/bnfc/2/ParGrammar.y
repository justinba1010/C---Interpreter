-- This Happy file was machine-generated by the BNF converter
{
{-# OPTIONS_GHC -fno-warn-incomplete-patterns -fno-warn-overlapping-patterns #-}
module ParGrammar where
import AbsGrammar
import LexGrammar
import ErrM

}

%name pExp Exp
%name pExp3 Exp3
%name pExp2 Exp2
%name pExp1 Exp1
-- no lexer declaration
%monad { Err } { thenM } { returnM }
%tokentype {Token}
%token
  '(' { PT _ (TS _ 1) }
  ')' { PT _ (TS _ 2) }
  '*' { PT _ (TS _ 3) }
  '+' { PT _ (TS _ 4) }

L_integ  { PT _ (TI $$) }


%%

Integer :: { Integer } : L_integ  { (read ( $1)) :: Integer }

Exp :: { Exp }
Exp : Exp { $1 } | Exp1 { $1 }
Exp3 :: { Exp }
Exp3 : Integer { AbsGrammar.EInt $1 } | '(' Exp ')' { $2 }
Exp2 :: { Exp }
Exp2 : Exp2 '*' Exp3 { AbsGrammar.EMul $1 $3 } | Exp3 { $1 }
Exp1 :: { Exp }
Exp1 : Exp1 '+' Exp2 { AbsGrammar.EAdd $1 $3 } | Exp2 { $1 }
{

returnM :: a -> Err a
returnM = return

thenM :: Err a -> (a -> Err b) -> Err b
thenM = (>>=)

happyError :: [Token] -> Err a
happyError ts =
  Bad $ "syntax error at " ++ tokenPos ts ++ 
  case ts of
    [] -> []
    [Err _] -> " due to lexer error"
    _ -> " before " ++ unwords (map (id . prToken) (take 4 ts))

myLexer = tokens
}

