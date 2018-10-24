/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ecma-parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./ecma-parser.tab.h"
#include "./includes/shared.h"
#include "./includes/codegen.h"
#define db(x) printf(#x);printf(": %d\n",x);
#define CODE_SIZE 500


void yyerror(const char *error) {
    fprintf(stderr,"erro na linha %d: %s\n ",line,error);
}

int hadWarning = 0;

int yywrap() {
	if(hadWarning)
		puts("compilado com warnings!");
	else
		puts("compilado com sucesso!");
	puts("salvo em ./output.code");
    return 1;
} 
  
int main(int argc, char **argv){
    yyparse();
    return 0;
} 


#line 99 "ecma-parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ecma-parser.tab.h".  */
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
#line 34 "ecma-parser.y" /* yacc.c:355  */

#include "./includes/object.h"
#include "./includes/syntax.h"
#include "./includes/attributes.h"

pobject p, t, f, t1, t2;


#line 138 "ecma-parser.tab.c" /* yacc.c:355  */

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
#line 49 "ecma-parser.y" /* yacc.c:355  */

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

#line 298 "ecma-parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ECMA_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 315 "ecma-parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   118,   118,   124,   128,   135,   139,   146,   150,   154,
     158,   162,   174,   178,   179,   182,   184,   185,   189,   202,
     205,   208,   214,   220,   226,   229,   233,   237,   244,   246,
     247,   251,   260,   272,   288,   303,   307,   314,   318,   322,
     332,   339,   346,   351,   358,   365,   372,   379,   386,   393,
     398,   405,   412,   417,   424,   431,   436,   442,   454,   466,
     479,   491,   492,   493,   499,   505,   509,   513,   518,   523,
     529,   533,   538,   539,   540,   545,   553,   564,   567,   570,
     573,   576
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRUCT", "OF", "COLON", "SEMI_COLON",
  "COMMA", "EQUALS", "LEFT_SQUARE", "RIGHT_SQUARE", "LEFT_BRACES",
  "RIGHT_BRACES", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "AND", "OR",
  "LESS_THAN", "GREATER_THAN", "LESS_OR_EQUAL", "GREATER_OR_EQUAL",
  "NOT_EQUAL", "PLUS", "PLUS_PLUS", "MINUS", "MINUS_MINUS", "TIMES",
  "DIVIDE", "DOT", "NOT", "PLUS_EQUAL", "MINUS_EQUAL", "TIMES_EQUAL",
  "DIVIDE_EQUAL", "TYPE", "RETURN", "ELSE", "BREAK", "WHILE", "VAR",
  "ASSIGN", "CONTINUE", "FUNCTION", "STRING", "IF", "BOOLEAN", "CHAR",
  "INTEGER", "DO", "const_array", "const_char", "const_number",
  "const_string", "id", "const_true", "const_false", "ERR_REDCL",
  "ERR_NO_DECL", "ERR_TYPE_EXPECTED", "ERR_BOOL_TYPE_EXPECTED",
  "ERR_TYPE_MISMATCH", "ERR_INVALID_TYPE", "ERR_KIND_NOT_STRUCT",
  "ERR_FIELD_NOT_DECL", "ERR_KIND_NOT_ARRAY", "ERR_INVALID_INDEX_TYPE",
  "ERR_KIND_NOT_VAR", "ERR_KIND_NOT_FUNCTION", "ERR_TOO_MANY_ARGS",
  "ERR_PARAM_TYPE", "ERR_TOO_FEW_ARGS", "ERR_RETURN_TYPE_MISMATCH",
  "NT_TRUE", "NT_FALSE", "NT_CHR", "NT_STR", "NT_NUM", "MF", "MC",
  "NO_KIND_DEF_", "VAR_", "PARAM_", "FUNCTION_", "FIELD_", "ARRAY_TYPE_",
  "STRUCT_TYPE_", "ALIAS_TYPE_", "SCALAR_TYPE_", "UNIVERSAL_", "\"then\"",
  "$accept", "P", "LDE", "DE", "T", "NB", "DT", "DC", "DF", "LP", "B",
  "LDV", "LS", "DV", "LI", "S", "E", "L", "R", "Y", "F", "LE", "LV", "IDD",
  "IDU", "TRUE", "FALSE", "CHR", "STR", "NUM", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      45,   -30,   -30,    51,    45,   -91,   -91,   -91,   -91,    33,
     -91,   -91,   -91,    22,    73,   -91,   -91,   -91,   -91,   -91,
      55,   -91,   -91,   -91,   -30,    79,    75,     2,    91,   -30,
     -91,    96,   -30,   125,   160,    24,    78,   -91,   140,   143,
     160,   -91,   -30,   -91,   160,   -30,   160,   160,   151,    87,
     -91,   -91,   -91,   -91,   108,   -91,   160,    85,   157,   153,
     -30,   167,   171,   144,   -91,   108,   116,   -91,   -91,    48,
     -91,   -91,    85,   127,    85,   127,    85,   -91,   -91,   -91,
     -91,    50,   -20,   -91,    72,   173,   -91,   -91,   -91,   -91,
     -91,   -91,    85,   106,   -91,    85,   149,   130,   -91,   -91,
     -91,    85,   127,    85,   101,   181,   148,     1,   -91,     1,
     -91,   -91,    85,    85,    85,    85,   -91,   -91,    85,   118,
     160,   161,   177,   -91,    89,   -91,    43,   -91,    85,    85,
      85,    85,    85,    85,    85,    85,   -20,   -20,   -91,   -91,
       4,    56,   144,   185,   144,    85,   -91,   -91,   181,   181,
     148,   148,   148,   148,   148,   148,    85,   -91,   -91,   -91,
     168,   179,     4,   144,   190,   -91,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     6,     5,    75,     0,
      12,     1,     3,     0,     0,    12,    10,     9,     8,     7,
       0,    76,    15,    11,    21,     0,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,    20,     0,    14,     0,     0,     0,     0,     0,     0,
      17,    29,    13,    19,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,    25,    27,     0,
      74,    16,     0,     0,     0,     0,     0,    79,    80,    77,
      78,     0,    52,    55,    56,    74,    65,    66,    67,    68,
      69,    37,     0,     0,    38,     0,     0,     0,    24,    23,
      26,     0,     0,     0,     0,    42,    49,    57,    63,    58,
      64,    39,     0,     0,     0,     0,    59,    60,     0,     0,
       0,     0,     0,    22,     0,    72,     0,    61,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,    53,    54,
      71,     0,     0,     0,     0,     0,    73,    36,    40,    41,
      47,    43,    44,    45,    46,    48,     0,    62,    33,    28,
      31,     0,    70,     0,     0,    32,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -91,   204,    -2,   194,   -91,   -91,   -91,   -91,
     162,   -91,   146,   147,   -34,   -62,   -90,   -26,   -10,    46,
     -37,   -91,   -51,    16,   -13,   -91,   -91,   -91,   -91,   188
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    14,     6,    35,     7,    27,
      64,    65,    66,    67,    36,    68,   104,   105,   106,    82,
      83,   141,    84,    37,    85,    86,    87,    88,    89,    90
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      23,    96,   119,    69,   100,   121,   114,   115,    49,    32,
     101,   124,    69,   126,    69,    69,    33,     9,    10,   128,
     129,    23,   107,     8,   109,    15,    93,    23,   140,   102,
      42,    23,    41,    23,    23,   100,    43,   108,    48,   110,
      28,    70,    50,    23,    52,    53,    69,    81,    39,   147,
      70,    11,    70,    70,    71,   161,   111,   101,   128,   129,
      70,    51,    70,   156,    26,    16,   162,    17,    18,    19,
     157,    20,   112,    13,   113,    21,   102,   138,   139,     1,
     158,   101,   160,    44,    70,    45,    24,     2,   103,   125,
      29,    69,    56,    69,    45,   116,    34,   117,    72,   146,
     102,   165,   148,   149,   128,   129,    38,    23,    73,    74,
      75,   120,    69,    45,    76,   127,   128,   129,   143,    54,
     150,   151,   152,   153,   154,   155,    30,    54,    99,    70,
      40,    70,   142,   128,   129,    77,    30,    78,    21,    79,
      80,    54,   123,    57,    46,    58,    59,    60,    47,    61,
      70,    57,    62,    58,    59,    54,    63,    61,   136,   137,
      62,    21,    54,    91,    63,    57,    92,    58,    59,    21,
     112,    61,   113,    94,    62,   144,   128,   129,    63,    57,
      21,    58,    59,    21,    95,    61,   118,   122,    62,   130,
     145,   159,    63,   164,   128,   129,   166,    21,   131,   132,
     133,   134,   135,    16,   163,    17,    18,    19,    12,    25,
      55,    97,    98,    21,    31
};

