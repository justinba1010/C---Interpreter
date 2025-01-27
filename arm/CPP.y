/* This Bison file was machine-generated by BNFC */
%locations
%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Absyn.h"
typedef struct CPP_buffer_state *YY_BUFFER_STATE;
YY_BUFFER_STATE CPP_scan_string(const char *str);
void CPP_delete_buffer(YY_BUFFER_STATE buf);
extern int yyparse(void);
extern int yylex(void);
extern int CPP_init_lexer(FILE * inp);
extern void yyerror(const char *str);

Program YY_RESULT_Program_ = 0;
Def YY_RESULT_Def_ = 0;
ListDef YY_RESULT_ListDef_ = 0;
Arg YY_RESULT_Arg_ = 0;
ListArg YY_RESULT_ListArg_ = 0;
Stm YY_RESULT_Stm_ = 0;
ListStm YY_RESULT_ListStm_ = 0;
Exp YY_RESULT_Exp_ = 0;
ListExp YY_RESULT_ListExp_ = 0;
Type YY_RESULT_Type_ = 0;
ListId YY_RESULT_ListId_ = 0;

Program pProgram(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}
Program psProgram(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Program_;
  }
}

Def pDef(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Def_;
  }
}
Def psDef(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Def_;
  }
}

ListDef pListDef(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDef_;
  }
}
ListDef psListDef(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListDef_;
  }
}

Arg pArg(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Arg_;
  }
}
Arg psArg(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Arg_;
  }
}

ListArg pListArg(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListArg_;
  }
}
ListArg psListArg(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListArg_;
  }
}

Stm pStm(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stm_;
  }
}
Stm psStm(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Stm_;
  }
}

ListStm pListStm(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStm_;
  }
}
ListStm psListStm(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListStm_;
  }
}

