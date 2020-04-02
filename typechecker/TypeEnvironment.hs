module TypeEnvironment where
import AbsCPP 
import Control.Exception


data TypeCheckException
  = ExitBlockException
  | UnassignedVariableException
  | ArithmeticTypeException
  | AssignmentTypeException
  | ReassignmentTypeException
  deriving (Show)
instance Exception TypeCheckException;


data InternalType = TVoid
  | TString
  | TDouble
  | TInt
  | TBool
  | TFunc [Type] InternalType
  deriving (Eq)

type Ident = String;

type Block = [(Ident, InternalType)];
type Env = [Block];


getIdentFromBlock :: Block -> Ident -> Maybe InternalType
getIdentFromBlock block ident =
  foldl (\acc x -> case x of
    (ident_, type_) -> if ident == ident_ then Just type_ else acc)
    Nothing
    block;

getIdentFromEntireEnv :: Env -> Ident -> Maybe InternalType
getIdentFromEntireEnv [] ident = Nothing;
getIdentFromEmtireEnv (currBlock:env) ident = case getIdentFromBlock currBlock ident of
  Just type_ -> Just type_
  Nothing -> getIdentFromEntireEnv env ident;

lookupType :: Env -> Ident -> Maybe InternalType
lookupType [] ident = Nothing
lookupType (currBlock:_env) ident = getIdentFromBlock currBlock ident

addToBlock :: Env -> Ident -> InternalType -> Env
addToBlock (currBlock:env) ident type_ =
  let x = (ident, type_)
  in (x:currBlock):env

extendVar :: Env -> Ident -> InternalType -> Env
extendVar (currBlock:env) ident type_ =
 let identType = getIdentFromBlock currBlock ident 
 in case identType of
    Just type__ -> throw ReassignmentTypeException
    Nothing -> addToBlock env ident type_

newBlock :: Env -> Env
newBlock [] = []:[]
newBlock (currBlock:env) = currBlock:currBlock:env

exitBlock :: Env -> Env
exitBlock [] = throw $ ExitBlockException;
exitBlock ((_innerBlock):block) = block;

emptyEnv :: Env
emptyEnv = []

transformType :: Type -> InternalType
transformType type_ = case type_ of
  Type_bool -> TBool
  Type_int -> TInt
  Type_double -> TDouble
  Type_void -> TVoid
  Type_string -> TString
