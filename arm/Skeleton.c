/*** BNFC-Generated Visitor Traversal Skeleton. ***/
/* This traverses the abstract syntax tree.
   To use, copy Skeleton.h and Skeleton.c to
   new files. */

#include <stdlib.h>
#include <stdio.h>

#include "Skeleton.h"

void visitProgram(Program p)
{
  switch(p->kind)
  {
  case is_PDefs:
    /* Code for PDefs Goes Here */
    visitListDef(p->u.pdefs_.listdef_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Program!\n");
    exit(1);
  }
}

void visitDef(Def p)
{
  switch(p->kind)
  {
  case is_DFun:
    /* Code for DFun Goes Here */
    visitType(p->u.dfun_.type_);
    visitId(p->u.dfun_.id_);
    visitListArg(p->u.dfun_.listarg_);
    visitListStm(p->u.dfun_.liststm_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Def!\n");
    exit(1);
  }
}

void visitListDef(ListDef listdef)
{
  while(listdef  != 0)
  {
    /* Code For ListDef Goes Here */
    visitDef(listdef->def_);
    listdef = listdef->listdef_;
  }
}

void visitArg(Arg p)
{
  switch(p->kind)
  {
  case is_ADecl:
    /* Code for ADecl Goes Here */
    visitType(p->u.adecl_.type_);
    visitId(p->u.adecl_.id_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Arg!\n");
    exit(1);
  }
}

void visitListArg(ListArg listarg)
{
  while(listarg  != 0)
  {
    /* Code For ListArg Goes Here */
    visitArg(listarg->arg_);
    listarg = listarg->listarg_;
  }
}

void visitStm(Stm p)
{
  switch(p->kind)
  {
  case is_SExp:
    /* Code for SExp Goes Here */
    visitExp(p->u.sexp_.exp_);
    break;
  case is_SDecls:
    /* Code for SDecls Goes Here */
    visitType(p->u.sdecls_.type_);
    visitListId(p->u.sdecls_.listid_);
    break;
  case is_SInit:
    /* Code for SInit Goes Here */
    visitType(p->u.sinit_.type_);
    visitId(p->u.sinit_.id_);
    visitExp(p->u.sinit_.exp_);
    break;
  case is_SReturn:
    /* Code for SReturn Goes Here */
    visitExp(p->u.sreturn_.exp_);
    break;
  case is_SReturnVoid:
    /* Code for SReturnVoid Goes Here */
    break;
  case is_SWhile:
    /* Code for SWhile Goes Here */
    visitExp(p->u.swhile_.exp_);
    visitStm(p->u.swhile_.stm_);
    break;
  case is_SBlock:
    /* Code for SBlock Goes Here */
    visitListStm(p->u.sblock_.liststm_);
    break;
  case is_SIfElse:
    /* Code for SIfElse Goes Here */
    visitExp(p->u.sifelse_.exp_);
    visitStm(p->u.sifelse_.stm_1);
    visitStm(p->u.sifelse_.stm_2);
    break;
  case is_SPrintInt:
    /* Code for SPrintInt Goes Here */
    visitExp(p->u.sprintint_.exp_);
    break;
  case is_SPrintDouble:
    /* Code for SPrintDouble Goes Here */
    visitExp(p->u.sprintdouble_.exp_);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Stm!\n");
    exit(1);
  }
}

void visitListStm(ListStm liststm)
{
  while(liststm  != 0)
  {
    /* Code For ListStm Goes Here */
    visitStm(liststm->stm_);
    liststm = liststm->liststm_;
  }
}

void visitExp(Exp p)
{
  switch(p->kind)
  {
  case is_SReadInt:
    /* Code for SReadInt Goes Here */
    break;
  case is_SReadDouble:
    /* Code for SReadDouble Goes Here */
    break;
  case is_ETrue:
    /* Code for ETrue Goes Here */
    break;
  case is_EFalse:
    /* Code for EFalse Goes Here */
    break;
  case is_EInt:
    /* Code for EInt Goes Here */
    visitInteger(p->u.eint_.integer_);
    break;
  case is_EDouble:
    /* Code for EDouble Goes Here */
    visitDouble(p->u.edouble_.double_);
    break;
  case is_EString:
    /* Code for EString Goes Here */
    visitString(p->u.estring_.string_);
    break;
  case is_EId:
    /* Code for EId Goes Here */
    visitId(p->u.eid_.id_);
    break;
  case is_EApp:
    /* Code for EApp Goes Here */
    visitId(p->u.eapp_.id_);
    visitListExp(p->u.eapp_.listexp_);
    break;
  case is_EPIncr:
    /* Code for EPIncr Goes Here */
    visitExp(p->u.epincr_.exp_);
    break;
  case is_EPDecr:
    /* Code for EPDecr Goes Here */
    visitExp(p->u.epdecr_.exp_);
    break;
  case is_EIncr:
    /* Code for EIncr Goes Here */
    visitExp(p->u.eincr_.exp_);
    break;
  case is_EDecr:
    /* Code for EDecr Goes Here */
    visitExp(p->u.edecr_.exp_);
    break;
  case is_ETimes:
    /* Code for ETimes Goes Here */
    visitExp(p->u.etimes_.exp_1);
    visitExp(p->u.etimes_.exp_2);
    break;
  case is_EDiv:
    /* Code for EDiv Goes Here */
    visitExp(p->u.ediv_.exp_1);
    visitExp(p->u.ediv_.exp_2);
    break;
  case is_EPlus:
    /* Code for EPlus Goes Here */
    visitExp(p->u.eplus_.exp_1);
    visitExp(p->u.eplus_.exp_2);
    break;
  case is_EMinus:
    /* Code for EMinus Goes Here */
    visitExp(p->u.eminus_.exp_1);
    visitExp(p->u.eminus_.exp_2);
    break;
  case is_ELt:
    /* Code for ELt Goes Here */
    visitExp(p->u.elt_.exp_1);
    visitExp(p->u.elt_.exp_2);
    break;
  case is_EGt:
    /* Code for EGt Goes Here */
    visitExp(p->u.egt_.exp_1);
    visitExp(p->u.egt_.exp_2);
    break;
  case is_ELtEq:
    /* Code for ELtEq Goes Here */
    visitExp(p->u.elteq_.exp_1);
    visitExp(p->u.elteq_.exp_2);
    break;
  case is_EGtEq:
    /* Code for EGtEq Goes Here */
    visitExp(p->u.egteq_.exp_1);
    visitExp(p->u.egteq_.exp_2);
    break;
  case is_EEq:
    /* Code for EEq Goes Here */
    visitExp(p->u.eeq_.exp_1);
    visitExp(p->u.eeq_.exp_2);
    break;
  case is_ENEq:
    /* Code for ENEq Goes Here */
    visitExp(p->u.eneq_.exp_1);
    visitExp(p->u.eneq_.exp_2);
    break;
  case is_EAnd:
    /* Code for EAnd Goes Here */
    visitExp(p->u.eand_.exp_1);
    visitExp(p->u.eand_.exp_2);
    break;
  case is_EOr:
    /* Code for EOr Goes Here */
    visitExp(p->u.eor_.exp_1);
    visitExp(p->u.eor_.exp_2);
    break;
  case is_EAss:
    /* Code for EAss Goes Here */
    visitExp(p->u.eass_.exp_1);
    visitExp(p->u.eass_.exp_2);
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Exp!\n");
    exit(1);
  }
}

void visitListExp(ListExp listexp)
{
  while(listexp  != 0)
  {
    /* Code For ListExp Goes Here */
    visitExp(listexp->exp_);
    listexp = listexp->listexp_;
  }
}

void visitType(Type p)
{
  switch(p->kind)
  {
  case is_Type_bool:
    /* Code for Type_bool Goes Here */
    break;
  case is_Type_int:
    /* Code for Type_int Goes Here */
    break;
  case is_Type_double:
    /* Code for Type_double Goes Here */
    break;
  case is_Type_void:
    /* Code for Type_void Goes Here */
    break;
  case is_Type_string:
    /* Code for Type_string Goes Here */
    break;

  default:
    fprintf(stderr, "Error: bad kind field when printing Type!\n");
    exit(1);
  }
}

void visitListId(ListId listid)
{
  while(listid  != 0)
  {
    /* Code For ListId Goes Here */
    visitId(listid->id_);
    listid = listid->listid_;
  }
}

void visitId(Id p)
{
  /* Code for Id Goes Here */
}
void visitIdent(Ident i)
{
  /* Code for Ident Goes Here */
}
void visitInteger(Integer i)
{
  /* Code for Integer Goes Here */
}
void visitDouble(Double d)
{
  /* Code for Double Goes Here */
}
void visitChar(Char c)
{
  /* Code for Char Goes Here */
}
void visitString(String s)
{
  /* Code for String Goes Here */
}

