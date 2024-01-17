
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>

int yyerror(char *s);

#define YYDEBUG 1


/* Line 189 of yacc.c  */
#line 83 "parser.tab.c"

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
     DECIDEDACA = 258,
     DACANU = 259,
     SI = 260,
     SCRIE = 261,
     CITESTE = 262,
     APEL = 263,
     CATTIMP = 264,
     PENTRU = 265,
     INT = 266,
     FLOAT = 267,
     LONG = 268,
     DOUBLE = 269,
     CHAR = 270,
     STRING = 271,
     BOOL = 272,
     ARRAY = 273,
     LOCAL = 274,
     DEFINESTETU = 275,
     FUNCTIE = 276,
     PLUS = 277,
     MINUS = 278,
     TIMES = 279,
     DIV = 280,
     MOD = 281,
     RDIV = 282,
     EQUAL = 283,
     NOTEQUAL = 284,
     LESS = 285,
     BIGGER = 286,
     LESSEQUAL = 287,
     BIGGEREQUAL = 288,
     EGALITY = 289,
     TEGALITY = 290,
     PLUSPLUS = 291,
     MINUSMINUS = 292,
     OPEN = 293,
     CLOSE = 294,
     BRACKETOPEN = 295,
     BRACKETCLOSE = 296,
     SQBRACKETOPEN = 297,
     SQBRACKETCLOSE = 298,
     DOT = 299,
     ARROW = 300,
     STAR = 301,
     QUOTES = 302,
     COMMA = 303,
     SEMICOLON = 304,
     IDENTIFIER = 305,
     INTCONSTANT = 306,
     STRINGCONSTANT = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 177 "parser.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    12,    14,    16,    18,    20,
      22,    24,    26,    28,    33,    36,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    58,    60,    62,    65,    68,
      71,    74,    77,    80,    83,    85,    88,    92,    97,   102,
     107,   112,   117,   121,   125,   129,   133,   135,   139,   143,
     147,   151,   153,   157,   159,   161,   163,   166,   170,   174,
     176,   185,   199,   207,   216,   222,   227,   234,   238,   242,
     244,   246,   248,   250,   252,   254,   256,   258
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    56,    44,    55,    -1,    56,
      44,    -1,    57,    -1,    62,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    58,    50,
      48,    57,    -1,    58,    50,    -1,    50,    48,    57,    -1,
      50,    -1,    59,    -1,    60,    -1,    61,    -1,    11,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,    19,    11,    -1,    19,    12,    -1,    19,    13,
      -1,    19,    14,    -1,    19,    15,    -1,    19,    16,    -1,
      19,    17,    -1,    18,    -1,    19,    18,    -1,    20,    50,
      44,    -1,    58,    50,    28,    63,    -1,    58,    50,    28,
      72,    -1,    58,    50,    28,    50,    -1,    58,    50,    28,
      52,    -1,    58,    50,    28,    51,    -1,    50,    28,    63,
      -1,    50,    28,    66,    -1,    63,    22,    64,    -1,    63,
      23,    64,    -1,    64,    -1,    64,    24,    65,    -1,    64,
      25,    65,    -1,    64,    26,    65,    -1,    64,    27,    65,
      -1,    65,    -1,    38,    63,    39,    -1,    50,    -1,    51,
      -1,    52,    -1,    42,    43,    -1,    42,    67,    43,    -1,
      63,    48,    67,    -1,    63,    -1,     3,    42,    74,    43,
      45,    40,    55,    41,    -1,     3,    42,    74,    43,    45,
      40,    55,    41,     4,    45,    40,    55,    41,    -1,     9,
      38,    74,    39,    40,    55,    41,    -1,    21,    50,    38,
      57,    39,    40,    55,    41,    -1,     8,    50,    38,    57,
      39,    -1,     7,    38,    52,    39,    -1,     6,    38,    52,
      49,    67,    39,    -1,    63,    75,    63,    -1,    74,     5,
      74,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    68,    68,    70,    71,    73,    74,    75,    76,    77,
      78,    79,    80,    82,    83,    84,    85,    87,    88,    89,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   106,   107,   109,   111,   112,   113,
     114,   115,   116,   117,   119,   120,   121,   123,   124,   125,
     126,   127,   129,   130,   131,   132,   134,   135,   137,   138,
     140,   141,   143,   145,   147,   149,   151,   153,   154,   156,
     157,   158,   159,   160,   161,   162,   163,   164
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DECIDEDACA", "DACANU", "SI", "SCRIE",
  "CITESTE", "APEL", "CATTIMP", "PENTRU", "INT", "FLOAT", "LONG", "DOUBLE",
  "CHAR", "STRING", "BOOL", "ARRAY", "LOCAL", "DEFINESTETU", "FUNCTIE",
  "PLUS", "MINUS", "TIMES", "DIV", "MOD", "RDIV", "EQUAL", "NOTEQUAL",
  "LESS", "BIGGER", "LESSEQUAL", "BIGGEREQUAL", "EGALITY", "TEGALITY",
  "PLUSPLUS", "MINUSMINUS", "OPEN", "CLOSE", "BRACKETOPEN", "BRACKETCLOSE",
  "SQBRACKETOPEN", "SQBRACKETCLOSE", "DOT", "ARROW", "STAR", "QUOTES",
  "COMMA", "SEMICOLON", "IDENTIFIER", "INTCONSTANT", "STRINGCONSTANT",
  "$accept", "program", "statementList", "statement", "declaration",
  "type", "simpleTypes", "arrayTypes", "userDefinedTypes",
  "assignmentStatement", "expression", "term", "factor", "arrayStatement",
  "expressionList", "ifStatement", "whileStatement", "function",
  "callStatement", "inputStatement", "outputStatement", "condition",
  "relation", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    58,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    61,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    63,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    66,    66,    67,    67,
      68,    68,    69,    70,    71,    72,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     3,     4,     4,     4,
       4,     4,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     1,     1,     1,     2,     3,     3,     1,
       8,    13,     7,     8,     5,     4,     6,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,    34,     0,     0,     0,    16,     0,     2,
       0,     5,     0,    17,    18,    19,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,     0,    27,    28,
      29,    30,    31,    32,    33,    35,     0,     0,     0,     0,
       1,     4,    14,     0,    53,    54,    55,     0,    46,    51,
       0,     0,     0,     0,     0,    36,     0,     0,    42,    43,
      16,    15,     0,     3,     0,     0,     0,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
      56,    59,     0,    14,    53,    54,    55,    37,    38,    13,
      52,    44,    45,    67,    47,    48,    49,    50,    68,     0,
       0,    64,     0,     0,     0,    57,     0,    66,     0,     0,
      58,     0,    62,     0,    60,    63,     0,     0,     0,     0,
      61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      57,    58,    59,    69,   102,    27,    28,    29,    30,    31,
      32,    60,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -91
