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
#line 38 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"


#include "defs.h"
#include "expression.h"
#include "language.h"
#include "value.h"
#include "parser-defs.h"
#include "m2-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols */
#include "block.h"

#define parse_type(ps) builtin_type (parse_gdbarch (ps))
#define parse_m2_type(ps) builtin_m2_type (parse_gdbarch (ps))

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror, etc),
   as well as gratuitiously global symbol names, so we can have multiple
   yacc generated parsers in gdb.  Note that these are only the variables
   produced by yacc.  If other parser generators (bison, byacc, etc) produce
   additional global names that conflict at link time, then those parser
   generators need to be fixed instead of adding those names to this list.  */

#define	yymaxdepth m2_maxdepth
#define	yyparse	m2_parse_internal
#define	yylex	m2_lex
#define	yyerror	m2_error
#define	yylval	m2_lval
#define	yychar	m2_char
#define	yydebug	m2_debug
#define	yypact	m2_pact
#define	yyr1	m2_r1
#define	yyr2	m2_r2
#define	yydef	m2_def
#define	yychk	m2_chk
#define	yypgo	m2_pgo
#define	yyact	m2_act
#define	yyexca	m2_exca
#define	yyerrflag m2_errflag
#define	yynerrs	m2_nerrs
#define	yyps	m2_ps
#define	yypv	m2_pv
#define	yys	m2_s
#define	yy_yys	m2_yys
#define	yystate	m2_state
#define	yytmp	m2_tmp
#define	yyv	m2_v
#define	yy_yyv	m2_yyv
#define	yyval	m2_val
#define	yylloc	m2_lloc
#define	yyreds	m2_reds		/* With YYDEBUG defined */
#define	yytoks	m2_toks		/* With YYDEBUG defined */
#define yyname	m2_name		/* With YYDEBUG defined */
#define yyrule	m2_rule		/* With YYDEBUG defined */
#define yylhs	m2_yylhs
#define yylen	m2_yylen
#define yydefred m2_yydefred
#define yydgoto	m2_yydgoto
#define yysindex m2_yysindex
#define yyrindex m2_yyrindex
#define yygindex m2_yygindex
#define yytable	 m2_yytable
#define yycheck	 m2_yycheck
#define yyss	m2_yyss
#define yysslim	m2_yysslim
#define yyssp	m2_yyssp
#define yystacksize m2_yystacksize
#define yyvs	m2_yyvs
#define yyvsp	m2_yyvsp

#ifndef YYDEBUG
#define	YYDEBUG 1		/* Default to yydebug support */
#endif

#define YYFPRINTF parser_fprintf

/* The state of the parser, used internally when we are parsing the
   expression.  */

static struct parser_state *pstate = NULL;

int yyparse (void);

static int yylex (void);

void yyerror (char *);

static int parse_number (int);

/* The sign of the number being parsed.  */
static int number_sign = 1;



/* Line 268 of yacc.c  */
#line 166 "m2-exp.c"

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
     INT = 258,
     HEX = 259,
     ERROR = 260,
     UINT = 261,
     M2_TRUE = 262,
     M2_FALSE = 263,
     CHAR = 264,
     FLOAT = 265,
     STRING = 266,
     NAME = 267,
     BLOCKNAME = 268,
     IDENT = 269,
     VARNAME = 270,
     TYPENAME = 271,
     SIZE = 272,
     CAP = 273,
     ORD = 274,
     HIGH = 275,
     ABS = 276,
     MIN_FUNC = 277,
     MAX_FUNC = 278,
     FLOAT_FUNC = 279,
     VAL = 280,
     CHR = 281,
     ODD = 282,
     TRUNC = 283,
     TSIZE = 284,
     INC = 285,
     DEC = 286,
     INCL = 287,
     EXCL = 288,
     COLONCOLON = 289,
     INTERNAL_VAR = 290,
     ABOVE_COMMA = 291,
     ASSIGN = 292,
     IN = 293,
     NOTEQUAL = 294,
     GEQ = 295,
     LEQ = 296,
     OROR = 297,
     LOGICAL_AND = 298,
     MOD = 299,
     DIV = 300,
     UNARY = 301,
     DOT = 302,
     NOT = 303,
     QID = 304
   };
#endif
/* Tokens.  */
#define INT 258
#define HEX 259
#define ERROR 260
#define UINT 261
#define M2_TRUE 262
#define M2_FALSE 263
#define CHAR 264
#define FLOAT 265
#define STRING 266
#define NAME 267
#define BLOCKNAME 268
#define IDENT 269
#define VARNAME 270
#define TYPENAME 271
#define SIZE 272
#define CAP 273
#define ORD 274
#define HIGH 275
#define ABS 276
#define MIN_FUNC 277
#define MAX_FUNC 278
#define FLOAT_FUNC 279
#define VAL 280
#define CHR 281
#define ODD 282
#define TRUNC 283
#define TSIZE 284
#define INC 285
#define DEC 286
#define INCL 287
#define EXCL 288
#define COLONCOLON 289
#define INTERNAL_VAR 290
#define ABOVE_COMMA 291
#define ASSIGN 292
#define IN 293
#define NOTEQUAL 294
#define GEQ 295
#define LEQ 296
#define OROR 297
#define LOGICAL_AND 298
#define MOD 299
#define DIV 300
#define UNARY 301
#define DOT 302
#define NOT 303
#define QID 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 137 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"

    LONGEST lval;
    ULONGEST ulval;
    DOUBLEST dval;
    struct symbol *sym;
    struct type *tval;
    struct stoken sval;
    int voidval;
    const struct block *bval;
    enum exp_opcode opcode;
    struct internalvar *ivar;

    struct type **tvec;
    int *ivec;
  