Exp pExp15(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp15(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp14(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp14(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp13(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp13(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp12(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp12(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp11(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp11(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp9(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp9(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp8(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp8(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp4(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp4(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp3(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp3(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp2(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp2(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp1(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp1(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp5(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp5(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp6(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp6(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp7(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp7(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

Exp pExp10(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}
Exp psExp10(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Exp_;
  }
}

ListExp pListExp(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExp_;
  }
}
ListExp psListExp(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListExp_;
  }
}

Type pType(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}
Type psType(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_Type_;
  }
}

ListId pListId(FILE *inp)
{
  CPP_init_lexer(inp);
  int result = yyparse();
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListId_;
  }
}
ListId psListId(const char *str)
{
  YY_BUFFER_STATE buf;
  CPP_init_lexer(0);
  buf = CPP_scan_string(str);
  int result = yyparse();
  CPP_delete_buffer(buf);
  if (result)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return YY_RESULT_ListId_;
  }
}


ListDef reverseListDef(ListDef l)
{
  ListDef prev = 0;
  ListDef tmp = 0;
  while (l)
  {
    tmp = l->listdef_;
    l->listdef_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListArg reverseListArg(ListArg l)
{
  ListArg prev = 0;
  ListArg tmp = 0;
  while (l)
  {
    tmp = l->listarg_;
    l->listarg_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListStm reverseListStm(ListStm l)
{
  ListStm prev = 0;
  ListStm tmp = 0;
  while (l)
  {
    tmp = l->liststm_;
    l->liststm_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListExp reverseListExp(ListExp l)
{
  ListExp prev = 0;
  ListExp tmp = 0;
  while (l)
  {
    tmp = l->listexp_;
    l->listexp_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}
ListId reverseListId(ListId l)
{
  ListId prev = 0;
  ListId tmp = 0;
  while (l)
  {
    tmp = l->listid_;
    l->listid_ = prev;
    prev = l;
    l = tmp;
  }
  return prev;
}

%}

%union
{
  int int_;
  char char_;
  double double_;
  char* string_;
  Program program_;
  Def def_;
  ListDef listdef_;
  Arg arg_;
  ListArg listarg_;
  Stm stm_;
  ListStm liststm_;
  Exp exp_;
  ListExp listexp_;
  Type type_;
  ListId listid_;

}

%token _ERROR_
%token _SYMB_0    /*   (   */
%token _SYMB_1    /*   )   */
%token _SYMB_2    /*   {   */
%token _SYMB_3    /*   }   */
%token _SYMB_4    /*   ,   */
%token _SYMB_5    /*   ;   */
%token _SYMB_6    /*   =   */
%token _SYMB_7    /*   printInt(   */
%token _SYMB_8    /*   printDouble(   */
%token _SYMB_9    /*   readInt()   */
%token _SYMB_10    /*   readDouble()   */
%token _SYMB_11    /*   ++   */
%token _SYMB_12    /*   --   */
%token _SYMB_13    /*   *   */
%token _SYMB_14    /*   /   */
%token _SYMB_15    /*   +   */
%token _SYMB_16    /*   -   */
%token _SYMB_17    /*   <   */
%token _SYMB_18    /*   >   */
%token _SYMB_19    /*   <=   */
%token _SYMB_20    /*   >=   */
%token _SYMB_21    /*   ==   */
%token _SYMB_22    /*   !=   */
%token _SYMB_23    /*   &&   */
%token _SYMB_24    /*   ||   */
%token _SYMB_25    /*   bool   */
%token _SYMB_26    /*   double   */
%token _SYMB_27    /*   else   */
%token _SYMB_28    /*   false   */
%token _SYMB_29    /*   if   */
%token _SYMB_30    /*   int   */
%token _SYMB_31    /*   return   */
%token _SYMB_32    /*   string   */
%token _SYMB_33    /*   true   */
%token _SYMB_34    /*   void   */
%token _SYMB_35    /*   while   */
%token<string_> _SYMB_36    /*   Id   */

%type <program_> Program
%type <def_> Def
%type <listdef_> ListDef
%type <arg_> Arg
%type <listarg_> ListArg
%type <stm_> Stm
%type <liststm_> ListStm
%type <exp_> Exp15
%type <exp_> Exp14
%type <exp_> Exp13
%type <exp_> Exp12
%type <exp_> Exp11
%type <exp_> Exp9
%type <exp_> Exp8
%type <exp_> Exp4
%type <exp_> Exp3
%type <exp_> Exp2
%type <exp_> Exp
%type <exp_> Exp1
%type <exp_> Exp5
%type <exp_> Exp6
%type <exp_> Exp7
%type <exp_> Exp10
%type <listexp_> ListExp
%type <type_> Type
%type <listid_> ListId

%token<string_> _STRING_
%token<int_> _INTEGER_
%token<double_> _DOUBLE_

%start Program
%%
Program : ListDef { $$ = make_PDefs(reverseListDef($1)); YY_RESULT_Program_= $$; }
;
Def : Type _SYMB_36 _SYMB_0 ListArg _SYMB_1 _SYMB_2 ListStm _SYMB_3 { $$ = make_DFun($1, $2, $4, reverseListStm($7)); YY_RESULT_Def_= $$; }
;
ListDef : /* empty */ { $$ = 0; YY_RESULT_ListDef_= $$; }
  | ListDef Def { $$ = make_ListDef($2, $1); YY_RESULT_ListDef_= $$; }
;
Arg : Type _SYMB_36 { $$ = make_ADecl($1, $2); YY_RESULT_Arg_= $$; }
;
ListArg : /* empty */ { $$ = 0; YY_RESULT_ListArg_= $$; }
  | Arg { $$ = make_ListArg($1, 0); YY_RESULT_ListArg_= $$; }
  | Arg _SYMB_4 ListArg { $$ = make_ListArg($1, $3); YY_RESULT_ListArg_= $$; }
;
Stm : Exp _SYMB_5 { $$ = make_SExp($1); YY_RESULT_Stm_= $$; }
  | Type ListId _SYMB_5 { $$ = make_SDecls($1, $2); YY_RESULT_Stm_= $$; }
  | Type _SYMB_36 _SYMB_6 Exp _SYMB_5 { $$ = make_SInit($1, $2, $4); YY_RESULT_Stm_= $$; }
  | _SYMB_31 Exp _SYMB_5 { $$ = make_SReturn($2); YY_RESULT_Stm_= $$; }
  | _SYMB_31 _SYMB_5 { $$ = make_SReturnVoid(); YY_RESULT_Stm_= $$; }
  | _SYMB_35 _SYMB_0 Exp _SYMB_1 Stm { $$ = make_SWhile($3, $5); YY_RESULT_Stm_= $$; }
  | _SYMB_2 ListStm _SYMB_3 { $$ = make_SBlock(reverseListStm($2)); YY_RESULT_Stm_= $$; }
  | _SYMB_29 _SYMB_0 Exp _SYMB_1 Stm _SYMB_27 Stm { $$ = make_SIfElse($3, $5, $7); YY_RESULT_Stm_= $$; }
  | _SYMB_7 Exp _SYMB_1 _SYMB_5 { $$ = make_SPrintInt($2); YY_RESULT_Stm_= $$; }
  | _SYMB_8 Exp _SYMB_1 _SYMB_5 { $$ = make_SPrintDouble($2); YY_RESULT_Stm_= $$; }
;
ListStm : /* empty */ { $$ = 0; YY_RESULT_ListStm_= $$; }
  | ListStm Stm { $$ = make_ListStm($2, $1); YY_RESULT_ListStm_= $$; }
;
Exp15 : _SYMB_9 { $$ = make_SReadInt(); YY_RESULT_Exp_= $$; }
  | _SYMB_10 { $$ = make_SReadDouble(); YY_RESULT_Exp_= $$; }
  | _SYMB_33 { $$ = make_ETrue(); YY_RESULT_Exp_= $$; }
  | _SYMB_28 { $$ = make_EFalse(); YY_RESULT_Exp_= $$; }
  | _INTEGER_ { $$ = make_EInt($1); YY_RESULT_Exp_= $$; }
  | _DOUBLE_ { $$ = make_EDouble($1); YY_RESULT_Exp_= $$; }
  | _STRING_ { $$ = make_EString($1); YY_RESULT_Exp_= $$; }
  | _SYMB_36 { $$ = make_EId($1); YY_RESULT_Exp_= $$; }
  | _SYMB_36 _SYMB_0 ListExp _SYMB_1 { $$ = make_EApp($1, $3); YY_RESULT_Exp_= $$; }
  | _SYMB_0 Exp _SYMB_1 { $$ = $2; YY_RESULT_Exp_= $$; }
;
Exp14 : Exp15 _SYMB_11 { $$ = make_EPIncr($1); YY_RESULT_Exp_= $$; }
  | Exp15 _SYMB_12 { $$ = make_EPDecr($1); YY_RESULT_Exp_= $$; }
  | Exp15 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp13 : _SYMB_11 Exp14 { $$ = make_EIncr($2); YY_RESULT_Exp_= $$; }
  | _SYMB_12 Exp14 { $$ = make_EDecr($2); YY_RESULT_Exp_= $$; }
  | Exp14 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp12 : Exp12 _SYMB_13 Exp13 { $$ = make_ETimes($1, $3); YY_RESULT_Exp_= $$; }
  | Exp12 _SYMB_14 Exp13 { $$ = make_EDiv($1, $3); YY_RESULT_Exp_= $$; }
  | Exp13 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp11 : Exp11 _SYMB_15 Exp12 { $$ = make_EPlus($1, $3); YY_RESULT_Exp_= $$; }
  | Exp11 _SYMB_16 Exp12 { $$ = make_EMinus($1, $3); YY_RESULT_Exp_= $$; }
  | Exp12 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp9 : Exp9 _SYMB_17 Exp10 { $$ = make_ELt($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 _SYMB_18 Exp10 { $$ = make_EGt($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 _SYMB_19 Exp10 { $$ = make_ELtEq($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 _SYMB_20 Exp10 { $$ = make_EGtEq($1, $3); YY_RESULT_Exp_= $$; }
  | Exp10 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp8 : Exp8 _SYMB_21 Exp9 { $$ = make_EEq($1, $3); YY_RESULT_Exp_= $$; }
  | Exp8 _SYMB_22 Exp9 { $$ = make_ENEq($1, $3); YY_RESULT_Exp_= $$; }
  | Exp9 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp4 : Exp4 _SYMB_23 Exp5 { $$ = make_EAnd($1, $3); YY_RESULT_Exp_= $$; }
  | Exp5 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp3 : Exp3 _SYMB_24 Exp4 { $$ = make_EOr($1, $3); YY_RESULT_Exp_= $$; }
  | Exp4 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp2 : Exp3 _SYMB_6 Exp2 { $$ = make_EAss($1, $3); YY_RESULT_Exp_= $$; }
  | Exp3 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp : Exp1 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp1 : Exp2 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp5 : Exp6 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp6 : Exp7 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp7 : Exp8 { $$ = $1; YY_RESULT_Exp_= $$; }
;
Exp10 : Exp11 { $$ = $1; YY_RESULT_Exp_= $$; }
;
ListExp : /* empty */ { $$ = 0; YY_RESULT_ListExp_= $$; }
  | Exp { $$ = make_ListExp($1, 0); YY_RESULT_ListExp_= $$; }
  | Exp _SYMB_4 ListExp { $$ = make_ListExp($1, $3); YY_RESULT_ListExp_= $$; }
;
Type : _SYMB_25 { $$ = make_Type_bool(); YY_RESULT_Type_= $$; }
  | _SYMB_30 { $$ = make_Type_int(); YY_RESULT_Type_= $$; }
  | _SYMB_26 { $$ = make_Type_double(); YY_RESULT_Type_= $$; }
  | _SYMB_34 { $$ = make_Type_void(); YY_RESULT_Type_= $$; }
  | _SYMB_32 { $$ = make_Type_string(); YY_RESULT_Type_= $$; }
;
ListId : _SYMB_36 { $$ = make_ListId($1, 0); YY_RESULT_ListId_= $$; }
  | _SYMB_36 _SYMB_4 ListId { $$ = make_ListId($1, $3); YY_RESULT_ListId_= $$; }
;

%%
void yyerror(const char *str)
{
  extern char *CPPtext;
  fprintf(stderr,"error: %d,%d: %s at %s\n",
  CPPlloc.first_line, CPPlloc.first_column, str, CPPtext);
}

