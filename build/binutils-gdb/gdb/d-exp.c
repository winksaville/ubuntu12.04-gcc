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
#line 39 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"


#include "defs.h"
#include <ctype.h>
#include "expression.h"
#include "value.h"
#include "parser-defs.h"
#include "language.h"
#include "c-lang.h"
#include "d-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols */
#include "charset.h"
#include "block.h"

#define parse_type(ps) builtin_type (parse_gdbarch (ps))
#define parse_d_type(ps) builtin_d_type (parse_gdbarch (ps))

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror, etc),
   as well as gratuitiously global symbol names, so we can have multiple
   yacc generated parsers in gdb.  Note that these are only the variables
   produced by yacc.  If other parser generators (bison, byacc, etc) produce
   additional global names that conflict at link time, then those parser
   generators need to be fixed instead of adding those names to this list.  */

#define	yymaxdepth d_maxdepth
#define	yyparse	d_parse_internal
#define	yylex	d_lex
#define	yyerror	d_error
#define	yylval	d_lval
#define	yychar	d_char
#define	yydebug	d_debug
#define	yypact	d_pact
#define	yyr1	d_r1
#define	yyr2	d_r2
#define	yydef	d_def
#define	yychk	d_chk
#define	yypgo	d_pgo
#define	yyact	d_act
#define	yyexca	d_exca
#define	yyerrflag d_errflag
#define	yynerrs	d_nerrs
#define	yyps	d_ps
#define	yypv	d_pv
#define	yys	d_s
#define	yy_yys	d_yys
#define	yystate	d_state
#define	yytmp	d_tmp
#define	yyv	d_v
#define	yy_yyv	d_yyv
#define	yyval	d_val
#define	yylloc	d_lloc
#define	yyreds	d_reds	/* With YYDEBUG defined */
#define	yytoks	d_toks	/* With YYDEBUG defined */
#define	yyname	d_name	/* With YYDEBUG defined */
#define	yyrule	d_rule	/* With YYDEBUG defined */
#define	yylhs	d_yylhs
#define	yylen	d_yylen
#define	yydefre	d_yydefred
#define	yydgoto	d_yydgoto
#define	yysindex d_yysindex
#define	yyrindex d_yyrindex
#define	yygindex d_yygindex
#define	yytable	d_yytable
#define	yycheck	d_yycheck
#define	yyss	d_yyss
#define	yysslim	d_yysslim
#define	yyssp	d_yyssp
#define	yystacksize d_yystacksize
#define	yyvs	d_yyvs
#define	yyvsp	d_yyvsp

#ifndef YYDEBUG
#define YYDEBUG 1	/* Default to yydebug support */
#endif

#define YYFPRINTF parser_fprintf

/* The state of the parser, used internally when we are parsing the
   expression.  */

static struct parser_state *pstate = NULL;

int yyparse (void);

static int yylex (void);

void yyerror (char *);



/* Line 268 of yacc.c  */
#line 164 "d-exp.c"

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
     IDENTIFIER = 258,
     TYPENAME = 259,
     COMPLETE = 260,
     NAME_OR_INT = 261,
     INTEGER_LITERAL = 262,
     FLOAT_LITERAL = 263,
     CHARACTER_LITERAL = 264,
     STRING_LITERAL = 265,
     ENTRY = 266,
     ERROR = 267,
     TRUE_KEYWORD = 268,
     FALSE_KEYWORD = 269,
     NULL_KEYWORD = 270,
     SUPER_KEYWORD = 271,
     CAST_KEYWORD = 272,
     SIZEOF_KEYWORD = 273,
     TYPEOF_KEYWORD = 274,
     TYPEID_KEYWORD = 275,
     INIT_KEYWORD = 276,
     IMMUTABLE_KEYWORD = 277,
     CONST_KEYWORD = 278,
     SHARED_KEYWORD = 279,
     STRUCT_KEYWORD = 280,
     UNION_KEYWORD = 281,
     CLASS_KEYWORD = 282,
     INTERFACE_KEYWORD = 283,
     ENUM_KEYWORD = 284,
     TEMPLATE_KEYWORD = 285,
     DELEGATE_KEYWORD = 286,
     FUNCTION_KEYWORD = 287,
     DOLLAR_VARIABLE = 288,
     ASSIGN_MODIFY = 289,
     OROR = 290,
     ANDAND = 291,
     GEQ = 292,
     LEQ = 293,
     NOTEQUAL = 294,
     EQUAL = 295,
     RSH = 296,
     LSH = 297,
     HATHAT = 298,
     NOTIDENTITY = 299,
     IDENTITY = 300,
     DECREMENT = 301,
     INCREMENT = 302,
     DOTDOT = 303
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPENAME 259
#define COMPLETE 260
#define NAME_OR_INT 261
#define INTEGER_LITERAL 262
#define FLOAT_LITERAL 263
#define CHARACTER_LITERAL 264
#define STRING_LITERAL 265
#define ENTRY 266
#define ERROR 267
#define TRUE_KEYWORD 268
#define FALSE_KEYWORD 269
#define NULL_KEYWORD 270
#define SUPER_KEYWORD 271
#define CAST_KEYWORD 272
#define SIZEOF_KEYWORD 273
#define TYPEOF_KEYWORD 274
#define TYPEID_KEYWORD 275
#define INIT_KEYWORD 276
#define IMMUTABLE_KEYWORD 277
#define CONST_KEYWORD 278
#define SHARED_KEYWORD 279
#define STRUCT_KEYWORD 280
#define UNION_KEYWORD 281
#define CLASS_KEYWORD 282
#define INTERFACE_KEYWORD 283
#define ENUM_KEYWORD 284
#define TEMPLATE_KEYWORD 285
#define DELEGATE_KEYWORD 286
#define FUNCTION_KEYWORD 287
#define DOLLAR_VARIABLE 288
#define ASSIGN_MODIFY 289
#define OROR 290
#define ANDAND 291
#define GEQ 292
#define LEQ 293
#define NOTEQUAL 294
#define EQUAL 295
#define RSH 296
#define LSH 297
#define HATHAT 298
#define NOTIDENTITY 299
#define IDENTITY 300
#define DECREMENT 301
#define INCREMENT 302
#define DOTDOT 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 136 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"

    struct {
      LONGEST val;
      struct type *type;
    } typed_val_int;
    struct {
      DOUBLEST dval;
      struct type *type;
    } typed_val_float;
    struct symbol *sym;
    struct type *tval;
    struct typed_stoken tsval;
    struct stoken sval;
    struct ttype tsym;
    struct symtoken ssym;
    int ival;
    struct block *bval;
    enum exp_opcode opcode;
    struct stoken_vector svec;
  


/* Line 293 of yacc.c  */
#line 319 "d-exp.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 157 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"

/* YYSTYPE gets defined by %union */
static int parse_number (struct parser_state *, const char *,
			 int, int, YYSTYPE *);

static void push_expression_name (struct parser_state *, struct stoken);