static const yytype_uint8 yycheck[] =
{
      13,    63,    92,    54,    66,    95,    26,    27,    42,     7,
       9,   101,    63,   103,    65,    66,    14,     1,     2,    15,
      16,    34,    73,    53,    75,     3,    60,    40,   118,    28,
       6,    44,    34,    46,    47,    97,    12,    74,    40,    76,
      24,    54,    44,    56,    46,    47,    97,    57,    32,     6,
      63,     0,    65,    66,    56,   145,     6,     9,    15,    16,
      73,    45,    75,     7,     9,    43,   156,    45,    46,    47,
      14,    49,    22,    40,    24,    53,    28,   114,   115,    34,
     142,     9,   144,     5,    97,     7,    13,    42,    40,   102,
      11,   142,     5,   144,     7,    23,     5,    25,    13,    10,
      28,   163,   128,   129,    15,    16,    10,   120,    23,    24,
      25,     5,   163,     7,    29,    14,    15,    16,   120,    11,
     130,   131,   132,   133,   134,   135,    51,    11,    12,   142,
       5,   144,    14,    15,    16,    50,    51,    52,    53,    54,
      55,    11,    12,    35,     4,    37,    38,    39,     5,    41,
     163,    35,    44,    37,    38,    11,    48,    41,   112,   113,
      44,    53,    11,     6,    48,    35,    13,    37,    38,    53,
      22,    41,    24,     6,    44,    14,    15,    16,    48,    35,
      53,    37,    38,    53,    13,    41,    13,    38,    44,     8,
      13,     6,    48,    14,    15,    16,     6,    53,    17,    18,
      19,    20,    21,    43,    36,    45,    46,    47,     4,    15,
      48,    65,    65,    53,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    42,    91,    92,    93,    96,    98,    53,   113,
     113,     0,    93,    40,    95,     3,    43,    45,    46,    47,
      49,    53,    94,   114,    13,    95,     9,    99,   113,    11,
      51,   119,     7,    14,     5,    97,   104,   113,    10,   113,
       5,    94,     6,    12,     5,     7,     4,     5,    94,   104,
      94,   113,    94,    94,    11,   100,     5,    35,    37,    38,
      39,    41,    44,    48,   100,   101,   102,   103,   105,   112,
     114,    94,    13,    23,    24,    25,    29,    50,    52,    54,
      55,   108,   109,   110,   112,   114,   115,   116,   117,   118,
     119,     6,    13,   104,     6,    13,   105,   102,   103,    12,
     105,     9,    28,    40,   106,   107,   108,   112,   110,   112,
     110,     6,    22,    24,    26,    27,    23,    25,    13,   106,
       5,   106,    38,    12,   106,   114,   106,    14,    15,    16,
       8,    17,    18,    19,    20,    21,   109,   109,   110,   110,
     106,   111,    14,    94,    14,    13,    10,     6,   107,   107,
     108,   108,   108,   108,   108,   108,     7,    14,   105,     6,
     105,   106,   106,    36,    14,   105,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    95,    96,    96,    96,    97,    97,    98,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112,   113,   114,   115,   116,   117,
     118,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     9,     8,     4,     5,     3,     9,     5,
       3,     0,     4,     3,     2,     1,     2,     1,     5,     3,
       1,     5,     7,     5,     7,     1,     4,     2,     2,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     1,     2,     2,     2,
       2,     3,     4,     2,     2,     1,     1,     1,     1,     1,
       3,     1,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 118 "ecma-parser.y" /* yacc.c:1666  */
    {
	FILE *file = fopen("output.code","w");
	fprintf(file,"%s",(yyvsp[0].attr.code));
	fclose(file);
}
#line 1539 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 3:
#line 124 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		sprintf((yyval.attr.code),"%s\n%s",(yyvsp[-1].attr.code),(yyvsp[0].attr.code));
	}
