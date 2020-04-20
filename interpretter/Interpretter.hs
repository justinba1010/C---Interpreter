module Interpretter where

import AbsCPP
import InterpretterEnvironment
import JustinControl
import Control.Monad
import PrintCPP (printTree)
import ErrM
import UnsafeJustinIO

addDefToEnv def env = case def of
  DFun type_ id args stms -> updateFun id (type_, args, stms) env

getFunctions defs env =
  foldM
    (\env def -> addDefToEnv def env) env defs

interpretStm type_ stm env = case stm of
  SExp exp -> Ok env
  SDecls typ ids ->
    foldM (\env id ->
      updateVar id (
        case typ of
          Type_int -> VIntUninitialized
          Type_double -> VDoubleUninitialized
          Type_string -> VStringUninitialized
      ) env
    ) env ids

interpretStms stms type_ env = foldM
  (\env stm -> interpretStm type_ stm env) env stms

executeMain env = case lookUpFun (Id "main") env of
  Ok (type_, [], stms) -> interpretStms stms (newBlock env)
  Ok (type_, args, stms) -> fail "Command line arguments are unimplemented currently."
  _ -> fail "There is no main entry function."

runProgram program = case program of
  PDefs [] -> Bad "No main program :("
  PDefs defs ->
    getFunctions defs (emptyEnv)
    >>= executeMain
