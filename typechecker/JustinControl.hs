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