/* Line 343 of yacc.c  */
#line 340 "d-exp.c"

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
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   236

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  175

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
       2,     2,     2,    67,     2,     2,     2,    55,    42,     2,
      63,    68,    53,    51,    35,    52,    61,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,     2,
      43,    36,    44,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    69,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    40,     2,    66,     2,     2,     2,
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
      38,    39,    45,    46,    47,    48,    49,    50,    56,    57,
      58,    59,    60,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    17,    21,
      25,    27,    33,    35,    39,    41,    45,    47,    51,    53,
      57,    59,    63,    65,    67,    69,    71,    75,    79,    83,
      87,    91,    95,    99,   103,   105,   109,   113,   115,   119,
     123,   127,   129,   133,   137,   141,   144,   147,   150,   153,
     156,   159,   162,   165,   167,   169,   175,   180,   182,   186,
     188,   191,   194,   196,   198,   200,   202,   206,   207,   209,
     210,   216,   221,   225,   232,   236,   238,   242,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   271,
     273,   277,   279,   282,   284,   287,   289,   292,   296,   301,
     303,   306,   309,   313,   316,   319,   323,   326,   329,   333,
     336,   339
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    -1,   102,    -1,    73,    -1,    74,
      -1,    74,    35,    73,    -1,    75,    -1,    75,    36,    74,
      -1,    75,    34,    74,    -1,    76,    -1,    76,    37,    72,
      65,    75,    -1,    77,    -1,    76,    38,    77,    -1,    78,
      -1,    77,    39,    78,    -1,    79,    -1,    78,    40,    79,
      -1,    80,    -1,    79,    41,    80,    -1,    81,    -1,    80,
      42,    81,    -1,    85,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    48,    85,    -1,    85,    47,    85,    -1,    85,
      58,    85,    -1,    85,    57,    85,    -1,    85,    43,    85,
      -1,    85,    46,    85,    -1,    85,    44,    85,    -1,    85,
      45,    85,    -1,    86,    -1,    85,    50,    86,    -1,    85,
      49,    86,    -1,    87,    -1,    86,    51,    87,    -1,    86,
      52,    87,    -1,    86,    66,    87,    -1,    88,    -1,    87,
      53,    88,    -1,    87,    54,    88,    -1,    87,    55,    88,
      -1,    42,    88,    -1,    60,    88,    -1,    59,    88,    -1,
      53,    88,    -1,    52,    88,    -1,    51,    88,    -1,    67,
      88,    -1,    66,    88,    -1,    89,    -1,    90,    -1,    17,
      63,   102,    68,    88,    -1,    63,   102,    68,    88,    -1,
      91,    -1,    91,    56,    88,    -1,    98,    -1,    91,    60,
      -1,    91,    59,    -1,    94,    -1,    96,    -1,    97,    -1,
      74,    -1,    92,    35,    74,    -1,    -1,    92,    -1,    -1,
      91,    63,    95,    93,    68,    -1,    91,    62,    92,    69,
      -1,    91,    62,    69,    -1,    91,    62,    74,    64,    74,
      69,    -1,    63,    72,    68,    -1,   100,    -1,   100,    61,
       5,    -1,   100,    61,     3,     5,    -1,    33,    -1,     6,
      -1,    15,    -1,    13,    -1,    14,    -1,     7,    -1,     8,
      -1,     9,    -1,   101,    -1,    99,    -1,    62,    93,    69,
      -1,     3,    -1,   100,    61,     3,    -1,    10,    -1,   101,
      10,    -1,   104,    -1,   104,   103,    -1,    53,    -1,    53,
     103,    -1,    62,     7,    69,    -1,    62,     7,    69,   103,
      -1,     4,    -1,    27,   100,    -1,    27,     5,    -1,    27,
     100,     5,    -1,    25,   100,    -1,    25,     5,    -1,    25,
     100,     5,    -1,    26,   100,    -1,    26,     5,    -1,    26,
     100,     5,    -1,    29,   100,    -1,    29,     5,    -1,    29,
     100,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   232,   232,   233,   239,   243,   244,   249,   250,   252,
     259,   260,   265,   266,   271,   272,   277,   278,   283,   284,
     289,   290,   295,   296,   297,   298,   302,   304,   309,   311,
     316,   318,   320,   322,   327,   328,   330,   335,   336,   338,
     340,   345,   346,   348,   350,   354,   356,   358,   360,   362,
     364,   366,   368,   370,   371,   375,   381,   388,   389,   394,
     395,   397,   399,   400,   401,   405,   407,   413,   414,   419,
     418,   427,   440,   442,   447,   449,   451,   460,   466,   468,
     476,   483,   487,   491,   496,   501,   506,   512,   520,   525,
     526,   543,   558,   576,   580,   589,   591,   593,   596,   602,
     604,   607,   610,   613,   616,   619,   622,   625,   628,   631,
     634,   637
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPENAME", "COMPLETE",
  "NAME_OR_INT", "INTEGER_LITERAL", "FLOAT_LITERAL", "CHARACTER_LITERAL",
  "STRING_LITERAL", "ENTRY", "ERROR", "TRUE_KEYWORD", "FALSE_KEYWORD",
  "NULL_KEYWORD", "SUPER_KEYWORD", "CAST_KEYWORD", "SIZEOF_KEYWORD",
  "TYPEOF_KEYWORD", "TYPEID_KEYWORD", "INIT_KEYWORD", "IMMUTABLE_KEYWORD",
  "CONST_KEYWORD", "SHARED_KEYWORD", "STRUCT_KEYWORD", "UNION_KEYWORD",
  "CLASS_KEYWORD", "INTERFACE_KEYWORD", "ENUM_KEYWORD", "TEMPLATE_KEYWORD",
  "DELEGATE_KEYWORD", "FUNCTION_KEYWORD", "DOLLAR_VARIABLE",
  "ASSIGN_MODIFY", "','", "'='", "'?'", "OROR", "ANDAND", "'|'", "'^'",
  "'&'", "'<'", "'>'", "GEQ", "LEQ", "NOTEQUAL", "EQUAL", "RSH", "LSH",
  "'+'", "'-'", "'*'", "'/'", "'%'", "HATHAT", "NOTIDENTITY", "IDENTITY",
  "DECREMENT", "INCREMENT", "'.'", "'['", "'('", "DOTDOT", "':'", "'~'",
  "'!'", "')'", "']'", "$accept", "start", "Expression", "CommaExpression",
  "AssignExpression", "ConditionalExpression", "OrOrExpression",
  "AndAndExpression", "OrExpression", "XorExpression", "AndExpression",
  "CmpExpression", "EqualExpression", "IdentityExpression",
  "RelExpression", "ShiftExpression", "AddExpression", "MulExpression",
  "UnaryExpression", "CastExpression", "PowExpression",
  "PostfixExpression", "ArgumentList", "ArgumentList_opt",
  "CallExpression", "$@1", "IndexExpression", "SliceExpression",
  "PrimaryExpression", "ArrayLiteral", "IdentifierExp", "StringExp",
  "TypeExp", "BasicType2", "BasicType", 0
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
     285,   286,   287,   288,   289,    44,    61,    63,   290,   291,
     124,    94,    38,    60,    62,   292,   293,   294,   295,   296,
     297,    43,    45,    42,    47,    37,   298,   299,   300,   301,
     302,    46,    91,    40,   303,    58,   126,    33,    41,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    72,    73,    73,    74,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    85,    85,    85,    86,    86,    86,
      86,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    91,
      91,    91,    91,    91,    91,    92,    92,    93,    93,    95,
      94,    96,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     3,     3,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     5,     4,     1,     3,     1,
       2,     2,     1,     1,     1,     1,     3,     0,     1,     0,
       5,     4,     3,     6,     3,     1,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     2,     1,     2,     1,     2,     3,     4,     1,
       2,     2,     3,     2,     2,     3,     2,     2,     3,     2,
       2,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    89,    99,    79,    83,    84,    85,    91,    81,    82,
      80,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,    67,     0,     0,     0,     0,     2,     4,
       5,     7,    10,    12,    14,    16,    18,    20,    23,    24,
      25,    22,    34,    37,    41,    53,    54,    57,    62,    63,
      64,    59,    87,    75,    86,     3,    93,     0,   104,   103,
     107,   106,   101,   100,   110,   109,    45,    50,    49,    48,
      47,    46,    65,    68,     0,     0,     0,    52,    51,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    60,     0,    69,
       0,    92,    95,     0,    94,     0,   105,     0,   108,   102,
     111,     0,    88,    74,     0,     6,     9,     8,     0,    13,
      15,    17,    19,    21,    30,    32,    33,    31,    27,    26,
      36,    35,    29,    28,    38,    39,    40,    42,    43,    44,
      58,    72,    65,     0,    67,    90,    76,    96,     0,     0,
      90,    66,    56,     0,     0,    71,     0,    77,    97,    55,
      11,     0,    70,    98,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    73,    74,    48,   154,    49,    50,    51,    52,
      53,    54,    55,   114,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int16 yypact[] =
{
     107,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -24,    37,    40,    76,    86,   -86,   169,   169,   169,
     169,   169,   169,   169,   107,   169,   169,    72,   -86,   -86,
      16,    68,    20,    34,    38,    43,    48,   -86,   -86,   -86,
     -86,    51,   -22,    -6,   -86,   -86,   -86,    67,   -86,   -86,
     -86,   -86,   -86,    32,    93,   -86,   -25,     9,   -86,     1,
     -86,    15,   -86,    19,   -86,    21,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,    71,    56,    44,    60,   -86,   -86,   -86,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   -86,   -86,     8,   -86,
     132,   -86,   -25,   124,   -86,    73,   -86,   136,   -86,   -86,
     -86,   169,   -86,   -86,   169,   -86,   -86,   -86,    78,    34,
      38,    43,    48,   -86,    14,    14,    14,    14,    14,    14,
     -22,   -22,    14,    14,    -6,    -6,    -6,   -86,   -86,   -86,
     -86,   -86,    80,   -23,   169,   140,   -86,   -86,    77,   169,
     -86,   -86,   -86,   169,   169,   -86,    79,   -86,   -25,   -86,
     -86,    81,   -86,   -86,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,   -14,    74,   -16,   -12,   -86,    69,    70,    66,
      75,    83,   -86,   -86,   -86,    98,    23,   -68,   -17,   -86,
     -86,   -86,    49,     2,   -86,   -86,   -86,   -86,   -86,   -86,
      41,   -86,    -5,   -85,   -86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      66,    67,    68,    69,    70,    71,   116,    72,    77,    78,
      75,     1,   121,     2,     3,     4,     5,     6,     7,    76,
     118,     8,     9,    10,   119,    11,   120,   157,   112,    99,
     100,   144,   145,   146,    12,    13,    14,   113,    15,    57,
       1,    16,    58,     1,   101,    60,   165,   102,   103,   104,
      17,    80,   115,    59,    61,    63,    65,    83,    84,    18,
      19,    20,   117,    95,    96,   126,   127,    21,    22,   128,
      23,    24,    79,    85,    25,    26,   117,   151,    86,     1,
     117,    62,   117,   173,    87,   147,   148,   149,   150,     1,
      88,    64,   152,   110,    89,    90,    91,    92,    93,    94,
      95,    96,    81,   111,    82,   161,   121,   162,    97,    98,
       1,     2,   123,     3,     4,     5,     6,     7,   140,   141,
       8,     9,    10,   105,    11,   122,   106,   107,   124,   108,
     109,   158,    12,    13,    14,   155,    15,   156,    72,   160,
      16,   159,   169,   163,   164,   167,   168,   172,   171,    17,
     174,   170,   131,   129,   125,   130,   166,   153,    18,    19,
      20,     0,   132,     0,     0,     0,    21,    22,     0,    23,
      24,   133,     1,    25,    26,     3,     4,     5,     6,     7,
       0,     0,     8,     9,    10,     0,    11,   134,   135,   136,
     137,   138,   139,     0,     0,   142,   143,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,    20,     0,     0,     0,     0,     0,    21,    22,
       0,    23,    24,     0,     0,    25,    26
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-86))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    21,    22,     5,    23,    25,    26,
      24,     3,    35,     4,     6,     7,     8,     9,    10,    24,
       5,    13,    14,    15,     5,    17,     5,   112,    53,    51,
      52,    99,   100,   101,    25,    26,    27,    62,    29,    63,
       3,    33,     5,     3,    66,     5,    69,    53,    54,    55,
      42,    35,    57,    12,    13,    14,    15,    37,    38,    51,
      52,    53,    61,    49,    50,    81,    82,    59,    60,    83,
      62,    63,     0,    39,    66,    67,    61,    69,    40,     3,
      61,     5,    61,   168,    41,   102,   103,   104,   105,     3,
      42,     5,   108,    61,    43,    44,    45,    46,    47,    48,
      49,    50,    34,    10,    36,   121,    35,   124,    57,    58,
       3,     4,    68,     6,     7,     8,     9,    10,    95,    96,
      13,    14,    15,    56,    17,    69,    59,    60,    68,    62,
      63,     7,    25,    26,    27,     3,    29,     5,   154,     3,
      33,    68,   159,    65,    64,     5,    69,    68,   164,    42,
      69,   163,    86,    84,    80,    85,   154,   108,    51,    52,
      53,    -1,    87,    -1,    -1,    -1,    59,    60,    -1,    62,
      63,    88,     3,    66,    67,     6,     7,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    17,    89,    90,    91,
      92,    93,    94,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    62,    63,    -1,    -1,    66,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,     9,    10,    13,    14,
      15,    17,    25,    26,    27,    29,    33,    42,    51,    52,
      53,    59,    60,    62,    63,    66,    67,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    94,    96,
      97,    98,    99,   100,   101,   102,   104,    63,     5,   100,
       5,   100,     5,   100,     5,   100,    88,    88,    88,    88,
      88,    88,    74,    92,    93,    72,   102,    88,    88,     0,
      35,    34,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    57,    58,    51,
      52,    66,    53,    54,    55,    56,    59,    60,    62,    63,
      61,    10,    53,    62,   103,   102,     5,    61,     5,     5,
       5,    35,    69,    68,    68,    73,    74,    74,    72,    77,
      78,    79,    80,    81,    85,    85,    85,    85,    85,    85,
      86,    86,    85,    85,    87,    87,    87,    88,    88,    88,
      88,    69,    74,    92,    95,     3,     5,   103,     7,    68,
       3,    74,    88,    65,    64,    69,    93,     5,    69,    88,
      75,    74,    68,   103,    69
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
        case 6:

