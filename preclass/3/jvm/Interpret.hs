module Interpret where
import AbsJ

eval :: Prg -> Integer
eval (Program prg) =
  f [] [] prg
  where
    f (x:_) _ [] = x
    f xs spent ((EBipush x):pro)    = f (x:xs) ((EBipush x):spent) pro
    f (x:y:xs) spent (EAdd:pro)   = f ((x+y):xs) (EAdd:spent) pro
    f (x:y:xs) spent (ESub:pro)   = f ((x-y):xs) (ESub:spent) pro
    f (x:y:xs) spent (EDiv:pro)   = f ((div x y):xs) (EDiv:spent) pro
    f (x:y:xs) spent (EMul:pro)   = f ((x*y):xs) (EMul:spent) pro
    f (_:xs) spent (EPop:pro)     = f xs (EPop:spent) pro
    f xs spent ((EJump x):pro)    = f xs ((EJump x):(take (fromIntegral x) pro) ++ spent) (drop (fromIntegral x) pro)
    f xs spent ((EJlt y 0):pro)   = f xs ((EJlt y 0):spent) pro
    f (x:xs) spent ((EJlt y z):pro)
      | x <= y = if z >= 0 then f xs ((EJlt y z):(take (fromIntegral z) pro) ++ spent) (drop (fromIntegral z) pro) else f xs (drop (fromIntegral (1-z)) spent) ((reverse ((EJlt y z):(take (fromIntegral (1-z)) spent))) ++ pro)
      | otherwise = f (x:xs) ((EJlt y z):spent) pro
    f (x:xs) spent (_:pro) = f (x:xs) spent pro
