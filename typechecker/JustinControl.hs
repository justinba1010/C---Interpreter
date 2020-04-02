module JustinControl where
import AbsCPP
import Control.Exception

(|>) x f = f x
throwIfNothing y x = case x of
  Just z -> z
  Nothing -> throw y
removeId id = case id of
  Id whatwewant -> whatwewant