/* Line 1806 of yacc.c  */
#line 245 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_COMMA); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 251 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ASSIGN); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 253 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ASSIGN_MODIFY);
		  write_exp_elt_opcode (pstate, (yyvsp[(2) - (3)].opcode));
		  write_exp_elt_opcode (pstate, BINOP_ASSIGN_MODIFY); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 261 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, TERNOP_COND); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 267 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_OR); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 273 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LOGICAL_AND); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 279 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_IOR); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 285 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_XOR); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 291 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_BITWISE_AND); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 303 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_EQUAL); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 305 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_NOTEQUAL); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 310 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_EQUAL); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 312 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_NOTEQUAL); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 317 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LESS); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 319 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LEQ); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 321 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_GTR); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 323 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_GEQ); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 329 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_LSH); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 331 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_RSH); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 337 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_ADD); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 339 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_SUB); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 341 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_CONCAT); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 347 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_MUL); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 349 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_DIV); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 351 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_REM); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 355 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_ADDR); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 357 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_PREINCREMENT); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 359 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_PREDECREMENT); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 361 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_IND); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 363 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_NEG); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 365 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_PLUS); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 367 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_LOGICAL_NOT); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 369 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_COMPLEMENT); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 376 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_CAST);
		  write_exp_elt_type (pstate, (yyvsp[(3) - (5)].tval));
		  write_exp_elt_opcode (pstate, UNOP_CAST); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 382 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_CAST);
		  write_exp_elt_type (pstate, (yyvsp[(2) - (4)].tval));
		  write_exp_elt_opcode (pstate, UNOP_CAST); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 390 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, BINOP_EXP); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 396 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_POSTINCREMENT); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 398 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, UNOP_POSTDECREMENT); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 406 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { arglist_len = 1; }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 408 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { arglist_len++; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 413 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { arglist_len = 0; }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 419 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { start_arglist (); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 421 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, OP_FUNCALL);
		  write_exp_elt_longcst (pstate, (LONGEST) end_arglist ());
		  write_exp_elt_opcode (pstate, OP_FUNCALL); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 428 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { if (arglist_len > 0)
		    {
		      write_exp_elt_opcode (pstate, MULTI_SUBSCRIPT);
		      write_exp_elt_longcst (pstate, (LONGEST) arglist_len);
		      write_exp_elt_opcode (pstate, MULTI_SUBSCRIPT);
		    }
		  else
		    write_exp_elt_opcode (pstate, BINOP_SUBSCRIPT);
		}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 441 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { /* Do nothing.  */ }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 443 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, TERNOP_SLICE); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 448 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { /* Do nothing.  */ }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 450 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { push_expression_name (pstate, (yyvsp[(1) - (1)].sval)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 452 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { struct stoken s;
		  s.ptr = "";
		  s.length = 0;
		  push_expression_name (pstate, (yyvsp[(1) - (3)].sval));
		  mark_struct_expression (pstate);
		  write_exp_elt_opcode (pstate, STRUCTOP_STRUCT);
		  write_exp_string (pstate, s);
		  write_exp_elt_opcode (pstate, STRUCTOP_STRUCT); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 461 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { push_expression_name (pstate, (yyvsp[(1) - (4)].sval));
		  mark_struct_expression (pstate);
		  write_exp_elt_opcode (pstate, STRUCTOP_STRUCT);
		  write_exp_string (pstate, (yyvsp[(3) - (4)].sval));
		  write_exp_elt_opcode (pstate, STRUCTOP_STRUCT); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 467 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_dollar_variable (pstate, (yyvsp[(1) - (1)].sval)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 469 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { YYSTYPE val;
                  parse_number (pstate, (yyvsp[(1) - (1)].sval).ptr, (yyvsp[(1) - (1)].sval).length, 0, &val);
		  write_exp_elt_opcode (pstate, OP_LONG);
		  write_exp_elt_type (pstate, val.typed_val_int.type);
		  write_exp_elt_longcst (pstate,
					 (LONGEST) val.typed_val_int.val);
		  write_exp_elt_opcode (pstate, OP_LONG); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 477 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { struct type *type = parse_d_type (pstate)->builtin_void;
		  type = lookup_pointer_type (type);
		  write_exp_elt_opcode (pstate, OP_LONG);
		  write_exp_elt_type (pstate, type);
		  write_exp_elt_longcst (pstate, (LONGEST) 0);
		  write_exp_elt_opcode (pstate, OP_LONG); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 484 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, OP_BOOL);
		  write_exp_elt_longcst (pstate, (LONGEST) 1);
		  write_exp_elt_opcode (pstate, OP_BOOL); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 488 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, OP_BOOL);
		  write_exp_elt_longcst (pstate, (LONGEST) 0);
		  write_exp_elt_opcode (pstate, OP_BOOL); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 492 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, OP_LONG);
		  write_exp_elt_type (pstate, (yyvsp[(1) - (1)].typed_val_int).type);
		  write_exp_elt_longcst (pstate, (LONGEST)((yyvsp[(1) - (1)].typed_val_int).val));
		  write_exp_elt_opcode (pstate, OP_LONG); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 497 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, OP_DOUBLE);
		  write_exp_elt_type (pstate, (yyvsp[(1) - (1)].typed_val_float).type);
		  write_exp_elt_dblcst (pstate, (yyvsp[(1) - (1)].typed_val_float).dval);
		  write_exp_elt_opcode (pstate, OP_DOUBLE); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 502 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { struct stoken_vector vec;
		  vec.len = 1;
		  vec.tokens = &(yyvsp[(1) - (1)].tsval);
		  write_exp_string_vector (pstate, (yyvsp[(1) - (1)].tsval).type, &vec); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 507 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { int i;
		  write_exp_string_vector (pstate, 0, &(yyvsp[(1) - (1)].svec));
		  for (i = 0; i < (yyvsp[(1) - (1)].svec).len; ++i)
		    xfree ((yyvsp[(1) - (1)].svec).tokens[i].ptr);
		  xfree ((yyvsp[(1) - (1)].svec).tokens); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 513 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, OP_ARRAY);
		  write_exp_elt_longcst (pstate, (LONGEST) 0);
		  write_exp_elt_longcst (pstate, (LONGEST) (yyvsp[(1) - (1)].ival) - 1);
		  write_exp_elt_opcode (pstate, OP_ARRAY); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 521 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.ival) = arglist_len; }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 527 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.sval).length = (yyvsp[(1) - (3)].sval).length + (yyvsp[(3) - (3)].sval).length + 1;
		  if ((yyvsp[(1) - (3)].sval).ptr + (yyvsp[(1) - (3)].sval).length + 1 == (yyvsp[(3) - (3)].sval).ptr
		      && (yyvsp[(1) - (3)].sval).ptr[(yyvsp[(1) - (3)].sval).length] == '.')
		    (yyval.sval).ptr = (yyvsp[(1) - (3)].sval).ptr;  /* Optimization.  */
		  else
		    {
		      char *buf = xmalloc ((yyval.sval).length + 1);
		      make_cleanup (xfree, buf);
		      sprintf (buf, "%.*s.%.*s",
		               (yyvsp[(1) - (3)].sval).length, (yyvsp[(1) - (3)].sval).ptr, (yyvsp[(3) - (3)].sval).length, (yyvsp[(3) - (3)].sval).ptr);
		      (yyval.sval).ptr = buf;
		    }
		}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 544 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { /* We copy the string here, and not in the
		     lexer, to guarantee that we do not leak a
		     string.  Note that we follow the
		     NUL-termination convention of the
		     lexer.  */
		  struct typed_stoken *vec = XNEW (struct typed_stoken);
		  (yyval.svec).len = 1;
		  (yyval.svec).tokens = vec;

		  vec->type = (yyvsp[(1) - (1)].tsval).type;
		  vec->length = (yyvsp[(1) - (1)].tsval).length;
		  vec->ptr = xmalloc ((yyvsp[(1) - (1)].tsval).length + 1);
		  memcpy (vec->ptr, (yyvsp[(1) - (1)].tsval).ptr, (yyvsp[(1) - (1)].tsval).length + 1);
		}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 559 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { /* Note that we NUL-terminate here, but just
		     for convenience.  */
		  char *p;
		  ++(yyval.svec).len;
		  (yyval.svec).tokens = xrealloc ((yyval.svec).tokens,
				       (yyval.svec).len * sizeof (struct typed_stoken));

		  p = xmalloc ((yyvsp[(2) - (2)].tsval).length + 1);
		  memcpy (p, (yyvsp[(2) - (2)].tsval).ptr, (yyvsp[(2) - (2)].tsval).length + 1);

		  (yyval.svec).tokens[(yyval.svec).len - 1].type = (yyvsp[(2) - (2)].tsval).type;
		  (yyval.svec).tokens[(yyval.svec).len - 1].length = (yyvsp[(2) - (2)].tsval).length;
		  (yyval.svec).tokens[(yyval.svec).len - 1].ptr = p;
		}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 577 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { write_exp_elt_opcode (pstate, OP_TYPE);
		  write_exp_elt_type (pstate, (yyvsp[(1) - (1)].tval));
		  write_exp_elt_opcode (pstate, OP_TYPE); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 581 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.tval) = follow_types ((yyvsp[(1) - (2)].tval));
		  write_exp_elt_opcode (pstate, OP_TYPE);
		  write_exp_elt_type (pstate, (yyval.tval));
		  write_exp_elt_opcode (pstate, OP_TYPE);
		}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 590 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { push_type (tp_pointer); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 592 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { push_type (tp_pointer); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 594 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { push_type_int ((yyvsp[(2) - (3)].typed_val_int).val);
		  push_type (tp_array); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 597 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { push_type_int ((yyvsp[(2) - (4)].typed_val_int).val);
		  push_type (tp_array); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 603 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.tval) = (yyvsp[(1) - (1)].tsym).type; }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 605 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.tval) = lookup_struct (copy_name ((yyvsp[(2) - (2)].sval)),
				      expression_context_block); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 608 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_CLASS, "", 0);
		  (yyval.tval) = NULL; }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 611 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_CLASS, (yyvsp[(2) - (3)].sval).ptr, (yyvsp[(2) - (3)].sval).length);
		  (yyval.tval) = NULL; }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 614 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.tval) = lookup_struct (copy_name ((yyvsp[(2) - (2)].sval)),
				      expression_context_block); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 617 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_STRUCT, "", 0);
		  (yyval.tval) = NULL; }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 620 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_STRUCT, (yyvsp[(2) - (3)].sval).ptr, (yyvsp[(2) - (3)].sval).length);
		  (yyval.tval) = NULL; }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 623 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.tval) = lookup_union (copy_name ((yyvsp[(2) - (2)].sval)),
				     expression_context_block); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 626 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_UNION, "", 0);
		  (yyval.tval) = NULL; }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 629 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_UNION, (yyvsp[(2) - (3)].sval).ptr, (yyvsp[(2) - (3)].sval).length);
		  (yyval.tval) = NULL; }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 632 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { (yyval.tval) = lookup_enum (copy_name ((yyvsp[(2) - (2)].sval)),
				    expression_context_block); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 635 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_ENUM, "", 0);
		  (yyval.tval) = NULL; }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 638 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"
    { mark_completion_tag (TYPE_CODE_ENUM, (yyvsp[(2) - (3)].sval).ptr, (yyvsp[(2) - (3)].sval).length);
		  (yyval.tval) = NULL; }
    break;



