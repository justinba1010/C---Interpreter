/* C Abstract Syntax Implementation generated by the BNF Converter. */

#include <stdio.h>
#include <stdlib.h>
#include "Absyn.h"


/********************   PDefs    ********************/
Program make_PDefs(ListDef p1)
{
    Program tmp = (Program) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating PDefs!\n");
        exit(1);
    }
    tmp->kind = is_PDefs;
    tmp->u.pdefs_.listdef_ = p1;
    return tmp;
}/********************   DFun    ********************/
Def make_DFun(Type p1, Id p2, ListArg p3, ListStm p4)
{
    Def tmp = (Def) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating DFun!\n");
        exit(1);
    }
    tmp->kind = is_DFun;
    tmp->u.dfun_.type_ = p1;
    tmp->u.dfun_.id_ = p2;
    tmp->u.dfun_.listarg_ = p3;
    tmp->u.dfun_.liststm_ = p4;
    return tmp;
}/********************   ListDef    ********************/
ListDef make_ListDef(Def p1, ListDef p2)
{
    ListDef tmp = (ListDef) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListDef!\n");
        exit(1);
    }
    tmp->def_ = p1;
    tmp->listdef_ = p2;
    return tmp;
}/********************   ADecl    ********************/
Arg make_ADecl(Type p1, Id p2)
{
    Arg tmp = (Arg) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ADecl!\n");
        exit(1);
    }
    tmp->kind = is_ADecl;
    tmp->u.adecl_.type_ = p1;
    tmp->u.adecl_.id_ = p2;
    return tmp;
}/********************   ListArg    ********************/
ListArg make_ListArg(Arg p1, ListArg p2)
{
    ListArg tmp = (ListArg) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListArg!\n");
        exit(1);
    }
    tmp->arg_ = p1;
    tmp->listarg_ = p2;
    return tmp;
}/********************   SExp    ********************/
Stm make_SExp(Exp p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SExp!\n");
        exit(1);
    }
    tmp->kind = is_SExp;
    tmp->u.sexp_.exp_ = p1;
    return tmp;
}
/********************   SDecls    ********************/
Stm make_SDecls(Type p1, ListId p2)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SDecls!\n");
        exit(1);
    }
    tmp->kind = is_SDecls;
    tmp->u.sdecls_.type_ = p1;
    tmp->u.sdecls_.listid_ = p2;
    return tmp;
}
/********************   SInit    ********************/
Stm make_SInit(Type p1, Id p2, Exp p3)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SInit!\n");
        exit(1);
    }
    tmp->kind = is_SInit;
    tmp->u.sinit_.type_ = p1;
    tmp->u.sinit_.id_ = p2;
    tmp->u.sinit_.exp_ = p3;
    return tmp;
}
/********************   SReturn    ********************/
Stm make_SReturn(Exp p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SReturn!\n");
        exit(1);
    }
    tmp->kind = is_SReturn;
    tmp->u.sreturn_.exp_ = p1;
    return tmp;
}
/********************   SReturnVoid    ********************/
Stm make_SReturnVoid()
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SReturnVoid!\n");
        exit(1);
    }
    tmp->kind = is_SReturnVoid;
    return tmp;
}
/********************   SWhile    ********************/
Stm make_SWhile(Exp p1, Stm p2)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SWhile!\n");
        exit(1);
    }
    tmp->kind = is_SWhile;
    tmp->u.swhile_.exp_ = p1;
    tmp->u.swhile_.stm_ = p2;
    return tmp;
}
/********************   SBlock    ********************/
Stm make_SBlock(ListStm p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SBlock!\n");
        exit(1);
    }
    tmp->kind = is_SBlock;
    tmp->u.sblock_.liststm_ = p1;
    return tmp;
}
/********************   SIfElse    ********************/
Stm make_SIfElse(Exp p1, Stm p2, Stm p3)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SIfElse!\n");
        exit(1);
    }
    tmp->kind = is_SIfElse;
    tmp->u.sifelse_.exp_ = p1;
    tmp->u.sifelse_.stm_1 = p2;
    tmp->u.sifelse_.stm_2 = p3;
    return tmp;
}
/********************   SPrintInt    ********************/
Stm make_SPrintInt(Exp p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SPrintInt!\n");
        exit(1);
    }
    tmp->kind = is_SPrintInt;
    tmp->u.sprintint_.exp_ = p1;
    return tmp;
}
/********************   SPrintDouble    ********************/
Stm make_SPrintDouble(Exp p1)
{
    Stm tmp = (Stm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SPrintDouble!\n");
        exit(1);
    }
    tmp->kind = is_SPrintDouble;
    tmp->u.sprintdouble_.exp_ = p1;
    return tmp;
}/********************   ListStm    ********************/
ListStm make_ListStm(Stm p1, ListStm p2)
{
    ListStm tmp = (ListStm) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListStm!\n");
        exit(1);
    }
    tmp->stm_ = p1;
    tmp->liststm_ = p2;
    return tmp;
}/********************   SReadInt    ********************/
Exp make_SReadInt()
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SReadInt!\n");
        exit(1);
    }
    tmp->kind = is_SReadInt;
    return tmp;
}
/********************   SReadDouble    ********************/
Exp make_SReadDouble()
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating SReadDouble!\n");
        exit(1);
    }
    tmp->kind = is_SReadDouble;
    return tmp;
}
/********************   ETrue    ********************/
Exp make_ETrue()
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ETrue!\n");
        exit(1);
    }
    tmp->kind = is_ETrue;
    return tmp;
}
/********************   EFalse    ********************/
Exp make_EFalse()
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EFalse!\n");
        exit(1);
    }
    tmp->kind = is_EFalse;
    return tmp;
}
/********************   EInt    ********************/
Exp make_EInt(Integer p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EInt!\n");
        exit(1);
    }
    tmp->kind = is_EInt;
    tmp->u.eint_.integer_ = p1;
    return tmp;
}
/********************   EDouble    ********************/
Exp make_EDouble(Double p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EDouble!\n");
        exit(1);
    }
    tmp->kind = is_EDouble;
    tmp->u.edouble_.double_ = p1;
    return tmp;
}
/********************   EString    ********************/
Exp make_EString(String p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EString!\n");
        exit(1);
    }
    tmp->kind = is_EString;
    tmp->u.estring_.string_ = p1;
    return tmp;
}
/********************   EId    ********************/
Exp make_EId(Id p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EId!\n");
        exit(1);
    }
    tmp->kind = is_EId;
    tmp->u.eid_.id_ = p1;
    return tmp;
}
/********************   EApp    ********************/
Exp make_EApp(Id p1, ListExp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EApp!\n");
        exit(1);
    }
    tmp->kind = is_EApp;
    tmp->u.eapp_.id_ = p1;
    tmp->u.eapp_.listexp_ = p2;
    return tmp;
}
/********************   EPIncr    ********************/
Exp make_EPIncr(Exp p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EPIncr!\n");
        exit(1);
    }
    tmp->kind = is_EPIncr;
    tmp->u.epincr_.exp_ = p1;
    return tmp;
}
/********************   EPDecr    ********************/
Exp make_EPDecr(Exp p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EPDecr!\n");
        exit(1);
    }
    tmp->kind = is_EPDecr;
    tmp->u.epdecr_.exp_ = p1;
    return tmp;
}
/********************   EIncr    ********************/
Exp make_EIncr(Exp p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EIncr!\n");
        exit(1);
    }
    tmp->kind = is_EIncr;
    tmp->u.eincr_.exp_ = p1;
    return tmp;
}
/********************   EDecr    ********************/
Exp make_EDecr(Exp p1)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EDecr!\n");
        exit(1);
    }
    tmp->kind = is_EDecr;
    tmp->u.edecr_.exp_ = p1;
    return tmp;
}
/********************   ETimes    ********************/
Exp make_ETimes(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ETimes!\n");
        exit(1);
    }
    tmp->kind = is_ETimes;
    tmp->u.etimes_.exp_1 = p1;
    tmp->u.etimes_.exp_2 = p2;
    return tmp;
}
/********************   EDiv    ********************/
Exp make_EDiv(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EDiv!\n");
        exit(1);
    }
    tmp->kind = is_EDiv;
    tmp->u.ediv_.exp_1 = p1;
    tmp->u.ediv_.exp_2 = p2;
    return tmp;
}
/********************   EPlus    ********************/
Exp make_EPlus(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EPlus!\n");
        exit(1);
    }
    tmp->kind = is_EPlus;
    tmp->u.eplus_.exp_1 = p1;
    tmp->u.eplus_.exp_2 = p2;
    return tmp;
}
/********************   EMinus    ********************/
Exp make_EMinus(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EMinus!\n");
        exit(1);
    }
    tmp->kind = is_EMinus;
    tmp->u.eminus_.exp_1 = p1;
    tmp->u.eminus_.exp_2 = p2;
    return tmp;
}
/********************   ELt    ********************/
Exp make_ELt(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ELt!\n");
        exit(1);
    }
    tmp->kind = is_ELt;
    tmp->u.elt_.exp_1 = p1;
    tmp->u.elt_.exp_2 = p2;
    return tmp;
}
/********************   EGt    ********************/
Exp make_EGt(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EGt!\n");
        exit(1);
    }
    tmp->kind = is_EGt;
    tmp->u.egt_.exp_1 = p1;
    tmp->u.egt_.exp_2 = p2;
    return tmp;
}
/********************   ELtEq    ********************/
Exp make_ELtEq(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ELtEq!\n");
        exit(1);
    }
    tmp->kind = is_ELtEq;
    tmp->u.elteq_.exp_1 = p1;
    tmp->u.elteq_.exp_2 = p2;
    return tmp;
}
/********************   EGtEq    ********************/
Exp make_EGtEq(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EGtEq!\n");
        exit(1);
    }
    tmp->kind = is_EGtEq;
    tmp->u.egteq_.exp_1 = p1;
    tmp->u.egteq_.exp_2 = p2;
    return tmp;
}
/********************   EEq    ********************/
Exp make_EEq(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EEq!\n");
        exit(1);
    }
    tmp->kind = is_EEq;
    tmp->u.eeq_.exp_1 = p1;
    tmp->u.eeq_.exp_2 = p2;
    return tmp;
}
/********************   ENEq    ********************/
Exp make_ENEq(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ENEq!\n");
        exit(1);
    }
    tmp->kind = is_ENEq;
    tmp->u.eneq_.exp_1 = p1;
    tmp->u.eneq_.exp_2 = p2;
    return tmp;
}
/********************   EAnd    ********************/
Exp make_EAnd(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EAnd!\n");
        exit(1);
    }
    tmp->kind = is_EAnd;
    tmp->u.eand_.exp_1 = p1;
    tmp->u.eand_.exp_2 = p2;
    return tmp;
}
/********************   EOr    ********************/
Exp make_EOr(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EOr!\n");
        exit(1);
    }
    tmp->kind = is_EOr;
    tmp->u.eor_.exp_1 = p1;
    tmp->u.eor_.exp_2 = p2;
    return tmp;
}
/********************   EAss    ********************/
Exp make_EAss(Exp p1, Exp p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating EAss!\n");
        exit(1);
    }
    tmp->kind = is_EAss;
    tmp->u.eass_.exp_1 = p1;
    tmp->u.eass_.exp_2 = p2;
    return tmp;
}
/********************   ETyped    ********************/
Exp make_ETyped(Exp p1, Type p2)
{
    Exp tmp = (Exp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ETyped!\n");
        exit(1);
    }
    tmp->kind = is_ETyped;
    tmp->u.etyped_.exp_ = p1;
    tmp->u.etyped_.type_ = p2;
    return tmp;
}/********************   ListExp    ********************/
ListExp make_ListExp(Exp p1, ListExp p2)
{
    ListExp tmp = (ListExp) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListExp!\n");
        exit(1);
    }
    tmp->exp_ = p1;
    tmp->listexp_ = p2;
    return tmp;
}/********************   Type_bool    ********************/
Type make_Type_bool()
{
    Type tmp = (Type) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Type_bool!\n");
        exit(1);
    }
    tmp->kind = is_Type_bool;
    return tmp;
}
/********************   Type_int    ********************/
Type make_Type_int()
{
    Type tmp = (Type) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Type_int!\n");
        exit(1);
    }
    tmp->kind = is_Type_int;
    return tmp;
}
/********************   Type_double    ********************/
Type make_Type_double()
{
    Type tmp = (Type) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Type_double!\n");
        exit(1);
    }
    tmp->kind = is_Type_double;
    return tmp;
}
/********************   Type_void    ********************/
Type make_Type_void()
{
    Type tmp = (Type) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Type_void!\n");
        exit(1);
    }
    tmp->kind = is_Type_void;
    return tmp;
}
/********************   Type_string    ********************/
Type make_Type_string()
{
    Type tmp = (Type) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating Type_string!\n");
        exit(1);
    }
    tmp->kind = is_Type_string;
    return tmp;
}/********************   ListId    ********************/
ListId make_ListId(Id p1, ListId p2)
{
    ListId tmp = (ListId) malloc(sizeof(*tmp));
    if (!tmp)
    {
        fprintf(stderr, "Error: out of memory when allocating ListId!\n");
        exit(1);
    }
    tmp->id_ = p1;
    tmp->listid_ = p2;
    return tmp;
}