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
import qualified Interpretter
import ErrM
import System.Environment   
import System.Exit

messageAndExit exitCode message = do putStr (message ++ "\n")
                                     exitWith (exitCode)

main = do
  args <- getArgs
  if (length args > 0) then do
    s <- readFile $ args !! 0
    case Interpretter.runProgram =<< (pProgram $ myLexer s) of
      Ok env -> messageAndExit (ExitFailure 1) "Failure"
      Bad s -> (case s of
        ('I':'N':'T':'E':'R':'N':'A':'L':'V':'A':'L':'U':'E':':':' ':x) ->
          (case x of
            ('V':'I':'n':'t':y) ->
              (case (read y :: Int) of
                0 -> messageAndExit (ExitSuccess) ""
                z -> messageAndExit (ExitFailure z) (s ++ ""))
            _ ->  messageAndExit (ExitFailure 1) s
            )
        _ -> messageAndExit (ExitFailure 1) s
        )
    else messageAndExit (ExitFailure 2) "Enter a filename after call, like:\n$ ./TypeCheck file.c"