#line 1548 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 4:
#line 128 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		strcpy((yyval.attr.code), (yyvsp[0].attr.code));
	}
#line 1557 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 5:
#line 135 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[0].attr.code));
}
#line 1566 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 6:
#line 139 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		strcpy((yyval.attr.code),(yyvsp[0].attr.code));
}
#line 1575 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 7:
#line 146 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pInt;
}
#line 1584 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 8:
#line 150 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pChar;
}
#line 1593 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 9:
#line 154 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pBool;
}
#line 1602 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 10:
#line 158 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pString;
}
#line 1611 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 11:
#line 162 "ecma-parser.y" /* yacc.c:1666  */
    {
	p = (yyval._.ID_.obj);
	if (IS_TYPE_KIND(p->eKind) || p->eKind == UNIVERSAL_) {
		(yyval._.T_.type) = p;
	} else {
		(yyval._.T_.type) = pUniversal;
	}
	(yyval.attr.nont) = T;
}
#line 1625 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 12:
#line 174 "ecma-parser.y" /* yacc.c:1666  */
    {
  NewBlock();
}
#line 1633 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 14:
#line 179 "ecma-parser.y" /* yacc.c:1666  */
    {
     EndBlock();
   }
#line 1641 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 18:
#line 189 "ecma-parser.y" /* yacc.c:1666  */
    {
	EndBlock();
	int n = getFunctionNumber();
	int p = (yyvsp[-4].attr.nParams);
	int v = (yyvsp[0].attr.nParams);

		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s %d %d %d\n%s\n%s",
		"BEGIN_FUNC",n,p,v,
		(yyvsp[0].attr.code),
		"END_FUNC");
}
#line 1658 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 19:
#line 202 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = (yyvsp[-4].attr.nParams) + 1;
}
#line 1666 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 20:
#line 205 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = 1;
}
#line 1674 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 21:
#line 208 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = 0;
}
#line 1682 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 22:
#line 214 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = (yyvsp[-2].attr.nParams);

	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[-1].attr.code));
}
#line 1693 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 23:
#line 220 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[-1].attr.code));
	(yyval.attr.nParams) = 0;
}
#line 1703 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 24:
#line 226 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nVariables) = (yyvsp[-1].attr.nVariables) + 1;
}
#line 1711 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 25:
#line 229 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.nVariables) = 1;
}
#line 1719 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 26:
#line 233 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s",(yyvsp[-1].attr.code),(yyvsp[0].attr.code));
}
#line 1728 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 27:
#line 237 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[0].attr.code));
}
#line 1737 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 31:
#line 251 "ecma-parser.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s%d\n%s\n%c%d%c",
		(yyvsp[-2].attr.code),
		"TJMP L",l1,
		(yyvsp[0].attr.code),
		'L',l1,':');
}
#line 1751 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 32:
#line 260 "ecma-parser.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
	int l2 = getCheckpoint();
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s%d\n%s\n%c%d%c\n%s\n%c%d%c",
		(yyvsp[-4].attr.code),
		"TJMP L",l1,
		(yyvsp[-2].attr.code),
		'L',l1,':',
		(yyvsp[0].attr.code),
		'L',l2,':');
}
#line 1768 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 33:
#line 272 "ecma-parser.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
	int l2 = getCheckpoint();

	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%c%d%c\n%s\n%s%d\n%s\n%s%d\n%c%d%c",
		'L',l1,':',
		(yyvsp[-2].attr.code),
		"TJMP L",l2,
		(yyvsp[0].attr.code),
		"JMP L",l1,
		'L',l2,':');

	(yyvsp[0].attr.beginParentCheckpoint) = l1;
	(yyvsp[0].attr.endParentCheckpoint) = l2;
}
#line 1789 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 34:
#line 288 "ecma-parser.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
	int l2 = getCheckpoint();
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%c%d%c\n%s\n%s\n%s\n%s\n%d\n%c%d%c",
		'L',l1,':',
		(yyvsp[-5].attr.code),
		(yyvsp[-2].attr.code),
		"NOT",
		"TJMP L",l1,
		'L',l2,':');

	(yyvsp[-2].attr.beginParentCheckpoint) = l1;
	(yyvsp[-2].attr.endParentCheckpoint) = l2;
}
#line 1809 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 35:
#line 303 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[0].attr.code));
}
#line 1818 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 36:
#line 307 "ecma-parser.y" /* yacc.c:1666  */
    {
	int n = (yyvsp[-1].attr.value);
	sprintf((yyval.attr.code),"%s\n%s\n%s%d",
		(yyvsp[-3].attr.code),
		(yyvsp[-1].attr.code),
		"STORE_REF",n);
}
#line 1830 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 37:
#line 314 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"JMP L%d",(yyval.attr.endParentCheckpoint));
  }
