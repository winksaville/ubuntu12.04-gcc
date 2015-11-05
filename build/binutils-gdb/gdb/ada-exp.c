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
#line 36 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"


#include "defs.h"
#include <ctype.h>
#include "expression.h"
#include "value.h"
#include "parser-defs.h"
#include "language.h"
#include "ada-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols */
#include "frame.h"
#include "block.h"

#define parse_type(ps) builtin_type (parse_gdbarch (ps))

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror, etc),
   as well as gratuitiously global symbol names, so we can have multiple
   yacc generated parsers in gdb.  These are only the variables
   produced by yacc.  If other parser generators (bison, byacc, etc) produce
   additional global names that conflict at link time, then those parser
   generators need to be fixed instead of adding those names to this list.  */

/* NOTE: This is clumsy, especially since BISON and FLEX provide --prefix
   options.  I presume we are maintaining it to accommodate systems
   without BISON?  (PNH) */

#define	yymaxdepth ada_maxdepth
/* ada_parse calls this after initialization */
#define	yyparse	ada_parse_internal
#define	yylex	ada_lex
#define	yyerror	ada_error
#define	yylval	ada_lval
#define	yychar	ada_char
#define	yydebug	ada_debug
#define	yypact	ada_pact
#define	yyr1	ada_r1
#define	yyr2	ada_r2
#define	yydef	ada_def
#define	yychk	ada_chk
#define	yypgo	ada_pgo
#define	yyact	ada_act
#define	yyexca	ada_exca
#define yyerrflag ada_errflag
#define yynerrs	ada_nerrs
#define	yyps	ada_ps
#define	yypv	ada_pv
#define	yys	ada_s
#define	yy_yys	ada_yys
#define	yystate	ada_state
#define	yytmp	ada_tmp
#define	yyv	ada_v
#define	yy_yyv	ada_yyv
#define	yyval	ada_val
#define	yylloc	ada_lloc
#define yyreds	ada_reds		/* With YYDEBUG defined */
#define yytoks	ada_toks		/* With YYDEBUG defined */
#define yyname	ada_name		/* With YYDEBUG defined */
#define yyrule	ada_rule		/* With YYDEBUG defined */
#define yyss	ada_yyss
#define yysslim	ada_yysslim
#define yyssp	ada_yyssp
#define yystacksize ada_yystacksize
#define yyvs	ada_yyvs
#define yyvsp	ada_yyvsp

#ifndef YYDEBUG
#define	YYDEBUG	1		/* Default to yydebug support */
#endif

#define YYFPRINTF parser_fprintf

struct name_info {
  struct symbol *sym;
  struct minimal_symbol *msym;
  const struct block *block;
  struct stoken stoken;
};

/* The state of the parser, used internally when we are parsing the
   expression.  */

static struct parser_state *pstate = NULL;

static struct stoken empty_stoken = { "", 0 };

/* If expression is in the context of TYPE'(...), then TYPE, else
 * NULL.  */
static struct type *type_qualifier;

int yyparse (void);

static int yylex (void);

void yyerror (char *);

static void write_int (struct parser_state *, LONGEST, struct type *);

static void write_object_renaming (struct parser_state *,
				   const struct block *, const char *, int,
				   const char *, int);

static struct type* write_var_or_type (struct parser_state *,
				       const struct block *, struct stoken);

static void write_name_assoc (struct parser_state *, struct stoken);

static void write_exp_op_with_string (struct parser_state *, enum exp_opcode,
				      struct stoken);

static const struct block *block_lookup (const struct block *, const char *);

static LONGEST convert_char_literal (struct type *, LONGEST);

static void write_ambiguous_var (struct parser_state *,
				 const struct block *, char *, int);

static struct type *type_int (struct parser_state *);

static struct type *type_long (struct parser_state *);

static struct type *type_long_long (struct parser_state *);

static struct type *type_float (struct parser_state *);

static struct type *type_double (struct parser_state *);

static struct type *type_long_double (struct parser_state *);

static struct type *type_char (struct parser_state *);

static struct type *type_boolean (struct parser_state *);

static struct type *type_system_address (struct parser_state *);



/* Line 268 of yacc.c  */
#line 210 "ada-exp.c"

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
     NULL_PTR = 259,
     CHARLIT = 260,
     FLOAT = 261,
     TRUEKEYWORD = 262,
     FALSEKEYWORD = 263,
     COLONCOLON = 264,
     STRING = 265,
     NAME = 266,
     DOT_ID = 267,
     DOT_ALL = 268,
     SPECIAL_VARIABLE = 269,
     ASSIGN = 270,
     ELSE = 271,
     THEN = 272,
     XOR = 273,
     OR = 274,
     _AND_ = 275,
     DOTDOT = 276,
     IN = 277,
     GEQ = 278,
     LEQ = 279,
     NOTEQUAL = 280,
     UNARY = 281,
     REM = 282,
     MOD = 283,
     NOT = 284,
     ABS = 285,
     STARSTAR = 286,
     VAR = 287,
     ARROW = 288,
     TICK_LENGTH = 289,
     TICK_LAST = 290,
     TICK_FIRST = 291,
     TICK_ADDRESS = 292,
     TICK_ACCESS = 293,
     TICK_MODULUS = 294,
     TICK_MIN = 295,
     TICK_MAX = 296,
     TICK_VAL = 297,
     TICK_TAG = 298,
     TICK_SIZE = 299,
     TICK_RANGE = 300,
     TICK_POS = 301,
     NEW = 302,
     OTHERS = 303
   };
#endif
/* Tokens.  */
#define INT 258
#define NULL_PTR 259
#define CHARLIT 260
#define FLOAT 261
#define TRUEKEYWORD 262
#define FALSEKEYWORD 263
#define COLONCOLON 264
#define STRING 265
#define NAME 266
#define DOT_ID 267
#define DOT_ALL 268
#define SPECIAL_VARIABLE 269
#define ASSIGN 270
#define ELSE 271
#define THEN 272
#define XOR 273
#define OR 274
#define _AND_ 275
#define DOTDOT 276
#define IN 277
#define GEQ 278
#define LEQ 279
#define NOTEQUAL 280
#define UNARY 281
#define REM 282
#define MOD 283
#define NOT 284
#define ABS 285
#define STARSTAR 286
#define VAR 287
#define ARROW 288
#define TICK_LENGTH 289
#define TICK_LAST 290
#define TICK_FIRST 291
#define TICK_ADDRESS 292
#define TICK_ACCESS 293
#define TICK_MODULUS 294
#define TICK_MIN 295
#define TICK_MAX 296
#define TICK_VAL 297
#define TICK_TAG 298
#define TICK_SIZE 299
#define TICK_RANGE 300
#define TICK_POS 301
#define NEW 302
#define OTHERS 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 175 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"

    LONGEST lval;
    struct {
      LONGEST val;
      struct type *type;
    } typed_val;
    struct {
      DOUBLEST dval;
      struct type *type;
    } typed_val_float;
    struct type *tval;
    struct stoken sval;
    const struct block *bval;
    struct internalvar *ivar;
  


