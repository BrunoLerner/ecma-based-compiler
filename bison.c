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
#line 1 "ecma.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "./ecma.tab.h"
#include "./includes/shared.h"
#define db(x) printf(#x);printf(": %d\n",x);


void yyerror(const char *error) {
    fprintf(stderr,"error: %s\n na linha %d",error,line);
}

int hadWarning = 0;

int yywrap() {
	if(hadWarning)
		puts("compilado com warnings!\n");
	else
		puts("compilado com sucesso!\n");
    return 1;
} 
  
int main(int argc, char **argv){
    yyparse();
    return 0;
} 


#line 95 "ecma.tab.c" /* yacc.c:339  */

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
   by #include "ecma.tab.h".  */
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
#line 30 "ecma.y" /* yacc.c:355  */

#include "./includes/object.h"
#include "./includes/syntax.h"
#include "./includes/attributes.h"

pobject p, t, f, t1, t2;


#line 134 "ecma.tab.c" /* yacc.c:355  */

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
#line 44 "ecma.y" /* yacc.c:355  */

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

#line 289 "ecma.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ECMA_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 306 "ecma.tab.c" /* yacc.c:358  */

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
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   115,   119,   126,   130,   137,   141,   145,
     149,   153,   165,   169,   170,   173,   175,   176,   180,   193,
     196,   199,   205,   211,   217,   220,   224,   228,   235,   237,
     238,   242,   251,   263,   279,   294,   298,   299,   303,   307,
     314,   321,   328,   334,   341,   348,   355,   362,   369,   376,
     382,   389,   396,   402,   409,   416,   422,   429,   442,   454,
     467,   479,   480,   481,   487,   493,   498,   503,   508,   513,
     519,   523,   528,   529,   530,   534,   543,   553,   554,   555,
     556,   557
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
  "NOT_EQUAL", "EQUAL_EQUAL", "PLUS", "PLUS_PLUS", "MINUS", "MINUS_MINUS",
  "TIMES", "DIVIDE", "DOT", "NOT", "TYPE", "RETURN", "ELSE", "BREAK",
  "WHILE", "VAR", "ASSIGN", "CONTINUE", "FUNCTION", "STRING", "IF",
  "BOOLEAN", "CHAR", "INTEGER", "DO", "const_array", "const_char",
  "const_number", "const_string", "id", "const_true", "const_false",
  "ERR_REDCL", "ERR_NO_DECL", "ERR_TYPE_EXPECTED",
  "ERR_BOOL_TYPE_EXPECTED", "ERR_TYPE_MISMATCH", "ERR_INVALID_TYPE",
  "ERR_KIND_NOT_STRUCT", "ERR_FIELD_NOT_DECL", "ERR_KIND_NOT_ARRAY",
  "ERR_INVALID_INDEX_TYPE", "ERR_KIND_NOT_VAR", "ERR_KIND_NOT_FUNCTION",
  "ERR_TOO_MANY_ARGS", "ERR_PARAM_TYPE", "ERR_TOO_FEW_ARGS",
  "ERR_RETURN_TYPE_MISMATCH", "NT_TRUE", "NT_FALSE", "NT_CHR", "NT_STR",
  "NT_NUM", "MF", "MC", "NO_KIND_DEF_", "VAR_", "PARAM_", "FUNCTION_",
  "FIELD_", "ARRAY_TYPE_", "STRUCT_TYPE_", "ALIAS_TYPE_", "SCALAR_TYPE_",
  "UNIVERSAL_", "\"then\"", "$accept", "P", "LDE", "DE", "T", "NB", "DT",
  "DC", "DF", "LP", "B", "LDV", "LS", "DV", "LI", "S", "E", "L", "R", "Y",
  "F", "LE", "LV", "IDD", "IDU", "TRUE", "FALSE", "CHR", "STR", "NUM", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -69

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,   -48,   -48,    14,   -20,   -69,   -69,   -69,   -69,   -19,
     -69,   -69,   -69,    21,    36,   -69,   -69,   -69,   -69,   -69,
      63,   -69,   -69,   -69,   -48,    66,    61,     9,    79,   -48,
     -69,   102,   -48,   122,   117,    45,    10,   -69,   134,   140,
     117,   -69,   -48,   -69,   117,   -48,   117,   117,   130,    82,
     -69,   -69,   -69,   -69,   108,   -69,   117,    81,   145,   162,
     -48,   174,   178,   158,   -69,   108,   136,   -69,   -69,    -1,
     -69,   -69,    81,   154,    81,   154,    81,   -69,   -69,   -69,
     -69,    53,    62,    93,   138,   -69,    69,   182,   -69,   -69,
     -69,   -69,   -69,   -69,    81,   147,   -69,    81,   163,   144,
     -69,   -69,   -69,    81,   154,    81,    86,    -4,   -69,    -4,
     -69,   -69,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,   -69,   -69,    81,   120,   117,   148,
     184,   -69,    98,   -69,    60,   -69,    62,    62,    93,    93,
      93,    93,    93,    93,   138,   138,   -69,   -69,   157,    33,
     158,   199,   158,    81,   -69,   -69,    81,   -69,   -69,   -69,
     173,   186,   157,   158,   201,   -69,   -69
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
      78,     0,    42,    49,    52,    55,    56,    74,    65,    66,
      67,    68,    69,    37,     0,     0,    38,     0,     0,     0,
      24,    23,    26,     0,     0,     0,     0,    57,    63,    58,
      64,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    60,     0,     0,     0,     0,
       0,    22,     0,    72,     0,    61,    40,    41,    47,    43,
      44,    45,    46,    48,    50,    51,    53,    54,    71,     0,
       0,     0,     0,     0,    73,    36,     0,    62,    33,    28,
      31,     0,    70,     0,     0,    32,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,   205,    -2,   195,   -69,   -69,   -69,   -69,
     164,   -69,   146,   149,   -12,   -60,   -68,    71,     6,    67,
     -67,   -69,   -53,    72,   -13,   -69,   -69,   -69,   -69,   187
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    22,    14,     6,    35,     7,    27,
      64,    65,    66,    67,    36,    68,    81,    82,    83,    84,
      85,   149,    86,    37,    87,    88,    89,    90,    91,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      23,    69,     8,    98,   106,   103,   102,   108,   103,   110,
      69,     1,    69,    69,    11,    44,    32,    45,    13,     2,
     107,    23,   109,    33,    15,   104,   127,    23,   104,   129,
      49,    23,    41,    23,    23,   132,   105,   134,    48,   102,
     156,    70,    50,    23,    52,    53,    69,   157,    95,    24,
      70,    42,    70,    70,    71,   146,   147,    43,   148,   111,
      70,    16,    70,    17,    18,    19,   155,    20,   112,   113,
     114,    21,    26,     9,    10,   112,   113,    29,   103,   115,
     116,   117,   118,   119,    34,   161,    70,    56,   162,    45,
     158,   133,   160,   124,    72,   125,    28,    69,   104,    69,
     135,   112,   113,   165,    39,    73,    74,    75,   154,    30,
      69,    76,    38,   112,   113,    23,   120,    51,   121,    54,
     138,   139,   140,   141,   142,   143,   151,    40,    77,    30,
      78,    21,    79,    80,   150,   112,   113,    70,    46,    70,
      57,    54,    58,    59,    60,    47,    61,    54,   101,    62,
      70,    93,   128,    63,    45,    54,   131,    16,    21,    17,
      18,    19,   152,   112,   113,   122,   123,    21,    57,    54,
      58,    59,   112,   113,    61,    94,    57,    62,    58,    59,
      96,    63,    61,   136,   137,    62,    21,   144,   145,    63,
      57,    97,    58,    59,    21,   126,    61,   153,   130,    62,
     164,   112,   113,    63,    21,   159,   163,   166,    21,    12,
      25,    99,    55,    31,   100
};

