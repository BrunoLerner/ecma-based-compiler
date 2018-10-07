/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARRAY = 258,
     BOOLEAN = 259,
     BREAK = 260,
     CHAR = 261,
     CONTINUE = 262,
     DO = 263,
     ELSE = 264,
     FALSE = 265,
     FUNCTION = 266,
     IF = 267,
     INTEGER = 268,
     OF = 269,
     STRING = 270,
     STRUCT = 271,
     TRUE = 272,
     TYPE = 273,
     VAR = 274,
     WHILE = 275,
     RETURN = 276,
     COLON = 277,
     SEMI_COLON = 278,
     COMMA = 279,
     EQUALS = 280,
     LEFT_SQUARE = 281,
     RIGHT_SQUARE = 282,
     LEFT_BRACES = 283,
     RIGHT_BRACES = 284,
     LEFT_PARENTHESIS = 285,
     RIGHT_PARENTHESIS = 286,
     AND = 287,
     OR = 288,
     LESS_THAN = 289,
     GREATER_THAN = 290,
     LESS_OR_EQUAL = 291,
     GREATER_OR_EQUAL = 292,
     NOT_EQUAL = 293,
     EQUAL_EQUAL = 294,
     PLUS = 295,
     PLUS_PLUS = 296,
     MINUS = 297,
     MINUS_MINUS = 298,
     TIMES = 299,
     DIVIDE = 300,
     DOT = 301,
     NOT = 302,
     CHARACTER = 303,
     NUMERAL = 304,
     STRINGVAL = 305,
     IDT = 306,
     ASSIGN = 307,
     UNKNOWN = 308,
     END = 309,
     chr = 310,
     num = 311,
     str = 312,
     id = 313,
     true = 314,
     false = 315,
     number = 316,
     identifier = 317,
     NO_KIND_DEF_ = 318,
     VAR_ = 319,
     PARAM_ = 320,
     FUNCTION_ = 321,
     FIELD_ = 322,
     ARRAY_TYPE_ = 323,
     STRUCT_TYPE_ = 324,
     ALIAS_TYPE_ = 325,
     SCALAR_TYPE_ = 326,
     UNIVERSAL_ = 327
   };
#endif
/* Tokens.  */
#define ARRAY 258
#define BOOLEAN 259
#define BREAK 260
#define CHAR 261
#define CONTINUE 262
#define DO 263
#define ELSE 264
#define FALSE 265
#define FUNCTION 266
#define IF 267
#define INTEGER 268
#define OF 269
#define STRING 270
#define STRUCT 271
#define TRUE 272
#define TYPE 273
#define VAR 274
#define WHILE 275
#define RETURN 276
#define COLON 277
#define SEMI_COLON 278
#define COMMA 279
#define EQUALS 280
#define LEFT_SQUARE 281
#define RIGHT_SQUARE 282
#define LEFT_BRACES 283
#define RIGHT_BRACES 284
#define LEFT_PARENTHESIS 285
#define RIGHT_PARENTHESIS 286
#define AND 287
#define OR 288
#define LESS_THAN 289
#define GREATER_THAN 290
#define LESS_OR_EQUAL 291
#define GREATER_OR_EQUAL 292
#define NOT_EQUAL 293
#define EQUAL_EQUAL 294
#define PLUS 295
#define PLUS_PLUS 296
#define MINUS 297
#define MINUS_MINUS 298
#define TIMES 299
#define DIVIDE 300
#define DOT 301
#define NOT 302
#define CHARACTER 303
#define NUMERAL 304
#define STRINGVAL 305
#define IDT 306
#define ASSIGN 307
#define UNKNOWN 308
#define END 309
#define chr 310
#define num 311
#define str 312
#define id 313
#define true 314
#define false 315
#define number 316
#define identifier 317
#define NO_KIND_DEF_ 318
#define VAR_ 319
#define PARAM_ 320
#define FUNCTION_ 321
#define FIELD_ 322
#define ARRAY_TYPE_ 323
#define STRUCT_TYPE_ 324
#define ALIAS_TYPE_ 325
#define SCALAR_TYPE_ 326
#define UNIVERSAL_ 327




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "ecma.y"
{
	int nName;
	struct object * pNext;
	t_kind eKind;
	union {
		struct {
			struct object *pType;
		  } Var, Param, Field;
		struct {
			struct object *pRetType;
			struct object *pParams;
		} Function;
		struct {
			struct object *pElemType; int nNumElems;
		} Array;
		struct {
			struct object *pFields;
		} Struct;
		struct {
			struct object *pBaseType;
		} Alias;
	}_;
}
/* Line 1529 of yacc.c.  */
#line 217 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