static const yytype_int16 yypact[] =
{
      48,   -25,   -10,    -9,   -19,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   119,    -7,    -3,     2,    40,   -91,
       9,   -91,    26,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,    77,    27,    28,    43,    77,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,    41,    50,    71,    -4,
     -91,    48,    24,    77,   -91,   -91,   -91,    70,   114,   -91,
      -1,    37,    52,    -4,    -2,   -91,    -4,    74,     3,   -91,
      60,   -91,    39,   -91,    32,    -4,    51,    77,    77,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,    77,    77,
      77,    77,    77,    77,    65,    77,   -91,    72,    76,    75,
     -91,     1,    99,    95,   100,   101,   102,     3,   -91,   -91,
     -91,   114,   114,     3,   -91,   -91,   -91,   -91,   113,    79,
      81,   -91,    48,   107,    77,   -91,    48,   -91,   108,    48,
     -91,   109,   -91,   110,   144,   -91,   111,   112,    48,   116,
     -91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -51,   -91,   -31,   -30,   -91,   -91,   -91,   -91,
     -47,   -56,     5,   -91,   -90,   -91,   -91,   -91,   -91,    80,
     -91,   -35,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const yytype_int16 yytable[] =
{
      73,    68,    64,    93,    93,   120,    76,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    33,    71,    72,
     101,   111,   112,    77,    78,    77,    78,   107,    34,    35,
      48,    36,    97,    72,   130,    99,    72,    98,    37,     3,
      50,   113,    94,    46,   109,    72,    70,    47,   101,   124,
      49,     1,    74,    51,     2,     3,     4,     5,   118,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      53,   128,    75,    77,    78,   131,    52,   101,   133,    61,
      62,    63,   104,   105,   106,    65,    95,   139,    66,   103,
     110,    96,    77,    78,   114,   115,   116,   117,    17,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    49,    53,
     119,   121,    53,    67,   123,    53,   122,   100,    93,   126,
     127,    54,    55,    56,    54,    55,    56,    54,    55,    56,
      38,    39,    40,    41,    42,    43,    44,    45,    89,    90,
      91,    92,   125,    75,   -39,   -41,   -40,   129,   136,   132,
     134,   135,   138,     0,   108,     0,   137,   140
};

static const yytype_int16 yycheck[] =
{
      51,    48,    37,     5,     5,    95,    53,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    42,    49,    49,
      67,    77,    78,    22,    23,    22,    23,    74,    38,    38,
      28,    50,    63,    63,   124,    66,    66,    39,    38,     7,
       0,    88,    43,    50,    75,    75,    50,    50,    95,    48,
      48,     3,    28,    44,     6,     7,     8,     9,    93,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      38,   122,    48,    22,    23,   126,    50,   124,   129,    52,
      52,    38,    50,    51,    52,    44,    49,   138,    38,    50,
      39,    39,    22,    23,    89,    90,    91,    92,    50,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    48,    38,
      45,    39,    38,    42,    39,    38,    40,    43,     5,    40,
      39,    50,    51,    52,    50,    51,    52,    50,    51,    52,
      11,    12,    13,    14,    15,    16,    17,    18,    24,    25,
      26,    27,    43,    48,    44,    44,    44,    40,     4,    41,
      41,    41,    40,    -1,    74,    -1,    45,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    50,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    68,    69,    70,
      71,    72,    73,    42,    38,    38,    50,    38,    11,    12,
      13,    14,    15,    16,    17,    18,    50,    50,    28,    48,
       0,    44,    50,    38,    50,    51,    52,    63,    64,    65,
      74,    52,    52,    38,    74,    44,    38,    42,    63,    66,
      50,    57,    58,    55,    28,    48,    63,    22,    23,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    75,    24,
      25,    26,    27,     5,    43,    49,    39,    57,    39,    57,
      43,    63,    67,    50,    50,    51,    52,    63,    72,    57,
      39,    64,    64,    63,    65,    65,    65,    65,    74,    45,
      67,    39,    40,    39,    48,    43,    40,    39,    55,    40,
      67,    55,    41,    55,    41,    41,     4,    45,    40,    55,
      41
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {printf("program : statementList\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    {printf("statementList : statement . statementList\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {printf("statementList : statement .\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {printf("statement : declaration\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {printf("statement : assignmentStatement\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {printf("statement : ifStatement\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {printf("statement : whileStatement\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {printf("statement : function\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    {printf("statement : callStatement\n");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    {printf("statement : inputStatement\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    {printf("statement : outputStatement\n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {printf("declaration : type IDENTIFIER , declaration\n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {printf("declaration : type IDENTIFIER\n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {printf("declaration : IDENTIFIER ,\n");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {printf("declaration : IDENTIFIER\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {printf("type : simpleTypes\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {printf("type : arrayTypes\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {printf("type : userDefinedTypes\n");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {printf("simpleTypes : INT\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {printf("simpleTypes : FLOAT\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {printf("simpleTypes : LONG\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {printf("simpleTypes : DOUBLE\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {printf("simpleTypes : CHAR\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {printf("simpleTypes : STRING\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {printf("simpleTypes : BOOL\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {printf("simpleTypes : LOCAL INT\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {printf("simpleTypes : LOCAL FLOAT\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {printf("simpleTypes : LOCAL LONG\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {printf("simpleTypes : LOCAL DOUBLE\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {printf("simpleTypes : LOCAL CHAR\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {printf("simpleTypes : LOCAL STRING\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {printf("simpleTypes : LOCAL BOOL\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {printf("arrayTypes : ARRAY\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {printf("arrayTypes : LOCAL ARRAY\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {printf("userDefinedTypes : definesteTu IDENTIFIER .\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {printf("assignmentStatement : type IDENTIFIER = expression\n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {printf("assignmentStatement : type IDENTIFIER = inputStatement\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {printf("assignmentStatement : type IDENTIFIER = IDENTIFIER\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {printf("assignmentStatement : type IDENTIFIER = STRINGCONSTANT\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {printf("assignmentStatement : type IDENTIFIER = INTCONSTANT\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {printf("assignmnentStatement : IDENTIFIER = expression\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {printf("assignmnentStatement : IDENTIFIER = arrayStatement\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {printf("expression : expression + term\n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {printf("expression : expression - term\n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {printf("expression : term\n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {printf("term : term * factor\n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {printf("term : term / factor\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {printf("term : term % factor\n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {printf("term : term // factor\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {printf("term : factor\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {printf("factor : (expression)\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {printf("factor : IDENTIFIER\n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    {printf("factor : INTCONSTANT\n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {printf("factor : STRINGCONSTANT\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {printf("arrayStatement : []\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {printf("arrayStatement : [ExpressionList]\n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {printf("expressionList : expression,expressionList\n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {printf("expressionList : expression\n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {printf("ifStatement : decideDaca [condition] -> {statementList} \n");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {printf("ifStatement : decideDaca [condition] -> {statementList} dacaNU {statementlist}\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {printf("whileStatement : catTimp (condition) {statementList}\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {printf("function : functie IDENTIFIER (declaration) {statementList}\n");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {printf("callStatement : apel IDENTIFIER (declaration)\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {printf("inputStatement : citeste (STRINGCONSTANT)\n");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {printf("scrie (STRINGCONSTANT ; expressionList)\n");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {printf("condition : expression relation expression\n");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {printf("condition: condition si condition\n");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {printf("relation : !=\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    {printf("relation : <\n");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {printf("relation : >\n");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {printf("relation : <=\n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {printf("relation : >=\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {printf("relation : ==\n");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {printf("relation : ===\n");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {printf("relation : ++\n");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {printf("relation : --\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2037 "parser.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 166 "parser.y"

int yyerror(char *s) {
    printf("Error: %s", s);
}

extern FILE *yyin;

int main(int argc, char** argv) {
    if (argc > 1) 
        yyin = fopen(argv[1], "r");
    if (!yyparse()) 
        fprintf(stderr, "\tOK\n");
}














