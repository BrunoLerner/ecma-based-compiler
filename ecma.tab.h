/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

#ifndef YY_YY_ECMA_TAB_H_INCLUDED
# define YY_YY_ECMA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 30 "ecma.y" /* yacc.c:1919  */

#include "./includes/object.h"
#include "./includes/syntax.h"
#include "./includes/attributes.h"

pobject p, t, f, t1, t2;


#line 53 "ecma.tab.h" /* yacc.c:1919  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRUCT = 258,
    OF = 259,
    COLON = 260,
    SEMI_COLON = 261,
    COMMA = 262,
    EQUALS = 263,
    LEFT_SQUARE = 264,
    RIGHT_SQUARE = 265,
    LEFT_BRACES = 266,
    RIGHT_BRACES = 267,
    LEFT_PARENTHESIS = 268,
    RIGHT_PARENTHESIS = 269,
    AND = 270,
    OR = 271,
    LESS_THAN = 272,
    GREATER_THAN = 273,
    LESS_OR_EQUAL = 274,
    GREATER_OR_EQUAL = 275,
    NOT_EQUAL = 276,
    EQUAL_EQUAL = 277,
    PLUS = 278,
    PLUS_PLUS = 279,
    MINUS = 280,
    MINUS_MINUS = 281,
    TIMES = 282,
    DIVIDE = 283,
    DOT = 284,
    NOT = 285,
    TYPE = 286,
    RETURN = 287,
    ELSE = 288,
    BREAK = 289,
    WHILE = 290,
    VAR = 291,
    ASSIGN = 292,
    CONTINUE = 293,
    FUNCTION = 294,
    STRING = 295,
    IF = 296,
    BOOLEAN = 297,
    CHAR = 298,
    INTEGER = 299,
    DO = 300,
    const_array = 301,
    const_char = 302,
    const_number = 303,
    const_string = 304,
    id = 305,
    const_true = 306,
    const_false = 307,
    ERR_REDCL = 308,
    ERR_NO_DECL = 309,
    ERR_TYPE_EXPECTED = 310,
    ERR_BOOL_TYPE_EXPECTED = 311,
    ERR_TYPE_MISMATCH = 312,
    ERR_INVALID_TYPE = 313,
    ERR_KIND_NOT_STRUCT = 314,
    ERR_FIELD_NOT_DECL = 315,
    ERR_KIND_NOT_ARRAY = 316,
    ERR_INVALID_INDEX_TYPE = 317,
    ERR_KIND_NOT_VAR = 318,
    ERR_KIND_NOT_FUNCTION = 319,
    ERR_TOO_MANY_ARGS = 320,
    ERR_PARAM_TYPE = 321,
    ERR_TOO_FEW_ARGS = 322,
    ERR_RETURN_TYPE_MISMATCH = 323,
    NT_TRUE = 324,
    NT_FALSE = 325,
    NT_CHR = 326,
    NT_STR = 327,
    NT_NUM = 328,
    MF = 329,
    MC = 330,
    NO_KIND_DEF_ = 331,
    VAR_ = 332,
    PARAM_ = 333,
    FUNCTION_ = 334,
    FIELD_ = 335,
    ARRAY_TYPE_ = 336,
    STRUCT_TYPE_ = 337,
    ALIAS_TYPE_ = 338,
    SCALAR_TYPE_ = 339,
    UNIVERSAL_ = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "ecma.y" /* yacc.c:1919  */

	struct {
		int nont;

		char *code;

		int endParentCheckpoint;
		int beginParentCheckpoint;

		int variableOrder;

		int nVariables;
		int nParams;
	} attr;

	union {
		struct {
			pobject obj;
			int name;
		} ID_;
		struct {
			pobject type;
		} T_,E_,L_,R_,TM_,F_,LV_;
		struct {
			pobject list;
		} LI_,DC_;
		struct{
			pobject list;
			int nSize;
		} LP_;
		struct{
			int val;
			pobject type;
		} BOOL_;
		struct {
			pobject type;
			int pos;
			union {
				int n;
				char c;
				char **s;
			} val;
		} CONST_;
		struct{
			pobject type;
			pobject param;
			int err;
		}MC_;
		struct{
			pobject type;
			pobject param;
			int err;
			int n;
		} LE_;
	}_;

#line 208 "ecma.tab.h" /* yacc.c:1919  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ECMA_TAB_H_INCLUDED  */