/* Line 1806 of yacc.c  */
#line 2458 "d-exp.c"
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
#line 642 "/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/d-exp.y"


/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.
   LEN is the number of characters in it.  */

/*** Needs some error checking for the float case ***/

static int
parse_number (struct parser_state *ps, const char *p,
	      int len, int parsed_float, YYSTYPE *putithere)
{
  ULONGEST n = 0;
  ULONGEST prevn = 0;
  ULONGEST un;

  int i = 0;
  int c;
  int base = input_radix;
  int unsigned_p = 0;
  int long_p = 0;

  /* We have found a "L" or "U" suffix.  */
  int found_suffix = 0;

  ULONGEST high_bit;
  struct type *signed_type;
  struct type *unsigned_type;

  if (parsed_float)
    {
      const struct builtin_d_type *builtin_d_types;
      const char *suffix;
      int suffix_len;
      char *s, *sp;

      /* Strip out all embedded '_' before passing to parse_float.  */
      s = (char *) alloca (len + 1);
      sp = s;
      while (len-- > 0)
	{
	  if (*p != '_')
	    *sp++ = *p;
	  p++;
	}
      *sp = '\0';
      len = strlen (s);

      if (! parse_float (s, len, &putithere->typed_val_float.dval, &suffix))
	return ERROR;

      suffix_len = s + len - suffix;

      if (suffix_len == 0)
	{
	  putithere->typed_val_float.type
	    = parse_d_type (ps)->builtin_double;
	}
      else if (suffix_len == 1)
	{
	  /* Check suffix for `f', `l', or `i' (float, real, or idouble).  */
	  if (tolower (*suffix) == 'f')
	    {
	      putithere->typed_val_float.type
		= parse_d_type (ps)->builtin_float;
	    }
	  else if (tolower (*suffix) == 'l')
	    {
	      putithere->typed_val_float.type
		= parse_d_type (ps)->builtin_real;
	    }
	  else if (tolower (*suffix) == 'i')
	    {
	      putithere->typed_val_float.type
		= parse_d_type (ps)->builtin_idouble;
	    }
	  else
	    return ERROR;
	}
      else if (suffix_len == 2)
	{
	  /* Check suffix for `fi' or `li' (ifloat or ireal).  */
	  if (tolower (suffix[0]) == 'f' && tolower (suffix[1] == 'i'))
	    {
	      putithere->typed_val_float.type
		= parse_d_type (ps)->builtin_ifloat;
	    }
	  else if (tolower (suffix[0]) == 'l' && tolower (suffix[1] == 'i'))
	    {
	      putithere->typed_val_float.type
		= parse_d_type (ps)->builtin_ireal;
	    }
	  else
	    return ERROR;
	}
      else
	return ERROR;

      return FLOAT_LITERAL;
    }

  /* Handle base-switching prefixes 0x, 0b, 0 */
  if (p[0] == '0')
    switch (p[1])
      {
      case 'x':
      case 'X':
	if (len >= 3)
	  {
	    p += 2;
	    base = 16;
	    len -= 2;
	  }
	break;

      case 'b':
      case 'B':
	if (len >= 3)
	  {
	    p += 2;
	    base = 2;
	    len -= 2;
	  }
	break;

      default:
	base = 8;
	break;
      }

  while (len-- > 0)
    {
      c = *p++;
      if (c == '_')
	continue;	/* Ignore embedded '_'.  */
      if (c >= 'A' && c <= 'Z')
	c += 'a' - 'A';
      if (c != 'l' && c != 'u')
	n *= base;
      if (c >= '0' && c <= '9')
	{
	  if (found_suffix)
	    return ERROR;
	  n += i = c - '0';
	}
      else
	{
	  if (base > 10 && c >= 'a' && c <= 'f')
	    {
	      if (found_suffix)
	        return ERROR;
	      n += i = c - 'a' + 10;
	    }
	  else if (c == 'l' && long_p == 0)
	    {
	      long_p = 1;
	      found_suffix = 1;
	    }
	  else if (c == 'u' && unsigned_p == 0)
	    {
	      unsigned_p = 1;
	      found_suffix = 1;
	    }
	  else
	    return ERROR;	/* Char not a digit */
	}
      if (i >= base)
	return ERROR;		/* Invalid digit in this base.  */
      /* Portably test for integer overflow.  */
      if (c != 'l' && c != 'u')
	{
	  ULONGEST n2 = prevn * base;
	  if ((n2 / base != prevn) || (n2 + i < prevn))
	    error (_("Numeric constant too large."));
	}
      prevn = n;
    }

  /* An integer constant is an int or a long.  An L suffix forces it to
     be long, and a U suffix forces it to be unsigned.  To figure out
     whether it fits, we shift it right and see whether anything remains.
     Note that we can't shift sizeof (LONGEST) * HOST_CHAR_BIT bits or
     more in one operation, because many compilers will warn about such a
     shift (which always produces a zero result).  To deal with the case
     where it is we just always shift the value more than once, with fewer
     bits each time.  */
  un = (ULONGEST) n >> 2;
  if (long_p == 0 && (un >> 30) == 0)
    {
      high_bit = ((ULONGEST) 1) << 31;
      signed_type = parse_d_type (ps)->builtin_int;
      /* For decimal notation, keep the sign of the worked out type.  */
      if (base == 10 && !unsigned_p)
	unsigned_type = parse_d_type (ps)->builtin_long;
      else
	unsigned_type = parse_d_type (ps)->builtin_uint;
    }
  else
    {
      int shift;
      if (sizeof (ULONGEST) * HOST_CHAR_BIT < 64)
	/* A long long does not fit in a LONGEST.  */
	shift = (sizeof (ULONGEST) * HOST_CHAR_BIT - 1);
      else
	shift = 63;
      high_bit = (ULONGEST) 1 << shift;
      signed_type = parse_d_type (ps)->builtin_long;
      unsigned_type = parse_d_type (ps)->builtin_ulong;
    }

  putithere->typed_val_int.val = n;

  /* If the high bit of the worked out type is set then this number
     has to be unsigned_type.  */
  if (unsigned_p || (n & high_bit))
    putithere->typed_val_int.type = unsigned_type;
  else
    putithere->typed_val_int.type = signed_type;

  return INTEGER_LITERAL;
}

