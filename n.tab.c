
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
#line 3 "n.y"

	#include<stdio.h>
	#include<string.h>
	int sym[26],store[26];
	int forswitch,val,i;
	int stack[1000],check[1000];
	int l=0,vn=0,nn;
	char stackstring[100];
	extern char *yytext,stt[1000];
	int yylex(void);
	struct vvr{
		int id;
		char name[1000];
		};
	struct vvr total[1000];
	


/* Line 189 of yacc.c  */
#line 92 "n.tab.c"

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
     If = 258,
     Else = 259,
     Main = 260,
     Int = 261,
     COLON = 262,
     Double = 263,
     String = 264,
     lfb = 265,
     rfb = 266,
     lsb = 267,
     rsb = 268,
     comma = 269,
     fs = 270,
     Add = 271,
     Sub = 272,
     Mul = 273,
     Div = 274,
     as = 275,
     bt = 276,
     st = 277,
     ploop = 278,
     nloop = 279,
     Switch = 280,
     Case = 281,
     Default = 282,
     str = 283,
     put = 284,
     num = 285,
     VAR = 286,
     hoi = 287,
     othoba = 288,
     nahoi = 289,
     eq = 290,
     neq = 291,
     beq = 292,
     seq = 293,
     prints = 294,
     fun = 295,
     IfX = 296
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
#line 175 "n.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  126

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    17,    20,    23,    26,
      28,    30,    32,    36,    38,    40,    42,    46,    48,    50,
      54,    56,    58,    62,    66,    70,    74,    78,    82,    86,
      90,    94,    98,   102,   114,   119,   124,   132,   133,   137,
     145,   147,   150,   152,   155,   160,   166,   170,   178,   186,
     195,   208,   209
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,     5,    10,    11,    12,    44,    13,    -1,
      -1,    44,    49,    -1,    44,    45,    -1,    44,    52,    -1,
      44,    57,    -1,    46,    47,    -1,     6,    -1,     8,    -1,
       9,    -1,    47,    14,    48,    -1,    48,    -1,    15,    -1,
      31,    -1,    31,    20,    50,    -1,    15,    -1,    50,    -1,
      31,    20,    50,    -1,    30,    -1,    31,    -1,    50,    16,
      50,    -1,    50,    17,    50,    -1,    50,    18,    50,    -1,
      50,    19,    50,    -1,    50,    22,    50,    -1,    50,    21,
      50,    -1,    50,    35,    50,    -1,    50,    36,    50,    -1,
      50,    37,    50,    -1,    50,    38,    50,    -1,    10,    50,
      11,    -1,    23,    10,    31,    20,    50,    14,    49,    11,
      12,    50,    13,    -1,    29,    10,    50,    11,    -1,    39,
      10,    31,    11,    -1,    40,    10,    51,    11,    12,    44,
      13,    -1,    -1,    46,    31,    51,    -1,    25,    10,    50,
      11,    12,    53,    13,    -1,    54,    -1,    54,    56,    -1,
      55,    -1,    55,    54,    -1,    26,    50,     7,    50,    -1,
      26,    50,     7,    29,    31,    -1,    27,     7,    50,    -1,
      32,    10,    50,    11,    12,    50,    13,    -1,    32,    10,
      50,    11,    12,    57,    13,    -1,    32,    10,    50,    11,
      12,    50,    13,    58,    -1,    32,    10,    50,    11,    12,
      50,    13,    58,    34,    12,    50,    13,    -1,    -1,    33,
      10,    50,    11,    12,    50,    13,    58,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    53,    55,    57,    59,    63,    66,
      68,    70,    73,    75,    77,    78,    97,   118,   120,   123,
     146,   148,   167,   169,   171,   173,   184,   186,   188,   190,
     192,   194,   196,   198,   223,   225,   228,   233,   234,   237,
     260,   260,   262,   262,   264,   270,   283,   288,   296,   304,
     310,   319,   320
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "If", "Else", "Main", "Int", "COLON",
  "Double", "String", "lfb", "rfb", "lsb", "rsb", "comma", "fs", "Add",
  "Sub", "Mul", "Div", "as", "bt", "st", "ploop", "nloop", "Switch",
  "Case", "Default", "str", "put", "num", "VAR", "hoi", "othoba", "nahoi",
  "eq", "neq", "beq", "seq", "prints", "fun", "IfX", "$accept", "program",
  "cstatement", "cdeclaration", "TYPE", "ID1", "dstatement", "statement",
  "expression", "parameter", "structure", "ccase", "caselist", "casestm",
  "defaultstm", "condition", "condition2", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    44,    44,    45,    46,
      46,    46,    47,    47,    48,    48,    48,    49,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    51,    51,    52,
      53,    53,    54,    54,    55,    55,    56,    57,    57,    57,
      57,    58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     2,     2,     2,     2,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,    11,     4,     4,     7,     0,     3,     7,
       1,     2,     1,     2,     4,     5,     3,     7,     7,     8,
      12,     0,     8
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,     9,    10,
      11,     0,     2,    17,     0,     0,     0,    20,    21,     0,
       0,     0,     5,     0,     4,    18,     6,     7,    21,     0,
       0,     0,     0,     0,     0,     0,    37,    14,    15,     8,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    27,    26,    28,    29,
      30,    31,     0,     0,    34,     0,    35,    37,     0,    16,
      12,     0,     0,     0,    38,     3,     0,     0,     0,    40,
      42,     0,     0,     0,     0,     0,    39,     0,    41,    43,
      47,    48,    36,     0,     0,     0,     0,    49,     0,     0,
      44,    46,     0,     0,     0,    45,     0,     0,    33,     0,
       0,     0,    50,     0,    51,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    22,    23,    39,    40,    24,    25,    59,
      26,    88,    89,    90,    98,    27,   107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -36