/* Line 293 of yacc.c  */
#line 318 "m2-exp.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 330 "m2-exp.c"

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

/* The parser invokes alloca or xmalloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
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
       && ! ((defined YYMALLOC || defined xmalloc) \
	     && (defined YYFREE || defined xfree)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC xmalloc
#   if ! defined xmalloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *xmalloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE xfree
#   if ! defined xfree && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void xfree (void *); /* INFRINGES ON USER NAME SPACE */
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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    42,     2,     2,    48,     2,
      60,    65,    53,    51,    36,    52,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    41,    40,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    68,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,    67,    62,     2,     2,     2,
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
      35,    37,    38,    43,    44,    45,    46,    47,    49,    55,
      56,    57,    61,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    13,    17,    20,
      23,    25,    27,    32,    37,    42,    47,    52,    57,    62,
      69,    74,    79,    84,    89,    92,    97,   104,   109,   116,
     120,   122,   126,   133,   140,   144,   149,   150,   156,   161,
     162,   168,   169,   171,   175,   177,   181,   186,   191,   195,
     199,   203,   207,   211,   215,   219,   223,   227,   231,   235,
     239,   243,   247,   251,   255,   259,   263,   265,   267,   269,
     271,   273,   275,   277,   282,   284,   286,   288,   292,   294,
     296,   300,   302
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    72,    -1,    71,    -1,    83,    -1,    72,
      58,    -1,    -1,    52,    73,    72,    -1,    51,    72,    -1,
      74,    72,    -1,    63,    -1,    62,    -1,    18,    60,    72,
      65,    -1,    19,    60,    72,    65,    -1,    21,    60,    72,
      65,    -1,    20,    60,    72,    65,    -1,    22,    60,    83,
      65,    -1,    23,    60,    83,    65,    -1,    24,    60,    72,
      65,    -1,    25,    60,    83,    36,    72,    65,    -1,    26,
      60,    72,    65,    -1,    27,    60,    72,    65,    -1,    28,
      60,    72,    65,    -1,    29,    60,    72,    65,    -1,    17,
      72,    -1,    30,    60,    72,    65,    -1,    30,    60,    72,
      36,    72,    65,    -1,    31,    60,    72,    65,    -1,    31,
      60,    72,    36,    72,    65,    -1,    72,    61,    12,    -1,
      75,    -1,    72,    43,    75,    -1,    32,    60,    72,    36,
      72,    65,    -1,    33,    60,    72,    36,    72,    65,    -1,
      66,    78,    67,    -1,    83,    66,    78,    67,    -1,    -1,
      72,    59,    76,    79,    68,    -1,    72,    59,    72,    68,
      -1,    -1,    72,    60,    77,    78,    65,    -1,    -1,    72,
      -1,    78,    36,    72,    -1,    72,    -1,    79,    36,    72,
      -1,    66,    83,    67,    72,    -1,    83,    60,    72,    65,
      -1,    60,    72,    65,    -1,    72,    50,    72,    -1,    72,
      53,    72,    -1,    72,    54,    72,    -1,    72,    56,    72,
      -1,    72,    55,    72,    -1,    72,    51,    72,    -1,    72,
      52,    72,    -1,    72,    41,    72,    -1,    72,    44,    72,
      -1,    72,    42,    72,    -1,    72,    46,    72,    -1,    72,
      45,    72,    -1,    72,    39,    72,    -1,    72,    40,    72,
      -1,    72,    49,    72,    -1,    72,    47,    72,    -1,    72,
      38,    72,    -1,     7,    -1,     8,    -1,     3,    -1,     6,
      -1,     9,    -1,    10,    -1,    82,    -1,    17,    60,    83,
      65,    -1,    11,    -1,    81,    -1,    13,    -1,    80,    34,
      13,    -1,    81,    -1,    35,    -1,    80,    34,    12,    -1,
      12,    -1,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   206,   206,   207,   210,   219,   224,   223,   230,   234,
     238,   239,   242,   246,   250,   254,   258,   264,   270,   274,
     280,   284,   288,   292,   296,   301,   305,   312,   316,   323,
     329,   332,   336,   340,   344,   346,   356,   352,   364,   371,
     368,   379,   382,   386,   391,   396,   401,   407,   413,   421,
     425,   429,   433,   437,   441,   445,   449,   453,   455,   459,
     463,   467,   471,   475,   479,   483,   490,   496,   502,   510,
     521,   531,   540,   543,   552,   559,   563,   573,   585,   593,
     597,   620,   665
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "HEX", "ERROR", "UINT", "M2_TRUE",
  "M2_FALSE", "CHAR", "FLOAT", "STRING", "NAME", "BLOCKNAME", "IDENT",
  "VARNAME", "TYPENAME", "SIZE", "CAP", "ORD", "HIGH", "ABS", "MIN_FUNC",
  "MAX_FUNC", "FLOAT_FUNC", "VAL", "CHR", "ODD", "TRUNC", "TSIZE", "INC",
  "DEC", "INCL", "EXCL", "COLONCOLON", "INTERNAL_VAR", "','",
  "ABOVE_COMMA", "ASSIGN", "'<'", "'>'", "'='", "'#'", "IN", "NOTEQUAL",
  "GEQ", "LEQ", "OROR", "'&'", "LOGICAL_AND", "'@'", "'+'", "'-'", "'*'",
  "'/'", "MOD", "DIV", "UNARY", "'^'", "'['", "'('", "DOT", "'~'", "NOT",
  "QID", "')'", "'{'", "'}'", "']'", "$accept", "start", "type_exp", "exp",
  "$@1", "not_exp", "set", "$@2", "$@3", "arglist", "non_empty_arglist",
  "block", "fblock", "variable", "type", 0
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
     285,   286,   287,   288,   289,   290,    44,   291,   292,    60,
      62,    61,    35,   293,   294,   295,   296,   297,    38,   298,
      64,    43,    45,    42,    47,   299,   300,   301,    94,    91,
      40,   302,   126,   303,   304,    41,   123,   125,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    72,    73,    72,    72,    72,
      74,    74,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    75,    75,    76,    72,    72,    77,
      72,    78,    78,    78,    79,    79,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    80,    81,    81,    82,    82,
      82,    82,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     0,     3,     2,     2,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     6,
       4,     4,     4,     4,     2,     4,     6,     4,     6,     3,
       1,     3,     6,     6,     3,     4,     0,     5,     4,     0,
       5,     0,     1,     3,     1,     3,     4,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     3,     1,     1,
       3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    68,    69,    66,    67,    70,    71,    74,    81,    76,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       6,     0,    11,    10,    41,     0,     3,     2,     0,    30,
       0,    78,    72,     4,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,    42,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
      39,     0,     9,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,    48,     0,    34,     0,    65,    61,
      62,    56,    58,    41,    31,     0,    57,    60,    59,    64,
      63,    49,    54,    55,    50,    51,    53,    52,     0,     0,
      41,    29,    80,    77,     0,     0,    73,    12,    13,    15,
      14,    16,    17,    18,     0,    20,    21,    22,    23,     0,
      25,     0,    27,     0,     0,    43,    46,    38,    44,     0,
       0,    47,    35,     0,     0,     0,     0,     0,     0,    37,
      40,    19,    26,    28,    32,    33,    45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,    36,    66,    64,    38,    39,   139,   140,    67,
     169,    40,    41,    42,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
     163,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   224,   -54,   -35,   -30,   -20,   -19,   -14,     3,     9,
      15,    30,    31,    32,    33,    35,    36,    37,   -89,   163,
     -89,   163,   -89,   -89,   163,    28,   -89,   838,   163,   -89,
      11,    65,   -89,   -27,   163,     7,   -27,   163,   163,   163,
     163,    84,    84,   163,    84,   163,   163,   163,   163,   163,
     163,   163,   163,     7,   163,   340,   838,   -32,   -40,   -89,
     163,   163,   163,   163,   163,   -15,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   -89,   163,
     -89,    89,     7,    -4,   163,   163,   -23,   368,   396,   424,
     452,    38,    39,   480,    66,   508,   536,   564,   592,   284,
     312,   788,   814,     7,   -89,   163,   -89,   163,   862,   -37,
     -37,   -37,   -37,   163,   -89,    41,   -37,   -37,   -37,    72,
      90,   148,   207,   207,     7,     7,     7,     7,   253,   163,
     163,   -89,   -89,   -89,   620,   -31,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   163,   -89,   -89,   -89,   -89,   163,
     -89,   163,   -89,   163,   163,   838,     7,   -89,   838,   -34,
     -33,   -89,   -89,   648,   676,   704,   732,   760,   163,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   838
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,   -89,     0,   -89,   -89,    34,   -89,   -89,   -88,
     -89,   -89,   -89,   -89,    54
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      37,    10,   178,   115,   115,   115,    47,   145,   142,   143,
      79,    45,    80,    81,    82,    83,    84,    85,    86,    87,
      94,    88,    89,    90,    91,    48,    95,   117,    69,    63,
      49,    65,   180,    94,   179,   116,   172,    94,    92,    95,
      50,    51,   146,    95,    65,    93,    52,    97,    98,    99,
     100,   123,   170,   103,    43,   105,   106,   107,   108,   109,
     110,   111,   112,    53,   113,    88,    89,    90,    91,    54,
     118,   119,   120,   121,   122,    55,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    68,   138,
      56,    57,    58,    59,   144,    60,    61,    62,    96,   -75,
      10,   141,   154,   151,   152,   101,   102,    95,   104,   124,
       0,     0,     0,     0,     0,   165,     0,   166,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,    87,   125,
      88,    89,    90,    91,     0,     0,     0,     0,     0,   168,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,     0,     0,   173,     0,     0,     0,     0,   174,
       0,   175,     0,   176,   177,     0,     1,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,     0,   186,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    82,
      83,    84,    85,    86,    87,     0,    88,    89,    90,    91,
       0,     0,     0,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,    31,     0,    32,    33,     1,     0,    34,
       2,     3,     4,     5,     6,     7,     8,     9,     0,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      84,    85,    86,    87,     0,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    32,    33,     0,     0,
      34,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
       0,    88,    89,    90,    91,     0,     0,     0,     0,     0,
     159,   167,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,     0,     0,   161,   160,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    91,     0,     0,     0,   162,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,     0,     0,     0,   114,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,    82,
      83,    84,    85,    86,    87,     0,    88,    89,    90,    91,
       0,     0,     0,   147,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,    82,    83,    84,
      85,    86,    87,     0,    88,    89,    90,    91,     0,     0,
       0,   148,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,     0,     0,     0,   149,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    91,     0,     0,     0,   150,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,     0,     0,     0,   153,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,    82,
      83,    84,    85,    86,    87,     0,    88,    89,    90,    91,
       0,     0,     0,   155,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,    82,    83,    84,
      85,    86,    87,     0,    88,    89,    90,    91,     0,     0,
       0,   156,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,     0,     0,     0,   157,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    91,     0,     0,     0,   158,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,     0,     0,     0,   171,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,    82,
      83,    84,    85,    86,    87,     0,    88,    89,    90,    91,
       0,     0,     0,   181,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,    80,    81,    82,    83,    84,
      85,    86,    87,     0,    88,    89,    90,    91,     0,     0,
       0,   182,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,     0,     0,     0,   183,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    91,     0,     0,     0,   184,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,     0,     0,   163,   185,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,    82,
      83,    84,    85,    86,    87,     0,    88,    89,    90,    91,
     164,     0,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,    82,
      83,    84,    85,    86,    87,     0,    88,    89,    90,    91,
     -76,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    82,    83,    84,    85,    86,    87,     0,
      88,    89,    90,    91
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-89))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-76))