#line 1839 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 38:
#line 318 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"JMP L%d",(yyval.attr.beginParentCheckpoint));
  }
#line 1848 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 39:
#line 322 "ecma-parser.y" /* yacc.c:1666  */
    {
	int n = (yyvsp[-1].attr.value);
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s%d\n%s",
		"LOAD_VAR ",n,
		"RET");
  }
#line 1860 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 40:
#line 332 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"AND");	
}
#line 1872 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 41:
#line 339 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"OR");
  }
#line 1884 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 42:
#line 346 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[0].attr.code));
  }
#line 1893 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 43:
#line 351 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"LT");
}
#line 1905 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 44:
#line 358 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"GT");
  }
#line 1917 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 45:
#line 365 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"LE");
  }
#line 1929 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 46:
#line 372 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"GE");
  }
#line 1941 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 47:
#line 379 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"EQ");
  }
#line 1953 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 48:
#line 386 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"NE");
  }
#line 1965 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 49:
#line 393 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[0].attr.code));
  }
#line 1974 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 50:
#line 398 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"ADD");
}
#line 1986 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 51:
#line 405 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"SUB");
  }
#line 1998 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 52:
#line 412 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[0].attr.code));
  }
#line 2007 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 53:
#line 417 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"MUL");
}
#line 2019 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 54:
#line 424 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"DIV");
  }