static const yytype_uint8 yycheck[] =
{
      13,    54,    50,    63,    72,     9,    66,    74,     9,    76,
      63,    31,    65,    66,     0,     5,     7,     7,    37,    39,
      73,    34,    75,    14,     3,    29,    94,    40,    29,    97,
      42,    44,    34,    46,    47,   103,    37,   105,    40,    99,
       7,    54,    44,    56,    46,    47,    99,    14,    60,    13,
      63,     6,    65,    66,    56,   122,   123,    12,   126,     6,
      73,    40,    75,    42,    43,    44,     6,    46,    15,    16,
       8,    50,     9,     1,     2,    15,    16,    11,     9,    17,
      18,    19,    20,    21,     5,   153,    99,     5,   156,     7,
     150,   104,   152,    24,    13,    26,    24,   150,    29,   152,
      14,    15,    16,   163,    32,    24,    25,    26,    10,    48,
     163,    30,    10,    15,    16,   128,    23,    45,    25,    11,
     114,   115,   116,   117,   118,   119,   128,     5,    47,    48,
      49,    50,    51,    52,    14,    15,    16,   150,     4,   152,
      32,    11,    34,    35,    36,     5,    38,    11,    12,    41,
     163,     6,     5,    45,     7,    11,    12,    40,    50,    42,
      43,    44,    14,    15,    16,    27,    28,    50,    32,    11,
      34,    35,    15,    16,    38,    13,    32,    41,    34,    35,
       6,    45,    38,   112,   113,    41,    50,   120,   121,    45,
      32,    13,    34,    35,    50,    13,    38,    13,    35,    41,
      14,    15,    16,    45,    50,     6,    33,     6,    50,     4,
      15,    65,    48,    26,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    39,    88,    89,    90,    93,    95,    50,   110,
     110,     0,    90,    37,    92,     3,    40,    42,    43,    44,
      46,    50,    91,   111,    13,    92,     9,    96,   110,    11,
      48,   116,     7,    14,     5,    94,   101,   110,    10,   110,
       5,    91,     6,    12,     5,     7,     4,     5,    91,   101,
      91,   110,    91,    91,    11,    97,     5,    32,    34,    35,
      36,    38,    41,    45,    97,    98,    99,   100,   102,   109,
     111,    91,    13,    24,    25,    26,    30,    47,    49,    51,
      52,   103,   104,   105,   106,   107,   109,   111,   112,   113,
     114,   115,   116,     6,    13,   101,     6,    13,   102,    99,
     100,    12,   102,     9,    29,    37,   103,   109,   107,   109,
     107,     6,    15,    16,     8,    17,    18,    19,    20,    21,
      23,    25,    27,    28,    24,    26,    13,   103,     5,   103,
      35,    12,   103,   111,   103,    14,   104,   104,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   107,   103,   108,
      14,    91,    14,    13,    10,     6,     7,    14,   102,     6,
     102,   103,   103,    33,    14,   102,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    93,    93,    93,    94,    94,    95,    96,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   110,   111,   112,   113,   114,
     115,   116
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
#line 111 "ecma.y" /* yacc.c:1666  */
    {
	printf("%s",(yyvsp[0].attr.code));
}
#line 1527 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 3:
#line 115 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code),"%s\n%s",(yyvsp[-1].attr.code),(yyvsp[0].attr.code));
	}