/* Line 293 of yacc.c  */
#line 360 "ada-exp.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 372 "ada-exp.c"

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   770

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    32,    64,
      58,    63,    34,    30,    65,    31,    57,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      22,    21,    23,     2,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    42,    67,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    24,    25,    26,    27,
      28,    33,    36,    37,    38,    39,    40,    41,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    11,    15,    18,    21,    26,
      31,    32,    40,    41,    48,    55,    59,    61,    63,    65,
      67,    70,    73,    76,    79,    80,    82,    86,    90,    96,
     101,   105,   109,   113,   117,   121,   125,   129,   133,   137,
     139,   143,   147,   151,   157,   163,   167,   174,   181,   186,
     190,   194,   198,   200,   202,   204,   206,   208,   210,   214,
     218,   223,   228,   232,   236,   241,   246,   250,   254,   257,
     260,   264,   268,   272,   275,   278,   286,   294,   300,   306,
     309,   310,   314,   316,   318,   319,   321,   323,   325,   327,
     329,   331,   333,   336,   338,   341,   344,   348,   351,   355,
     359,   361,   364,   367,   370,   374,   376,   378,   382,   386,
     388,   389,   394,   398,   399,   406,   407,   412,   416,   417,
     424,   427,   430
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    71,    -1,    78,    -1,    71,    62,    78,
      -1,    72,    15,    78,    -1,    72,    13,    -1,    72,    12,
      -1,    72,    58,    76,    63,    -1,    87,    58,    76,    63,
      -1,    -1,    87,    64,    74,    73,    58,    78,    63,    -1,
      -1,    72,    58,    75,    24,    75,    63,    -1,    87,    58,
      75,    24,    75,    63,    -1,    58,    71,    63,    -1,    87,
      -1,    14,    -1,    89,    -1,    72,    -1,    31,    75,    -1,
      30,    75,    -1,    38,    75,    -1,    39,    75,    -1,    -1,
      78,    -1,    11,    43,    78,    -1,    76,    65,    78,    -1,
      76,    65,    11,    43,    78,    -1,    66,    87,    67,    72,
      -1,    75,    40,    75,    -1,    75,    34,    75,    -1,    75,
      35,    75,    -1,    75,    36,    75,    -1,    75,    37,    75,
      -1,    75,    29,    75,    -1,    75,    30,    75,    -1,    75,
      32,    75,    -1,    75,    31,    75,    -1,    75,    -1,    75,
      21,    75,    -1,    75,    28,    75,    -1,    75,    27,    75,
      -1,    75,    25,    75,    24,    75,    -1,    75,    25,    72,
      55,    84,    -1,    75,    25,    87,    -1,    75,    38,    25,
      75,    24,    75,    -1,    75,    38,    25,    72,    55,    84,
      -1,    75,    38,    25,    87,    -1,    75,    26,    75,    -1,
      75,    22,    75,    -1,    75,    23,    75,    -1,    77,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      77,    20,    77,    -1,    79,    20,    77,    -1,    77,    20,
      17,    77,    -1,    80,    20,    17,    77,    -1,    77,    19,
      77,    -1,    81,    19,    77,    -1,    77,    19,    16,    77,
      -1,    82,    19,    16,    77,    -1,    77,    18,    77,    -1,
      83,    18,    77,    -1,    72,    48,    -1,    72,    47,    -1,
      72,    46,    84,    -1,    72,    45,    84,    -1,    72,    44,
      84,    -1,    72,    54,    -1,    72,    53,    -1,    86,    50,
      58,    78,    65,    78,    63,    -1,    86,    51,    58,    78,
      65,    78,    63,    -1,    86,    56,    58,    78,    63,    -1,
      85,    52,    58,    78,    63,    -1,    85,    49,    -1,    -1,
      58,     3,    63,    -1,    87,    -1,    85,    -1,    -1,     3,
      -1,     5,    -1,     6,    -1,     4,    -1,    10,    -1,     7,
      -1,     8,    -1,    60,    11,    -1,    11,    -1,    88,    11,
      -1,    11,    48,    -1,    88,    11,    48,    -1,    11,     9,
      -1,    88,    11,     9,    -1,    58,    90,    63,    -1,    92,
      -1,    91,    78,    -1,    91,    92,    -1,    78,    65,    -1,
      91,    78,    65,    -1,    93,    -1,    94,    -1,    94,    65,
      92,    -1,    61,    43,    78,    -1,    95,    -1,    -1,    11,
      43,    96,    78,    -1,    75,    43,    78,    -1,    -1,    75,
      24,    75,    43,    97,    78,    -1,    -1,    11,    42,    98,
      95,    -1,    75,    42,    95,    -1,    -1,    75,    24,    75,
      42,    99,    95,    -1,    34,    72,    -1,    32,    72,    -1,
      72,    59,    78,    68,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   240,   240,   244,   245,   247,   252,   256,   261,   267,
     286,   286,   298,   302,   304,   312,   323,   333,   337,   340,
     343,   347,   351,   355,   359,   362,   364,   366,   368,   372,
     385,   389,   393,   397,   401,   405,   409,   413,   417,   421,
     424,   428,   432,   436,   438,   443,   451,   455,   461,   472,
     476,   480,   484,   485,   486,   487,   488,   489,   493,   495,
     500,   502,   507,   509,   514,   516,   520,   522,   534,   536,
     543,   546,   549,   552,   554,   556,   558,   560,   562,   564,
     568,   570,   575,   585,   587,   594,   598,   606,   614,   618,
     624,   626,   630,   634,   636,   638,   646,   657,   659,   664,
     673,   674,   680,   685,   691,   700,   701,   702,   706,   711,
     726,   725,   728,   731,   730,   737,   736,   739,   742,   741,
     749,   751,   753
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "NULL_PTR", "CHARLIT", "FLOAT",
  "TRUEKEYWORD", "FALSEKEYWORD", "COLONCOLON", "STRING", "NAME", "DOT_ID",
  "DOT_ALL", "SPECIAL_VARIABLE", "ASSIGN", "ELSE", "THEN", "XOR", "OR",
  "_AND_", "'='", "'<'", "'>'", "DOTDOT", "IN", "GEQ", "LEQ", "NOTEQUAL",
  "'@'", "'+'", "'-'", "'&'", "UNARY", "'*'", "'/'", "REM", "MOD", "NOT",
  "ABS", "STARSTAR", "VAR", "'|'", "ARROW", "TICK_LENGTH", "TICK_LAST",
  "TICK_FIRST", "TICK_ADDRESS", "TICK_ACCESS", "TICK_MODULUS", "TICK_MIN",
  "TICK_MAX", "TICK_VAL", "TICK_TAG", "TICK_SIZE", "TICK_RANGE",
  "TICK_POS", "'.'", "'('", "'['", "NEW", "OTHERS", "';'", "')'", "'\\''",
  "','", "'{'", "'}'", "']'", "$accept", "start", "exp1", "primary", "$@1",
  "save_qualifier", "simple_exp", "arglist", "relation", "exp", "and_exp",
  "and_then_exp", "or_exp", "or_else_exp", "xor_exp", "tick_arglist",
  "type_prefix", "opt_type_prefix", "var_or_type", "block", "aggregate",
  "aggregate_component_list", "positional_list", "component_groups",
  "others", "component_group", "component_associations", "$@2", "$@3",
  "$@4", "$@5", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    61,    60,    62,   276,   277,   278,   279,   280,    64,
      43,    45,    38,   281,    42,    47,   282,   283,   284,   285,
     286,   287,   124,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    46,    40,    91,
     302,   303,    59,    41,    39,    44,   123,   125,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    71,    72,    72,    72,    72,
      73,    72,    74,    72,    72,    72,    72,    72,    72,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    72,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      84,    84,    85,    86,    86,    72,    72,    72,    72,    72,
      72,    72,    72,    87,    87,    87,    87,    88,    88,    89,
      90,    90,    90,    91,    91,    92,    92,    92,    93,    94,
      96,    95,    95,    97,    95,    98,    95,    95,    99,    95,
      72,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     3,     2,     2,     4,     4,
       0,     7,     0,     6,     6,     3,     1,     1,     1,     1,
       2,     2,     2,     2,     0,     1,     3,     3,     5,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     5,     5,     3,     6,     6,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     3,     3,     4,     4,     3,     3,     2,     2,
       3,     3,     3,     2,     2,     7,     7,     5,     5,     2,
       0,     3,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     3,     2,     3,     3,
       1,     2,     2,     2,     3,     1,     1,     3,     3,     1,
       0,     4,     3,     0,     6,     0,     4,     3,     0,     6,
       2,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      84,    85,    88,    86,    87,    90,    91,    89,    93,    17,
      84,    84,    84,    84,    84,    84,    84,     0,     0,     0,
       2,    19,    39,    52,     3,    53,    54,    55,    56,    57,
      83,     0,    16,     0,    18,    97,    95,    19,    21,    20,
     121,   120,    22,    23,    93,     0,     0,    39,     3,     0,
      84,   100,   105,   106,   109,    92,     0,     1,    84,     7,
       6,    84,    80,    80,    80,    69,    68,    74,    73,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,     0,    84,    84,    84,
      84,    84,     0,    84,     0,    84,    79,     0,     0,     0,
       0,    84,    12,    94,   115,   110,    84,    15,    84,    84,
      84,   103,    99,   101,   102,    84,    84,     4,     5,     0,
      72,    71,    70,    93,    39,     0,    25,     0,    40,    50,
      51,    19,     0,    16,    49,    42,    41,    35,    36,    38,
      37,    31,    32,    33,    34,    84,    30,    66,    84,    62,
      84,    58,    59,    84,    63,    84,    67,    84,    84,    84,
      84,    39,     0,    10,    98,    96,    84,    84,   108,     0,
       0,   117,   112,   104,   107,    29,     0,    84,    84,     8,
      84,   122,    80,    84,    19,     0,    16,    64,    60,    61,
      65,     0,     0,     0,     0,    84,     9,     0,   116,   111,
     118,   113,    81,    26,     0,    93,    27,    44,    43,    80,
      84,    78,    84,    84,    77,     0,    84,    84,    84,    13,
      84,    47,    46,     0,     0,    14,     0,   119,   114,    28,
      75,    76,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    37,   197,   163,    22,   125,    23,   126,
      25,    26,    27,    28,    29,   120,    30,    31,    32,    33,
      34,    49,    50,    51,    52,    53,    54,   167,   218,   166,
     217
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
     424,  -104,  -104,  -104,  -104,  -104,  -104,  -104,    16,  -104,
     424,   424,   118,   118,   424,   424,   286,    -7,     6,    31,
     -26,   501,   674,    20,  -104,    28,    32,    22,    34,    42,
     -44,   -21,    84,    57,  -104,  -104,  -104,   558,    63,    63,
      -3,    -3,    63,    63,    23,    26,   -36,   611,     9,    27,
     286,  -104,  -104,    29,  -104,  -104,    25,  -104,   424,  -104,
    -104,   424,    35,    35,    35,  -104,  -104,  -104,  -104,   274,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,    71,   424,   424,   350,
     387,   424,    91,   424,    85,   424,  -104,    53,    58,    59,
      60,   274,  -104,    19,  -104,  -104,   424,  -104,   424,   461,
     424,  -104,  -104,    50,  -104,   286,   118,  -104,  -104,   124,
    -104,  -104,  -104,     3,   634,   -52,  -104,    70,   719,   719,
     719,   521,   166,   173,   719,   719,   719,   730,    63,    63,
      63,    99,    99,    99,    99,   424,    99,  -104,   424,  -104,
     424,  -104,  -104,   424,  -104,   424,  -104,   424,   424,   424,
     424,   654,   -41,  -104,  -104,  -104,   461,   424,  -104,   704,
     689,  -104,  -104,  -104,  -104,    -3,    68,   424,   424,  -104,
     498,  -104,    35,   424,   538,   215,   208,  -104,  -104,  -104,
    -104,    78,    79,    80,    83,   424,  -104,    93,  -104,  -104,
    -104,  -104,  -104,  -104,   339,    14,  -104,  -104,   719,    35,
     424,  -104,   424,   424,  -104,   589,   424,   461,   424,  -104,
     424,  -104,   719,    90,    92,  -104,    98,  -104,  -104,  -104,
    -104,  -104,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,  -104,   127,    21,  -104,  -104,     4,    55,   -46,     0,
    -104,  -104,  -104,  -104,  -104,   -62,  -104,  -104,   -15,  -104,
    -104,  -104,  -104,   -43,  -104,  -104,  -103,  -104,  -104,  -104,
    -104
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -83
static const yytype_int16 yytable[] =
{
      24,   121,   122,    56,    55,    96,   171,   114,    97,    59,
      60,   179,    35,   180,    38,    39,    48,     8,    42,    43,
      47,    21,   196,    35,   180,    35,    58,   107,   164,    98,
      99,    57,    35,    40,    41,   100,    58,    21,    88,    89,
      90,    93,   147,   149,   151,   152,   177,   154,    91,   156,
     113,    36,    92,    94,    47,    69,    70,   220,   117,   133,
      95,   118,    36,   198,    36,   104,   105,   165,   103,   106,
     127,    36,   174,   124,   111,   128,   129,   130,   132,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     112,   146,   116,   119,   115,   131,   145,    82,    83,    84,
      85,   155,   187,    87,   188,   161,   168,   189,   153,   190,
     172,   157,   169,   170,   227,   173,   158,   159,   160,   170,
     207,     1,     2,     3,     4,     5,     6,   176,     7,     8,
     186,   202,     9,   -82,   -82,   -82,   -82,   175,   181,    87,
     -82,   211,   101,    46,   212,   213,   214,   221,   102,   185,
      12,   216,    13,   230,     0,   231,   162,   191,   192,   193,
     194,   232,     0,     0,     0,     0,   184,   199,     0,     0,
     170,     0,     0,   -45,     0,     0,    16,   203,    17,     0,
     206,     0,   204,     0,    18,     0,     0,   208,     0,     0,
     183,   -45,   -45,   -45,     0,    78,    79,    80,    81,   215,
      82,    83,    84,    85,     0,     0,    87,     0,   -48,     0,
       0,     0,   223,   224,   222,     0,   226,     0,   228,     0,
     229,   170,   -82,   -82,   -82,   -82,   -48,   -48,   -48,   -82,
       0,   101,     0,     0,     0,   -45,   -45,   102,   -45,   210,
       0,   -45,     0,     0,    78,    79,    80,    81,     0,    82,
      83,    84,    85,     0,     0,    87,     0,   -82,   -82,   -82,
     -82,     0,     0,     0,   -82,     0,   101,     0,     0,     0,
     -48,   -48,   102,   -48,     0,     0,   -48,     1,     2,     3,
       4,     5,     6,     0,     7,   123,     0,     0,     9,     1,
       2,     3,     4,     5,     6,     0,     7,    44,     0,     0,
       9,     0,     0,     0,    10,    11,    12,     0,    13,     0,
       0,     0,    14,    15,     0,     0,    10,    11,    12,     0,
      13,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,   -24,     0,   -24,
      18,     0,     0,     0,    16,     0,    17,    45,     0,     0,
       0,     0,    18,     1,     2,     3,     4,     5,     6,     0,
       7,     8,     0,     0,     9,     0,   148,     0,    78,    79,
      80,    81,     0,    82,    83,    84,    85,     0,     0,    87,
      10,    11,    12,     0,    13,     0,     0,     0,    14,    15,
       1,     2,     3,     4,     5,     6,     0,     7,     8,     0,
       0,     9,   219,     0,   150,     0,     0,     0,    16,     0,
      17,     0,     0,     0,     0,     0,    18,    10,    11,    12,
       0,    13,     0,     0,     0,    14,    15,     1,     2,     3,
       4,     5,     6,     0,     7,     8,     0,     0,     9,     0,
       0,     0,     0,     0,     0,    16,     0,    17,     0,     0,
       0,     0,     0,    18,    10,    11,    12,     0,    13,     0,
       0,     0,    14,    15,     1,     2,     3,     4,     5,     6,
       0,     7,    44,     0,     0,     9,     0,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,     0,     0,     0,
      18,    10,    11,    12,     0,    13,     0,     0,     0,    14,
      15,     1,     2,     3,     4,     5,     6,     0,     7,   205,
       0,     0,     9,    59,    60,     0,    61,     0,     0,    16,
       0,    17,     0,     0,     0,     0,     0,    18,    10,    11,
      12,     0,    13,    59,    60,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      59,    60,     0,     0,    67,    68,    16,     0,    17,    69,
      70,     0,     0,     0,    18,    62,    63,    64,    65,    66,
      59,    60,     0,     0,    67,    68,   182,     0,     0,    69,
      70,     0,    62,    63,    64,    65,    66,     0,     0,     0,
       0,    67,    68,   209,     0,     0,    69,    70,     0,     0,
       0,     0,    62,    63,    64,    65,    66,     0,     0,     0,
       0,    67,    68,     0,     0,     0,    69,    70,    78,    79,
      80,    81,     0,    82,    83,    84,    85,     0,     0,    87,
       0,     0,    71,    72,    73,   108,    74,    75,    76,    77,
      78,    79,    80,    81,     0,    82,    83,    84,    85,    86,
       0,    87,   225,   109,   110,    71,    72,    73,   178,    74,
      75,    76,    77,    78,    79,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    71,    72,    73,   195,    74,
      75,    76,    77,    78,    79,    80,    81,     0,    82,    83,
      84,    85,    86,     0,    87,    71,    72,    73,     0,    74,
      75,    76,    77,    78,    79,    80,    81,     0,    82,    83,
      84,    85,    86,   108,    87,     0,     0,     0,    78,    79,
      80,    81,     0,    82,    83,    84,    85,     0,     0,    87,
       0,   109,   110,    78,    79,    80,    81,     0,    82,    83,
      84,    85,     0,     0,    87,     0,   200,   201,    78,    79,
      80,    81,     0,    82,    83,    84,    85,     0,     0,    87,
      79,    80,    81,     0,    82,    83,    84,    85,     0,     0,
      87
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-104))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    63,    64,    18,    11,    49,   109,    50,    52,    12,
      13,    63,     9,    65,    10,    11,    16,    11,    14,    15,
      16,     0,    63,     9,    65,     9,    62,    63,     9,    50,
      51,     0,     9,    12,    13,    56,    62,    16,    18,    19,
      20,    19,    88,    89,    90,    91,    43,    93,    20,    95,
      50,    48,    20,    19,    50,    58,    59,    43,    58,    74,
      18,    61,    48,   166,    48,    42,    43,    48,    11,    43,
      70,    48,   115,    69,    65,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      63,    87,    67,    58,    65,    74,    25,    34,    35,    36,
      37,    16,   148,    40,   150,   101,   106,   153,    17,   155,
     110,    58,   108,   109,   217,    65,    58,    58,    58,   115,
     182,     3,     4,     5,     6,     7,     8,     3,    10,    11,
     145,    63,    14,    49,    50,    51,    52,   116,    68,    40,
      56,    63,    58,    16,    65,    65,    63,   209,    64,   145,
      32,    58,    34,    63,    -1,    63,   101,   157,   158,   159,
     160,    63,    -1,    -1,    -1,    -1,   145,   167,    -1,    -1,
     166,    -1,    -1,     0,    -1,    -1,    58,   177,    60,    -1,
     180,    -1,   178,    -1,    66,    -1,    -1,   183,    -1,    -1,
      24,    18,    19,    20,    -1,    29,    30,    31,    32,   195,
      34,    35,    36,    37,    -1,    -1,    40,    -1,     0,    -1,
      -1,    -1,   212,   213,   210,    -1,   216,    -1,   218,    -1,
     220,   217,    49,    50,    51,    52,    18,    19,    20,    56,
      -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,    24,
      -1,    68,    -1,    -1,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    49,    50,    51,
      52,    -1,    -1,    -1,    56,    -1,    58,    -1,    -1,    -1,
      62,    63,    64,    65,    -1,    -1,    68,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    38,    39,    -1,    -1,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    -1,    -1,    63,    -1,    65,
      66,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,    -1,
      -1,    -1,    66,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    -1,    16,    -1,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    -1,    -1,    40,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    38,    39,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    14,    63,    -1,    17,    -1,    -1,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    38,    39,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    66,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    38,    39,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    38,
      39,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    14,    12,    13,    -1,    15,    -1,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    30,    31,
      32,    -1,    34,    12,    13,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      12,    13,    -1,    -1,    53,    54,    58,    -1,    60,    58,
      59,    -1,    -1,    -1,    66,    44,    45,    46,    47,    48,
      12,    13,    -1,    -1,    53,    54,    55,    -1,    -1,    58,
      59,    -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    55,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    58,    59,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      -1,    40,    63,    42,    43,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    -1,    40,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    -1,    40,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    38,    24,    40,    -1,    -1,    -1,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    42,    43,    29,    30,    31,    32,    -1,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    42,    43,    29,    30,
      31,    32,    -1,    34,    35,    36,    37,    -1,    -1,    40,
      30,    31,    32,    -1,    34,    35,    36,    37,    -1,    -1,
      40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    14,
      30,    31,    32,    34,    38,    39,    58,    60,    66,    70,
      71,    72,    75,    77,    78,    79,    80,    81,    82,    83,
      85,    86,    87,    88,    89,     9,    48,    72,    75,    75,
      72,    72,    75,    75,    11,    61,    71,    75,    78,    90,
      91,    92,    93,    94,    95,    11,    87,     0,    62,    12,
      13,    15,    44,    45,    46,    47,    48,    53,    54,    58,
      59,    21,    22,    23,    25,    26,    27,    28,    29,    30,
      31,    32,    34,    35,    36,    37,    38,    40,    18,    19,
      20,    20,    20,    19,    19,    18,    49,    52,    50,    51,
      56,    58,    64,    11,    42,    43,    43,    63,    24,    42,
      43,    65,    63,    78,    92,    65,    67,    78,    78,    58,
      84,    84,    84,    11,    75,    76,    78,    78,    75,    75,
      75,    72,    75,    87,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    25,    75,    77,    16,    77,
      17,    77,    77,    17,    77,    16,    77,    58,    58,    58,
      58,    75,    76,    74,     9,    48,    98,    96,    78,    75,
      75,    95,    78,    65,    92,    72,     3,    43,    24,    63,
      65,    68,    55,    24,    72,    75,    87,    77,    77,    77,
      77,    78,    78,    78,    78,    24,    63,    73,    95,    78,
      42,    43,    63,    78,    75,    11,    78,    84,    75,    55,
      24,    63,    65,    65,    63,    75,    58,    99,    97,    63,
      43,    84,    75,    78,    78,    63,    78,    95,    78,    78,
      63,    63,    63
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
#line 246 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_COMMA); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 248 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ASSIGN); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 253 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_IND); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 257 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_op_with_string (pstate, STRUCTOP_STRUCT,
						    (yyvsp[(2) - (2)].sval)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 262 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    {
			  write_exp_elt_opcode (pstate, OP_FUNCALL);
			  write_exp_elt_longcst (pstate, (yyvsp[(3) - (4)].lval));
			  write_exp_elt_opcode (pstate, OP_FUNCALL);
		        }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 268 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    {
			  if ((yyvsp[(1) - (4)].tval) != NULL)
			    {
			      if ((yyvsp[(3) - (4)].lval) != 1)
				error (_("Invalid conversion"));
			      write_exp_elt_opcode (pstate, UNOP_CAST);
			      write_exp_elt_type (pstate, (yyvsp[(1) - (4)].tval));
			      write_exp_elt_opcode (pstate, UNOP_CAST);
			    }
			  else
			    {
			      write_exp_elt_opcode (pstate, OP_FUNCALL);
			      write_exp_elt_longcst (pstate, (yyvsp[(3) - (4)].lval));
			      write_exp_elt_opcode (pstate, OP_FUNCALL);
			    }
			}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 286 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { type_qualifier = (yyvsp[(1) - (3)].tval); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 288 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    {
			  if ((yyvsp[(1) - (7)].tval) == NULL)
			    error (_("Type required for qualification"));
			  write_exp_elt_opcode (pstate, UNOP_QUAL);
			  write_exp_elt_type (pstate, (yyvsp[(1) - (7)].tval));
			  write_exp_elt_opcode (pstate, UNOP_QUAL);
			  type_qualifier = (yyvsp[(3) - (7)].tval);
			}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 298 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.tval) = type_qualifier; }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 303 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, TERNOP_SLICE); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 305 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { if ((yyvsp[(1) - (6)].tval) == NULL) 
                            write_exp_elt_opcode (pstate, TERNOP_SLICE);
			  else
			    error (_("Cannot slice a type"));
			}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 312 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 324 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { if ((yyvsp[(1) - (1)].tval) != NULL)
			    {
			      write_exp_elt_opcode (pstate, OP_TYPE);
			      write_exp_elt_type (pstate, (yyvsp[(1) - (1)].tval));
			      write_exp_elt_opcode (pstate, OP_TYPE);
			    }
			}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 334 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_dollar_variable (pstate, (yyvsp[(1) - (1)].sval)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 344 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_NEG); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 348 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_PLUS); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 352 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_LOGICAL_NOT); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 356 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ABS); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 359 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 0; }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 363 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 365 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 367 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(1) - (3)].lval) + 1; }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 369 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(1) - (5)].lval) + 1; }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 374 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { 
			  if ((yyvsp[(2) - (4)].tval) == NULL)
			    error (_("Type required within braces in coercion"));
			  write_exp_elt_opcode (pstate, UNOP_MEMVAL);
			  write_exp_elt_type (pstate, (yyvsp[(2) - (4)].tval));
			  write_exp_elt_opcode (pstate, UNOP_MEMVAL);
			}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 386 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_EXP); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 390 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_MUL); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 394 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_DIV); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 398 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_REM); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 402 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_MOD); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 406 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_REPEAT); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 410 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ADD); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 414 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_CONCAT); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 418 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_SUB); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 425 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_EQUAL); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 429 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_NOTEQUAL); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 433 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LEQ); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 437 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, TERNOP_IN_RANGE); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 439 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_IN_BOUNDS);
			  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(5) - (5)].lval));
			  write_exp_elt_opcode (pstate, BINOP_IN_BOUNDS);
			}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 444 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { 
			  if ((yyvsp[(3) - (3)].tval) == NULL)
			    error (_("Right operand of 'in' must be type"));
			  write_exp_elt_opcode (pstate, UNOP_IN_RANGE);
		          write_exp_elt_type (pstate, (yyvsp[(3) - (3)].tval));
		          write_exp_elt_opcode (pstate, UNOP_IN_RANGE);
			}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 452 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, TERNOP_IN_RANGE);
		          write_exp_elt_opcode (pstate, UNOP_LOGICAL_NOT);
			}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 456 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_IN_BOUNDS);
			  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(6) - (6)].lval));
			  write_exp_elt_opcode (pstate, BINOP_IN_BOUNDS);
		          write_exp_elt_opcode (pstate, UNOP_LOGICAL_NOT);
			}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 462 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { 
			  if ((yyvsp[(4) - (4)].tval) == NULL)
			    error (_("Right operand of 'in' must be type"));
			  write_exp_elt_opcode (pstate, UNOP_IN_RANGE);
		          write_exp_elt_type (pstate, (yyvsp[(4) - (4)].tval));
		          write_exp_elt_opcode (pstate, UNOP_IN_RANGE);
		          write_exp_elt_opcode (pstate, UNOP_LOGICAL_NOT);
			}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 473 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_GEQ); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 477 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LESS); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 481 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_GTR); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 494 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_AND); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 496 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_AND); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 501 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_AND); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 503 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_AND); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 508 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_IOR); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 510 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_IOR); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 515 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_OR); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 517 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_OR); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 521 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_XOR); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 523 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_XOR); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 535 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ADDR); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 537 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ADDR);
			  write_exp_elt_opcode (pstate, UNOP_CAST);
			  write_exp_elt_type (pstate,
					      type_system_address (pstate));
			  write_exp_elt_opcode (pstate, UNOP_CAST);
			}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 544 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate, (yyvsp[(3) - (3)].lval), type_int (pstate));
			  write_exp_elt_opcode (pstate, OP_ATR_FIRST); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 547 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate, (yyvsp[(3) - (3)].lval), type_int (pstate));
			  write_exp_elt_opcode (pstate, OP_ATR_LAST); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 550 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate, (yyvsp[(3) - (3)].lval), type_int (pstate));
			  write_exp_elt_opcode (pstate, OP_ATR_LENGTH); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 553 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_ATR_SIZE); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 555 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_ATR_TAG); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 557 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_ATR_MIN); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 559 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_ATR_MAX); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 561 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_ATR_POS); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 563 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_ATR_VAL); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 565 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_ATR_MODULUS); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 569 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 571 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(2) - (3)].typed_val).val; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 576 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { 
			  if ((yyvsp[(1) - (1)].tval) == NULL)
			    error (_("Prefix must be type"));
			  write_exp_elt_opcode (pstate, OP_TYPE);
			  write_exp_elt_type (pstate, (yyvsp[(1) - (1)].tval));
			  write_exp_elt_opcode (pstate, OP_TYPE); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 587 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_TYPE);
			  write_exp_elt_type (pstate,
					  parse_type (pstate)->builtin_void);
			  write_exp_elt_opcode (pstate, OP_TYPE); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 595 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate, (LONGEST) (yyvsp[(1) - (1)].typed_val).val, (yyvsp[(1) - (1)].typed_val).type); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 599 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate,
			       convert_char_literal (type_qualifier, (yyvsp[(1) - (1)].typed_val).val),
			       (type_qualifier == NULL) 
			       ? (yyvsp[(1) - (1)].typed_val).type : type_qualifier);
		  }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 607 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_DOUBLE);
			  write_exp_elt_type (pstate, (yyvsp[(1) - (1)].typed_val_float).type);
			  write_exp_elt_dblcst (pstate, (yyvsp[(1) - (1)].typed_val_float).dval);
			  write_exp_elt_opcode (pstate, OP_DOUBLE);
			}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 615 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate, 0, type_int (pstate)); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 619 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { 
			  write_exp_op_with_string (pstate, OP_STRING, (yyvsp[(1) - (1)].sval));
			}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 625 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate, 1, type_boolean (pstate)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 627 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_int (pstate, 0, type_boolean (pstate)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 631 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { error (_("NEW not implemented.")); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 635 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.tval) = write_var_or_type (pstate, NULL, (yyvsp[(1) - (1)].sval)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 637 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.tval) = write_var_or_type (pstate, (yyvsp[(1) - (2)].bval), (yyvsp[(2) - (2)].sval)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 639 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { 
			  (yyval.tval) = write_var_or_type (pstate, NULL, (yyvsp[(1) - (2)].sval));
			  if ((yyval.tval) == NULL)
			    write_exp_elt_opcode (pstate, UNOP_ADDR);
			  else
			    (yyval.tval) = lookup_pointer_type ((yyval.tval));
			}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 647 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { 
			  (yyval.tval) = write_var_or_type (pstate, (yyvsp[(1) - (3)].bval), (yyvsp[(2) - (3)].sval));
			  if ((yyval.tval) == NULL)
			    write_exp_elt_opcode (pstate, UNOP_ADDR);
			  else
			    (yyval.tval) = lookup_pointer_type ((yyval.tval));
			}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 658 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.bval) = block_lookup (NULL, (yyvsp[(1) - (2)].sval).ptr); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 660 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.bval) = block_lookup ((yyvsp[(1) - (3)].bval), (yyvsp[(2) - (3)].sval).ptr); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 665 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    {
			  write_exp_elt_opcode (pstate, OP_AGGREGATE);
			  write_exp_elt_longcst (pstate, (yyvsp[(2) - (3)].lval));
			  write_exp_elt_opcode (pstate, OP_AGGREGATE);
		        }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 673 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(1) - (1)].lval); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 675 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_POSITIONAL);
			  write_exp_elt_longcst (pstate, (yyvsp[(1) - (2)].lval));
			  write_exp_elt_opcode (pstate, OP_POSITIONAL);
			  (yyval.lval) = (yyvsp[(1) - (2)].lval) + 1;
			}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 681 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(1) - (2)].lval) + (yyvsp[(2) - (2)].lval); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 686 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_POSITIONAL);
			  write_exp_elt_longcst (pstate, 0);
			  write_exp_elt_opcode (pstate, OP_POSITIONAL);
			  (yyval.lval) = 1;
			}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 692 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_POSITIONAL);
			  write_exp_elt_longcst (pstate, (yyvsp[(1) - (3)].lval));
			  write_exp_elt_opcode (pstate, OP_POSITIONAL);
			  (yyval.lval) = (yyvsp[(1) - (3)].lval) + 1; 
			}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 700 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 701 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 703 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(3) - (3)].lval) + 1; }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 707 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_OTHERS); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 712 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    {
			  write_exp_elt_opcode (pstate, OP_CHOICES);
			  write_exp_elt_longcst (pstate, (yyvsp[(1) - (1)].lval));
			  write_exp_elt_opcode (pstate, OP_CHOICES);
		        }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 726 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_name_assoc (pstate, (yyvsp[(1) - (2)].sval)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 727 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 729 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 731 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_DISCRETE_RANGE);
			  write_exp_op_with_string (pstate, OP_NAME,
						    empty_stoken);
			}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 735 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = 1; }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 737 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_name_assoc (pstate, (yyvsp[(1) - (2)].sval)); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 738 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(4) - (4)].lval) + 1; }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 740 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(3) - (3)].lval) + 1; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 742 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, OP_DISCRETE_RANGE); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 743 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { (yyval.lval) = (yyvsp[(6) - (6)].lval) + 1; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 750 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_IND); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 752 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ADDR); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 754 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_SUBSCRIPT); }
    break;



