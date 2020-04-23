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
import InterpretterEnvironment

messageAndExit exitCode message = do putStr (message ++ "\n")
                                     exitWith (exitCode)

interpret :: Env -> [Token] -> Err (Program, Env)
interpret env tokens =
  case pProgram tokens of
    Ok program -> Ok (program, emptyEnv)
    Bad error -> Bad error 

main = do
  args <- getArgs
  if (length args > 0) then do
    s <- readFile $ args !! 0
    case Interpretter.runProgram =<< (pProgram $ myLexer s) of
      Ok (_ftable, _context, VInt x, prints) -> messageAndExit (case x of
        0 -> ExitSuccess
        _ -> ExitFailure (1)) (foldl (\acc x -> acc ++"\n"++x) "" (reverse prints))
      Bad s -> messageAndExit (ExitFailure 1) s
  else
    messageAndExit (ExitFailure 255) "Please put in a filename"