#line 1536 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 4:
#line 119 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code), (yyvsp[0].attr.code));				
	}
#line 1545 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 5:
#line 126 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),(yyvsp[0].attr.code));
}
#line 1554 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 6:
#line 130 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code),(yyvsp[0].attr.code));
}
#line 1563 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 7:
#line 137 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pInt;
}
#line 1572 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 8:
#line 141 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pChar;
}
#line 1581 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 9:
#line 145 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pBool;
}
#line 1590 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 10:
#line 149 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nont) = T;
	(yyval._.T_.type) = pString;
}
#line 1599 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 11:
#line 153 "ecma.y" /* yacc.c:1666  */
    {
	p = (yyval._.ID_.obj);
	if (IS_TYPE_KIND(p->eKind) || p->eKind == UNIVERSAL_) {
		(yyval._.T_.type) = p;
	} else {
		(yyval._.T_.type) = pUniversal;
	}
	(yyval.attr.nont) = T;
}
#line 1613 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 12:
#line 165 "ecma.y" /* yacc.c:1666  */
    {
  NewBlock();
}
#line 1621 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 14:
#line 170 "ecma.y" /* yacc.c:1666  */
    {
     EndBlock();
   }
#line 1629 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 18:
#line 180 "ecma.y" /* yacc.c:1666  */
    {
	EndBlock();
	int n = getFunctionNumber();
	int p = (yyvsp[-4].attr.nParams);
	int v = (yyvsp[0].attr.nParams);

		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s %d %d %d\n%s\n%s\n",
		"BEGIN_FUNC",n,p,v,
		(yyvsp[0].attr.code),
		"END_FUNC");
}
#line 1646 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 19:
#line 193 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = (yyvsp[-4].attr.nParams) + 1;
}
#line 1654 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 20:
#line 196 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = 1;
}
#line 1662 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 21:
#line 199 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = 0;
}
#line 1670 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 22:
#line 205 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nParams) = (yyvsp[-2].attr.nParams);

		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s\n",(yyvsp[-1].attr.code));
}
#line 1681 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 23:
#line 211 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(50000*sizeof(char));
		sprintf((yyval.attr.code),(yyvsp[-1].attr.code));
		(yyval.attr.nParams) = 0;
}
#line 1691 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 24:
#line 217 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nVariables) = (yyvsp[-1].attr.nVariables) + 1;
}
#line 1699 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 25:
#line 220 "ecma.y" /* yacc.c:1666  */
    {
	(yyval.attr.nVariables) = 1;
}
#line 1707 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 26:
#line 224 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(50000*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s",(yyvsp[-1].attr.code),(yyvsp[0].attr.code));
}
#line 1716 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 27:
#line 228 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s",(yyvsp[0].attr.code));
}
#line 1725 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 31:
#line 242 "ecma.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s%d\n%s\n%c%d%c\n",
		(yyvsp[-2].attr.code),
		"TJMP L",l1,
		(yyvsp[0].attr.code),
		'L',l1,':');
}
#line 1739 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 32:
#line 251 "ecma.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
	int l2 = getCheckpoint();
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s%d\n%s\n%c%d%c\n%s\n%c%s%c",
		(yyvsp[-4].attr.code),
		"TJMP L",l1,
		(yyvsp[-2].attr.code),
		'L',l1,':',
		(yyvsp[0].attr.code),
		'L',l2,':');
}
#line 1756 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 33:
#line 263 "ecma.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
	int l2 = getCheckpoint();

		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%c%s%c\n%s\n%s%d\n%s\n%s%d\n%c%d%c\n",
		'L',l1,':',
		(yyvsp[-1].attr.code),
		"TJMP L",l2,
		(yyvsp[0].attr.code),
		"JMP L",l1,
		'L',l2,':');

	(yyvsp[0].attr.beginParentCheckpoint) = l1;
	(yyvsp[0].attr.endParentCheckpoint) = l2;
}
#line 1777 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 34:
#line 279 "ecma.y" /* yacc.c:1666  */
    {
	int l1 = getCheckpoint();
	int l2 = getCheckpoint();
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
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
#line 1797 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 35:
#line 294 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),(yyvsp[0].attr.code));
}
#line 1806 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 37:
#line 299 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"JMP L%d",(yyval.attr.endParentCheckpoint));
  }