/* Line 1806 of yacc.c  */
#line 2815 "ada-exp.c"
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
#line 757 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/ada-exp.y"


/* yylex defined in ada-lex.c: Reads one token, getting characters */
/* through lexptr.  */

/* Remap normal flex interface names (yylex) as well as gratuitiously */
/* global symbol names, so we can have multiple flex-generated parsers */
/* in gdb.  */

/* (See note above on previous definitions for YACC.) */

#define yy_create_buffer ada_yy_create_buffer
#define yy_delete_buffer ada_yy_delete_buffer
#define yy_init_buffer ada_yy_init_buffer
#define yy_load_buffer_state ada_yy_load_buffer_state
#define yy_switch_to_buffer ada_yy_switch_to_buffer
#define yyrestart ada_yyrestart
#define yytext ada_yytext
#define yywrap ada_yywrap

static struct obstack temp_parse_space;

/* The following kludge was found necessary to prevent conflicts between */
/* defs.h and non-standard stdlib.h files.  */
#define qsort __qsort__dummy
#include "ada-lex.c"

int
ada_parse (struct parser_state *par_state)
{
  int result;
  struct cleanup *c = make_cleanup_clear_parser_state (&pstate);

  /* Setting up the parser state.  */
  gdb_assert (par_state != NULL);
  pstate = par_state;

  lexer_init (yyin);		/* (Re-)initialize lexer.  */
  type_qualifier = NULL;
  obstack_free (&temp_parse_space, NULL);
  obstack_init (&temp_parse_space);

  result = yyparse ();
  do_cleanups (c);
  return result;
}