/* Temporary obstack used for holding strings.  */
static struct obstack tempbuf;
static int tempbuf_init;

/* Parse a string or character literal from TOKPTR.  The string or
   character may be wide or unicode.  *OUTPTR is set to just after the
   end of the literal in the input string.  The resulting token is
   stored in VALUE.  This returns a token value, either STRING or
   CHAR, depending on what was parsed.  *HOST_CHARS is set to the
   number of host characters in the literal.  */

static int
parse_string_or_char (const char *tokptr, const char **outptr,
		      struct typed_stoken *value, int *host_chars)
{
  int quote;

  /* Build the gdb internal form of the input string in tempbuf.  Note
     that the buffer is null byte terminated *only* for the
     convenience of debugging gdb itself and printing the buffer
     contents when the buffer contains no embedded nulls.  Gdb does
     not depend upon the buffer being null byte terminated, it uses
     the length string instead.  This allows gdb to handle C strings
     (as well as strings in other languages) with embedded null
     bytes */

  if (!tempbuf_init)
    tempbuf_init = 1;
  else
    obstack_free (&tempbuf, NULL);
  obstack_init (&tempbuf);

  /* Skip the quote.  */
  quote = *tokptr;
  ++tokptr;

  *host_chars = 0;

  while (*tokptr)
    {
      char c = *tokptr;
      if (c == '\\')
	{
	   ++tokptr;
	   *host_chars += c_parse_escape (&tokptr, &tempbuf);
	}
      else if (c == quote)
	break;
      else
	{
	  obstack_1grow (&tempbuf, c);
	  ++tokptr;
	  /* FIXME: this does the wrong thing with multi-byte host
	     characters.  We could use mbrlen here, but that would
	     make "set host-charset" a bit less useful.  */
	  ++*host_chars;
	}
    }

