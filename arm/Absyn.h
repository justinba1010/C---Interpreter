#ifndef ABSYN_HEADER
#define ABSYN_HEADER

/* C++ Abstract Syntax Interface generated by the BNF Converter.*/

/********************   TypeDef Section    ********************/
typedef int Integer;
typedef char Char;
typedef double Double;
typedef char* String;
typedef char* Ident;
typedef char* Id;


/********************   Forward Declarations    ********************/

struct ListDef_;
typedef struct ListDef_ *ListDef;
struct ListArg_;
typedef struct ListArg_ *ListArg;
struct ListStm_;
typedef struct ListStm_ *ListStm;
struct ListExp_;
typedef struct ListExp_ *ListExp;
struct ListId_;
typedef struct ListId_ *ListId;
struct Program_;
typedef struct Program_ *Program;
struct Def_;
typedef struct Def_ *Def;
struct Arg_;
typedef struct Arg_ *Arg;
struct Stm_;
typedef struct Stm_ *Stm;
struct Exp_;
typedef struct Exp_ *Exp;
struct Type_;
typedef struct Type_ *Type;


/********************   Abstract Syntax Classes    ********************/

struct Program_
{

  enum { is_PDefs } kind;
  union
  {
    struct { ListDef listdef_; } pdefs_;
  } u;
};

Program make_PDefs(ListDef p0);

struct Def_
{

  enum { is_DFun } kind;
  union
  {
    struct { Id id_; ListArg listarg_; ListStm liststm_; Type type_; } dfun_;
  } u;
};

Def make_DFun(Type p0, Id p1, ListArg p2, ListStm p3);

struct ListDef_
{
  Def def_;
  ListDef listdef_;
};

ListDef make_ListDef(Def p1, ListDef p2);
struct Arg_
{

  enum { is_ADecl } kind;
  union
  {
    struct { Id id_; Type type_; } adecl_;
  } u;
};

Arg make_ADecl(Type p0, Id p1);

struct ListArg_
{
  Arg arg_;
  ListArg listarg_;
};

ListArg make_ListArg(Arg p1, ListArg p2);
struct Stm_
{

  enum { is_SExp, is_SDecls, is_SInit, is_SReturn, is_SReturnVoid, is_SWhile, is_SBlock, is_SIfElse, is_SPrintInt, is_SPrintDouble } kind;
  union
  {
    struct { Exp exp_; } sexp_;
    struct { ListId listid_; Type type_; } sdecls_;
    struct { Exp exp_; Id id_; Type type_; } sinit_;
    struct { Exp exp_; } sreturn_;
    struct { Exp exp_; Stm stm_; } swhile_;
    struct { ListStm liststm_; } sblock_;
    struct { Exp exp_; Stm stm_1, stm_2; } sifelse_;
    struct { Exp exp_; } sprintint_;
    struct { Exp exp_; } sprintdouble_;
  } u;
};

Stm make_SExp(Exp p0);
Stm make_SDecls(Type p0, ListId p1);
Stm make_SInit(Type p0, Id p1, Exp p2);
Stm make_SReturn(Exp p0);
Stm make_SReturnVoid(void);
Stm make_SWhile(Exp p0, Stm p1);
Stm make_SBlock(ListStm p0);
Stm make_SIfElse(Exp p0, Stm p1, Stm p2);
Stm make_SPrintInt(Exp p0);
Stm make_SPrintDouble(Exp p0);

struct ListStm_
{
  Stm stm_;
  ListStm liststm_;
};

ListStm make_ListStm(Stm p1, ListStm p2);
struct Exp_
{

  enum { is_SReadInt, is_SReadDouble, is_ETrue, is_EFalse, is_EInt, is_EDouble, is_EString, is_EId, is_EApp, is_EPIncr, is_EPDecr, is_EIncr, is_EDecr, is_ETimes, is_EDiv, is_EPlus, is_EMinus, is_ELt, is_EGt, is_ELtEq, is_EGtEq, is_EEq, is_ENEq, is_EAnd, is_EOr, is_EAss, is_ETyped } kind;
  union
  {
    struct { Integer integer_; } eint_;
    struct { Double double_; } edouble_;
    struct { String string_; } estring_;
    struct { Id id_; } eid_;
    struct { Id id_; ListExp listexp_; } eapp_;
    struct { Exp exp_; } epincr_;
    struct { Exp exp_; } epdecr_;
    struct { Exp exp_; } eincr_;
    struct { Exp exp_; } edecr_;
    struct { Exp exp_1, exp_2; } etimes_;
    struct { Exp exp_1, exp_2; } ediv_;
    struct { Exp exp_1, exp_2; } eplus_;
    struct { Exp exp_1, exp_2; } eminus_;
    struct { Exp exp_1, exp_2; } elt_;
    struct { Exp exp_1, exp_2; } egt_;
    struct { Exp exp_1, exp_2; } elteq_;
    struct { Exp exp_1, exp_2; } egteq_;
    struct { Exp exp_1, exp_2; } eeq_;
    struct { Exp exp_1, exp_2; } eneq_;
    struct { Exp exp_1, exp_2; } eand_;
    struct { Exp exp_1, exp_2; } eor_;
    struct { Exp exp_1, exp_2; } eass_;
    struct { Exp exp_; Type type_; } etyped_;
  } u;
};

Exp make_SReadInt(void);
Exp make_SReadDouble(void);
Exp make_ETrue(void);
Exp make_EFalse(void);
Exp make_EInt(Integer p0);
Exp make_EDouble(Double p0);
Exp make_EString(String p0);
Exp make_EId(Id p0);
Exp make_EApp(Id p0, ListExp p1);
Exp make_EPIncr(Exp p0);
Exp make_EPDecr(Exp p0);
Exp make_EIncr(Exp p0);
Exp make_EDecr(Exp p0);
Exp make_ETimes(Exp p0, Exp p1);
Exp make_EDiv(Exp p0, Exp p1);
Exp make_EPlus(Exp p0, Exp p1);
Exp make_EMinus(Exp p0, Exp p1);
Exp make_ELt(Exp p0, Exp p1);
Exp make_EGt(Exp p0, Exp p1);
Exp make_ELtEq(Exp p0, Exp p1);
Exp make_EGtEq(Exp p0, Exp p1);
Exp make_EEq(Exp p0, Exp p1);
Exp make_ENEq(Exp p0, Exp p1);
Exp make_EAnd(Exp p0, Exp p1);
Exp make_EOr(Exp p0, Exp p1);
Exp make_EAss(Exp p0, Exp p1);
Exp make_ETyped(Exp p0, Type p1);

struct ListExp_
{
  Exp exp_;
  ListExp listexp_;
};

ListExp make_ListExp(Exp p1, ListExp p2);
struct Type_
{

  enum { is_Type_bool, is_Type_int, is_Type_double, is_Type_void, is_Type_string } kind;
  union
  {
  } u;
};

Type make_Type_bool(void);
Type make_Type_int(void);
Type make_Type_double(void);
Type make_Type_void(void);
Type make_Type_string(void);

struct ListId_
{
  Id id_;
  ListId listid_;
};

ListId make_ListId(Id p1, ListId p2);


#endif