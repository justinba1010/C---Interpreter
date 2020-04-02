module TypeEnvironment where
import AbsCPP 
import JustinControl
import qualified Data.Map as Map

--data 

type Env = (Sig, [Context])
type Sig = Map.Map Id ([Type], Type)
type Context = Map.Map Id Type

lookUpVar :: Env -> Id -> Maybe Type
lookUpVar (_, []) id = Nothing
lookUpVar (_sig, (currBlock:blocks)) id = Map.lookup id currBlock

lookUpFunc :: Env -> Id -> Maybe ([Type], Type)
lookUpFunc (_,[]) id = Nothing
lookUpFunc (sig, _) id = Map.lookup id sig

updateVar :: Env -> Id -> Type -> Maybe Env
updateVar env id type_ =
  let
    (sig, (currBlock:blocks)) = env
  in
    (sig, (Map.insert id type_ currBlock):blocks) |> Just

updateFun :: Env -> Id -> ([Type], Type) -> Maybe Env
updateFun env id type_ =
  let
    (sig, blocks) = env
  in
    ((Map.insert id type_ sig), blocks) |> Just

copyBlock :: Env -> Env
copyBlock (sig, []) = (sig, Map.empty:[])
copyBlock (sig, currBlock:blocks) = (sig, currBlock:currBlock:blocks)

newBlock :: Env -> Env
newBlock (sig, blocks) = (sig, Map.empty:blocks)

exitBlock :: Env -> Maybe Env
exitBlock (sig, []) = Nothing
exitBlock (sig, currBlock:blocks) = (sig, blocks) |> Just

emptyEnv = (Map.empty, [])

