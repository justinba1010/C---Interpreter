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

main = do
  s <- readFile("./test2.cc")
  putStrLn $ show 
    (case TCA.checkProgram =<< (pProgram $ myLexer s) of
      Ok _ -> True
      _ -> False
    )

