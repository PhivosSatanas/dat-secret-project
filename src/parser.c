/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 5 "./src/parser.y"

	#include "../include/manage.h"
	#include "../include/SymbolTable.h"
	
	int yyerror (const char* yaccProvidedMessage);
	int yylex (void);


/* Line 268 of yacc.c  */
#line 80 "./src/parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     FOR = 261,
     NOT = 262,
     RETURN = 263,
     BREAK = 264,
     CONTINUE = 265,
     LOCAL = 266,
     DBLCOLON = 267,
     TRUE = 268,
     FALSE = 269,
     NIL = 270,
     FUNCTION = 271,
     EQ = 272,
     NOT_EQ = 273,
     DBLDOT = 274,
     STR = 275,
     PLUS_PLUS = 276,
     MINUS_MINUS = 277,
     GREATER_EQ = 278,
     LESS_EQ = 279,
     AND = 280,
     OR = 281,
     UNRECOGNIZED = 282,
     ID = 283,
     NUMBER = 284,
     UMINUS = 285,
     DBL_DOT = 286
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define NOT 262
#define RETURN 263
#define BREAK 264
#define CONTINUE 265
#define LOCAL 266
#define DBLCOLON 267
#define TRUE 268
#define FALSE 269
#define NIL 270
#define FUNCTION 271
#define EQ 272
#define NOT_EQ 273
#define DBLDOT 274
#define STR 275
#define PLUS_PLUS 276
#define MINUS_MINUS 277
#define GREATER_EQ 278
#define LESS_EQ 279
#define AND 280
#define OR 281
#define UNRECOGNIZED 282
#define ID 283
#define NUMBER 284
#define UMINUS 285
#define DBL_DOT 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 17 "./src/parser.y"

	char * 			stringVal;
	int				intVal;
	double 			realVal;
	struct Symbol * symbolVal;
	struct Expr   * exprVal;