static const yytype_int16 yypact[] =
{
       1,     8,    11,    14,   -36,     7,   -36,    35,   -36,   -36,
     -36,   116,   -36,   -36,    36,    37,    43,   -36,    34,    45,
      47,    49,   -36,    25,   -36,   289,   -36,   -36,   -36,    -9,
      31,   116,   116,   116,   116,    32,    81,   -36,    53,    63,
     -36,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   -36,    58,   150,   159,   289,   182,    69,    54,    80,
     116,    25,    33,    33,   -21,   -21,   296,   296,   289,   289,
     289,   289,   116,    72,   -36,    83,   -36,    81,    87,   289,
     -36,   282,    66,   101,   -36,   -36,   119,   116,    95,    82,
      66,   217,   102,    73,    89,   100,   -36,   107,   -36,   -36,
     -29,   -36,   -36,   108,   134,   116,   113,    91,   116,    -7,
     289,   289,   116,   115,   224,   -36,   191,   116,   -36,   131,
     250,   116,   -36,   257,   118,   -36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -36,   -36,    67,   -36,   -35,   -36,    92,    42,   -11,    77,
     -36,   -36,    70,   -36,   -36,    79,    55
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -52
static const yytype_int8 yytable[] =
{
      29,    58,    51,    32,   106,   -51,     1,    41,    42,    43,
      44,     4,    45,    46,    47,    48,    49,    50,     3,     6,
      53,    54,    55,    56,   115,     5,    47,    48,    49,    50,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      37,     8,    58,     9,    10,    11,    30,    31,    12,    79,
      13,    43,    44,    32,    33,    34,    38,    35,    14,    36,
      15,    81,    52,    57,    16,    17,    18,    19,    47,    48,
      49,    50,    91,    60,    20,    21,    95,    61,    72,     8,
      76,     9,    10,    11,    82,    77,   102,     8,    13,     9,
      10,    78,    87,   110,   111,    83,    14,   114,    15,    85,
     103,   116,    16,    17,    18,    19,   120,   104,    96,    97,
     123,    11,    20,    21,   105,   101,    41,    42,    43,    44,
     108,    45,    46,   112,    14,   113,    11,   117,    94,    11,
      16,    17,    28,    19,    13,    47,    48,    49,    50,    14,
      20,    21,    14,   121,    11,    16,    17,    28,    16,    17,
      18,   106,    93,    80,    84,    20,    21,    14,    20,    21,
      99,    73,    92,   109,    17,    28,    41,    42,    43,    44,
      74,    45,    46,    20,    21,    41,    42,    43,    44,   125,
      45,    46,     0,     0,     0,    47,    48,    49,    50,     0,
       0,     0,     0,    75,    47,    48,    49,    50,    41,    42,
      43,    44,   119,    45,    46,     0,     0,    41,    42,    43,
      44,     0,    45,    46,     0,     0,     0,    47,    48,    49,
      50,     0,     0,     0,     0,     0,    47,    48,    49,    50,
     100,     0,     0,    41,    42,    43,    44,   118,    45,    46,
      41,    42,    43,    44,     0,    45,    46,     0,     0,     0,
       0,     0,    47,    48,    49,    50,     0,     0,     0,    47,
      48,    49,    50,   122,     0,     0,    41,    42,    43,    44,
     124,    45,    46,    41,    42,    43,    44,     0,    45,    46,
       0,     0,     0,     0,     0,    47,    48,    49,    50,     0,
       0,     0,    47,    48,    49,    50,    86,     0,    41,    42,
      43,    44,     0,    45,    46,    41,    42,    43,    44,     0,
      45,    46,    41,    42,    43,    44,     0,    47,    48,    49,
      50,     0,     0,     0,    47,    48,    49,    50,     0,     0,
       0,    47,    48,    49,    50
};

static const yytype_int8 yycheck[] =
{
      11,    36,    11,    10,    33,    34,     5,    16,    17,    18,
      19,     0,    21,    22,    35,    36,    37,    38,    10,    12,
      31,    32,    33,    34,    31,    11,    35,    36,    37,    38,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      15,     6,    77,     8,     9,    10,    10,    10,    13,    60,
      15,    18,    19,    10,    20,    10,    31,    10,    23,    10,
      25,    72,    31,    31,    29,    30,    31,    32,    35,    36,
      37,    38,    83,    20,    39,    40,    87,    14,    20,     6,
      11,     8,     9,    10,    12,    31,    13,     6,    15,     8,
       9,    11,    26,   104,   105,    12,    23,   108,    25,    12,
      11,   112,    29,    30,    31,    32,   117,     7,    13,    27,
     121,    10,    39,    40,     7,    13,    16,    17,    18,    19,
      12,    21,    22,    10,    23,    34,    10,    12,    86,    10,
      29,    30,    31,    32,    15,    35,    36,    37,    38,    23,
      39,    40,    23,    12,    10,    29,    30,    31,    29,    30,
      31,    33,    85,    61,    77,    39,    40,    23,    39,    40,
      90,    11,    83,    29,    30,    31,    16,    17,    18,    19,
      11,    21,    22,    39,    40,    16,    17,    18,    19,   124,
      21,    22,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    11,    35,    36,    37,    38,    16,    17,
      18,    19,    11,    21,    22,    -1,    -1,    16,    17,    18,
      19,    -1,    21,    22,    -1,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      13,    -1,    -1,    16,    17,    18,    19,    13,    21,    22,
      16,    17,    18,    19,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,    35,
      36,    37,    38,    13,    -1,    -1,    16,    17,    18,    19,
      13,    21,    22,    16,    17,    18,    19,    -1,    21,    22,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    35,    36,    37,    38,    14,    -1,    16,    17,
      18,    19,    -1,    21,    22,    16,    17,    18,    19,    -1,
      21,    22,    16,    17,    18,    19,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      -1,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    43,    10,     0,    11,    12,    44,     6,     8,
       9,    10,    13,    15,    23,    25,    29,    30,    31,    32,
      39,    40,    45,    46,    49,    50,    52,    57,    31,    50,
      10,    10,    10,    20,    10,    10,    10,    15,    31,    47,
      48,    16,    17,    18,    19,    21,    22,    35,    36,    37,
      38,    11,    31,    50,    50,    50,    50,    31,    46,    51,
      20,    14,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    20,    11,    11,    11,    11,    31,    11,    50,
      48,    50,    12,    12,    51,    12,    14,    26,    53,    54,
      55,    50,    57,    44,    49,    50,    13,    27,    56,    54,
      13,    13,    13,    11,     7,     7,    33,    58,    12,    29,
      50,    50,    10,    34,    50,    31,    50,    12,    13,    11,
      50,    12,    13,    50,    13,    58
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
#line 47 "n.y"
    { printf("\nsuccessful compilation\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 63 "n.y"
    { printf("\nvalid declaration\n"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 73 "n.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 75 "n.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 78 "n.y"
    { 
					int j=0,rs=11,ok=0;
					for(j=0;j<l;j++)
					{
						rs=strcmp(stt,total[j].name);
						if(rs==0)
						{
							printf("The variable %s has already been declared.\n",stt);
							ok=1;
							break;
						}
					}
					if(ok==0)
					{
						strcpy(total[l].name,stt);
						printf("Variable %s has been declared successfully\n",total[l].name);
						l++;
					}	 
				;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 97 "n.y"
    {
							
							int j=0,rs=11,ok=0;
							for(j=0;j<l;j++)
							{
								rs=strcmp(stt,total[j].name);
								if(rs==0)
								{
									printf("The variable %s has already been declared.\n",stt);
									ok=1;
									break;
								}
							}
							if(ok==0)
							{
								strcpy(total[l].name,stt);
								printf("Variable %s has been declared successfully\n",total[l].name);
								l++;
							}	 
						;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 120 "n.y"
    { //printf("\nvalue of expression: %d\n", $1); 
					;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 123 "n.y"
    { 
								//sym[$1] = $3; 
								int j=0,rs=11,ok=0;
								for(j=0;j<l;j++)
								{
									rs=strcmp(stt,total[j].name);
									if(rs==0)
									{
										//printf("The variabledsfsdfad %d has already been declared.\n",$3);
										total[j].id=(yyvsp[(3) - (3)]);
										ok=1;
										break;
									}
								}
								if(ok==0)
								{
									printf("Variable %s has not  declared yet.\n",stt);
								}
									
						     ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 146 "n.y"
    { (yyval) = (yyvsp[(1) - (1)]); 	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 148 "n.y"
    { 
							int j=0,rs=11,ok=0;
								for(j=0;j<l;j++)
								{
									rs=strcmp(stt,total[j].name);
									if(rs==0)
									{
										//printf("The variable %s has already been declared.\n",stt);
										(yyval)=total[j].id;
										ok=1;
										break;
									}
								}
								if(ok==0)
								{
									printf("Variable %s has not  declared yet.\n",stt);
								}
						;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 167 "n.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 169 "n.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 171 "n.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 173 "n.y"
    { 	if((yyvsp[(3) - (3)])) 
				  		{
				     			(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				  		}
				  		else
				  		{
							(yyval) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 184 "n.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 186 "n.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 188 "n.y"
    { (yyval)= ((yyvsp[(1) - (3)]) == (yyvsp[(3) - (3)])); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 190 "n.y"
    { (yyval)= ((yyvsp[(1) - (3)]) != (yyvsp[(3) - (3)]));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 192 "n.y"
    { (yyval)= ((yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)])); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 194 "n.y"
    { (yyval)= ((yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)])); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 196 "n.y"
    { (yyval) = (yyvsp[(2) - (3)]);	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 198 "n.y"
    {
																			printf("Variable in loop %s\n",stt);
																			//printf("%d %d %d\n",$3,sym[$3],$10);
																			int j=0,rs=11,ok=0;
																			for(j=0;j<l;j++)
																			{
																				rs=strcmp(stt,total[j].name);
																				if(rs==0)
																				{
																					//printf("The variable %s has already been declared.\n",stt);
																					total[j].id=(yyvsp[(5) - (11)]);
																					ok=1;
																					break;
																				}
																			}
																			if(ok==0)
																			{
																				printf("Variable %s has not  declared yet.\n",stt);
																			}									
																																
																			for(total[j].id=(yyvsp[(5) - (11)]);total[j].id<=(yyvsp[(7) - (11)]);total[j].id+=1)
																			{
																				printf("expression in loop: %d\n",total[j].id);
																			}
																		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 223 "n.y"
    { printf("here is printing %d\n",(yyvsp[(3) - (4)]));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 225 "n.y"
    { 
							printf("%s\n",stt);
						;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 228 "n.y"
    { printf("\nsuccessful compilation of a user function.\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 237 "n.y"
    {
														printf("Switch statement compiled successfully.\n");
														forswitch = (yyvsp[(3) - (7)]);
														printf("Inside switch %d\nOutput:\n",(yyvsp[(3) - (7)]));
														
														int m=0,no=0;
														for(m=0;m<nn;m++)
														{
															if(check[m]==forswitch){
																				no=1;
																				if(stack[(yyvsp[(2) - (7)])]==-1){
																									printf("In switch statement: %s\n",stackstring);
																									}
																				else{
																						printf("%d\n",stack[forswitch]);
																					}
																				}
														
														}
														if(no==0){printf(" %d \n",val);}
														nn=0;
													;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 264 "n.y"
    { 
												//printf("Now in Case: %d\n",$4);
												stack[(yyvsp[(2) - (4)])]=(yyvsp[(4) - (4)]);
												check[nn]=(yyvsp[(2) - (4)]);
												nn++;
											;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 270 "n.y"
    { //printf(" In switch statement got: %s\n",yytext);
											int ls,length;
											length=strlen(yytext);
											for(ls=0;ls<length;ls++){
													stackstring[ls]=yytext[ls];
											}
											//printf("Hooo In switch statement got: %s\n",stackstring);
											stack[(yyvsp[(2) - (5)])]=-1;
											check[nn]=(yyvsp[(2) - (5)]);
											nn++;
										;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 283 "n.y"
    { 			
												//printf("Now in Case: %d\n",$3);
												val=(yyvsp[(3) - (3)]);
											;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 288 "n.y"
    {
														  if((yyvsp[(3) - (7)])){
																	printf("Only if condition.\nOutput: %d.\n",(yyvsp[(6) - (7)]));
																}
															else{
																	printf("Get an if condition but not executed as condition is not true.\n");
																}
													  ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 296 "n.y"
    {
														if((yyvsp[(3) - (7)])){
																printf ("nested condition and condition is true.\n");
														}
														else {
																printf ("nested condition and condition is not true.\n");
																}
													;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 304 "n.y"
    {
																	if((yyvsp[(3) - (8)])){
																			printf(" 1st condition.\n");
																		}
																									
													            ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 310 "n.y"
    {
																								if((yyvsp[(3) - (12)])){
																										printf("1st condition executed.\n");
																										
																										}
																								else {
																										printf("nahoi condition executed.\n");
																										}
																						;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 320 "n.y"
    {
																	if((yyvsp[(3) - (8)])){
																			printf("else if condition\n");
																		}
																  ;}
    break;



/* Line 1455 of yacc.c  */
#line 1928 "n.tab.c"
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
#line 327 "n.y"


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}