#line 1815 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 38:
#line 303 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"JMP L%d",(yyval.attr.beginParentCheckpoint));
  }
#line 1824 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 39:
#line 307 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code),"TESTELOKO");
  }
#line 1833 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 40:
#line 314 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"AND");	
}
#line 1845 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 41:
#line 321 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"OR");
  }
#line 1857 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 42:
#line 328 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  sprintf((yyval.attr.code), "%s",
	  	(yyvsp[0].attr.code));
  }
#line 1867 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 43:
#line 334 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"LT");
}
#line 1879 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 44:
#line 341 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"GT");
  }
#line 1891 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 45:
#line 348 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"LE");
  }
#line 1903 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 46:
#line 355 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"GE");
  }
#line 1915 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 47:
#line 362 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"EQ");
  }
#line 1927 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 48:
#line 369 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"NE");
  }
#line 1939 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 49:
#line 376 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s",
		(yyvsp[0].attr.code));
  }
#line 1949 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 50:
#line 382 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"ADD");
}
#line 1961 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 51:
#line 389 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"SUB");
  }
#line 1973 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 52:
#line 396 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s",
		(yyvsp[0].attr.code));
  }
#line 1983 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 53:
#line 402 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"MUL");
}
#line 1995 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 54:
#line 409 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n%s\n%s",
		(yyvsp[-2].attr.code),
		(yyvsp[0].attr.code),
		"DIV");
  }