static const yytype_int16 yycheck[] =
{
       0,    16,    36,    36,    36,    36,    60,    95,    12,    13,
      47,    11,    49,    50,    51,    52,    53,    54,    55,    56,
      60,    58,    59,    60,    61,    60,    66,    67,     0,    29,
      60,    31,    65,    60,    68,    67,    67,    60,    38,    66,
      60,    60,    65,    66,    44,    34,    60,    47,    48,    49,
      50,    66,   140,    53,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    60,    64,    58,    59,    60,    61,    60,
      70,    71,    72,    73,    74,    60,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    34,    89,
      60,    60,    60,    60,    94,    60,    60,    60,    44,    34,
      16,    12,    36,    65,    65,    51,    52,    66,    54,    75,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    75,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,   139,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    -1,   154,    -1,    -1,    -1,    -1,   159,
      -1,   161,    -1,   163,   164,    -1,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,   178,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    62,    63,     3,    -1,    66,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    -1,    -1,
      66,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      36,    68,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    36,    65,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    65,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    65,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    65,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    65,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,    65,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    65,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    65,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    65,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    65,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,    65,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    65,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    65,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    65,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    65,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,    65,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    65,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    -1,    36,    65,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    12,    13,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    35,    51,
      52,    60,    62,    63,    66,    70,    71,    72,    74,    75,
      80,    81,    82,    83,    60,    72,    83,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    72,    73,    72,    72,    78,    83,     0,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      49,    50,    51,    52,    53,    54,    55,    56,    58,    59,
      60,    61,    72,    34,    60,    66,    83,    72,    72,    72,
      72,    83,    83,    72,    83,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    65,    36,    67,    67,    72,    72,
      72,    72,    72,    66,    75,    83,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    76,
      77,    12,    12,    13,    72,    78,    65,    65,    65,    65,
      65,    65,    65,    65,    36,    65,    65,    65,    65,    36,
      65,    36,    65,    36,    36,    72,    72,    68,    72,    79,
      78,    65,    67,    72,    72,    72,    72,    72,    36,    68,
      65,    65,    65,    65,    65,    65,    72
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
       to xreallocate them elsewhere.  */

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
	/* Give user a chance to xreallocate the stack.  Use copies of
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
        case 4:

/* Line 1806 of yacc.c  */
#line 211 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_TYPE);
		  write_exp_elt_type (pstate, (yyvsp[(1) - (1)].tval));
		  write_exp_elt_opcode (pstate, OP_TYPE);
		}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 220 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_IND); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 224 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { number_sign = -1; }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 226 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { number_sign = 1;
			  write_exp_elt_opcode (pstate, UNOP_NEG); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 231 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_PLUS); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 235 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_LOGICAL_NOT); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 243 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_CAP); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 247 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ORD); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 251 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ABS); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 255 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_HIGH); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 259 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_MIN);
			  write_exp_elt_type (pstate, (yyvsp[(3) - (4)].tval));
			  write_exp_elt_opcode (pstate, UNOP_MIN); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 265 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_MAX);
			  write_exp_elt_type (pstate, (yyvsp[(3) - (4)].tval));
			  write_exp_elt_opcode (pstate, UNOP_MAX); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 271 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_FLOAT); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 275 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_VAL);
			  write_exp_elt_type (pstate, (yyvsp[(3) - (6)].tval));
			  write_exp_elt_opcode (pstate, BINOP_VAL); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 281 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_CHR); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 285 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ODD); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 289 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_TRUNC); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 293 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_SIZEOF); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 297 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_SIZEOF); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 302 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_PREINCREMENT); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 306 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ASSIGN_MODIFY);
			  write_exp_elt_opcode (pstate, BINOP_ADD);
			  write_exp_elt_opcode (pstate,
						BINOP_ASSIGN_MODIFY); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 313 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_PREDECREMENT);}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 317 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ASSIGN_MODIFY);
			  write_exp_elt_opcode (pstate, BINOP_SUB);
			  write_exp_elt_opcode (pstate,
						BINOP_ASSIGN_MODIFY); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 324 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, STRUCTOP_STRUCT);
			  write_exp_string (pstate, (yyvsp[(3) - (3)].sval));
			  write_exp_elt_opcode (pstate, STRUCTOP_STRUCT); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 333 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { error (_("Sets are not implemented."));}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 337 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { error (_("Sets are not implemented."));}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 341 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { error (_("Sets are not implemented."));}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 345 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { error (_("Sets are not implemented."));}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 347 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { error (_("Sets are not implemented."));}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 356 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { start_arglist(); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 358 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, MULTI_SUBSCRIPT);
			  write_exp_elt_longcst (pstate,
						 (LONGEST) end_arglist());
			  write_exp_elt_opcode (pstate, MULTI_SUBSCRIPT); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 365 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_SUBSCRIPT); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 371 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { start_arglist (); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 373 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_FUNCALL);
			  write_exp_elt_longcst (pstate,
						 (LONGEST) end_arglist ());
			  write_exp_elt_opcode (pstate, OP_FUNCALL); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 383 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { arglist_len = 1; }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 387 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { arglist_len++; }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 392 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { arglist_len = 1; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 397 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { arglist_len++; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 402 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_MEMVAL);
			  write_exp_elt_type (pstate, (yyvsp[(2) - (4)].tval));
			  write_exp_elt_opcode (pstate, UNOP_MEMVAL); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 408 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_CAST);
			  write_exp_elt_type (pstate, (yyvsp[(1) - (4)].tval));
			  write_exp_elt_opcode (pstate, UNOP_CAST); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 414 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 422 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_REPEAT); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 426 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_MUL); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 430 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_DIV); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 434 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_INTDIV); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 438 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_REM); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 442 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ADD); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 446 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_SUB); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 450 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_EQUAL); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 454 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_NOTEQUAL); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 456 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_NOTEQUAL); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 460 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LEQ); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 464 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_GEQ); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 468 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LESS); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 472 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_GTR); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 476 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_AND); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 480 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_OR); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 484 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ASSIGN); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 491 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_BOOL);
			  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(1) - (1)].ulval));
			  write_exp_elt_opcode (pstate, OP_BOOL); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 497 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_BOOL);
			  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(1) - (1)].ulval));
			  write_exp_elt_opcode (pstate, OP_BOOL); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 503 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_LONG);
			  write_exp_elt_type (pstate,
					parse_m2_type (pstate)->builtin_int);
			  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(1) - (1)].lval));
			  write_exp_elt_opcode (pstate, OP_LONG); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 511 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    {
			  write_exp_elt_opcode (pstate, OP_LONG);
			  write_exp_elt_type (pstate,
					      parse_m2_type (pstate)
					      ->builtin_card);
			  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(1) - (1)].ulval));
			  write_exp_elt_opcode (pstate, OP_LONG);
			}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 522 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_LONG);
			  write_exp_elt_type (pstate,
					      parse_m2_type (pstate)
					      ->builtin_char);
			  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(1) - (1)].ulval));
			  write_exp_elt_opcode (pstate, OP_LONG); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 532 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_DOUBLE);
			  write_exp_elt_type (pstate,
					      parse_m2_type (pstate)
					      ->builtin_real);
			  write_exp_elt_dblcst (pstate, (yyvsp[(1) - (1)].dval));
			  write_exp_elt_opcode (pstate, OP_DOUBLE); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 544 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_LONG);
			  write_exp_elt_type (pstate,
					    parse_type (pstate)->builtin_int);
			  write_exp_elt_longcst (pstate,
						 (LONGEST) TYPE_LENGTH ((yyvsp[(3) - (4)].tval)));
			  write_exp_elt_opcode (pstate, OP_LONG); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 553 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_M2_STRING);
			  write_exp_string (pstate, (yyvsp[(1) - (1)].sval));
			  write_exp_elt_opcode (pstate, OP_M2_STRING); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 560 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { (yyval.bval) = SYMBOL_BLOCK_VALUE((yyvsp[(1) - (1)].sym)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 564 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { struct symbol *sym
			    = lookup_symbol (copy_name ((yyvsp[(1) - (1)].sval)),
					     expression_context_block,
					     VAR_DOMAIN, 0);
			  (yyval.sym) = sym;}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 574 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { struct symbol *tem
			    = lookup_symbol (copy_name ((yyvsp[(3) - (3)].sval)), (yyvsp[(1) - (3)].bval),
					     VAR_DOMAIN, 0);
			  if (!tem || SYMBOL_CLASS (tem) != LOC_BLOCK)
			    error (_("No function \"%s\" in specified context."),
				   copy_name ((yyvsp[(3) - (3)].sval)));
			  (yyval.sym) = tem;
			}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 586 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { write_exp_elt_opcode (pstate, OP_VAR_VALUE);
			  write_exp_elt_block (pstate, NULL);
			  write_exp_elt_sym (pstate, (yyvsp[(1) - (1)].sym));
			  write_exp_elt_opcode (pstate, OP_VAR_VALUE); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 598 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { struct symbol *sym;
			  sym = lookup_symbol (copy_name ((yyvsp[(3) - (3)].sval)), (yyvsp[(1) - (3)].bval),
					       VAR_DOMAIN, 0);
			  if (sym == 0)
			    error (_("No symbol \"%s\" in specified context."),
				   copy_name ((yyvsp[(3) - (3)].sval)));
			  if (symbol_read_needs_frame (sym))
			    {
			      if (innermost_block == 0
				  || contained_in (block_found,
						   innermost_block))
				innermost_block = block_found;
			    }

			  write_exp_elt_opcode (pstate, OP_VAR_VALUE);
			  /* block_found is set by lookup_symbol.  */
			  write_exp_elt_block (pstate, block_found);
			  write_exp_elt_sym (pstate, sym);
			  write_exp_elt_opcode (pstate, OP_VAR_VALUE); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 621 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { struct symbol *sym;
			  struct field_of_this_result is_a_field_of_this;

 			  sym = lookup_symbol (copy_name ((yyvsp[(1) - (1)].sval)),
					       expression_context_block,
					       VAR_DOMAIN,
					       &is_a_field_of_this);
			  if (sym)
			    {
			      if (symbol_read_needs_frame (sym))
				{
				  if (innermost_block == 0 ||
				      contained_in (block_found, 
						    innermost_block))
				    innermost_block = block_found;
				}

			      write_exp_elt_opcode (pstate, OP_VAR_VALUE);
			      /* We want to use the selected frame, not
				 another more inner frame which happens to
				 be in the same block.  */
			      write_exp_elt_block (pstate, NULL);
			      write_exp_elt_sym (pstate, sym);
			      write_exp_elt_opcode (pstate, OP_VAR_VALUE);
			    }
			  else
			    {
			      struct bound_minimal_symbol msymbol;
			      char *arg = copy_name ((yyvsp[(1) - (1)].sval));

			      msymbol =
				lookup_bound_minimal_symbol (arg);
			      if (msymbol.minsym != NULL)
				write_exp_msymbol (pstate, msymbol);
			      else if (!have_full_symbols () && !have_partial_symbols ())
				error (_("No symbol table is loaded.  Use the \"symbol-file\" command."));
			      else
				error (_("No symbol \"%s\" in current context."),
				       copy_name ((yyvsp[(1) - (1)].sval)));
			    }
			}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 666 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"
    { (yyval.tval) = lookup_typename (parse_language (pstate),
						parse_gdbarch (pstate),
						copy_name ((yyvsp[(1) - (1)].sval)),
						expression_context_block, 0); }
    break;



/* Line 1806 of yacc.c  */
#line 2507 "m2-exp.c"
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
#line 673 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/m2-exp.y"


/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.
   LEN is the number of characters in it.  */

/*** Needs some error checking for the float case ***/

static int
parse_number (int olen)
{
  const char *p = lexptr;
  LONGEST n = 0;
  LONGEST prevn = 0;
  int c,i,ischar=0;
  int base = input_radix;
  int len = olen;
  int unsigned_p = number_sign == 1 ? 1 : 0;

  if(p[len-1] == 'H')
  {
     base = 16;
     len--;
  }
  else if(p[len-1] == 'C' || p[len-1] == 'B')
  {
     base = 8;
     ischar = p[len-1] == 'C';
     len--;
  }

  /* Scan the number */
  for (c = 0; c < len; c++)
  {
    if (p[c] == '.' && base == 10)
      {
	/* It's a float since it contains a point.  */
	yylval.dval = atof (p);
	lexptr += len;
	return FLOAT;
      }
    if (p[c] == '.' && base != 10)
       error (_("Floating point numbers must be base 10."));
    if (base == 10 && (p[c] < '0' || p[c] > '9'))
       error (_("Invalid digit \'%c\' in number."),p[c]);
 }

  while (len-- > 0)
    {
      c = *p++;
      n *= base;
      if( base == 8 && (c == '8' || c == '9'))
	 error (_("Invalid digit \'%c\' in octal number."),c);
      if (c >= '0' && c <= '9')
	i = c - '0';
      else
	{
	  if (base == 16 && c >= 'A' && c <= 'F')
	    i = c - 'A' + 10;
	  else
	     return ERROR;
	}
      n+=i;
      if(i >= base)
	 return ERROR;
      if(!unsigned_p && number_sign == 1 && (prevn >= n))
	 unsigned_p=1;		/* Try something unsigned */
      /* Don't do the range check if n==i and i==0, since that special
	 case will give an overflow error.  */
      if(RANGE_CHECK && n!=i && i)
      {
	 if((unsigned_p && (unsigned)prevn >= (unsigned)n) ||
	    ((!unsigned_p && number_sign==-1) && -prevn <= -n))
	    range_error (_("Overflow on numeric constant."));
      }
	 prevn=n;
    }

  lexptr = p;
  if(*p == 'B' || *p == 'C' || *p == 'H')
     lexptr++;			/* Advance past B,C or H */

  if (ischar)
  {
     yylval.ulval = n;
     return CHAR;
  }
  else if ( unsigned_p && number_sign == 1)
  {
     yylval.ulval = n;
     return UINT;
  }
  else if((unsigned_p && (n<0))) {
     range_error (_("Overflow on numeric constant -- number too large."));
     /* But, this can return if range_check == range_warn.  */
  }
  yylval.lval = n;
  return INT;
}


/* Some tokens */

static struct
{
   char name[2];
   int token;
} tokentab2[] =
{
    { {'<', '>'},    NOTEQUAL 	},
    { {':', '='},    ASSIGN	},
    { {'<', '='},    LEQ	},
    { {'>', '='},    GEQ	},
    { {':', ':'},    COLONCOLON },

};

/* Some specific keywords */

struct keyword {
   char keyw[10];
   int token;
};

static struct keyword keytab[] =
{
    {"OR" ,   OROR	 },
    {"IN",    IN         },/* Note space after IN */
    {"AND",   LOGICAL_AND},
    {"ABS",   ABS	 },
    {"CHR",   CHR	 },
    {"DEC",   DEC	 },
    {"NOT",   NOT	 },
    {"DIV",   DIV    	 },
    {"INC",   INC	 },
    {"MAX",   MAX_FUNC	 },
    {"MIN",   MIN_FUNC	 },
    {"MOD",   MOD	 },
    {"ODD",   ODD	 },
    {"CAP",   CAP	 },
    {"ORD",   ORD	 },
    {"VAL",   VAL	 },
    {"EXCL",  EXCL	 },
    {"HIGH",  HIGH       },
    {"INCL",  INCL	 },
    {"SIZE",  SIZE       },
    {"FLOAT", FLOAT_FUNC },
    {"TRUNC", TRUNC	 },
    {"TSIZE", SIZE       },
};


/* Read one token, getting characters through lexptr.  */

/* This is where we will check to make sure that the language and the
   operators used are compatible  */

static int
yylex (void)
{
  int c;
  int namelen;
  int i;
  const char *tokstart;
  char quote;

 retry:

  prev_lexptr = lexptr;

  tokstart = lexptr;


  /* See if it is a special token of length 2 */
  for( i = 0 ; i < (int) (sizeof tokentab2 / sizeof tokentab2[0]) ; i++)
     if (strncmp (tokentab2[i].name, tokstart, 2) == 0)
     {
	lexptr += 2;
	return tokentab2[i].token;
     }

  switch (c = *tokstart)
    {
    case 0:
      return 0;

    case ' ':
    case '\t':
    case '\n':
      lexptr++;
      goto retry;

    case '(':
      paren_depth++;
      lexptr++;
      return c;

    case ')':
      if (paren_depth == 0)
	return 0;
      paren_depth--;
      lexptr++;
      return c;

    case ',':
      if (comma_terminates && paren_depth == 0)
	return 0;
      lexptr++;
      return c;

    case '.':
      /* Might be a floating point number.  */
      if (lexptr[1] >= '0' && lexptr[1] <= '9')
	break;			/* Falls into number code.  */
      else
      {
	 lexptr++;
	 return DOT;
      }

/* These are character tokens that appear as-is in the YACC grammar */
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
    case '<':
    case '>':
    case '[':
    case ']':
    case '=':
    case '{':
    case '}':
    case '#':
    case '@':
    case '~':
    case '&':
      lexptr++;
      return c;

    case '\'' :
    case '"':
      quote = c;
      for (namelen = 1; (c = tokstart[namelen]) != quote && c != '\0'; namelen++)
	if (c == '\\')
	  {
	    c = tokstart[++namelen];
	    if (c >= '0' && c <= '9')
	      {
		c = tokstart[++namelen];
		if (c >= '0' && c <= '9')
		  c = tokstart[++namelen];
	      }
	  }
      if(c != quote)
	 error (_("Unterminated string or character constant."));
      yylval.sval.ptr = tokstart + 1;
      yylval.sval.length = namelen - 1;
      lexptr += namelen + 1;

      if(namelen == 2)  	/* Single character */
      {
	   yylval.ulval = tokstart[1];
	   return CHAR;
      }
      else
	 return STRING;
    }

  /* Is it a number?  */
  /* Note:  We have already dealt with the case of the token '.'.
     See case '.' above.  */
  if ((c >= '0' && c <= '9'))
    {
      /* It's a number.  */
      int got_dot = 0, got_e = 0;
      const char *p = tokstart;
      int toktype;

      for (++p ;; ++p)
	{
	  if (!got_e && (*p == 'e' || *p == 'E'))
	    got_dot = got_e = 1;
	  else if (!got_dot && *p == '.')
	    got_dot = 1;
	  else if (got_e && (p[-1] == 'e' || p[-1] == 'E')
		   && (*p == '-' || *p == '+'))
	    /* This is the sign of the exponent, not the end of the
	       number.  */
	    continue;
	  else if ((*p < '0' || *p > '9') &&
		   (*p < 'A' || *p > 'F') &&
		   (*p != 'H'))  /* Modula-2 hexadecimal number */
	    break;
	}
	toktype = parse_number (p - tokstart);
        if (toktype == ERROR)
	  {
	    char *err_copy = (char *) alloca (p - tokstart + 1);

	    memcpy (err_copy, tokstart, p - tokstart);
	    err_copy[p - tokstart] = 0;
	    error (_("Invalid number \"%s\"."), err_copy);
	  }
	lexptr = p;
	return toktype;
    }

  if (!(c == '_' || c == '$'
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    /* We must have come across a bad character (e.g. ';').  */
    error (_("Invalid character '%c' in expression."), c);

  /* It's a name.  See how long it is.  */
  namelen = 0;
  for (c = tokstart[namelen];
       (c == '_' || c == '$' || (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
       c = tokstart[++namelen])
    ;

  /* The token "if" terminates the expression and is NOT
     removed from the input stream.  */
  if (namelen == 2 && tokstart[0] == 'i' && tokstart[1] == 'f')
    {
      return 0;
    }

  lexptr += namelen;

  /*  Lookup special keywords */
  for(i = 0 ; i < (int) (sizeof(keytab) / sizeof(keytab[0])) ; i++)
     if (namelen == strlen (keytab[i].keyw)
	 && strncmp (tokstart, keytab[i].keyw, namelen) == 0)
	   return keytab[i].token;

  yylval.sval.ptr = tokstart;
  yylval.sval.length = namelen;

  if (*tokstart == '$')
    {
      write_dollar_variable (pstate, yylval.sval);
      return INTERNAL_VAR;
    }

  /* Use token-type BLOCKNAME for symbols that happen to be defined as
     functions.  If this is not so, then ...
     Use token-type TYPENAME for symbols that happen to be defined
     currently as names of types; NAME for other symbols.
     The caller is not constrained to care about the distinction.  */
 {


    char *tmp = copy_name (yylval.sval);
    struct symbol *sym;

    if (lookup_symtab (tmp))
      return BLOCKNAME;
    sym = lookup_symbol (tmp, expression_context_block, VAR_DOMAIN, 0);
    if (sym && SYMBOL_CLASS (sym) == LOC_BLOCK)
      return BLOCKNAME;
    if (lookup_typename (parse_language (pstate), parse_gdbarch (pstate),
			 copy_name (yylval.sval),
			 expression_context_block, 1))
      return TYPENAME;

    if(sym)
    {
      switch(SYMBOL_CLASS (sym))
       {
       case LOC_STATIC:
       case LOC_REGISTER:
       case LOC_ARG:
       case LOC_REF_ARG:
       case LOC_REGPARM_ADDR:
       case LOC_LOCAL:
       case LOC_CONST:
       case LOC_CONST_BYTES:
       case LOC_OPTIMIZED_OUT:
       case LOC_COMPUTED:
	  return NAME;

       case LOC_TYPEDEF:
	  return TYPENAME;

       case LOC_BLOCK:
	  return BLOCKNAME;

       case LOC_UNDEF:
	  error (_("internal:  Undefined class in m2lex()"));

       case LOC_LABEL:
       case LOC_UNRESOLVED:
	  error (_("internal:  Unforseen case in m2lex()"));

       default:
	  error (_("unhandled token in m2lex()"));
	  break;
       }
    }
    else
    {
       /* Built-in BOOLEAN type.  This is sort of a hack.  */
       if (strncmp (tokstart, "TRUE", 4) == 0)
       {
	  yylval.ulval = 1;
	  return M2_TRUE;
       }
       else if (strncmp (tokstart, "FALSE", 5) == 0)
       {
	  yylval.ulval = 0;
	  return M2_FALSE;
       }
    }

    /* Must be another type of name...  */
    return NAME;
 }
}

int
m2_parse (struct parser_state *par_state)
{
  int result;
  struct cleanup *c = make_cleanup_clear_parser_state (&pstate);

  /* Setting up the parser state.  */
  gdb_assert (par_state != NULL);
  pstate = par_state;

  result = yyparse ();
  do_cleanups (c);

  return result;
}

void
yyerror (char *msg)
{
  if (prev_lexptr)
    lexptr = prev_lexptr;

  error (_("A %s in expression, near `%s'."), (msg ? msg : "error"), lexptr);
}