  if (*tokptr != quote)
    {
      if (quote == '"' || quote == '`')
	error (_("Unterminated string in expression."));
      else
	error (_("Unmatched single quote."));
    }
  ++tokptr;

  /* FIXME: should instead use own language string_type enum
     and handle D-specific string suffixes here. */
  if (quote == '\'')
    value->type = C_CHAR;
  else
    value->type = C_STRING;

  value->ptr = obstack_base (&tempbuf);
  value->length = obstack_object_size (&tempbuf);

  *outptr = tokptr;

  return quote == '\'' ? CHARACTER_LITERAL : STRING_LITERAL;
}

struct token
{
  char *operator;
  int token;
  enum exp_opcode opcode;
};

static const struct token tokentab3[] =
  {
    {"^^=", ASSIGN_MODIFY, BINOP_EXP},
    {"<<=", ASSIGN_MODIFY, BINOP_LSH},
    {">>=", ASSIGN_MODIFY, BINOP_RSH},
  };

static const struct token tokentab2[] =
  {
    {"+=", ASSIGN_MODIFY, BINOP_ADD},
    {"-=", ASSIGN_MODIFY, BINOP_SUB},
    {"*=", ASSIGN_MODIFY, BINOP_MUL},
    {"/=", ASSIGN_MODIFY, BINOP_DIV},
    {"%=", ASSIGN_MODIFY, BINOP_REM},
    {"|=", ASSIGN_MODIFY, BINOP_BITWISE_IOR},
    {"&=", ASSIGN_MODIFY, BINOP_BITWISE_AND},
    {"^=", ASSIGN_MODIFY, BINOP_BITWISE_XOR},
    {"++", INCREMENT, BINOP_END},
    {"--", DECREMENT, BINOP_END},
    {"&&", ANDAND, BINOP_END},
    {"||", OROR, BINOP_END},
    {"^^", HATHAT, BINOP_END},
    {"<<", LSH, BINOP_END},
    {">>", RSH, BINOP_END},
    {"==", EQUAL, BINOP_END},
    {"!=", NOTEQUAL, BINOP_END},
    {"<=", LEQ, BINOP_END},
    {">=", GEQ, BINOP_END},
    {"..", DOTDOT, BINOP_END},
  };

/* Identifier-like tokens.  */
static const struct token ident_tokens[] =
  {
    {"is", IDENTITY, BINOP_END},
    {"!is", NOTIDENTITY, BINOP_END},

    {"cast", CAST_KEYWORD, OP_NULL},
    {"const", CONST_KEYWORD, OP_NULL},
    {"immutable", IMMUTABLE_KEYWORD, OP_NULL},
    {"shared", SHARED_KEYWORD, OP_NULL},
    {"super", SUPER_KEYWORD, OP_NULL},

    {"null", NULL_KEYWORD, OP_NULL},
    {"true", TRUE_KEYWORD, OP_NULL},
    {"false", FALSE_KEYWORD, OP_NULL},

    {"init", INIT_KEYWORD, OP_NULL},
    {"sizeof", SIZEOF_KEYWORD, OP_NULL},
    {"typeof", TYPEOF_KEYWORD, OP_NULL},
    {"typeid", TYPEID_KEYWORD, OP_NULL},

    {"delegate", DELEGATE_KEYWORD, OP_NULL},
    {"function", FUNCTION_KEYWORD, OP_NULL},
    {"struct", STRUCT_KEYWORD, OP_NULL},
    {"union", UNION_KEYWORD, OP_NULL},
    {"class", CLASS_KEYWORD, OP_NULL},
    {"interface", INTERFACE_KEYWORD, OP_NULL},
    {"enum", ENUM_KEYWORD, OP_NULL},
    {"template", TEMPLATE_KEYWORD, OP_NULL},
  };

/* If NAME is a type name in this scope, return it.  */

static struct type *
d_type_from_name (struct stoken name)
{
  struct symbol *sym;
  char *copy = copy_name (name);

  sym = lookup_symbol (copy, expression_context_block,
		       STRUCT_DOMAIN, NULL);
  if (sym != NULL)
    return SYMBOL_TYPE (sym);

  return NULL;
}

/* If NAME is a module name in this scope, return it.  */

static struct type *
d_module_from_name (struct stoken name)
{
  struct symbol *sym;
  char *copy = copy_name (name);

  sym = lookup_symbol (copy, expression_context_block,
		       MODULE_DOMAIN, NULL);
  if (sym != NULL)
    return SYMBOL_TYPE (sym);

  return NULL;
}

/* If NAME is a valid variable name in this scope, push it and return 1.
   Otherwise, return 0.  */

