module TypeEnvironment where
import AbsCPP 
import JustinControl
import ErrM
import qualified Data.Map as Map

--data 

type Env = (Sig, [Context])
type Sig = Map.Map Id ([Type], Type)
type Context = Map.Map Id Type

lookUpVar :: Env -> Id -> Err Type
lookUpVar (_, []) id = fail "TYPECHECKER ERROR: Empty context stack"
lookUpVar (_sig, (currBlock:[])) id = Map.lookup id currBlock |> errIfNothing ("Type not defined for: " ++ (removeId id))
lookUpVar (_sig, (currBlock:blocks)) id = case Map.lookup id currBlock of
  Just type_ -> Ok type_
  _ -> lookUpVar (_sig, blocks) id

defaultFunctions = [
  (Id "printInt", ([Type_int], Type_void)),
  (Id "readInt", ([], Type_int)),
  (Id "printDouble", ([Type_double], Type_void)),
  (Id "readDouble", ([], Type_double))
  ] |> Map.fromList

lookUpFunc :: Env -> Id -> Err ([Type], Type)
lookUpFunc (_,[]) id = fail "TYPECHECKER ERROR: Undefined behavior, empty context stack"
lookUpFunc (sig, _) id = case Map.lookup id defaultFunctions of 
  Just x -> Ok x
  _ -> Map.lookup id sig |> errIfNothing ( "function not defined: " ++ (removeId id))

updateVar :: Env -> Id -> Type -> Err Env
updateVar env id type_ =
  let
    (sig, (currBlock:blocks)) = env
  in
    if Map.member id currBlock then Bad $ "There is a redeclaration of: " ++ (removeId id) ++ "." else (sig, (Map.insert id type_ currBlock):blocks) |> Ok

updateFun :: Env -> Id -> ([Type], Type) -> Err Env
updateFun env id type_ = 
  let
    (sig, blocks) = env
  in
    if Map.member id sig then Bad $ "There is a redeclaration(function) of: " ++ (removeId id) 
    else
      ((Map.insert id type_ sig), blocks) |> Ok

copyBlock :: Env -> Env
copyBlock (sig, []) = (sig, Map.empty:[])
copyBlock (sig, currBlock:blocks) = (sig, currBlock:currBlock:blocks)

newBlock :: Env -> Env
newBlock (sig, blocks) = (sig, Map.empty:blocks)

exitBlock :: Env -> Err Env
exitBlock (sig, []) = fail "Blank"
exitBlock (sig, currBlock:blocks) = (sig, blocks) |> Ok

emptyEnv = (Map.empty, [])