/* Line 293 of yacc.c  */
#line 188 "./src/parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 200 "./src/parser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   685

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    37,     2,     2,
      43,    44,    35,    33,    46,    34,    39,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    45,
      32,    30,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    49,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    38,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      20,    23,    26,    28,    30,    32,    34,    36,    38,    42,
      46,    50,    54,    58,    62,    66,    70,    74,    78,    82,
      87,    92,    94,    95,    99,   102,   105,   108,   111,   114,
     117,   119,   123,   125,   127,   129,   133,   135,   137,   140,
     143,   145,   149,   154,   158,   163,   168,   171,   178,   180,
     182,   186,   192,   195,   196,   200,   201,   205,   209,   212,
     216,   217,   223,   224,   229,   233,   236,   238,   239,   243,
     245,   247,   249,   251,   253,   255,   258,   259,   263,   264,
     267,   272,   276,   278,   284,   294,   298
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    -1,    52,    53,    -1,    -1,    54,
      45,    -1,    81,    -1,    84,    -1,    85,    -1,    86,    -1,
       9,    45,    -1,    10,    45,    -1,    71,    -1,    73,    -1,
      27,    -1,     1,    -1,    45,    -1,    57,    -1,    54,    33,
      54,    -1,    54,    34,    54,    -1,    54,    35,    54,    -1,
      54,    36,    54,    -1,    54,    37,    54,    -1,    54,    31,
      54,    -1,    54,    23,    54,    -1,    54,    32,    54,    -1,
      54,    24,    54,    -1,    54,    17,    54,    -1,    54,    18,
      54,    -1,    54,    25,    55,    54,    -1,    54,    26,    55,
      54,    -1,    56,    -1,    -1,    43,    54,    44,    -1,    34,
      54,    -1,     7,    54,    -1,    21,    59,    -1,    59,    21,
      -1,    22,    59,    -1,    59,    22,    -1,    58,    -1,    59,
      30,    54,    -1,    59,    -1,    61,    -1,    67,    -1,    43,
      73,    44,    -1,    78,    -1,    28,    -1,    11,    28,    -1,
      12,    28,    -1,    60,    -1,    59,    39,    28,    -1,    59,
      41,    54,    42,    -1,    61,    39,    28,    -1,    61,    41,
      54,    42,    -1,    61,    43,    65,    44,    -1,    59,    62,
      -1,    43,    73,    44,    43,    65,    44,    -1,    63,    -1,
      64,    -1,    43,    65,    44,    -1,    40,    28,    43,    65,
      44,    -1,    54,    66,    -1,    -1,    46,    54,    66,    -1,
      -1,    41,    65,    42,    -1,    41,    68,    42,    -1,    70,
      69,    -1,    46,    70,    69,    -1,    -1,    47,    54,    48,
      54,    49,    -1,    -1,    47,    72,    52,    49,    -1,    74,
      76,    77,    -1,    16,    75,    -1,    28,    -1,    -1,    43,
      79,    44,    -1,    71,    -1,    29,    -1,    20,    -1,    15,
      -1,    13,    -1,    14,    -1,    28,    80,    -1,    -1,    46,
      28,    80,    -1,    -1,    82,    83,    -1,     3,    43,    54,
      44,    -1,    53,     4,    53,    -1,    53,    -1,     5,    43,
      54,    44,    53,    -1,     6,    43,    65,    45,    54,    45,
      65,    44,    53,    -1,     8,    54,    45,    -1,     8,    45,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    53,    54,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    90,    92,    93,    94,    95,    96,    97,    98,
      99,   102,   104,   105,   106,   107,   108,   111,   112,   113,
     114,   117,   118,   119,   120,   123,   124,   125,   128,   129,
     132,   134,   137,   138,   141,   142,   145,   146,   149,   151,
     152,   155,   157,   157,   164,   166,   171,   172,   175,   177,
     179,   180,   181,   182,   183,   186,   187,   190,   191,   194,
     196,   198,   199,   202,   204,   206,   207
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "NOT",
  "RETURN", "BREAK", "CONTINUE", "LOCAL", "DBLCOLON", "TRUE", "FALSE",
  "NIL", "FUNCTION", "EQ", "NOT_EQ", "DBLDOT", "STR", "PLUS_PLUS",
  "MINUS_MINUS", "GREATER_EQ", "LESS_EQ", "AND", "OR", "UNRECOGNIZED",
  "ID", "NUMBER", "'='", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UMINUS", "'.'", "DBL_DOT", "'['", "']'", "'('", "')'", "';'", "','",
  "'{'", "':'", "'}'", "$accept", "program", "stmts", "stmt", "expr", "M",
  "term", "assignexpr", "primary", "lvalue", "member", "call",
  "callsuffix", "normcall", "methodcall", "elist", "exprs", "tablemake",
  "indexed", "indexedelems", "indexedelem", "block", "$@1", "funcdef",
  "funcprefix", "funcname", "funcargs", "funcbody", "const", "idlist",
  "ids", "ifstmt", "ifexpr", "ifsuffix", "whilestmt", "forstmt",
  "returnstmt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      61,    62,    60,    43,    45,    42,    47,    37,   285,    46,
     286,    91,    93,    40,    41,    59,    44,   123,    58,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    57,    58,    58,    58,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      63,    64,    65,    65,    66,    66,    67,    67,    68,    69,
      69,    70,    72,    71,    73,    74,    75,    75,    76,    77,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    81,
      82,    83,    83,    84,    85,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     1,     0,     3,     2,     2,     2,     2,     2,     2,
       1,     3,     1,     1,     1,     3,     1,     1,     2,     2,
       1,     3,     4,     3,     4,     4,     2,     6,     1,     1,
       3,     5,     2,     0,     3,     0,     3,     3,     2,     3,
       0,     5,     0,     4,     3,     2,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     2,     0,     3,     0,     2,
       4,     3,     1,     5,     9,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    82,    77,    81,     0,
       0,    14,    47,    80,     0,    63,     0,    16,    72,     3,
       0,    31,    17,    40,    42,    50,    43,    44,    12,    13,
       0,    46,     6,     0,     7,     8,     9,     0,     0,    63,
      35,    96,     0,    10,    11,    48,    49,    76,    75,     0,
      36,     0,    38,    34,     0,    65,     0,     0,    70,     0,
       0,     4,     0,     0,     0,     0,    32,    32,     0,     0,
       0,     0,     0,     0,     0,     5,    37,    39,     0,     0,
       0,     0,    63,    56,    58,    59,     0,     0,    63,    86,
       0,    92,    89,     0,     0,     0,    95,     0,     0,     0,
      62,    66,    67,     0,    68,    33,    45,     0,    27,    28,
      24,    26,     0,     0,    23,    25,    18,    19,    20,    21,
      22,    41,    51,     0,     0,     0,    53,     0,     0,    88,
       0,    79,    74,     0,    90,     0,     0,     0,     0,    65,
      70,    63,    73,    29,    30,    63,    52,    60,    54,    55,
       0,    85,    78,    91,    93,     0,     0,    64,    69,     0,
       0,    88,    63,    71,    57,    61,    87,     0,     0,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    29,    65,   122,    31,    32,    33,    34,
      35,    36,    93,    94,    95,    66,   110,    37,    67,   114,
      68,    38,    71,    39,    40,    58,   100,   142,    41,   140,
     161,    42,    43,   102,    44,    45,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -54