void
yyerror (char *msg)
{
  error (_("Error in expression, near `%s'."), lexptr);
}

/* Emit expression to access an instance of SYM, in block BLOCK (if
 * non-NULL), and with :: qualification ORIG_LEFT_CONTEXT.  */
static void
write_var_from_sym (struct parser_state *par_state,
		    const struct block *orig_left_context,
		    const struct block *block,
		    struct symbol *sym)
{
  if (orig_left_context == NULL && symbol_read_needs_frame (sym))
    {
      if (innermost_block == 0
	  || contained_in (block, innermost_block))
	innermost_block = block;
    }

  write_exp_elt_opcode (par_state, OP_VAR_VALUE);
  write_exp_elt_block (par_state, block);
  write_exp_elt_sym (par_state, sym);
  write_exp_elt_opcode (par_state, OP_VAR_VALUE);
}

/* Write integer or boolean constant ARG of type TYPE.  */

static void
write_int (struct parser_state *par_state, LONGEST arg, struct type *type)
{
  write_exp_elt_opcode (par_state, OP_LONG);
  write_exp_elt_type (par_state, type);
  write_exp_elt_longcst (par_state, arg);
  write_exp_elt_opcode (par_state, OP_LONG);
}

/* Write an OPCODE, string, OPCODE sequence to the current expression.  */
static void
write_exp_op_with_string (struct parser_state *par_state,
			  enum exp_opcode opcode, struct stoken token)
{
  write_exp_elt_opcode (par_state, opcode);
  write_exp_string (par_state, token);
  write_exp_elt_opcode (par_state, opcode);
}
  