static int
push_variable (struct parser_state *ps, struct stoken name)
{
  char *copy = copy_name (name);
  struct field_of_this_result is_a_field_of_this;
  struct symbol *sym;
  sym = lookup_symbol (copy, expression_context_block, VAR_DOMAIN,
                       &is_a_field_of_this);
  if (sym && SYMBOL_CLASS (sym) != LOC_TYPEDEF)
    {
      if (symbol_read_needs_frame (sym))
        {
          if (innermost_block == 0 ||
              contained_in (block_found, innermost_block))
            innermost_block = block_found;
        }

      write_exp_elt_opcode (ps, OP_VAR_VALUE);
      /* We want to use the selected frame, not another more inner frame
         which happens to be in the same block.  */
      write_exp_elt_block (ps, NULL);
      write_exp_elt_sym (ps, sym);
      write_exp_elt_opcode (ps, OP_VAR_VALUE);
      return 1;
    }
  if (is_a_field_of_this.type != NULL)
    {
      /* It hangs off of `this'.  Must not inadvertently convert from a
         method call to data ref.  */
      if (innermost_block == 0 ||
          contained_in (block_found, innermost_block))
        innermost_block = block_found;
      write_exp_elt_opcode (ps, OP_THIS);
      write_exp_elt_opcode (ps, OP_THIS);
      write_exp_elt_opcode (ps, STRUCTOP_PTR);
      write_exp_string (ps, name);
      write_exp_elt_opcode (ps, STRUCTOP_PTR);
      return 1;
    }
  return 0;
}

/* Assuming a reference expression has been pushed, emit the
   STRUCTOP_PTR ops to access the field named NAME.  If NAME is a
   qualified name (has '.'), generate a field access for each part.  */

static void
push_fieldnames (struct parser_state *ps, struct stoken name)
{
  int i;
  struct stoken token;
  token.ptr = name.ptr;
  for (i = 0;  ;  i++)
    {
      if (i == name.length || name.ptr[i] == '.')
        {
          /* token.ptr is start of current field name.  */
          token.length = &name.ptr[i] - token.ptr;
          write_exp_elt_opcode (ps, STRUCTOP_PTR);
          write_exp_string (ps, token);
          write_exp_elt_opcode (ps, STRUCTOP_PTR);
          token.ptr += token.length + 1;
        }
      if (i >= name.length)
        break;
    }
}

/* Helper routine for push_expression_name.  Handle a TYPE symbol,
   where DOT_INDEX is the index of the first '.' if NAME is part of
   a qualified type.  */

static void
push_type_name (struct parser_state *ps, struct type *type,
		struct stoken name, int dot_index)
{
  if (dot_index == name.length)
    {
      write_exp_elt_opcode (ps, OP_TYPE);
      write_exp_elt_type (ps, type);
      write_exp_elt_opcode (ps, OP_TYPE);
    }
  else
    {
      struct stoken token;

      token.ptr = name.ptr;
      token.length = dot_index;

      dot_index = 0;

      while (dot_index < name.length && name.ptr[dot_index] != '.')
	dot_index++;
      token.ptr = name.ptr;
      token.length = dot_index;

      write_exp_elt_opcode (ps, OP_SCOPE);
      write_exp_elt_type (ps, type);
      write_exp_string (ps, token);
      write_exp_elt_opcode (ps, OP_SCOPE);

      if (dot_index < name.length)
	{
	  dot_index++;
	  name.ptr += dot_index;
	  name.length -= dot_index;
	  push_fieldnames (ps, name);
	}
    }
}

/* Helper routine for push_expression_name.  Like push_type_name,
   but used when TYPE is a module.  Returns 1 on pushing the symbol.  */

static int
push_module_name (struct parser_state *ps, struct type *module,
		  struct stoken name, int dot_index)
{
  if (dot_index == name.length)
    {
      write_exp_elt_opcode (ps, OP_TYPE);
      write_exp_elt_type (ps, module);
      write_exp_elt_opcode (ps, OP_TYPE);
      return 1;
    }
  else
    {
      struct symbol *sym;
      char *copy;

      copy = copy_name (name);
      sym = lookup_symbol_static (copy, expression_context_block,
				  VAR_DOMAIN);
      if (sym != NULL)
	sym = lookup_symbol_global (copy, expression_context_block,
				    VAR_DOMAIN);

      if (sym != NULL)
	{
	  if (SYMBOL_CLASS (sym) != LOC_TYPEDEF)
	    {
	      write_exp_elt_opcode (ps, OP_VAR_VALUE);
	      write_exp_elt_block (ps, NULL);
	      write_exp_elt_sym (ps, sym);
	      write_exp_elt_opcode (ps, OP_VAR_VALUE);
	    }
	  else
	    {
	      write_exp_elt_opcode (ps, OP_TYPE);
	      write_exp_elt_type (ps, SYMBOL_TYPE (sym));
	      write_exp_elt_opcode (ps, OP_TYPE);
	    }
	  return 1;
	}
    }

  return 0;
}

/* Handle NAME in an expression (or LHS), which could be a
   variable, type, or module.  */

static void
push_expression_name (struct parser_state *ps, struct stoken name)
{
  struct stoken token;
  struct type *typ;
  struct bound_minimal_symbol msymbol;
  char *copy;
  int doti;

  /* Handle VAR, which could be local or global.  */
  if (push_variable (ps, name) != 0)
    return;

  /* Handle MODULE.  */
  typ = d_module_from_name (name);
  if (typ != NULL)
    {
      if (push_module_name (ps, typ, name, name.length) != 0)
	return;
    }

  /* Handle TYPE.  */
  typ = d_type_from_name (name);
  if (typ != NULL)
    {
      push_type_name (ps, typ, name, name.length);
      return;
    }

  /* Handle VAR.FIELD1..FIELDN.  */
  for (doti = 0;  doti < name.length;  doti++)
    {
      if (name.ptr[doti] == '.')
	{
	  token.ptr = name.ptr;
	  token.length = doti;

	  if (push_variable (ps, token) != 0)
	    {
	      token.ptr = name.ptr + doti + 1;
	      token.length = name.length - doti - 1;
	      push_fieldnames (ps, token);
	      return;
	    }
	  break;
	}
    }

  /* Continue looking if we found a '.' in the name.  */
  if (doti < name.length)
    {
      token.ptr = name.ptr;
      for (;;)
	{
	  token.length = doti;

	  /* Handle PACKAGE.MODULE.  */
	  typ = d_module_from_name (token);
	  if (typ != NULL)
	    {
	      if (push_module_name (ps, typ, name, doti) != 0)
		return;
	    }
	  /* Handle TYPE.FIELD1..FIELDN.  */
	  typ = d_type_from_name (token);
	  if (typ != NULL)
	    {
	      push_type_name (ps, typ, name, doti);
	      return;
	    }

	  if (doti >= name.length)
	    break;
	  doti++;   /* Skip '.'  */
	  while (doti < name.length && name.ptr[doti] != '.')
	    doti++;
	}
    }

  /* Lookup foreign name in global static symbols.  */
  copy  = copy_name (name);
  msymbol = lookup_bound_minimal_symbol (copy);
  if (msymbol.minsym != NULL)
    write_exp_msymbol (ps, msymbol);
  else if (!have_full_symbols () && !have_partial_symbols ())
    error (_("No symbol table is loaded.  Use the \"file\" command"));
  else
    error (_("No symbol \"%s\" in current context."), copy);
}

/* This is set if a NAME token appeared at the very end of the input
   string, with no whitespace separating the name from the EOF.  This
   is used only when parsing to do field name completion.  */
static int saw_name_at_eof;

/* This is set if the previously-returned token was a structure operator.
   This is used only when parsing to do field name completion.  */
static int last_was_structop;

/* Read one token, getting characters through lexptr.  */