static const yytype_int16 yypact[] =
{
     -54,     5,   194,   -54,   -54,   -32,   -30,   -26,   314,   255,
     -19,     7,    26,    27,   -54,   -54,   -54,    29,   -54,    47,
      47,   -54,   -54,   -54,   314,   231,   290,   -54,   -54,   -54,
     393,   -54,   -54,   -54,    83,   -54,   -25,   -54,   -54,   -54,
      17,   -54,   -54,    22,   -54,   -54,   -54,   314,   314,   314,
     -54,   -54,   416,   -54,   -54,   -54,   -54,   -54,   -54,    45,
     -31,   -25,   -31,   -54,   314,   369,    24,    32,    18,   462,
      39,   -54,   314,   314,   314,   314,   -54,   -54,   314,   314,
     314,   314,   314,   314,   314,   -54,   -54,   -54,   314,    40,
      56,   314,   314,   -54,   -54,   -54,    57,   314,   314,    59,
      41,    87,   -54,   484,   506,    48,   -54,    50,   348,   314,
     -54,   -54,   -54,    49,   -54,   -54,    54,   144,   612,   612,
     648,   648,   314,   314,   648,   648,   -16,   -16,   -54,   -54,
     -54,   570,   -54,    55,   528,    58,   -54,   549,    64,    46,
      65,   -54,   -54,    22,   -54,    22,   314,    54,   314,   369,
      18,   314,   -54,   633,   591,   314,   -54,   -54,   -54,   -54,
      71,   -54,   -54,   -54,   -54,   439,   327,   -54,   -54,    67,
      68,    46,   314,   -54,   -54,   -54,   -54,    70,    22,   -54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,    60,   -42,    -2,    23,   -54,   -54,   -54,   -17,
     -54,    20,   -54,   -54,   -54,   -45,   -33,   -54,   -54,   -22,
       4,    19,   -54,   -11,   -54,   -54,   -54,   -54,   -54,   -54,
     -53,   -54,   -54,   -54,   -54,   -54,   -54
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      30,   101,    60,    62,   105,     3,    50,    52,    89,    90,
      91,    47,    92,    48,    96,    70,    97,    49,    98,    82,
      83,    84,    63,     4,    69,     5,    53,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    61,
      61,    30,    18,    19,    20,   103,   104,   135,   107,    21,
      22,    23,    54,   138,    55,    56,    24,    57,    12,    13,
      99,    17,   108,    25,   113,    26,   111,    27,   132,    28,
     118,   119,   120,   121,   112,    22,   124,   125,   126,   127,
     128,   129,   130,   116,   133,   136,   131,   139,    28,   134,
      59,   143,   160,   146,   147,   137,    64,   151,   155,   171,
     123,   163,   157,   164,    86,    87,   169,   149,   159,   162,
     170,   174,   175,    88,   178,    30,   167,   150,   176,   141,
     153,   154,    89,    90,    91,     0,    92,   177,   168,     0,
       0,   117,     0,     0,     0,     0,   179,     0,     0,     0,
       0,    30,     0,    30,   165,     4,   166,     5,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,     0,     0,    18,    19,    20,     0,     0,     0,
       0,    21,    22,    23,     0,     0,    30,     0,    24,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     0,    27,
       0,    28,     0,   152,    -2,     4,     0,     5,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,     0,     0,    18,    19,    20,     0,     0,     0,
       0,    21,    22,    23,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,    25,     0,    26,     8,    27,
       0,    28,    12,    13,    14,    15,    16,     0,     0,     0,
       0,    18,    19,    20,     0,     0,     0,     0,     0,    22,
      23,     0,     8,     0,     0,    24,    12,    13,    14,    15,
      16,     0,    25,     0,    26,    18,    19,    20,    64,     0,
       0,     0,     0,    22,    23,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,    25,     8,    26,     0,
      51,    12,    13,    14,    15,    16,    17,     0,     0,     0,
      18,    19,    20,     0,     0,     0,     0,     0,    22,    23,
       0,     8,     0,     0,    24,    12,    13,    14,    15,    16,
       0,    25,     0,    26,    18,    19,    20,     0,     0,     0,
       0,     0,    22,    23,    72,    73,     0,     0,    24,     0,
      74,    75,    76,    77,     0,    25,     0,    26,    78,    79,
      80,    81,    82,    83,    84,    72,    73,     0,     0,     0,
       0,    74,    75,    76,    77,     0,   173,     0,     0,    78,
      79,    80,    81,    82,    83,    84,    72,    73,     0,     0,
       0,     0,    74,    75,    76,    77,   148,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
      72,    73,     0,     0,     0,   109,    74,    75,    76,    77,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,     0,    72,    73,     0,     0,     0,    85,    74,
      75,    76,    77,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,     0,     0,    72,    73,     0,     0,
       0,   106,    74,    75,    76,    77,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,     0,     0,    72,
      73,     0,     0,     0,   172,    74,    75,    76,    77,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
       0,    72,    73,     0,     0,     0,   115,    74,    75,    76,
      77,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,     0,    72,    73,     0,     0,     0,   144,    74,
      75,    76,    77,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,     0,    72,    73,     0,     0,     0,
     145,    74,    75,    76,    77,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,    72,    73,     0,     0,
     156,     0,    74,    75,    76,    77,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    84,    72,    73,     0,
       0,   158,     0,    74,    75,    76,    77,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    84,    72,    73,
       0,     0,     0,     0,    74,    75,    76,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    -3,
      -3,     0,     0,     0,     0,    74,    75,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
      72,    73,     0,     0,     0,     0,    74,    75,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    -3,    -3,     0,     0,     0,     0,     0,     0,    -3,
      -3,    80,    81,    82,    83,    84
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-54))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-3))

