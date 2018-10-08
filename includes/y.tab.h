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
     OF = 259,
     COLON = 260,
     SEMI_COLON = 261,
     STRUCT = 262,
     COMMA = 263,
     EQUALS = 264,
     LEFT_SQUARE = 265,
     RIGHT_SQUARE = 266,
     LEFT_BRACES = 267,
     RIGHT_BRACES = 268,
     LEFT_PARENTHESIS = 269,
     RIGHT_PARENTHESIS = 270,
     AND = 271,
     OR = 272,
     LESS_THAN = 273,
     GREATER_THAN = 274,
     LESS_OR_EQUAL = 275,
     GREATER_OR_EQUAL = 276,
     NOT_EQUAL = 277,
     EQUAL_EQUAL = 278,
     PLUS = 279,
     PLUS_PLUS = 280,
     MINUS = 281,
     MINUS_MINUS = 282,
     TIMES = 283,
     DIVIDE = 284,
     DOT = 285,
     NOT = 286,
     TYPE = 287,
     RETURN = 288,
     ELSE = 289,
     BREAK = 290,
     WHILE = 291,
     VAR = 292,
     ASSIGN = 293,
     CONTINUE = 294,
     FUNCTION = 295,
     STRING = 296,
     IF = 297,
     BOOLEAN = 298,
     CHAR = 299,
     INTEGER = 300,
     DO = 301,
     const_array = 302,
     const_char = 303,
     const_number = 304,
     const_string = 305,
     id = 306,
     const_true = 307,
     const_false = 308,
     ERR_REDCL = 309,
     ERR_NO_DECL = 310,
     ERR_TYPE_EXPECTED = 311,
     ERR_BOOL_TYPE_EXPECTED = 312,
     ERR_TYPE_MISMATCH = 313,
     ERR_INVALID_TYPE = 314,
     ERR_KIND_NOT_STRUCT = 315,
     ERR_FIELD_NOT_DECL = 316,
     ERR_KIND_NOT_ARRAY = 317,
     ERR_INVALID_INDEX_TYPE = 318,
     ERR_KIND_NOT_VAR = 319,
     ERR_KIND_NOT_FUNCTION = 320,
     ERR_TOO_MANY_ARGS = 321,
     ERR_PARAM_TYPE = 322,
     ERR_TOO_FEW_ARGS = 323,
     ERR_RETURN_TYPE_MISMATCH = 324,
     NT_TRUE = 325,
     NT_FALSE = 326,
     NT_CHR = 327,
     NT_STR = 328,
     NT_NUM = 329,
     MF = 330,
     MC = 331,
     NO_KIND_DEF_ = 332,
     VAR_ = 333,
     PARAM_ = 334,
     FUNCTION_ = 335,
     FIELD_ = 336,
     ARRAY_TYPE_ = 337,
     STRUCT_TYPE_ = 338,
     ALIAS_TYPE_ = 339,
     SCALAR_TYPE_ = 340,
     UNIVERSAL_ = 341
   };
#endif
/* Tokens.  */
#define ARRAY 258
#define OF 259
#define COLON 260
#define SEMI_COLON 261
#define STRUCT 262
#define COMMA 263
#define EQUALS 264
#define LEFT_SQUARE 265
#define RIGHT_SQUARE 266
#define LEFT_BRACES 267
#define RIGHT_BRACES 268
#define LEFT_PARENTHESIS 269
#define RIGHT_PARENTHESIS 270
#define AND 271
#define OR 272
#define LESS_THAN 273
#define GREATER_THAN 274
#define LESS_OR_EQUAL 275
#define GREATER_OR_EQUAL 276
#define NOT_EQUAL 277
#define EQUAL_EQUAL 278
#define PLUS 279
#define PLUS_PLUS 280
#define MINUS 281
#define MINUS_MINUS 282
#define TIMES 283
#define DIVIDE 284
#define DOT 285
#define NOT 286
#define TYPE 287
#define RETURN 288
#define ELSE 289
#define BREAK 290
#define WHILE 291
#define VAR 292
#define ASSIGN 293
#define CONTINUE 294
#define FUNCTION 295
#define STRING 296
#define IF 297
#define BOOLEAN 298
#define CHAR 299
#define INTEGER 300
#define DO 301
#define const_array 302
#define const_char 303
#define const_number 304
#define const_string 305
#define id 306
#define const_true 307
#define const_false 308
#define ERR_REDCL 309
#define ERR_NO_DECL 310
#define ERR_TYPE_EXPECTED 311
#define ERR_BOOL_TYPE_EXPECTED 312
#define ERR_TYPE_MISMATCH 313
#define ERR_INVALID_TYPE 314
#define ERR_KIND_NOT_STRUCT 315
#define ERR_FIELD_NOT_DECL 316
#define ERR_KIND_NOT_ARRAY 317
#define ERR_INVALID_INDEX_TYPE 318
#define ERR_KIND_NOT_VAR 319
#define ERR_KIND_NOT_FUNCTION 320
#define ERR_TOO_MANY_ARGS 321
#define ERR_PARAM_TYPE 322
#define ERR_TOO_FEW_ARGS 323
#define ERR_RETURN_TYPE_MISMATCH 324
#define NT_TRUE 325
#define NT_FALSE 326
#define NT_CHR 327
#define NT_STR 328
#define NT_NUM 329
#define MF 330
#define MC 331
#define NO_KIND_DEF_ 332
#define VAR_ 333
#define PARAM_ 334
#define FUNCTION_ 335
#define FIELD_ 336
#define ARRAY_TYPE_ 337
#define STRUCT_TYPE_ 338
#define ALIAS_TYPE_ 339
#define SCALAR_TYPE_ 340
#define UNIVERSAL_ 341




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 23 "ecma.y"
{
	int nont;
	// union {
	// 	struct {
	// 		pobject obj;
	// 		int name;
	// 	} ID_;
	// 	struct {
	// 		pobject type;
	// 	} T_,E_,L_,R_,TM_,F_,LV_;
	// 	struct {
	// 		pobject list;
	// 	} LI_,DC_;
	// 	struct{
	// 		pobject list;
	// 		int nSize;
	// 	} LP_;
	// 	struct{
	// 		int val;
	// 		pobject type;
	// 	} BOOL_;
	// 	struct {
	// 		pobject type;
	// 		int pos;
	// 		union {
	// 			int n;
	// 			char c;
	// 			char **s;
	// 		} val;
	// 	} CONST_;
	// 	struct{
	// 		pobject type;
	// 		pobject param;
	// 		int err;
	// 	}MC_;
	// 	struct{
	// 		pobject type;
	// 		pobject param;
	// 		int err;
	// 		int n;
	// 	} LE_;
	// }_;
}
/* Line 1529 of yacc.c.  */
#line 265 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