/* Emit expression corresponding to the renamed object named 
 * designated by RENAMED_ENTITY[0 .. RENAMED_ENTITY_LEN-1] in the
 * context of ORIG_LEFT_CONTEXT, to which is applied the operations
 * encoded by RENAMING_EXPR.  MAX_DEPTH is the maximum number of
 * cascaded renamings to allow.  If ORIG_LEFT_CONTEXT is null, it
 * defaults to the currently selected block. ORIG_SYMBOL is the 
 * symbol that originally encoded the renaming.  It is needed only
 * because its prefix also qualifies any index variables used to index
 * or slice an array.  It should not be necessary once we go to the
 * new encoding entirely (FIXME pnh 7/20/2007).  */

static void
write_object_renaming (struct parser_state *par_state,
		       const struct block *orig_left_context,
		       const char *renamed_entity, int renamed_entity_len,
		       const char *renaming_expr, int max_depth)
{
  char *name;
  enum { SIMPLE_INDEX, LOWER_BOUND, UPPER_BOUND } slice_state;
  struct ada_symbol_info sym_info;

  if (max_depth <= 0)
    error (_("Could not find renamed symbol"));

  if (orig_left_context == NULL)
    orig_left_context = get_selected_block (NULL);

  name = obstack_copy0 (&temp_parse_space, renamed_entity, renamed_entity_len);
  ada_lookup_encoded_symbol (name, orig_left_context, VAR_DOMAIN, &sym_info);
  if (sym_info.sym == NULL)
    error (_("Could not find renamed variable: %s"), ada_decode (name));
  else if (SYMBOL_CLASS (sym_info.sym) == LOC_TYPEDEF)
    /* We have a renaming of an old-style renaming symbol.  Don't
       trust the block information.  */
    sym_info.block = orig_left_context;

  {
    const char *inner_renamed_entity;
    int inner_renamed_entity_len;
    const char *inner_renaming_expr;

    switch (ada_parse_renaming (sym_info.sym, &inner_renamed_entity,
				&inner_renamed_entity_len,
				&inner_renaming_expr))
      {
      case ADA_NOT_RENAMING:
	write_var_from_sym (par_state, orig_left_context, sym_info.block,
			    sym_info.sym);
	break;
      case ADA_OBJECT_RENAMING:
	write_object_renaming (par_state, sym_info.block,
			       inner_renamed_entity, inner_renamed_entity_len,
			       inner_renaming_expr, max_depth - 1);
	break;
      default:
	goto BadEncoding;
      }
  }

  slice_state = SIMPLE_INDEX;
  while (*renaming_expr == 'X')
    {
      renaming_expr += 1;

      switch (*renaming_expr) {
      case 'A':
        renaming_expr += 1;
        write_exp_elt_opcode (par_state, UNOP_IND);
        break;
      case 'L':
	slice_state = LOWER_BOUND;
	/* FALLTHROUGH */
      case 'S':
	renaming_expr += 1;
	if (isdigit (*renaming_expr))
	  {
	    char *next;
	    long val = strtol (renaming_expr, &next, 10);
	    if (next == renaming_expr)
	      goto BadEncoding;
	    renaming_expr = next;
	    write_exp_elt_opcode (par_state, OP_LONG);
	    write_exp_elt_type (par_state, type_int (par_state));
	    write_exp_elt_longcst (par_state, (LONGEST) val);
	    write_exp_elt_opcode (par_state, OP_LONG);
	  }
	else
	  {
	    const char *end;
	    char *index_name;
	    struct ada_symbol_info index_sym_info;

	    end = strchr (renaming_expr, 'X');
	    if (end == NULL)
	      end = renaming_expr + strlen (renaming_expr);

	    index_name =
	      obstack_copy0 (&temp_parse_space, renaming_expr,
			     end - renaming_expr);
	    renaming_expr = end;

	    ada_lookup_encoded_symbol (index_name, NULL, VAR_DOMAIN,
				       &index_sym_info);
	    if (index_sym_info.sym == NULL)
	      error (_("Could not find %s"), index_name);
	    else if (SYMBOL_CLASS (index_sym_info.sym) == LOC_TYPEDEF)
	      /* Index is an old-style renaming symbol.  */
	      index_sym_info.block = orig_left_context;
	    write_var_from_sym (par_state, NULL, index_sym_info.block,
				index_sym_info.sym);
	  }
	if (slice_state == SIMPLE_INDEX)
	  {
	    write_exp_elt_opcode (par_state, OP_FUNCALL);
	    write_exp_elt_longcst (par_state, (LONGEST) 1);
	    write_exp_elt_opcode (par_state, OP_FUNCALL);
	  }
	else if (slice_state == LOWER_BOUND)
	  slice_state = UPPER_BOUND;
	else if (slice_state == UPPER_BOUND)
	  {
	    write_exp_elt_opcode (par_state, TERNOP_SLICE);
	    slice_state = SIMPLE_INDEX;
	  }
	break;

      case 'R':
	{
	  struct stoken field_name;
	  const char *end;
	  char *buf;

	  renaming_expr += 1;

	  if (slice_state != SIMPLE_INDEX)
	    goto BadEncoding;
	  end = strchr (renaming_expr, 'X');
	  if (end == NULL)
	    end = renaming_expr + strlen (renaming_expr);
	  field_name.length = end - renaming_expr;
	  buf = xmalloc (end - renaming_expr + 1);
	  field_name.ptr = buf;
	  strncpy (buf, renaming_expr, end - renaming_expr);
	  buf[end - renaming_expr] = '\000';
	  renaming_expr = end;
	  write_exp_op_with_string (par_state, STRUCTOP_STRUCT, field_name);
	  break;
	}

      default:
	goto BadEncoding;
      }
    }
  if (slice_state == SIMPLE_INDEX)
    return;

 BadEncoding:
  error (_("Internal error in encoding of renaming declaration"));
}

