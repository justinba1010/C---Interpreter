#ifndef SKELETON_HEADER
#define SKELETON_HEADER
/* You might want to change the above name. */

#include "Absyn.h"


void visitProgram(Program p);
void visitDef(Def p);
void visitListDef(ListDef p);
void visitArg(Arg p);
void visitListArg(ListArg p);
void visitStm(Stm p);
void visitListStm(ListStm p);
void visitExp(Exp p);
void visitListExp(ListExp p);
void visitType(Type p);
void visitListId(ListId p);

void visitId(Id p);
void visitIdent(Ident i);
void visitInteger(Integer i);
void visitDouble(Double d);
void visitChar(Char c);
void visitString(String s);

#endif

