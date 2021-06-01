/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         CPPparse
#define yylex           CPPlex
#define yyerror         CPPerror
#define yydebug         CPPdebug
#define yynerrs         CPPnerrs
#define yylval          CPPlval
#define yychar          CPPchar
#define yylloc          CPPlloc

/* First part of user prologue.  */
#line 3 "CPP.y"

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


#line 953 "Parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int CPPdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _SYMB_0 = 259,                 /* _SYMB_0  */
    _SYMB_1 = 260,                 /* _SYMB_1  */
    _SYMB_2 = 261,                 /* _SYMB_2  */
    _SYMB_3 = 262,                 /* _SYMB_3  */
    _SYMB_4 = 263,                 /* _SYMB_4  */
    _SYMB_5 = 264,                 /* _SYMB_5  */
    _SYMB_6 = 265,                 /* _SYMB_6  */
    _SYMB_7 = 266,                 /* _SYMB_7  */
    _SYMB_8 = 267,                 /* _SYMB_8  */
    _SYMB_9 = 268,                 /* _SYMB_9  */
    _SYMB_10 = 269,                /* _SYMB_10  */
    _SYMB_11 = 270,                /* _SYMB_11  */
    _SYMB_12 = 271,                /* _SYMB_12  */
    _SYMB_13 = 272,                /* _SYMB_13  */
    _SYMB_14 = 273,                /* _SYMB_14  */
    _SYMB_15 = 274,                /* _SYMB_15  */
    _SYMB_16 = 275,                /* _SYMB_16  */
    _SYMB_17 = 276,                /* _SYMB_17  */
    _SYMB_18 = 277,                /* _SYMB_18  */
    _SYMB_19 = 278,                /* _SYMB_19  */
    _SYMB_20 = 279,                /* _SYMB_20  */
    _SYMB_21 = 280,                /* _SYMB_21  */
    _SYMB_22 = 281,                /* _SYMB_22  */
    _SYMB_23 = 282,                /* _SYMB_23  */
    _SYMB_24 = 283,                /* _SYMB_24  */
    _SYMB_25 = 284,                /* _SYMB_25  */
    _SYMB_26 = 285,                /* _SYMB_26  */
    _SYMB_27 = 286,                /* _SYMB_27  */
    _SYMB_28 = 287,                /* _SYMB_28  */
    _SYMB_29 = 288,                /* _SYMB_29  */
    _SYMB_30 = 289,                /* _SYMB_30  */
    _SYMB_31 = 290,                /* _SYMB_31  */
    _SYMB_32 = 291,                /* _SYMB_32  */
    _SYMB_33 = 292,                /* _SYMB_33  */
    _SYMB_34 = 293,                /* _SYMB_34  */
    _SYMB_35 = 294,                /* _SYMB_35  */
    _SYMB_36 = 295,                /* _SYMB_36  */
    _STRING_ = 296,                /* _STRING_  */
    _INTEGER_ = 297,               /* _INTEGER_  */
    _DOUBLE_ = 298                 /* _DOUBLE_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 878 "CPP.y"

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


#line 1062 "Parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE CPPlval;
extern YYLTYPE CPPlloc;
int CPPparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__SYMB_0 = 4,                    /* _SYMB_0  */
  YYSYMBOL__SYMB_1 = 5,                    /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 6,                    /* _SYMB_2  */
  YYSYMBOL__SYMB_3 = 7,                    /* _SYMB_3  */
  YYSYMBOL__SYMB_4 = 8,                    /* _SYMB_4  */
  YYSYMBOL__SYMB_5 = 9,                    /* _SYMB_5  */
  YYSYMBOL__SYMB_6 = 10,                   /* _SYMB_6  */
  YYSYMBOL__SYMB_7 = 11,                   /* _SYMB_7  */
  YYSYMBOL__SYMB_8 = 12,                   /* _SYMB_8  */
  YYSYMBOL__SYMB_9 = 13,                   /* _SYMB_9  */
  YYSYMBOL__SYMB_10 = 14,                  /* _SYMB_10  */
  YYSYMBOL__SYMB_11 = 15,                  /* _SYMB_11  */
  YYSYMBOL__SYMB_12 = 16,                  /* _SYMB_12  */
  YYSYMBOL__SYMB_13 = 17,                  /* _SYMB_13  */
  YYSYMBOL__SYMB_14 = 18,                  /* _SYMB_14  */
  YYSYMBOL__SYMB_15 = 19,                  /* _SYMB_15  */
  YYSYMBOL__SYMB_16 = 20,                  /* _SYMB_16  */
  YYSYMBOL__SYMB_17 = 21,                  /* _SYMB_17  */
  YYSYMBOL__SYMB_18 = 22,                  /* _SYMB_18  */
  YYSYMBOL__SYMB_19 = 23,                  /* _SYMB_19  */
  YYSYMBOL__SYMB_20 = 24,                  /* _SYMB_20  */
  YYSYMBOL__SYMB_21 = 25,                  /* _SYMB_21  */
  YYSYMBOL__SYMB_22 = 26,                  /* _SYMB_22  */
  YYSYMBOL__SYMB_23 = 27,                  /* _SYMB_23  */
  YYSYMBOL__SYMB_24 = 28,                  /* _SYMB_24  */
  YYSYMBOL__SYMB_25 = 29,                  /* _SYMB_25  */
  YYSYMBOL__SYMB_26 = 30,                  /* _SYMB_26  */
  YYSYMBOL__SYMB_27 = 31,                  /* _SYMB_27  */
  YYSYMBOL__SYMB_28 = 32,                  /* _SYMB_28  */
  YYSYMBOL__SYMB_29 = 33,                  /* _SYMB_29  */
  YYSYMBOL__SYMB_30 = 34,                  /* _SYMB_30  */
  YYSYMBOL__SYMB_31 = 35,                  /* _SYMB_31  */
  YYSYMBOL__SYMB_32 = 36,                  /* _SYMB_32  */
  YYSYMBOL__SYMB_33 = 37,                  /* _SYMB_33  */
  YYSYMBOL__SYMB_34 = 38,                  /* _SYMB_34  */
  YYSYMBOL__SYMB_35 = 39,                  /* _SYMB_35  */
  YYSYMBOL__SYMB_36 = 40,                  /* _SYMB_36  */
  YYSYMBOL__STRING_ = 41,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 42,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 43,                  /* _DOUBLE_  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_Program = 45,                   /* Program  */
  YYSYMBOL_Def = 46,                       /* Def  */
  YYSYMBOL_ListDef = 47,                   /* ListDef  */
  YYSYMBOL_Arg = 48,                       /* Arg  */
  YYSYMBOL_ListArg = 49,                   /* ListArg  */
  YYSYMBOL_Stm = 50,                       /* Stm  */
  YYSYMBOL_ListStm = 51,                   /* ListStm  */
  YYSYMBOL_Exp15 = 52,                     /* Exp15  */
  YYSYMBOL_Exp14 = 53,                     /* Exp14  */
  YYSYMBOL_Exp13 = 54,                     /* Exp13  */
  YYSYMBOL_Exp12 = 55,                     /* Exp12  */
  YYSYMBOL_Exp11 = 56,                     /* Exp11  */
  YYSYMBOL_Exp9 = 57,                      /* Exp9  */
  YYSYMBOL_Exp8 = 58,                      /* Exp8  */
  YYSYMBOL_Exp4 = 59,                      /* Exp4  */
  YYSYMBOL_Exp3 = 60,                      /* Exp3  */
  YYSYMBOL_Exp2 = 61,                      /* Exp2  */
  YYSYMBOL_Exp = 62,                       /* Exp  */
  YYSYMBOL_Exp1 = 63,                      /* Exp1  */
  YYSYMBOL_Exp5 = 64,                      /* Exp5  */
  YYSYMBOL_Exp6 = 65,                      /* Exp6  */
  YYSYMBOL_Exp7 = 66,                      /* Exp7  */
  YYSYMBOL_Exp10 = 67,                     /* Exp10  */
  YYSYMBOL_ListExp = 68,                   /* ListExp  */
  YYSYMBOL_Type = 69,                      /* Type  */
  YYSYMBOL_ListId = 70                     /* ListId  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

#define YYMAXUTOK   298


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   969,   969,   971,   973,   974,   976,   978,   979,   980,
     982,   983,   984,   985,   986,   987,   988,   989,   990,   991,
     993,   994,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1005,  1007,  1008,  1009,  1011,  1012,  1013,  1015,  1016,
    1017,  1019,  1020,  1021,  1023,  1024,  1025,  1026,  1027,  1029,
    1030,  1031,  1033,  1034,  1036,  1037,  1039,  1040,  1042,  1044,
    1046,  1048,  1050,  1052,  1054,  1055,  1056,  1058,  1059,  1060,
    1061,  1062,  1064,  1065
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_SYMB_0",
  "_SYMB_1", "_SYMB_2", "_SYMB_3", "_SYMB_4", "_SYMB_5", "_SYMB_6",
  "_SYMB_7", "_SYMB_8", "_SYMB_9", "_SYMB_10", "_SYMB_11", "_SYMB_12",
  "_SYMB_13", "_SYMB_14", "_SYMB_15", "_SYMB_16", "_SYMB_17", "_SYMB_18",
  "_SYMB_19", "_SYMB_20", "_SYMB_21", "_SYMB_22", "_SYMB_23", "_SYMB_24",
  "_SYMB_25", "_SYMB_26", "_SYMB_27", "_SYMB_28", "_SYMB_29", "_SYMB_30",
  "_SYMB_31", "_SYMB_32", "_SYMB_33", "_SYMB_34", "_SYMB_35", "_SYMB_36",
  "_STRING_", "_INTEGER_", "_DOUBLE_", "$accept", "Program", "Def",
  "ListDef", "Arg", "ListArg", "Stm", "ListStm", "Exp15", "Exp14", "Exp13",
  "Exp12", "Exp11", "Exp9", "Exp8", "Exp4", "Exp3", "Exp2", "Exp", "Exp1",
  "Exp5", "Exp6", "Exp7", "Exp10", "ListExp", "Type", "ListId", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -109,    10,    51,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
     -35,    19,    51,     6,    13,   -12,    51,    33,  -109,  -109,
    -109,    18,   150,  -109,  -109,   150,   150,  -109,  -109,   157,
     157,  -109,    45,   143,  -109,    62,    64,  -109,  -109,  -109,
    -109,    -7,  -109,  -109,     3,     7,    14,    15,    46,    -9,
    -109,    75,  -109,  -109,  -109,  -109,  -109,    68,    81,    63,
     105,   106,  -109,  -109,   150,  -109,   104,   150,   150,  -109,
    -109,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,  -109,     5,   111,  -109,  -109,   112,
     113,   107,  -109,   118,   116,   120,  -109,  -109,     3,     3,
    -109,  -109,  -109,  -109,    14,    14,  -109,  -109,    46,    86,
     150,  -109,  -109,  -109,   103,   103,   150,  -109,   119,  -109,
     121,    97,  -109,  -109,  -109,   103,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     2,     1,    67,    69,    68,    71,    70,     5,
       0,     0,     7,     8,     0,     0,     7,     0,     6,     9,
      20,     0,     0,    20,     3,     0,     0,    22,    23,     0,
       0,    25,     0,     0,    24,     0,    29,    28,    26,    27,
      21,    34,    37,    40,    43,    63,    51,    62,    55,    57,
      59,     0,    58,    53,    60,    61,    48,     0,     0,     0,
       0,     0,    35,    36,     0,    14,     0,     0,    64,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    72,     0,    31,    16,     0,
       0,     0,    13,     0,    65,     0,    38,    39,    41,    42,
      44,    45,    46,    47,    49,    50,    52,    56,    54,     0,
       0,    11,    18,    19,     0,     0,    64,    30,    72,    73,
       0,     0,    15,    66,    12,     0,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -109,  -109,  -109,  -109,  -109,   115,  -108,   125,  -109,    42,
     -28,     9,  -109,    11,  -109,    66,  -109,    47,   -22,  -109,
      53,  -109,  -109,   -13,    34,     0,    44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     9,     2,    13,    14,    40,    21,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    95,    57,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      58,    82,    10,    60,    61,    11,   121,   122,    69,    70,
       3,    66,    15,   109,    16,   110,    15,   126,    17,    83,
      71,    72,    22,    12,    23,    24,    73,    74,    18,    25,
      26,    27,    28,    29,    30,    75,    76,    77,    78,    20,
      79,    80,    91,    96,    97,    93,    94,     4,     5,    64,
      31,    32,     6,    33,     7,    34,     8,    35,    36,    37,
      38,    39,   100,   101,   102,   103,    67,    22,    68,    23,
      88,    62,    63,    81,    25,    26,    27,    28,    29,    30,
       4,     5,    98,    99,    84,     6,    87,     7,   120,     8,
     104,   105,     4,     5,    94,    31,    32,     6,    33,     7,
      34,     8,    35,    36,    37,    38,    39,    22,    85,    23,
      89,    90,   114,    92,    25,    26,    27,    28,    29,    30,
     111,   112,   113,   115,   116,   117,   118,   109,   125,   107,
     124,    19,     4,     5,   106,    31,    32,     6,    33,     7,
      34,     8,    35,    36,    37,    38,    39,    22,    59,   108,
     123,     0,    65,   119,    22,     0,    27,    28,    29,    30,
       0,    22,     0,    27,    28,    29,    30,     0,     0,     0,
      27,    28,     0,     0,     0,    31,     0,     0,     0,     0,
      34,     0,    31,    36,    37,    38,    39,    34,     0,    31,
      36,    37,    38,    39,    34,     0,     0,    36,    37,    38,
      39
};

static const yytype_int8 yycheck[] =
{
      22,    10,     2,    25,    26,    40,   114,   115,    15,    16,
       0,    33,    12,     8,     8,    10,    16,   125,     5,    28,
      17,    18,     4,     4,     6,     7,    19,    20,    40,    11,
      12,    13,    14,    15,    16,    21,    22,    23,    24,     6,
      25,    26,    64,    71,    72,    67,    68,    29,    30,     4,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    75,    76,    77,    78,     4,     4,     4,     6,
       7,    29,    30,    27,    11,    12,    13,    14,    15,    16,
      29,    30,    73,    74,     9,    34,     5,    36,   110,    38,
      79,    80,    29,    30,   116,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     4,    40,     6,
       5,     5,     5,     9,    11,    12,    13,    14,    15,    16,
       9,     9,     9,     5,     8,     5,    40,     8,    31,    82,
       9,    16,    29,    30,    81,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     4,    23,    83,
     116,    -1,     9,   109,     4,    -1,    13,    14,    15,    16,
      -1,     4,    -1,    13,    14,    15,    16,    -1,    -1,    -1,
      13,    14,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      37,    -1,    32,    40,    41,    42,    43,    37,    -1,    32,
      40,    41,    42,    43,    37,    -1,    -1,    40,    41,    42,
      43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    45,    47,     0,    29,    30,    34,    36,    38,    46,
      69,    40,     4,    48,    49,    69,     8,     5,    40,    49,
       6,    51,     4,     6,     7,    11,    12,    13,    14,    15,
      16,    32,    33,    35,    37,    39,    40,    41,    42,    43,
      50,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    69,    62,    51,
      62,    62,    53,    53,     4,     9,    62,     4,     4,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    10,    28,     9,    40,    70,     5,     7,     5,
       5,    62,     9,    62,    62,    68,    54,    54,    55,    55,
      67,    67,    67,    67,    57,    57,    64,    61,    59,     8,
      10,     9,     9,     9,     5,     5,     8,     5,    40,    70,
      62,    50,    50,    68,     9,    31,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    47,    47,    48,    49,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    54,    54,    54,    55,    55,
      55,    56,    56,    56,    57,    57,    57,    57,    57,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    63,
      64,    65,    66,    67,    68,    68,    68,    69,    69,    69,
      69,    69,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     8,     0,     2,     2,     0,     1,     3,
       2,     3,     5,     3,     2,     5,     3,     7,     4,     4,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     2,     2,     1,     2,     2,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 969 "CPP.y"
                  { (yyval.program_) = make_PDefs(reverseListDef((yyvsp[0].listdef_))); YY_RESULT_Program_= (yyval.program_); }
#line 2334 "Parser.c"
    break;

  case 3:
#line 971 "CPP.y"
                                                                    { (yyval.def_) = make_DFun((yyvsp[-7].type_), (yyvsp[-6].string_), (yyvsp[-4].listarg_), reverseListStm((yyvsp[-1].liststm_))); YY_RESULT_Def_= (yyval.def_); }
#line 2340 "Parser.c"
    break;

  case 4:
#line 973 "CPP.y"
                      { (yyval.listdef_) = 0; YY_RESULT_ListDef_= (yyval.listdef_); }
#line 2346 "Parser.c"
    break;

  case 5:
#line 974 "CPP.y"
                { (yyval.listdef_) = make_ListDef((yyvsp[0].def_), (yyvsp[-1].listdef_)); YY_RESULT_ListDef_= (yyval.listdef_); }
#line 2352 "Parser.c"
    break;

  case 6:
#line 976 "CPP.y"
                    { (yyval.arg_) = make_ADecl((yyvsp[-1].type_), (yyvsp[0].string_)); YY_RESULT_Arg_= (yyval.arg_); }
#line 2358 "Parser.c"
    break;

  case 7:
#line 978 "CPP.y"
                      { (yyval.listarg_) = 0; YY_RESULT_ListArg_= (yyval.listarg_); }
#line 2364 "Parser.c"
    break;

  case 8:
#line 979 "CPP.y"
        { (yyval.listarg_) = make_ListArg((yyvsp[0].arg_), 0); YY_RESULT_ListArg_= (yyval.listarg_); }
#line 2370 "Parser.c"
    break;

  case 9:
#line 980 "CPP.y"
                        { (yyval.listarg_) = make_ListArg((yyvsp[-2].arg_), (yyvsp[0].listarg_)); YY_RESULT_ListArg_= (yyval.listarg_); }
#line 2376 "Parser.c"
    break;

  case 10:
#line 982 "CPP.y"
                  { (yyval.stm_) = make_SExp((yyvsp[-1].exp_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2382 "Parser.c"
    break;

  case 11:
#line 983 "CPP.y"
                        { (yyval.stm_) = make_SDecls((yyvsp[-2].type_), (yyvsp[-1].listid_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2388 "Parser.c"
    break;

  case 12:
#line 984 "CPP.y"
                                      { (yyval.stm_) = make_SInit((yyvsp[-4].type_), (yyvsp[-3].string_), (yyvsp[-1].exp_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2394 "Parser.c"
    break;

  case 13:
#line 985 "CPP.y"
                         { (yyval.stm_) = make_SReturn((yyvsp[-1].exp_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2400 "Parser.c"
    break;

  case 14:
#line 986 "CPP.y"
                     { (yyval.stm_) = make_SReturnVoid(); YY_RESULT_Stm_= (yyval.stm_); }
#line 2406 "Parser.c"
    break;

  case 15:
#line 987 "CPP.y"
                                     { (yyval.stm_) = make_SWhile((yyvsp[-2].exp_), (yyvsp[0].stm_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2412 "Parser.c"
    break;

  case 16:
#line 988 "CPP.y"
                            { (yyval.stm_) = make_SBlock(reverseListStm((yyvsp[-1].liststm_))); YY_RESULT_Stm_= (yyval.stm_); }
#line 2418 "Parser.c"
    break;

  case 17:
#line 989 "CPP.y"
                                                  { (yyval.stm_) = make_SIfElse((yyvsp[-4].exp_), (yyvsp[-2].stm_), (yyvsp[0].stm_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2424 "Parser.c"
    break;

  case 18:
#line 990 "CPP.y"
                                { (yyval.stm_) = make_SPrintInt((yyvsp[-2].exp_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2430 "Parser.c"
    break;

  case 19:
#line 991 "CPP.y"
                                { (yyval.stm_) = make_SPrintDouble((yyvsp[-2].exp_)); YY_RESULT_Stm_= (yyval.stm_); }
#line 2436 "Parser.c"
    break;

  case 20:
#line 993 "CPP.y"
                      { (yyval.liststm_) = 0; YY_RESULT_ListStm_= (yyval.liststm_); }
#line 2442 "Parser.c"
    break;

  case 21:
#line 994 "CPP.y"
                { (yyval.liststm_) = make_ListStm((yyvsp[0].stm_), (yyvsp[-1].liststm_)); YY_RESULT_ListStm_= (yyval.liststm_); }
#line 2448 "Parser.c"
    break;

  case 22:
#line 996 "CPP.y"
                { (yyval.exp_) = make_SReadInt(); YY_RESULT_Exp_= (yyval.exp_); }
#line 2454 "Parser.c"
    break;

  case 23:
#line 997 "CPP.y"
             { (yyval.exp_) = make_SReadDouble(); YY_RESULT_Exp_= (yyval.exp_); }
#line 2460 "Parser.c"
    break;

  case 24:
#line 998 "CPP.y"
             { (yyval.exp_) = make_ETrue(); YY_RESULT_Exp_= (yyval.exp_); }
#line 2466 "Parser.c"
    break;

  case 25:
#line 999 "CPP.y"
             { (yyval.exp_) = make_EFalse(); YY_RESULT_Exp_= (yyval.exp_); }
#line 2472 "Parser.c"
    break;

  case 26:
#line 1000 "CPP.y"
              { (yyval.exp_) = make_EInt((yyvsp[0].int_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2478 "Parser.c"
    break;

  case 27:
#line 1001 "CPP.y"
             { (yyval.exp_) = make_EDouble((yyvsp[0].double_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2484 "Parser.c"
    break;

  case 28:
#line 1002 "CPP.y"
             { (yyval.exp_) = make_EString((yyvsp[0].string_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2490 "Parser.c"
    break;

  case 29:
#line 1003 "CPP.y"
             { (yyval.exp_) = make_EId((yyvsp[0].string_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2496 "Parser.c"
    break;

  case 30:
#line 1004 "CPP.y"
                                     { (yyval.exp_) = make_EApp((yyvsp[-3].string_), (yyvsp[-1].listexp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2502 "Parser.c"
    break;

  case 31:
#line 1005 "CPP.y"
                        { (yyval.exp_) = (yyvsp[-1].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2508 "Parser.c"
    break;

  case 32:
#line 1007 "CPP.y"
                       { (yyval.exp_) = make_EPIncr((yyvsp[-1].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2514 "Parser.c"
    break;

  case 33:
#line 1008 "CPP.y"
                   { (yyval.exp_) = make_EPDecr((yyvsp[-1].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2520 "Parser.c"
    break;

  case 34:
#line 1009 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2526 "Parser.c"
    break;

  case 35:
#line 1011 "CPP.y"
                       { (yyval.exp_) = make_EIncr((yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2532 "Parser.c"
    break;

  case 36:
#line 1012 "CPP.y"
                   { (yyval.exp_) = make_EDecr((yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2538 "Parser.c"
    break;

  case 37:
#line 1013 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2544 "Parser.c"
    break;

  case 38:
#line 1015 "CPP.y"
                             { (yyval.exp_) = make_ETimes((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2550 "Parser.c"
    break;

  case 39:
#line 1016 "CPP.y"
                         { (yyval.exp_) = make_EDiv((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2556 "Parser.c"
    break;

  case 40:
#line 1017 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2562 "Parser.c"
    break;

  case 41:
#line 1019 "CPP.y"
                             { (yyval.exp_) = make_EPlus((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2568 "Parser.c"
    break;

  case 42:
#line 1020 "CPP.y"
                         { (yyval.exp_) = make_EMinus((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2574 "Parser.c"
    break;

  case 43:
#line 1021 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2580 "Parser.c"
    break;

  case 44:
#line 1023 "CPP.y"
                           { (yyval.exp_) = make_ELt((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2586 "Parser.c"
    break;

  case 45:
#line 1024 "CPP.y"
                        { (yyval.exp_) = make_EGt((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2592 "Parser.c"
    break;

  case 46:
#line 1025 "CPP.y"
                        { (yyval.exp_) = make_ELtEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2598 "Parser.c"
    break;

  case 47:
#line 1026 "CPP.y"
                        { (yyval.exp_) = make_EGtEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2604 "Parser.c"
    break;

  case 48:
#line 1027 "CPP.y"
          { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2610 "Parser.c"
    break;

  case 49:
#line 1029 "CPP.y"
                          { (yyval.exp_) = make_EEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2616 "Parser.c"
    break;

  case 50:
#line 1030 "CPP.y"
                       { (yyval.exp_) = make_ENEq((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2622 "Parser.c"
    break;

  case 51:
#line 1031 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2628 "Parser.c"
    break;

  case 52:
#line 1033 "CPP.y"
                          { (yyval.exp_) = make_EAnd((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2634 "Parser.c"
    break;

  case 53:
#line 1034 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2640 "Parser.c"
    break;

  case 54:
#line 1036 "CPP.y"
                          { (yyval.exp_) = make_EOr((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2646 "Parser.c"
    break;

  case 55:
#line 1037 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2652 "Parser.c"
    break;

  case 56:
#line 1039 "CPP.y"
                         { (yyval.exp_) = make_EAss((yyvsp[-2].exp_), (yyvsp[0].exp_)); YY_RESULT_Exp_= (yyval.exp_); }
#line 2658 "Parser.c"
    break;

  case 57:
#line 1040 "CPP.y"
         { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2664 "Parser.c"
    break;

  case 58:
#line 1042 "CPP.y"
           { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2670 "Parser.c"
    break;

  case 59:
#line 1044 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2676 "Parser.c"
    break;

  case 60:
#line 1046 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2682 "Parser.c"
    break;

  case 61:
#line 1048 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2688 "Parser.c"
    break;

  case 62:
#line 1050 "CPP.y"
            { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2694 "Parser.c"
    break;

  case 63:
#line 1052 "CPP.y"
              { (yyval.exp_) = (yyvsp[0].exp_); YY_RESULT_Exp_= (yyval.exp_); }
#line 2700 "Parser.c"
    break;

  case 64:
#line 1054 "CPP.y"
                      { (yyval.listexp_) = 0; YY_RESULT_ListExp_= (yyval.listexp_); }
#line 2706 "Parser.c"
    break;

  case 65:
#line 1055 "CPP.y"
        { (yyval.listexp_) = make_ListExp((yyvsp[0].exp_), 0); YY_RESULT_ListExp_= (yyval.listexp_); }
#line 2712 "Parser.c"
    break;

  case 66:
#line 1056 "CPP.y"
                        { (yyval.listexp_) = make_ListExp((yyvsp[-2].exp_), (yyvsp[0].listexp_)); YY_RESULT_ListExp_= (yyval.listexp_); }
#line 2718 "Parser.c"
    break;

  case 67:
#line 1058 "CPP.y"
                { (yyval.type_) = make_Type_bool(); YY_RESULT_Type_= (yyval.type_); }
#line 2724 "Parser.c"
    break;

  case 68:
#line 1059 "CPP.y"
             { (yyval.type_) = make_Type_int(); YY_RESULT_Type_= (yyval.type_); }
#line 2730 "Parser.c"
    break;

  case 69:
#line 1060 "CPP.y"
             { (yyval.type_) = make_Type_double(); YY_RESULT_Type_= (yyval.type_); }
#line 2736 "Parser.c"
    break;

  case 70:
#line 1061 "CPP.y"
             { (yyval.type_) = make_Type_void(); YY_RESULT_Type_= (yyval.type_); }
#line 2742 "Parser.c"
    break;

  case 71:
#line 1062 "CPP.y"
             { (yyval.type_) = make_Type_string(); YY_RESULT_Type_= (yyval.type_); }
#line 2748 "Parser.c"
    break;

  case 72:
#line 1064 "CPP.y"
                  { (yyval.listid_) = make_ListId((yyvsp[0].string_), 0); YY_RESULT_ListId_= (yyval.listid_); }
#line 2754 "Parser.c"
    break;

  case 73:
#line 1065 "CPP.y"
                            { (yyval.listid_) = make_ListId((yyvsp[-2].string_), (yyvsp[0].listid_)); YY_RESULT_ListId_= (yyval.listid_); }
#line 2760 "Parser.c"
    break;


#line 2764 "Parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1068 "CPP.y"

void yyerror(const char *str)
{
  extern char *CPPtext;
  fprintf(stderr,"error: %d,%d: %s at %s\n",
  CPPlloc.first_line, CPPlloc.first_column, str, CPPtext);
}