static const struct block*
block_lookup (const struct block *context, const char *raw_name)
{
  const char *name;
  struct ada_symbol_info *syms;
  int nsyms;
  struct symtab *symtab;

  if (raw_name[0] == '\'')
    {
      raw_name += 1;
      name = raw_name;
    }
  else
    name = ada_encode (raw_name);

  nsyms = ada_lookup_symbol_list (name, context, VAR_DOMAIN, &syms);
  if (context == NULL
      && (nsyms == 0 || SYMBOL_CLASS (syms[0].sym) != LOC_BLOCK))
    symtab = lookup_symtab (name);
  else
    symtab = NULL;

  if (symtab != NULL)
    return BLOCKVECTOR_BLOCK (BLOCKVECTOR (symtab), STATIC_BLOCK);
  else if (nsyms == 0 || SYMBOL_CLASS (syms[0].sym) != LOC_BLOCK)
    {
      if (context == NULL)
	error (_("No file or function \"%s\"."), raw_name);
      else
	error (_("No function \"%s\" in specified context."), raw_name);
    }
  else
    {
      if (nsyms > 1)
	warning (_("Function name \"%s\" ambiguous here"), raw_name);
      return SYMBOL_BLOCK_VALUE (syms[0].sym);
    }
}

static struct symbol*
select_possible_type_sym (struct ada_symbol_info *syms, int nsyms)
{
  int i;
  int preferred_index;
  struct type *preferred_type;
	  
  preferred_index = -1; preferred_type = NULL;
  for (i = 0; i < nsyms; i += 1)
    switch (SYMBOL_CLASS (syms[i].sym))
      {
      case LOC_TYPEDEF:
	if (ada_prefer_type (SYMBOL_TYPE (syms[i].sym), preferred_type))
	  {
	    preferred_index = i;
	    preferred_type = SYMBOL_TYPE (syms[i].sym);
	  }
	break;
      case LOC_REGISTER:
      case LOC_ARG:
      case LOC_REF_ARG:
      case LOC_REGPARM_ADDR:
      case LOC_LOCAL:
      case LOC_COMPUTED:
	return NULL;
      default:
	break;
      }
  if (preferred_type == NULL)
    return NULL;
  return syms[preferred_index].sym;
}