#line 2031 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 55:
#line 431 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	strcpy((yyval.attr.code),(yyvsp[0].attr.code));
  }
#line 2040 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 56:
#line 436 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s%d",
		(yyvsp[0].attr.code),
		"DE_REF ", (yyval.attr.variableOrder));
	}
#line 2051 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 57:
#line 442 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.variableOrder) = 1;
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s\n%s\n%s%d\n%s\n%s%d\n%s%d",
		(yyvsp[0].attr.code),
		"DUP",
		"DUP",
		"DE_REF ",(yyval.attr.variableOrder),
		"INC",
		"STORE_REF ",(yyval.attr.variableOrder),
		"DE_REF ",(yyval.attr.variableOrder));
}
#line 2068 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 58:
#line 455 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s\n%s\n%s\n%s\n%s\n%s",
		(yyvsp[0].attr.code),
		"DUP",
		"DUP",
		"DE_REF 1", 
		"DEC",
		"STORE_REF",
		"DE_REF 1");
	}
#line 2084 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 59:
#line 467 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",
		(yyvsp[0].attr.code),
		"DUP",
		"DUP",
		"DE_REF 1", 
		"INC",
		"STORE_REF",
		"DE_REF 1",
		"DEC");	
	}
#line 2101 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 60:
#line 479 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",
		(yyvsp[0].attr.code),
		"DUP",
		"DUP",
		"DE_REF 1", 
		"DEC",
		"STORE_REF",
		"DE_REF 1",
		"INC");	
	}