static const yytype_int16 yycheck[] =
{
       2,    43,    19,    20,    49,     0,     8,     9,    39,    40,
      41,    43,    43,    43,    39,    26,    41,    43,    43,    35,
      36,    37,    24,     1,    26,     3,    45,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    19,
      20,    43,    20,    21,    22,    47,    48,    92,    59,    27,
      28,    29,    45,    98,    28,    28,    34,    28,    11,    12,
      43,    16,    64,    41,    46,    43,    42,    45,    28,    47,
      72,    73,    74,    75,    42,    28,    78,    79,    80,    81,
      82,    83,    84,    44,    28,    28,    88,    28,    47,    91,
      43,     4,    46,    45,    44,    97,    47,    43,    43,    28,
      77,   143,    44,   145,    21,    22,   151,   109,    44,    44,
     155,    44,    44,    30,    44,   117,   149,   113,   171,   100,
     122,   123,    39,    40,    41,    -1,    43,   172,   150,    -1,
      -1,    71,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,
      -1,   143,    -1,   145,   146,     1,   148,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,   178,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,     0,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,     7,    45,
      -1,    47,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,     7,    -1,    -1,    34,    11,    12,    13,    14,
      15,    -1,    41,    -1,    43,    20,    21,    22,    47,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,     7,    43,    -1,
      45,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,     7,    -1,    -1,    34,    11,    12,    13,    14,    15,
      -1,    41,    -1,    43,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    17,    18,    -1,    -1,    34,    -1,
      23,    24,    25,    26,    -1,    41,    -1,    43,    31,    32,
      33,    34,    35,    36,    37,    17,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    49,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    17,    18,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    48,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    46,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    17,    18,    -1,    -1,    -1,    45,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    17,    18,    -1,    -1,
      -1,    45,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    17,
      18,    -1,    -1,    -1,    45,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    17,    18,    -1,    -1,    -1,    44,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    -1,    17,    18,    -1,    -1,    -1,    44,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    17,    18,    -1,    -1,    -1,
      44,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    17,    18,    -1,    -1,
      42,    -1,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    17,    18,    -1,
      -1,    42,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    17,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    17,
      18,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      17,    18,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    20,    21,
      22,    27,    28,    29,    34,    41,    43,    45,    47,    53,
      54,    56,    57,    58,    59,    60,    61,    67,    71,    73,
      74,    78,    81,    82,    84,    85,    86,    43,    43,    43,
      54,    45,    54,    45,    45,    28,    28,    28,    75,    43,
      59,    61,    59,    54,    47,    54,    65,    68,    70,    54,
      73,    72,    17,    18,    23,    24,    25,    26,    31,    32,
      33,    34,    35,    36,    37,    45,    21,    22,    30,    39,
      40,    41,    43,    62,    63,    64,    39,    41,    43,    43,
      76,    53,    83,    54,    54,    65,    45,    73,    54,    46,
      66,    42,    42,    46,    69,    44,    44,    52,    54,    54,
      54,    54,    55,    55,    54,    54,    54,    54,    54,    54,
      54,    54,    28,    28,    54,    65,    28,    54,    65,    28,
      79,    71,    77,     4,    44,    44,    45,    44,    48,    54,
      70,    43,    49,    54,    54,    43,    42,    44,    42,    44,
      46,    80,    44,    53,    53,    54,    54,    66,    69,    65,
      65,    28,    45,    49,    44,    44,    80,    65,    44,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
		  (unsigned long int) yystacksize));

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 51 "./src/parser.y"
    { manage_stmts						(); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 53 "./src/parser.y"
    { manage_stmts_stmt					(); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 54 "./src/parser.y"
    { manage_stmts_empty				(); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 57 "./src/parser.y"
    { manage_stmt_expr				  ((yyvsp[(1) - (2)].exprVal)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 58 "./src/parser.y"
    { manage_stmt_ifstmt				(); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 59 "./src/parser.y"
    { manage_stmt_whilestmt				(); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 60 "./src/parser.y"
    { manage_stmt_forstmt				(); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 61 "./src/parser.y"
    { manage_stmt_returnstmt			(); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 62 "./src/parser.y"
    { manage_stmt_BREAK					(); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 63 "./src/parser.y"
    { manage_stmt_CONTINUE				(); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 64 "./src/parser.y"
    { manage_stmt_block					(); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 65 "./src/parser.y"
    { manage_stmt_funcdef				(); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 66 "./src/parser.y"
    { manage_stmt_UNRECOGNIZED			(); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 67 "./src/parser.y"
    { manage_stmt_error					(); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 68 "./src/parser.y"
    { manage_stmt_semicolumn			(); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 73 "./src/parser.y"
    { (yyval.exprVal) = manage_expr_assignexpr	  ((yyvsp[(1) - (1)].exprVal)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 74 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_op_expr((yyvsp[(1) - (3)].exprVal),'+', (yyvsp[(3) - (3)].exprVal)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 75 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_op_expr((yyvsp[(1) - (3)].exprVal),'-', (yyvsp[(3) - (3)].exprVal)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 76 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_op_expr((yyvsp[(1) - (3)].exprVal),'*', (yyvsp[(3) - (3)].exprVal)); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 77 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_op_expr((yyvsp[(1) - (3)].exprVal),'/', (yyvsp[(3) - (3)].exprVal)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 78 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_op_expr((yyvsp[(1) - (3)].exprVal),'%', (yyvsp[(3) - (3)].exprVal)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 79 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_gr_expr((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].exprVal));		}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 80 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_gr_eq_expr((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].exprVal));	}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 81 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_ls_expr((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].exprVal));		}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 82 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_ls_eq_expr((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].exprVal));	}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 83 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_eq_expr((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].exprVal));		}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 84 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_not_eq_expr((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].exprVal));	}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 85 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_and_expr((yyvsp[(1) - (4)].exprVal),(yyvsp[(3) - (4)].intVal),(yyvsp[(4) - (4)].exprVal));	}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 86 "./src/parser.y"
    { (yyval.exprVal) = handle_expr_or_expr((yyvsp[(1) - (4)].exprVal),(yyvsp[(3) - (4)].intVal),(yyvsp[(4) - (4)].exprVal));	}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 87 "./src/parser.y"
    { (yyval.exprVal) = manage_expr_term((yyvsp[(1) - (1)].exprVal)); 			}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 90 "./src/parser.y"
    { (yyval.intVal) = handle_boolean_M				();	}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 92 "./src/parser.y"
    { (yyval.exprVal) = manage_term_expr_parenthesis((yyvsp[(2) - (3)].exprVal));}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 93 "./src/parser.y"
    { (yyval.exprVal) = handle_term_uminus_expr((yyvsp[(2) - (2)].exprVal)); 	}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 94 "./src/parser.y"
    { (yyval.exprVal) = handle_term_not_expr((yyvsp[(2) - (2)].exprVal)); 		}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 95 "./src/parser.y"
    { (yyval.exprVal) = handle_op_op_lvalue((yyvsp[(2) - (2)].exprVal), '+');	}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 96 "./src/parser.y"
    { (yyval.exprVal) = handle_lvalue_op_op((yyvsp[(1) - (2)].exprVal), '+');	}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 97 "./src/parser.y"
    { (yyval.exprVal) = handle_op_op_lvalue((yyvsp[(2) - (2)].exprVal), '-');	}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 98 "./src/parser.y"
    { (yyval.exprVal) = handle_lvalue_op_op((yyvsp[(1) - (2)].exprVal), '-');	}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 99 "./src/parser.y"
    { (yyval.exprVal) = manage_term_primary((yyvsp[(1) - (1)].exprVal));			}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 102 "./src/parser.y"
    { (yyval.exprVal) = manage_assignexpr_lvalue_assign_expr((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].exprVal));}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 104 "./src/parser.y"
    { (yyval.exprVal) = manage_primary_lvalue((yyvsp[(1) - (1)].exprVal)); 		}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 105 "./src/parser.y"
    { manage_primary_call				(); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 106 "./src/parser.y"
    { manage_primary_tablemake			(); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 107 "./src/parser.y"
    { manage_primary_funcdef_parenthesis(); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 108 "./src/parser.y"
    { manage_primary_const((yyvsp[(1) - (1)].exprVal));}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 111 "./src/parser.y"
    { (yyval.exprVal) = manage_lvalue_ID				((yyvsp[(1) - (1)].stringVal)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 112 "./src/parser.y"
    { (yyval.exprVal) = manage_lvalue_LOCAL_ID		((yyvsp[(2) - (2)].stringVal)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 113 "./src/parser.y"
    { (yyval.exprVal) = manage_lvalue_DBLCOLON_ID	((yyvsp[(2) - (2)].stringVal)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 114 "./src/parser.y"
    { manage_lvalue_member				(); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 117 "./src/parser.y"
    { (yyval.exprVal) = manage_member_lvalue_dot_ID	((yyvsp[(1) - (3)].exprVal), (yyvsp[(3) - (3)].stringVal)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 118 "./src/parser.y"
    { (yyval.exprVal) = manage_member_lvalue_brackets_expr((yyvsp[(1) - (4)].exprVal), (yyvsp[(3) - (4)].exprVal)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 119 "./src/parser.y"
    { manage_member_call_dot_ID			(); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 120 "./src/parser.y"
    { manage_member_call_brackets_expr	(); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 123 "./src/parser.y"
    { manage_call_call_elist_parenthesis(); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 124 "./src/parser.y"
    { manage_call_lvalue_callsuffix		(); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 125 "./src/parser.y"
    { manage_call_funcdef_parenthesis_elist_parenthesis();}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 128 "./src/parser.y"
    { manage_callsuffix_normcall		(); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 129 "./src/parser.y"
    { manage_callsuffix_methodcall		(); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 132 "./src/parser.y"
    { manage_normcall_elist_parenthesis	(); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 134 "./src/parser.y"
    { manage_methodcall_DBL_DOT_ID_elist_parenthesis();}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 137 "./src/parser.y"
    { manage_elist_expr_exprs			(); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 138 "./src/parser.y"
    { manage_elist_empty				(); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 141 "./src/parser.y"
    { manage_exprs_comma_expr_exprs		(); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 142 "./src/parser.y"
    { manage_exprs_empty				(); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 145 "./src/parser.y"
    { manage_tablemake_squarebr_elist	(); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 146 "./src/parser.y"
    { manage_tablemake_squarebr_indexed	(); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 149 "./src/parser.y"
    { manage_indexed_indexedelem_indexedelems();}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 151 "./src/parser.y"
    { manage_indexedelems_comma_indexedelem_indexedelems();}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 152 "./src/parser.y"
    { manage_indexedelems_empty			(); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 155 "./src/parser.y"
    { manage_indexedelem_brackets_expr_column_expr();}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 157 "./src/parser.y"
    { currentScope++; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 158 "./src/parser.y"
    {
				hide();
				currentScope--;
				manage_block_brackets_stmts();
			}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 164 "./src/parser.y"
    { (yyval.symbolVal) = manage_funcdef_funcprefix_funcargs_funcbody((yyvsp[(1) - (3)].symbolVal), (yyvsp[(3) - (3)].intVal)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 166 "./src/parser.y"
    { 
				(yyval.symbolVal) = manage_funcprefix_FUNCTION_funcname((yyvsp[(2) - (2)].stringVal));
				(yyval.symbolVal)->iadress = nextquadlabel();
			}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 171 "./src/parser.y"
    { (yyval.stringVal) = manage_funcname_ID((yyvsp[(1) - (1)].stringVal)); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 172 "./src/parser.y"
    { (yyval.stringVal) = manage_funcname_empty(); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 175 "./src/parser.y"
    { manage_funcargs_PAR_idlist_PAR(); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 177 "./src/parser.y"
    { manage_funcbody_block(&(yyval.intVal)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 179 "./src/parser.y"
    { (yyval.exprVal) = manage_const_NUMBER((yyvsp[(1) - (1)].realVal)); 		}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 180 "./src/parser.y"
    { (yyval.exprVal) = manage_const_STR((yyvsp[(1) - (1)].stringVal)); 			}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 181 "./src/parser.y"
    { (yyval.exprVal) = manage_const_NIL(); 				}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 182 "./src/parser.y"
    { (yyval.exprVal) = manage_const_TRUE(); 			}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 183 "./src/parser.y"
    { (yyval.exprVal) = manage_const_FALSE(); 			}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 186 "./src/parser.y"
    { manage_idlist_ID_ids				((yyvsp[(1) - (2)].stringVal)); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 187 "./src/parser.y"
    { manage_idlist_empty				(); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 190 "./src/parser.y"
    { manage_ids_comma_ID_ids			((yyvsp[(2) - (3)].stringVal)); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 191 "./src/parser.y"
    {manage_ids_empty					(); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 194 "./src/parser.y"
    { manage_ifstmt_ifexpr_ifsuffix(); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 196 "./src/parser.y"
    { manage_ifexpr_IF_expr_parenthesis((yyvsp[(3) - (4)].exprVal)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 198 "./src/parser.y"
    { manage_ifsuffix_stmt_ELSE_stmt(); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 199 "./src/parser.y"
    { manage_ifsuffix_stmt(); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 202 "./src/parser.y"
    { manage_whilestmt_WHILE_expr_parenthesis_stmt(); 	}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 204 "./src/parser.y"
    { manage_forstmt_FOR(); 			}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 206 "./src/parser.y"
    { manage_returnstmt_RETURN_expr_semicolon((yyvsp[(2) - (3)].exprVal)); 		}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 207 "./src/parser.y"
    { manage_returnstmt_RETURN_semicolon(); 			}
    break;



/* Line 1806 of yacc.c  */
#line 2358 "./src/parser.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 211 "./src/parser.y"



int yyerror (const char* yaccProvidedMessage) {
	printf("%d: #ERROR: %s, before token: %s\n", yylineno, yaccProvidedMessage,  yytext);
}

int main ( argc, argv ) int argc; char **argv;{
	++argv, --argc;  /* skip over program name */

	/* Lexer can read form file if such argument is provided */
	if (argc > 0)	{ yyin = fopen(argv[0], "r"); }
	else 		{ yyin = stdin; }

	/* Initialize */
	initManager();
	initSymbolTable();

	/* Compute */
	yyparse();

	/* Finalize */
	printSymbolTable();
	printQuads();

	return 0;
}