static struct type*
find_primitive_type (struct parser_state *par_state, char *name)
{
  struct type *type;
  type = language_lookup_primitive_type_by_name (parse_language (par_state),
						 parse_gdbarch (par_state),
						 name);
  if (type == NULL && strcmp ("system__address", name) == 0)
    type = type_system_address (par_state);

  if (type != NULL)
    {
      /* Check to see if we have a regular definition of this
	 type that just didn't happen to have been read yet.  */
      struct symbol *sym;
      char *expanded_name = 
	(char *) alloca (strlen (name) + sizeof ("standard__"));
      strcpy (expanded_name, "standard__");
      strcat (expanded_name, name);
      sym = ada_lookup_symbol (expanded_name, NULL, VAR_DOMAIN, NULL);
      if (sym != NULL && SYMBOL_CLASS (sym) == LOC_TYPEDEF)
	type = SYMBOL_TYPE (sym);
    }

  return type;
}

static int
chop_selector (char *name, int end)
{
  int i;
  for (i = end - 1; i > 0; i -= 1)
    if (name[i] == '.' || (name[i] == '_' && name[i+1] == '_'))
      return i;
  return -1;
}

/* If NAME is a string beginning with a separator (either '__', or
   '.'), chop this separator and return the result; else, return
   NAME.  */

static char *
chop_separator (char *name)
{
  if (*name == '.')
   return name + 1;

  if (name[0] == '_' && name[1] == '_')
    return name + 2;

  return name;
}

/* Given that SELS is a string of the form (<sep><identifier>)*, where
   <sep> is '__' or '.', write the indicated sequence of
   STRUCTOP_STRUCT expression operators. */
static void
write_selectors (struct parser_state *par_state, char *sels)
{
  while (*sels != '\0')
    {
      struct stoken field_name;
      char *p = chop_separator (sels);
      sels = p;
      while (*sels != '\0' && *sels != '.' 
	     && (sels[0] != '_' || sels[1] != '_'))
	sels += 1;
      field_name.length = sels - p;
      field_name.ptr = p;
      write_exp_op_with_string (par_state, STRUCTOP_STRUCT, field_name);
    }
}

/* Write a variable access (OP_VAR_VALUE) to ambiguous encoded name
   NAME[0..LEN-1], in block context BLOCK, to be resolved later.  Writes
   a temporary symbol that is valid until the next call to ada_parse.
   */
static void
write_ambiguous_var (struct parser_state *par_state,
		     const struct block *block, char *name, int len)
{
  struct symbol *sym =
    obstack_alloc (&temp_parse_space, sizeof (struct symbol));
  memset (sym, 0, sizeof (struct symbol));
  SYMBOL_DOMAIN (sym) = UNDEF_DOMAIN;
  SYMBOL_LINKAGE_NAME (sym) = obstack_copy0 (&temp_parse_space, name, len);
  SYMBOL_LANGUAGE (sym) = language_ada;

  write_exp_elt_opcode (par_state, OP_VAR_VALUE);
  write_exp_elt_block (par_state, block);
  write_exp_elt_sym (par_state, sym);
  write_exp_elt_opcode (par_state, OP_VAR_VALUE);
}

/* A convenient wrapper around ada_get_field_index that takes
   a non NUL-terminated FIELD_NAME0 and a FIELD_NAME_LEN instead
   of a NUL-terminated field name.  */

static int
ada_nget_field_index (const struct type *type, const char *field_name0,
                      int field_name_len, int maybe_missing)
{
  char *field_name = alloca ((field_name_len + 1) * sizeof (char));

  strncpy (field_name, field_name0, field_name_len);
  field_name[field_name_len] = '\0';
  return ada_get_field_index (type, field_name, maybe_missing);
}

/* If encoded_field_name is the name of a field inside symbol SYM,
   then return the type of that field.  Otherwise, return NULL.

   This function is actually recursive, so if ENCODED_FIELD_NAME
   doesn't match one of the fields of our symbol, then try to see
   if ENCODED_FIELD_NAME could not be a succession of field names
   (in other words, the user entered an expression of the form
   TYPE_NAME.FIELD1.FIELD2.FIELD3), in which case we evaluate
   each field name sequentially to obtain the desired field type.
   In case of failure, we return NULL.  */

static struct type *
get_symbol_field_type (struct symbol *sym, char *encoded_field_name)
{
  char *field_name = encoded_field_name;
  char *subfield_name;
  struct type *type = SYMBOL_TYPE (sym);
  int fieldno;

  if (type == NULL || field_name == NULL)
    return NULL;
  type = check_typedef (type);

  while (field_name[0] != '\0')
    {
      field_name = chop_separator (field_name);

      fieldno = ada_get_field_index (type, field_name, 1);
      if (fieldno >= 0)
        return TYPE_FIELD_TYPE (type, fieldno);

      subfield_name = field_name;
      while (*subfield_name != '\0' && *subfield_name != '.' 
	     && (subfield_name[0] != '_' || subfield_name[1] != '_'))
	subfield_name += 1;

      if (subfield_name[0] == '\0')
        return NULL;

      fieldno = ada_nget_field_index (type, field_name,
                                      subfield_name - field_name, 1);
      if (fieldno < 0)
        return NULL;

      type = TYPE_FIELD_TYPE (type, fieldno);
      field_name = subfield_name;
    }

  return NULL;
}

/* Look up NAME0 (an unencoded identifier or dotted name) in BLOCK (or 
   expression_block_context if NULL).  If it denotes a type, return
   that type.  Otherwise, write expression code to evaluate it as an
   object and return NULL. In this second case, NAME0 will, in general,
   have the form <name>(.<selector_name>)*, where <name> is an object
   or renaming encoded in the debugging data.  Calls error if no
   prefix <name> matches a name in the debugging data (i.e., matches
   either a complete name or, as a wild-card match, the final 
   identifier).  */

