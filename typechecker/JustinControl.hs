module JustinControl where
import AbsCPP
import Control.Exception
import ErrM

(|>) x f = f x

errIfNothing s a = case a of
  Just b -> Ok b
  _ -> fail s

removeId id = case id of
  Id whatwewant -> whatwewant

getWithErrString x = case x of
  Ok t -> show t
  Bad s -> s

zipWithError x y id =
  if (length x) == (length y) then Ok $ zip x y else Bad $ "Wrong number of arguments for function: " ++ id


okSwap :: Err a -> b -> Err b
okSwap x y =
  case x of
    Ok _ -> Ok y
    Bad s -> Bad s

(><) = okSwap
