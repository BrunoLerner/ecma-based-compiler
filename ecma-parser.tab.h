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

#ifndef YY_YY_ECMA_PARSER_TAB_H_INCLUDED
# define YY_YY_ECMA_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 34 "ecma-parser.y" /* yacc.c:1919  */

#include "./includes/object.h"
#include "./includes/syntax.h"
#include "./includes/attributes.h"

pobject p, t, f, t1, t2;


#line 53 "ecma-parser.tab.h" /* yacc.c:1919  */

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
    PLUS = 277,
    PLUS_PLUS = 278,
    MINUS = 279,
    MINUS_MINUS = 280,
    TIMES = 281,
    DIVIDE = 282,
    DOT = 283,
    NOT = 284,
    PLUS_EQUAL = 285,
    MINUS_EQUAL = 286,
    TIMES_EQUAL = 287,
    DIVIDE_EQUAL = 288,
    TYPE = 289,
    RETURN = 290,
    ELSE = 291,
    BREAK = 292,
    WHILE = 293,
    VAR = 294,
    ASSIGN = 295,
    CONTINUE = 296,
    FUNCTION = 297,
    STRING = 298,
    IF = 299,
    BOOLEAN = 300,
    CHAR = 301,
    INTEGER = 302,
    DO = 303,
    const_array = 304,
    const_char = 305,
    const_number = 306,
    const_string = 307,
    id = 308,
    const_true = 309,
    const_false = 310,
    ERR_REDCL = 311,
    ERR_NO_DECL = 312,
    ERR_TYPE_EXPECTED = 313,
    ERR_BOOL_TYPE_EXPECTED = 314,
    ERR_TYPE_MISMATCH = 315,
    ERR_INVALID_TYPE = 316,
    ERR_KIND_NOT_STRUCT = 317,
    ERR_FIELD_NOT_DECL = 318,
    ERR_KIND_NOT_ARRAY = 319,
    ERR_INVALID_INDEX_TYPE = 320,
    ERR_KIND_NOT_VAR = 321,
    ERR_KIND_NOT_FUNCTION = 322,
    ERR_TOO_MANY_ARGS = 323,
    ERR_PARAM_TYPE = 324,
    ERR_TOO_FEW_ARGS = 325,
    ERR_RETURN_TYPE_MISMATCH = 326,
    NT_TRUE = 327,
    NT_FALSE = 328,
    NT_CHR = 329,
    NT_STR = 330,
    NT_NUM = 331,
    MF = 332,
    MC = 333,
    NO_KIND_DEF_ = 334,
    VAR_ = 335,
    PARAM_ = 336,
    FUNCTION_ = 337,
    FIELD_ = 338,
    ARRAY_TYPE_ = 339,
    STRUCT_TYPE_ = 340,
    ALIAS_TYPE_ = 341,
    SCALAR_TYPE_ = 342,
    UNIVERSAL_ = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 49 "ecma-parser.y" /* yacc.c:1919  */

	struct {
		int nont;

		char *code;

		int endParentCheckpoint;
		int beginParentCheckpoint;

		int value;

		int variableOrder;

		int nVariables;
		int nParams;
	} attr;

	union {
		struct {
			pobject obj;
			char* name;
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

#line 213 "ecma-parser.tab.h" /* yacc.c:1919  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ECMA_PARSER_TAB_H_INCLUDED  */