static struct type*
write_var_or_type (struct parser_state *par_state,
		   const struct block *block, struct stoken name0)
{
  int depth;
  char *encoded_name;
  int name_len;

  if (block == NULL)
    block = expression_context_block;

  encoded_name = ada_encode (name0.ptr);
  name_len = strlen (encoded_name);
  encoded_name = obstack_copy0 (&temp_parse_space, encoded_name, name_len);
  for (depth = 0; depth < MAX_RENAMING_CHAIN_LENGTH; depth += 1)
    {
      int tail_index;
      
      tail_index = name_len;
      while (tail_index > 0)
	{
	  int nsyms;
	  struct ada_symbol_info *syms;
	  struct symbol *type_sym;
	  struct symbol *renaming_sym;
	  const char* renaming;
	  int renaming_len;
	  const char* renaming_expr;
	  int terminator = encoded_name[tail_index];

	  encoded_name[tail_index] = '\0';
	  nsyms = ada_lookup_symbol_list (encoded_name, block,
					  VAR_DOMAIN, &syms);
	  encoded_name[tail_index] = terminator;

	  /* A single symbol may rename a package or object. */

	  /* This should go away when we move entirely to new version.
	     FIXME pnh 7/20/2007. */
	  if (nsyms == 1)
	    {
	      struct symbol *ren_sym =
		ada_find_renaming_symbol (syms[0].sym, syms[0].block);

	      if (ren_sym != NULL)
		syms[0].sym = ren_sym;
	    }

	  type_sym = select_possible_type_sym (syms, nsyms);

	  if (type_sym != NULL)
	    renaming_sym = type_sym;
	  else if (nsyms == 1)
	    renaming_sym = syms[0].sym;
	  else 
	    renaming_sym = NULL;

	  switch (ada_parse_renaming (renaming_sym, &renaming,
				      &renaming_len, &renaming_expr))
	    {
	    case ADA_NOT_RENAMING:
	      break;
	    case ADA_PACKAGE_RENAMING:
	    case ADA_EXCEPTION_RENAMING:
	    case ADA_SUBPROGRAM_RENAMING:
	      {
		char *new_name
		  = obstack_alloc (&temp_parse_space,
				   renaming_len + name_len - tail_index + 1);
		strncpy (new_name, renaming, renaming_len);
		strcpy (new_name + renaming_len, encoded_name + tail_index);
		encoded_name = new_name;
		name_len = renaming_len + name_len - tail_index;
		goto TryAfterRenaming;
	      }	
	    case ADA_OBJECT_RENAMING:
	      write_object_renaming (par_state, block, renaming, renaming_len,
				     renaming_expr, MAX_RENAMING_CHAIN_LENGTH);
	      write_selectors (par_state, encoded_name + tail_index);
	      return NULL;
	    default:
	      internal_error (__FILE__, __LINE__,
			      _("impossible value from ada_parse_renaming"));
	    }

	  if (type_sym != NULL)
	    {
              struct type *field_type;
              
              if (tail_index == name_len)
                return SYMBOL_TYPE (type_sym);

              /* We have some extraneous characters after the type name.
                 If this is an expression "TYPE_NAME.FIELD0.[...].FIELDN",
                 then try to get the type of FIELDN.  */
              field_type
                = get_symbol_field_type (type_sym, encoded_name + tail_index);
              if (field_type != NULL)
                return field_type;
	      else 
		error (_("Invalid attempt to select from type: \"%s\"."),
                       name0.ptr);
	    }
	  else if (tail_index == name_len && nsyms == 0)
	    {
	      struct type *type = find_primitive_type (par_state,
						       encoded_name);

	      if (type != NULL)
		return type;
	    }

	  if (nsyms == 1)
	    {
	      write_var_from_sym (par_state, block, syms[0].block,
				  syms[0].sym);
	      write_selectors (par_state, encoded_name + tail_index);
	      return NULL;
	    }
	  else if (nsyms == 0) 
	    {
	      struct bound_minimal_symbol msym
		= ada_lookup_simple_minsym (encoded_name);
	      if (msym.minsym != NULL)
		{
		  write_exp_msymbol (par_state, msym);
		  /* Maybe cause error here rather than later? FIXME? */
		  write_selectors (par_state, encoded_name + tail_index);
		  return NULL;
		}

	      if (tail_index == name_len
		  && strncmp (encoded_name, "standard__", 
			      sizeof ("standard__") - 1) == 0)
		error (_("No definition of \"%s\" found."), name0.ptr);

	      tail_index = chop_selector (encoded_name, tail_index);
	    } 
	  else
	    {
	      write_ambiguous_var (par_state, block, encoded_name,
				   tail_index);
	      write_selectors (par_state, encoded_name + tail_index);
	      return NULL;
	    }
	}

      if (!have_full_symbols () && !have_partial_symbols () && block == NULL)
	error (_("No symbol table is loaded.  Use the \"file\" command."));
      if (block == expression_context_block)
	error (_("No definition of \"%s\" in current context."), name0.ptr);
      else
	error (_("No definition of \"%s\" in specified context."), name0.ptr);
      
    TryAfterRenaming: ;
    }

  error (_("Could not find renamed symbol \"%s\""), name0.ptr);

}

/* Write a left side of a component association (e.g., NAME in NAME =>
   exp).  If NAME has the form of a selected component, write it as an
   ordinary expression.  If it is a simple variable that unambiguously
   corresponds to exactly one symbol that does not denote a type or an
   object renaming, also write it normally as an OP_VAR_VALUE.
   Otherwise, write it as an OP_NAME.

   Unfortunately, we don't know at this point whether NAME is supposed
   to denote a record component name or the value of an array index.
   Therefore, it is not appropriate to disambiguate an ambiguous name
   as we normally would, nor to replace a renaming with its referent.
   As a result, in the (one hopes) rare case that one writes an
   aggregate such as (R => 42) where R renames an object or is an
   ambiguous name, one must write instead ((R) => 42). */
   
static void
write_name_assoc (struct parser_state *par_state, struct stoken name)
{
  if (strchr (name.ptr, '.') == NULL)
    {
      struct ada_symbol_info *syms;
      int nsyms = ada_lookup_symbol_list (name.ptr, expression_context_block,
					  VAR_DOMAIN, &syms);
      if (nsyms != 1 || SYMBOL_CLASS (syms[0].sym) == LOC_TYPEDEF)
	write_exp_op_with_string (par_state, OP_NAME, name);
      else
	write_var_from_sym (par_state, NULL, syms[0].block, syms[0].sym);
    }
  else
    if (write_var_or_type (par_state, NULL, name) != NULL)
      error (_("Invalid use of type."));
}

/* Convert the character literal whose ASCII value would be VAL to the
   appropriate value of type TYPE, if there is a translation.
   Otherwise return VAL.  Hence, in an enumeration type ('A', 'B'),
   the literal 'A' (VAL == 65), returns 0.  */

static LONGEST
convert_char_literal (struct type *type, LONGEST val)
{
  char name[7];
  int f;

  if (type == NULL)
    return val;
  type = check_typedef (type);
  if (TYPE_CODE (type) != TYPE_CODE_ENUM)
    return val;

  xsnprintf (name, sizeof (name), "QU%02x", (int) val);
  for (f = 0; f < TYPE_NFIELDS (type); f += 1)
    {
      if (strcmp (name, TYPE_FIELD_NAME (type, f)) == 0)
	return TYPE_FIELD_ENUMVAL (type, f);
    }
  return val;
}

static struct type *
type_int (struct parser_state *par_state)
{
  return parse_type (par_state)->builtin_int;
}

static struct type *
type_long (struct parser_state *par_state)
{
  return parse_type (par_state)->builtin_long;
}

static struct type *
type_long_long (struct parser_state *par_state)
{
  return parse_type (par_state)->builtin_long_long;
}

static struct type *
type_float (struct parser_state *par_state)
{
  return parse_type (par_state)->builtin_float;
}

static struct type *
type_double (struct parser_state *par_state)
{
  return parse_type (par_state)->builtin_double;
}

static struct type *
type_long_double (struct parser_state *par_state)
{
  return parse_type (par_state)->builtin_long_double;
}

static struct type *
type_char (struct parser_state *par_state)
{
  return language_string_char_type (parse_language (par_state),
				    parse_gdbarch (par_state));
}

static struct type *
type_boolean (struct parser_state *par_state)
{
  return parse_type (par_state)->builtin_bool;
}

static struct type *
type_system_address (struct parser_state *par_state)
{
  struct type *type 
    = language_lookup_primitive_type_by_name (parse_language (par_state),
					      parse_gdbarch (par_state),
					      "system__address");
  return  type != NULL ? type : parse_type (par_state)->builtin_data_ptr;
}

/* Provide a prototype to silence -Wmissing-prototypes.  */
extern initialize_file_ftype _initialize_ada_exp;

void
_initialize_ada_exp (void)
{
  obstack_init (&temp_parse_space);
}

