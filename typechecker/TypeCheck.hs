module Main where
import System.IO ( stdin, hGetContents )
import System.Environment ( getArgs, getProgName )
import System.Exit ( exitFailure, exitSuccess )

import LexCPP
import ParCPP
import SkelCPP
import PrintCPP
import AbsCPP
import JustinControl
import qualified TypeCheckAux as TCA
import ErrM
import System.Environment   

main = do
  args <- getArgs
  if (length args > 0) then do
    s <- readFile $ args !! 0
    putStrLn $ 
      (case TCA.checkProgram =<< (pProgram $ myLexer s) of
        Ok _ -> "No type errors found."
        Bad s -> s
      )
  else
    putStrLn "Enter a filename after call, like:\
      \n$ ./TypeCheck file.c"