static int
yylex (void)
{
  int c;
  int namelen;
  unsigned int i;
  const char *tokstart;
  int saw_structop = last_was_structop;
  char *copy;

  last_was_structop = 0;

 retry:

  prev_lexptr = lexptr;

  tokstart = lexptr;
  /* See if it is a special token of length 3.  */
  for (i = 0; i < sizeof tokentab3 / sizeof tokentab3[0]; i++)
    if (strncmp (tokstart, tokentab3[i].operator, 3) == 0)
      {
	lexptr += 3;
	yylval.opcode = tokentab3[i].opcode;
	return tokentab3[i].token;
      }

  /* See if it is a special token of length 2.  */
  for (i = 0; i < sizeof tokentab2 / sizeof tokentab2[0]; i++)
    if (strncmp (tokstart, tokentab2[i].operator, 2) == 0)
      {
	lexptr += 2;
	yylval.opcode = tokentab2[i].opcode;
	return tokentab2[i].token;
      }

  switch (c = *tokstart)
    {
    case 0:
      /* If we're parsing for field name completion, and the previous
	 token allows such completion, return a COMPLETE token.
	 Otherwise, we were already scanning the original text, and
	 we're really done.  */
      if (saw_name_at_eof)
	{
	  saw_name_at_eof = 0;
	  return COMPLETE;
	}
      else if (saw_structop)
	return COMPLETE;
      else
        return 0;

    case ' ':
    case '\t':
    case '\n':
      lexptr++;
      goto retry;

    case '[':
    case '(':
      paren_depth++;
      lexptr++;
      return c;

    case ']':
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
      if (lexptr[1] < '0' || lexptr[1] > '9')
	{
	  if (parse_completion)
	    last_was_structop = 1;
	  goto symbol;		/* Nope, must be a symbol.  */
	}
      /* FALL THRU into number case.  */

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {
	/* It's a number.  */
	int got_dot = 0, got_e = 0, toktype;
	const char *p = tokstart;
	int hex = input_radix > 10;

	if (c == '0' && (p[1] == 'x' || p[1] == 'X'))
	  {
	    p += 2;
	    hex = 1;
	  }

	for (;; ++p)
	  {
	    /* Hex exponents start with 'p', because 'e' is a valid hex
	       digit and thus does not indicate a floating point number
	       when the radix is hex.  */
	    if ((!hex && !got_e && tolower (p[0]) == 'e')
		|| (hex && !got_e && tolower (p[0] == 'p')))
	      got_dot = got_e = 1;
	    /* A '.' always indicates a decimal floating point number
	       regardless of the radix.  If we have a '..' then its the
	       end of the number and the beginning of a slice.  */
	    else if (!got_dot && (p[0] == '.' && p[1] != '.'))
		got_dot = 1;
	    /* This is the sign of the exponent, not the end of the number.  */
	    else if (got_e && (tolower (p[-1]) == 'e' || tolower (p[-1]) == 'p')
		     && (*p == '-' || *p == '+'))
	      continue;
	    /* We will take any letters or digits, ignoring any embedded '_'.
	       parse_number will complain if past the radix, or if L or U are
	       not final.  */
	    else if ((*p < '0' || *p > '9') && (*p != '_') &&
		     ((*p < 'a' || *p > 'z') && (*p < 'A' || *p > 'Z')))
	      break;
	  }

	toktype = parse_number (pstate, tokstart, p - tokstart,
				got_dot|got_e, &yylval);
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

    case '@':
      {
	const char *p = &tokstart[1];
	size_t len = strlen ("entry");

	while (isspace (*p))
	  p++;
	if (strncmp (p, "entry", len) == 0 && !isalnum (p[len])
	    && p[len] != '_')
	  {
	    lexptr = &p[len];
	    return ENTRY;
	  }
      }
      /* FALLTHRU */
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '|':
    case '&':
    case '^':
    case '~':
    case '!':
    case '<':
    case '>':
    case '?':
    case ':':
    case '=':
    case '{':
    case '}':
    symbol:
      lexptr++;
      return c;

    case '\'':
    case '"':
    case '`':
      {
	int host_len;
	int result = parse_string_or_char (tokstart, &lexptr, &yylval.tsval,
					   &host_len);
	if (result == CHARACTER_LITERAL)
	  {
	    if (host_len == 0)
	      error (_("Empty character constant."));
	    else if (host_len > 2 && c == '\'')
	      {
		++tokstart;
		namelen = lexptr - tokstart - 1;
		goto tryname;
	      }
	    else if (host_len > 1)
	      error (_("Invalid character constant."));
	  }
	return result;
      }
    }

  if (!(c == '_' || c == '$'
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    /* We must have come across a bad character (e.g. ';').  */
    error (_("Invalid character '%c' in expression"), c);

  /* It's a name.  See how long it is.  */
  namelen = 0;
  for (c = tokstart[namelen];
       (c == '_' || c == '$' || (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));)
    c = tokstart[++namelen];

  /* The token "if" terminates the expression and is NOT
     removed from the input stream.  */
  if (namelen == 2 && tokstart[0] == 'i' && tokstart[1] == 'f')
    return 0;

  /* For the same reason (breakpoint conditions), "thread N"
     terminates the expression.  "thread" could be an identifier, but
     an identifier is never followed by a number without intervening
     punctuation.  "task" is similar.  Handle abbreviations of these,
     similarly to breakpoint.c:find_condition_and_thread.  */
  if (namelen >= 1
      && (strncmp (tokstart, "thread", namelen) == 0
	  || strncmp (tokstart, "task", namelen) == 0)
      && (tokstart[namelen] == ' ' || tokstart[namelen] == '\t'))
    {
      const char *p = tokstart + namelen + 1;

      while (*p == ' ' || *p == '\t')
        p++;
      if (*p >= '0' && *p <= '9')
        return 0;
    }

  lexptr += namelen;

 tryname:

  yylval.sval.ptr = tokstart;
  yylval.sval.length = namelen;

  /* Catch specific keywords.  */
  copy = copy_name (yylval.sval);
  for (i = 0; i < sizeof ident_tokens / sizeof ident_tokens[0]; i++)
    if (strcmp (copy, ident_tokens[i].operator) == 0)
      {
	/* It is ok to always set this, even though we don't always
	   strictly need to.  */
	yylval.opcode = ident_tokens[i].opcode;
	return ident_tokens[i].token;
      }

  if (*tokstart == '$')
    return DOLLAR_VARIABLE;

  yylval.tsym.type
    = language_lookup_primitive_type_by_name (parse_language (pstate),
					      parse_gdbarch (pstate), copy);
  if (yylval.tsym.type != NULL)
    return TYPENAME;

  /* Input names that aren't symbols but ARE valid hex numbers,
     when the input radix permits them, can be names or numbers
     depending on the parse.  Note we support radixes > 16 here.  */
  if ((tokstart[0] >= 'a' && tokstart[0] < 'a' + input_radix - 10)
      || (tokstart[0] >= 'A' && tokstart[0] < 'A' + input_radix - 10))
    {
      YYSTYPE newlval;	/* Its value is ignored.  */
      int hextype = parse_number (pstate, tokstart, namelen, 0, &newlval);
      if (hextype == INTEGER_LITERAL)
	return NAME_OR_INT;
    }

  if (parse_completion && *lexptr == '\0')
    saw_name_at_eof = 1;

  return IDENTIFIER;
}

int
d_parse (struct parser_state *par_state)
{
  int result;
  struct cleanup *back_to;

  /* Setting up the parser state.  */
  gdb_assert (par_state != NULL);
  pstate = par_state;

  back_to = make_cleanup (null_cleanup, NULL);

  make_cleanup_restore_integer (&yydebug);
  make_cleanup_clear_parser_state (&pstate);
  yydebug = parser_debug;

  /* Initialize some state used by the lexer.  */
  last_was_structop = 0;
  saw_name_at_eof = 0;

  result = yyparse ();
  do_cleanups (back_to);
  return result;
}

void
yyerror (char *msg)
{
  if (prev_lexptr)
    lexptr = prev_lexptr;

  error (_("A %s in expression, near `%s'."), (msg ? msg : "error"), lexptr);
}