#line 2118 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 63:
#line 493 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	  sprintf((yyval.attr.code), "%s\n%s",
	  	(yyvsp[0].attr.code),
		"NEG");
  }
#line 2129 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 64:
#line 499 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	  sprintf((yyval.attr.code), "%s\n%s",
	  	(yyvsp[0].attr.code),
		"NOT");
  }
#line 2140 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 65:
#line 505 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	  strcpy((yyval.attr.code),"LOAD_TRUE");
  }
#line 2149 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 66:
#line 509 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	  strcpy((yyval.attr.code),"LOAD_FALSE");
  }
#line 2158 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 67:
#line 513 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	  int n = getConstantNumber();
	  sprintf((yyval.attr.code), "LOAD_CONST %d", n);
  }
#line 2168 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 68:
#line 518 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	  int n = getConstantNumber();
	  sprintf((yyval.attr.code), "LOAD_CONST %d", n);
  }
#line 2178 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 69:
#line 523 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	  int n = getConstantNumber();
	  sprintf((yyval.attr.code), "LOAD_CONST %d", n);
  }
#line 2188 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 70:
#line 529 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s", (yyvsp[-2].attr.code), (yyvsp[0].attr.code));
	}
#line 2197 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 71:
#line 533 "ecma-parser.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
		strcpy((yyval.attr.code), (yyvsp[0].attr.code));
	}
#line 2206 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 74:
#line 540 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.code) = (char*) malloc(CODE_SIZE*sizeof(char));
	sprintf((yyval.attr.code),"LOAD_REF %d",(yyvsp[0].attr.value));
   }
#line 2215 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 75:
#line 545 "ecma-parser.y" /* yacc.c:1666  */
    {
  (yyval._.ID_.name) = ids[currentLevel][secondaryToken].name;
  if( ids[currentLevel][secondaryToken].count  > 1 ) {
    printf("Erro de escopo: trying to redefine\n");
		exit(1);
  }
}
#line 2227 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 76:
#line 553 "ecma-parser.y" /* yacc.c:1666  */
    {
  char *name =ids[currentLevel][secondaryToken].name;
  (yyval._.ID_.name) = name;
  (yyval.attr.value) = searchName( name );
  if( (yyval.attr.value) == -1 ) {
        printf("Alerta de escopo: tentando usar inexistente %s\n",name);
		hadWarning = 1;
        addName(name);
  }
}
#line 2242 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 77:
#line 564 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.value) = getConstantNumber();
}
#line 2250 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 78:
#line 567 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.value) = getConstantNumber();
}
#line 2258 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 79:
#line 570 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.value) = getConstantNumber();
}
#line 2266 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 80:
#line 573 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.value) = getConstantNumber();
}
#line 2274 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;

  case 81:
#line 576 "ecma-parser.y" /* yacc.c:1666  */
    {
	(yyval.attr.value) = getConstantNumber();
}
#line 2282 "ecma-parser.tab.c" /* yacc.c:1666  */
    break;


#line 2286 "ecma-parser.tab.c" /* yacc.c:1666  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