#line 2007 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 55:
#line 416 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code), "%s\n",
		(yyvsp[0].attr.code));
  }
#line 2017 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 56:
#line 422 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s%d\n",
		(yyvsp[0].attr.code),
		"DE_REF", 
		(yyval.attr.variableOrder));	
	}
#line 2029 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 57:
#line 429 "ecma.y" /* yacc.c:1666  */
    {
		// yellow sign
	(yyval.attr.variableOrder) = 1;
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	sprintf((yyval.attr.code),"%s\n%s\n%s%d\n%s\n%s%d\n%s%d",
		(yyvsp[0].attr.code),
		"DUP",
		"DUP",
		"DE_REF ",(yyval.attr.variableOrder),
		"INC",
		"STORE_REF ",(yyval.attr.variableOrder),
		"DE_REF ",(yyval.attr.variableOrder));	  	  		
}
#line 2047 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 58:
#line 443 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s\n%s\n%s\n%s\n%s\n%s",
		(yyvsp[0].attr.code),		
		"DUP",
		"DUP",
		"DE_REF 1", 
		"DEC",
		"STORE_REF",
		"DE_REF 1");	
	}
#line 2063 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 59:
#line 455 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
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
#line 2080 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 60:
#line 467 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
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
#line 2097 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 63:
#line 481 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  sprintf((yyval.attr.code), "%s\n%s\n",
	  	(yyvsp[0].attr.code),
		"NEG");
  }
#line 2108 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 64:
#line 487 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  sprintf((yyval.attr.code), "%s\n%s\n",
	  	(yyvsp[0].attr.code),
		"NOT");
  }
#line 2119 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 65:
#line 493 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  sprintf((yyval.attr.code), "%s\n",
		"LOAD_TRUE");
  }
#line 2129 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 66:
#line 498 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  sprintf((yyval.attr.code), "%s\n",
		"LOAD_FALSE");
  }
#line 2139 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 67:
#line 503 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  int n = getConstantNumber();
	  sprintf((yyval.attr.code), "LOAD_CONST %d\n", n);
  }
#line 2149 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 68:
#line 508 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  int n = getConstantNumber();
	  sprintf((yyval.attr.code), "LOAD_CONST %d\n", n);
  }
#line 2159 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 69:
#line 513 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
	  int n = getConstantNumber();
	  sprintf((yyval.attr.code), "LOAD_CONST %d\n", n);
  }
#line 2169 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 70:
#line 519 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code), "%s\n%s\n", (yyvsp[-2].attr.code), (yyvsp[0].attr.code));
	}
#line 2178 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 71:
#line 523 "ecma.y" /* yacc.c:1666  */
    {
		(yyval.attr.code) = (char*) malloc(5000*sizeof(char));
		sprintf((yyval.attr.code), "%s\n", (yyvsp[0].attr.code));		 		 		 		 		 
	}
#line 2187 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 74:
#line 530 "ecma.y" /* yacc.c:1666  */
    {
		 // TODO
   }
#line 2195 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 75:
#line 534 "ecma.y" /* yacc.c:1666  */
    {
	printf("IDD -> id\n");
  (yyval._.ID_.name) = ids[currentLevel][secondaryToken].name;
  if( ids[currentLevel][secondaryToken].count  > 1 ) {
    printf("scope error: trying to redefine\n");
		exit(1);
  }
}
#line 2208 "ecma.tab.c" /* yacc.c:1666  */
    break;

  case 76:
#line 543 "ecma.y" /* yacc.c:1666  */
    {
  char *name =ids[currentLevel][secondaryToken].name;
  (yyval._.ID_.name) = name;
  if( searchName( name ) == -1 ) {
        printf("scope warning: trying to use unexisting %s\n",name);
		hadWarning = 1;
        addName(name);
  }
}
#line 2222 "ecma.tab.c" /* yacc.c:1666  */
    break;


#line 2226 "ecma.tab.c" /* yacc.c:1666  */
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
