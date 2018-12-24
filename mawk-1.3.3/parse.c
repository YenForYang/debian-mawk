/* A Bison parser, made by GNU Bison 3.2.2.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 79 "parse.y" /* yacc.c:338  */

#include <stdio.h>
#include "mawk.h"
#include "symtype.h"
#include "code.h"
#include "memory.h"
#include "bi_funct.h"
#include "bi_vars.h"
#include "jmp.h"
#include "field.h"
#include "files.h"


#define  YYMAXDEPTH	200


extern void  PROTO( eat_nl, (void) ) ;
static void  PROTO( resize_fblock, (FBLOCK *) ) ;
static void  PROTO( switch_code_to_main, (void)) ;
static void  PROTO( code_array, (SYMTAB *) ) ;
static void  PROTO( code_call_id, (CA_REC *, SYMTAB *) ) ;
static void  PROTO( field_A2I, (void)) ;
static void  PROTO( check_var, (SYMTAB *) ) ;
static void  PROTO( check_array, (SYMTAB *) ) ;
static void  PROTO( RE_as_arg, (void)) ;

static int scope ;
static FBLOCK *active_funct ;
      /* when scope is SCOPE_FUNCT  */

#define  code_address(x)  if( is_local(x) ) \
			     code2op(L_PUSHA, (x)->offset) ;\
                          else  code2(_PUSHA, (x)->stval.cp) 

#define  CDP(x)  (code_base+(x))
/* WARNING: These CDP() calculations become invalid after calls
   that might change code_base.  Which are:  code2(), code2op(),
   code_jmp() and code_pop().
*/

/* this nonsense caters to MSDOS large model */
#define  CODE_FE_PUSHA()  code_ptr->ptr = (PTR) 0 ; code1(FE_PUSHA)


#line 114 "y.tab.c" /* yacc.c:338  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNEXPECTED = 258,
    BAD_DECIMAL = 259,
    NL = 260,
    SEMI_COLON = 261,
    LBRACE = 262,
    RBRACE = 263,
    LBOX = 264,
    RBOX = 265,
    COMMA = 266,
    IO_OUT = 267,
    ASSIGN = 268,
    ADD_ASG = 269,
    SUB_ASG = 270,
    MUL_ASG = 271,
    DIV_ASG = 272,
    MOD_ASG = 273,
    POW_ASG = 274,
    QMARK = 275,
    COLON = 276,
    OR = 277,
    AND = 278,
    IN = 279,
    MATCH = 280,
    EQ = 281,
    NEQ = 282,
    LT = 283,
    LTE = 284,
    GT = 285,
    GTE = 286,
    CAT = 287,
    GETLINE = 288,
    PLUS = 289,
    MINUS = 290,
    MUL = 291,
    DIV = 292,
    MOD = 293,
    NOT = 294,
    UMINUS = 295,
    IO_IN = 296,
    PIPE = 297,
    POW = 298,
    INC_or_DEC = 299,
    DOLLAR = 300,
    FIELD = 301,
    LPAREN = 302,
    RPAREN = 303,
    DOUBLE = 304,
    STRING_ = 305,
    RE = 306,
    ID = 307,
    D_ID = 308,
    FUNCT_ID = 309,
    BUILTIN = 310,
    LENGTH = 311,
    PRINT = 312,
    PRINTF = 313,
    SPLIT = 314,
    MATCH_FUNC = 315,
    SUB = 316,
    GSUB = 317,
    DO = 318,
    WHILE = 319,
    FOR = 320,
    BREAK = 321,
    CONTINUE = 322,
    IF = 323,
    ELSE = 324,
    DELETE = 325,
    BEGIN = 326,
    END = 327,
    EXIT = 328,
    NEXT = 329,
    RETURN = 330,
    FUNCTION = 331
  };
#endif
/* Tokens.  */
#define UNEXPECTED 258
#define BAD_DECIMAL 259
#define NL 260
#define SEMI_COLON 261
#define LBRACE 262
#define RBRACE 263
#define LBOX 264
#define RBOX 265
#define COMMA 266
#define IO_OUT 267
#define ASSIGN 268
#define ADD_ASG 269
#define SUB_ASG 270
#define MUL_ASG 271
#define DIV_ASG 272
#define MOD_ASG 273
#define POW_ASG 274
#define QMARK 275
#define COLON 276
#define OR 277
#define AND 278
#define IN 279
#define MATCH 280
#define EQ 281
#define NEQ 282
#define LT 283
#define LTE 284
#define GT 285
#define GTE 286
#define CAT 287
#define GETLINE 288
#define PLUS 289
#define MINUS 290
#define MUL 291
#define DIV 292
#define MOD 293
#define NOT 294
#define UMINUS 295
#define IO_IN 296
#define PIPE 297
#define POW 298
#define INC_or_DEC 299
#define DOLLAR 300
#define FIELD 301
#define LPAREN 302
#define RPAREN 303
#define DOUBLE 304
#define STRING_ 305
#define RE 306
#define ID 307
#define D_ID 308
#define FUNCT_ID 309
#define BUILTIN 310
#define LENGTH 311
#define PRINT 312
#define PRINTF 313
#define SPLIT 314
#define MATCH_FUNC 315
#define SUB 316
#define GSUB 317
#define DO 318
#define WHILE 319
#define FOR 320
#define BREAK 321
#define CONTINUE 322
#define IF 323
#define ELSE 324
#define DELETE 325
#define BEGIN 326
#define END 327
#define EXIT 328
#define NEXT 329
#define RETURN 330
#define FUNCTION 331

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 124 "parse.y" /* yacc.c:353  */

CELL *cp ;
SYMTAB *stp ;
int  start ; /* code starting address as offset from code_base */
PF_CP  fp ;  /* ptr to a (print/printf) or (sub/gsub) function */
BI_REC *bip ; /* ptr to info about a builtin */
FBLOCK  *fbp  ; /* ptr to a function block */
ARG2_REC *arg2p ;
CA_REC   *ca_p  ;
int   ival ;
PTR   ptr ;

#line 322 "y.tab.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYFINAL  95
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  331

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

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
      75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   200,   200,   201,   204,   205,   206,   209,   215,   214,
     221,   220,   227,   226,   234,   250,   233,   263,   265,   271,
     272,   279,   280,   284,   285,   287,   289,   295,   298,   301,
     305,   313,   313,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   331,   359,   358,
     366,   365,   372,   373,   372,   378,   379,   383,   385,   387,
     395,   399,   403,   404,   405,   406,   407,   408,   409,   411,
     413,   415,   418,   426,   433,   437,   444,   453,   454,   457,
     459,   464,   475,   485,   489,   498,   499,   502,   503,   507,
     511,   516,   520,   521,   528,   533,   537,   541,   550,   555,
     561,   581,   607,   631,   632,   636,   637,   654,   658,   671,
     676,   687,   700,   712,   729,   737,   748,   762,   779,   781,
     790,   804,   806,   810,   814,   815,   816,   817,   818,   819,
     820,   826,   830,   837,   839,   863,   870,   893,   896,   900,
     903,   909,   916,   922,   927,   932,   939,   941,   941,   943,
     947,   955,   974,   975,   979,   984,   992,  1001,  1020,  1043,
    1050,  1051,  1054,  1060,  1073,  1086,  1098,  1100,  1115,  1117,
    1124,  1133,  1139
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNEXPECTED", "BAD_DECIMAL", "NL",
  "SEMI_COLON", "LBRACE", "RBRACE", "LBOX", "RBOX", "COMMA", "IO_OUT",
  "ASSIGN", "ADD_ASG", "SUB_ASG", "MUL_ASG", "DIV_ASG", "MOD_ASG",
  "POW_ASG", "QMARK", "COLON", "OR", "AND", "IN", "MATCH", "EQ", "NEQ",
  "LT", "LTE", "GT", "GTE", "CAT", "GETLINE", "PLUS", "MINUS", "MUL",
  "DIV", "MOD", "NOT", "UMINUS", "IO_IN", "PIPE", "POW", "INC_or_DEC",
  "DOLLAR", "FIELD", "LPAREN", "RPAREN", "DOUBLE", "STRING_", "RE", "ID",
  "D_ID", "FUNCT_ID", "BUILTIN", "LENGTH", "PRINT", "PRINTF", "SPLIT",
  "MATCH_FUNC", "SUB", "GSUB", "DO", "WHILE", "FOR", "BREAK", "CONTINUE",
  "IF", "ELSE", "DELETE", "BEGIN", "END", "EXIT", "NEXT", "RETURN",
  "FUNCTION", "$accept", "program", "program_block", "PA_block", "$@1",
  "$@2", "$@3", "$@4", "$@5", "block", "block_or_separator",
  "statement_list", "statement", "separator", "expr", "$@6", "$@7", "$@8",
  "$@9", "cat_expr", "p_expr", "lvalue", "arglist", "args", "builtin",
  "mark", "print", "pr_args", "arg2", "pr_direction", "if_front", "else",
  "do", "while_front", "for1", "for2", "for3", "array_loop_front", "field",
  "split_front", "split_back", "re_arg", "return_statement", "getline",
  "fvalue", "getline_file", "sub_or_gsub", "sub_back", "function_def",
  "funct_start", "funct_head", "f_arglist", "f_args", "outside_error",
  "call_args", "ca_front", "ca_back", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331
};
# endif

#define YYPACT_NINF -187

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-187)))

#define YYTABLE_NINF -112

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-112)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     288,  -187,   394,  -187,   769,   769,   769,    19,   679,  -187,
     799,  -187,  -187,  -187,   231,  -187,  -187,  -187,   -30,   -27,
    -187,  -187,  -187,  -187,   -21,   166,  -187,  -187,  -187,  1027,
     769,   659,   528,  -187,   403,     2,    -1,   769,   -11,  -187,
      32,    29,    32,    67,  -187,  -187,  -187,  -187,  -187,    47,
      50,    76,    76,    70,   -26,   531,    76,   531,  -187,   323,
    -187,  -187,   968,  -187,   465,   465,   465,   561,   465,  -187,
     799,    18,   -31,    88,   -31,   -31,    33,    51,  -187,  -187,
      51,  -187,   383,     8,   673,  -187,    54,    92,    95,   799,
     799,    32,    32,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,    62,   799,   799,   799,   799,   799,   799,   799,    86,
     659,   769,   769,   769,   769,   769,   104,   769,   799,   799,
     799,   799,   799,   799,   799,   799,   799,   799,   799,   799,
     799,   799,  -187,   799,  -187,  -187,  -187,  -187,  -187,   114,
      42,   799,  -187,   105,  -187,  -187,  -187,   799,   591,  -187,
    -187,   799,    76,  -187,   968,  -187,  -187,   968,    76,  -187,
    -187,  -187,   829,    91,    97,  -187,  -187,   994,   709,  -187,
     277,   150,   115,   155,   156,   799,  -187,   799,   152,  -187,
     799,   124,  -187,   859,   799,  1048,  1069,  -187,  -187,   799,
     799,   799,   799,  -187,   680,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,    16,    16,   -31,   -31,   -31,    19,
     131,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,  1093,
    1093,  1093,  1093,  1093,  1093,   902,  -187,  1093,   168,  -187,
     133,   171,   914,  -187,   660,  1006,   929,  -187,   177,  -187,
    -187,   739,  1093,  -187,   176,   181,  -187,   465,   141,  -187,
    -187,   941,   465,   799,   799,   799,  1093,  1093,   142,    77,
    -187,   540,   454,  -187,   147,   146,   799,  1093,  1081,  1102,
     205,  -187,  -187,   799,  -187,   154,  -187,   157,  -187,  -187,
     799,  -187,    13,   799,   799,    76,  -187,   799,  -187,  -187,
      90,   125,   135,  -187,   474,  -187,  -187,  -187,  -187,  -187,
    -187,   160,    86,  -187,   637,  -187,   175,   139,   152,  1093,
    1093,  -187,   956,   170,  -187,  -187,  -187,  -187,  -187,   799,
      19,  -187,  -187,  -187,    76,    76,  1093,   195,  -187,  -187,
    -187
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   164,     0,   146,     0,     0,     0,     0,     0,   118,
       0,    57,    58,    61,    59,    83,    83,    82,     0,     0,
     152,   153,     8,    10,     0,     0,     2,     4,     7,    12,
      33,    55,     0,    71,   123,     0,   141,     0,     0,     5,
       0,     0,     0,     0,    31,    32,    85,    86,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
      21,    25,     0,    83,     0,     0,     0,     0,     0,    29,
       0,    59,    69,   123,    70,    68,     0,    76,    73,    75,
     119,   121,     0,     0,   123,    72,     0,     0,     0,     0,
       0,     0,     0,   158,   159,     1,     3,    14,    52,    48,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,   133,   131,   149,   147,   148,   142,
     143,     0,   156,   160,     6,    18,    26,     0,     0,    27,
      28,     0,    83,   137,     0,    30,   139,     0,     0,    17,
      22,    24,    77,    95,     0,   101,   105,     0,     0,   117,
       0,     0,     0,     0,     0,     0,    60,     0,     0,   122,
       0,   168,   165,     0,    77,     0,     0,     9,    11,     0,
       0,     0,     0,   109,    47,    41,    42,    43,    44,    45,
      46,    19,    13,    20,    62,    63,    64,    65,    66,   144,
      67,    34,    35,    36,    37,    38,    39,    40,   124,   125,
     126,   127,   128,   129,   130,     0,   150,   136,     0,   162,
       0,   161,     0,   103,    59,     0,     0,   115,     0,   138,
     140,     0,    79,    87,    78,    92,    96,     0,     0,   106,
     107,     0,     0,     0,     0,     0,    90,    91,     0,     0,
     166,    59,     0,   167,     0,     0,     0,    15,     0,    49,
      51,   145,   134,     0,   157,     0,   100,     0,   104,    94,
       0,    89,     0,     0,     0,     0,    97,     0,   108,   102,
       0,     0,     0,   110,   112,   170,   172,   169,   171,    81,
     132,     0,     0,    53,     0,   163,     0,     0,    88,    80,
      93,    84,     0,   112,   111,   120,   113,   135,    16,     0,
       0,   154,   151,   116,     0,     0,    54,     0,   114,    99,
     155
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,   179,  -187,  -187,  -187,  -187,  -187,  -187,     7,
     -83,  -187,   -50,   -14,     0,  -187,  -187,  -187,  -187,  -187,
     148,    -6,    40,   -84,  -187,     6,  -187,  -187,    10,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,    -2,  -187,
    -187,   -10,  -187,  -187,  -186,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    91,    92,   109,   189,   302,    58,
     202,    59,    60,    61,    62,   191,   192,   190,   319,    30,
      31,    32,   243,   244,    33,    86,    63,   245,    83,   285,
      64,   247,    65,    66,    67,   168,   252,    68,    34,    35,
     135,   228,    69,    36,   139,    37,    38,   322,    39,    40,
      41,   230,   231,    42,   182,   183,   263
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    78,    73,    73,    73,    79,    73,    28,    84,   160,
      82,   116,   117,   133,   163,   164,   165,    89,   169,   177,
      90,    87,    88,   271,   177,    29,   152,   -83,    73,   146,
     137,    93,    28,    94,   138,    73,   141,   149,   150,     2,
     136,   153,   155,   156,     8,     9,    76,   142,   161,   144,
     134,    77,   113,   114,   115,   154,   178,   157,   116,   117,
     -83,   308,    85,   180,     8,     9,    76,   167,    84,   162,
     170,    77,    44,    45,   172,   145,   143,   171,     8,     9,
      76,    44,    45,   173,  -112,   117,   174,   294,   283,   185,
     186,    44,    45,     2,   147,   203,   259,   148,   187,   188,
     313,   283,   194,   195,   196,   197,   198,   199,   200,    73,
      73,    73,    73,    73,   193,    73,   201,   151,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   132,   225,   327,   314,   283,   209,   237,   181,
     239,   227,   184,   240,   146,   315,   283,   232,   235,   324,
     283,   236,    72,    74,    75,   226,    81,   229,   238,   253,
     246,   248,   242,   179,   254,   255,    95,     1,   251,   290,
     291,   292,   260,     2,   117,   256,   258,   257,   110,   273,
     242,   274,   275,   262,   242,   140,   280,   283,   287,   267,
     268,   269,   270,   284,   293,   299,   307,   286,   300,     3,
       4,     5,   289,   137,    96,     6,   305,   138,   317,   306,
       7,     8,     9,    10,   316,    11,    12,    13,    14,   318,
      15,    16,    17,   323,   264,    18,    19,    20,    21,   101,
     102,   103,   104,   105,   106,   107,   108,    22,    23,    84,
     -83,    82,    24,   330,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   282,     0,   242,   242,   242,   301,     0,     0,   204,
     205,   206,   207,   208,     0,   210,   227,     0,     0,     0,
       0,   311,     0,   304,     0,    85,     0,     0,     0,     0,
     242,     0,     0,   309,   310,     0,     0,   312,   203,     1,
       0,     0,     0,     0,     0,     2,     0,    98,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   201,
     328,   329,     0,     0,   137,     0,     0,     0,   138,   326,
       0,     3,     4,     5,   158,   176,     0,     6,    44,    45,
       2,   159,     7,     8,     9,    10,     0,    11,    12,    13,
      14,     0,    15,    16,    17,     0,     0,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     3,     4,     5,    22,
      23,     0,     6,     0,    24,     0,     0,     7,     8,     9,
      10,     0,    11,    12,    13,    14,     0,    15,    16,    17,
      46,    47,    18,    19,    20,    21,    48,    49,    50,    51,
      52,    53,     0,    54,   175,    43,    55,    56,    57,    44,
      45,     2,     0,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   125,   126,   127,   128,
     129,   130,   131,     0,     0,     0,     0,     3,     4,     5,
       0,   176,     0,     6,     0,     0,     0,     0,     7,     8,
       9,    10,     0,    11,    12,    13,    14,   132,    15,    16,
      17,    46,    47,    18,    19,    20,    21,    48,    49,    50,
      51,    52,    53,     0,    54,   297,   158,    55,    56,    57,
      44,    45,     2,     0,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,     0,     0,     0,     0,     3,     4,
       5,     0,   298,     0,     6,     0,     0,     0,     0,     7,
       8,     9,    10,     0,    11,    12,    13,    14,   316,    15,
      16,    17,    46,    47,    18,    19,    20,    21,    48,    49,
      50,    51,    52,    53,     0,    54,    44,    45,    55,    56,
      57,   118,   119,   120,   121,   122,   123,   124,     0,   -83,
       0,   295,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     3,     4,     5,   166,     0,     0,
       6,     0,     0,     0,     0,     7,     8,     9,    10,     0,
      11,    12,    13,    14,    85,    15,    16,    17,   296,     0,
      18,    19,    20,    21,     3,     4,     5,   233,     0,     0,
       6,     0,     0,     0,     0,     7,     8,     9,    10,     0,
      11,    12,    13,    14,     0,    15,    16,    17,     0,     0,
      18,    19,    20,    21,     3,     4,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     7,     8,     9,    10,     0,
      11,    12,    13,   234,     0,    15,    16,    17,   320,     0,
      18,    19,    20,    21,     0,     0,     0,    98,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   -83,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,   277,   321,   125,   126,   127,   128,
     129,   130,   131,   111,   112,   113,   114,   115,     0,     0,
       0,   116,   117,     0,    85,     0,   103,   104,   105,   106,
     107,   108,     3,     4,     5,     0,     0,   132,     6,     0,
       0,   179,     0,     7,     8,     9,    70,     0,    11,    12,
      13,    71,    80,    15,    16,    17,     0,     0,    18,    19,
      20,    21,     3,     4,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     8,     9,    10,   250,    11,    12,
      13,    14,     0,    15,    16,    17,     0,     0,    18,    19,
      20,    21,     3,     4,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     8,     9,    10,   281,    11,    12,
      13,    14,     0,    15,    16,    17,     0,     0,    18,    19,
      20,    21,     3,     4,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     8,     9,    70,     0,    11,    12,
      13,    71,     0,    15,    16,    17,     0,     0,    18,    19,
      20,    21,     3,     4,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     8,     9,    10,     0,    11,    12,
      13,    14,     0,    15,    16,    17,     0,     0,    18,    19,
      20,    21,     3,     4,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     8,     9,   241,     0,    11,    12,
      13,    14,     0,    15,    16,    17,     0,     0,    18,    19,
      20,    21,     3,     4,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     8,     9,    10,     0,    11,    12,
      13,   261,     0,    15,    16,    17,     0,     0,    18,    19,
      20,    21,    98,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,     0,     0,    98,
     272,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    98,   276,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    44,    45,     0,    98,   279,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    98,   288,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     249,     0,     0,     0,   325,     0,     0,     0,     0,     0,
       0,     0,   278,     0,    98,     0,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    97,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   265,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     266,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    98,   303,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   100,   101,   102,   103,   104,
     105,   106,   107,   108
};

static const yytype_int16 yycheck[] =
{
       0,     7,     4,     5,     6,     7,     8,     0,    10,    59,
      10,    42,    43,    11,    64,    65,    66,    47,    68,    11,
      47,    15,    16,   209,    11,    25,    52,     9,    30,    43,
      36,    52,    25,    54,    36,    37,    47,    51,    52,     7,
      41,    55,    56,    57,    45,    46,    47,    40,    62,    42,
      48,    52,    36,    37,    38,    55,    48,    57,    42,    43,
       9,    48,    44,     9,    45,    46,    47,    67,    70,    63,
      70,    52,     5,     6,    76,     8,    47,    71,    45,    46,
      47,     5,     6,    77,    42,    43,    80,    10,    11,    89,
      90,     5,     6,     7,    47,   109,   180,    47,    91,    92,
      10,    11,   102,   103,   104,   105,   106,   107,   108,   111,
     112,   113,   114,   115,    52,   117,   109,    47,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    44,   133,   320,    10,    11,    33,   152,    47,
     154,   141,    47,   157,   158,    10,    11,   147,   148,    10,
      11,   151,     4,     5,     6,    41,     8,    52,   152,     9,
      69,    64,   162,    48,     9,     9,     0,     1,   168,   253,
     254,   255,    48,     7,    43,   175,    24,   177,    30,    11,
     180,    48,    11,   183,   184,    37,     9,    11,    47,   189,
     190,   191,   192,    12,    52,    48,   280,   247,    52,    33,
      34,    35,   252,   209,    25,    39,    52,   209,    48,    52,
      44,    45,    46,    47,    44,    49,    50,    51,    52,   302,
      54,    55,    56,    48,   184,    59,    60,    61,    62,    24,
      25,    26,    27,    28,    29,    30,    31,    71,    72,   241,
       9,   241,    76,    48,    13,    14,    15,    16,    17,    18,
      19,   241,    -1,   253,   254,   255,   266,    -1,    -1,   111,
     112,   113,   114,   115,    -1,   117,   266,    -1,    -1,    -1,
      -1,   285,    -1,   273,    -1,    44,    -1,    -1,    -1,    -1,
     280,    -1,    -1,   283,   284,    -1,    -1,   287,   302,     1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   302,
     324,   325,    -1,    -1,   320,    -1,    -1,    -1,   320,   319,
      -1,    33,    34,    35,     1,    48,    -1,    39,     5,     6,
       7,     8,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    -1,    54,    55,    56,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    71,
      72,    -1,    39,    -1,    76,    -1,    -1,    44,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    11,     1,    73,    74,    75,     5,
       6,     7,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    48,    -1,    39,    -1,    -1,    -1,    -1,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    44,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    11,     1,    73,    74,    75,
       5,     6,     7,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    48,    -1,    39,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    44,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,     5,     6,    73,    74,
      75,    13,    14,    15,    16,    17,    18,    19,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    33,    34,    35,     6,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    44,    54,    55,    56,    48,    -1,
      59,    60,    61,    62,    33,    34,    35,     6,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    55,    56,    -1,    -1,
      59,    60,    61,    62,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    -1,    54,    55,    56,    11,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,     9,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    48,    13,    14,    15,    16,
      17,    18,    19,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    42,    43,    -1,    44,    -1,    26,    27,    28,    29,
      30,    31,    33,    34,    35,    -1,    -1,    44,    39,    -1,
      -1,    48,    -1,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    33,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    33,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    33,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    33,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    33,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    33,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    20,
      48,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    20,    48,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     5,     6,    -1,    20,    48,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    20,    48,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       6,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    23,    24,    25,    26,    27,
      28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    33,    34,    35,    39,    44,    45,    46,
      47,    49,    50,    51,    52,    54,    55,    56,    59,    60,
      61,    62,    71,    72,    76,    78,    79,    80,    86,    91,
      96,    97,    98,   101,   115,   116,   120,   122,   123,   125,
     126,   127,   130,     1,     5,     6,    57,    58,    63,    64,
      65,    66,    67,    68,    70,    73,    74,    75,    86,    88,
      89,    90,    91,   103,   107,   109,   110,   111,   114,   119,
      47,    52,    97,   115,    97,    97,    47,    52,    98,   115,
      53,    97,    91,   105,   115,    44,   102,   102,   102,    47,
      47,    81,    82,    52,    54,     0,    79,    11,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    83,
      97,    34,    35,    36,    37,    38,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    13,    14,    15,    16,    17,
      18,    19,    44,    11,    48,   117,    41,    98,   115,   121,
      97,    47,    86,    47,    86,     8,    90,    47,    47,    90,
      90,    47,    52,    90,    91,    90,    90,    91,     1,     8,
      89,    90,   102,    89,    89,    89,     6,    91,   112,    89,
      91,   102,   115,   102,   102,    11,    48,    11,    48,    48,
       9,    47,   131,   132,    47,    91,    91,    86,    86,    84,
      94,    92,    93,    52,    91,    91,    91,    91,    91,    91,
      91,    86,    87,    90,    97,    97,    97,    97,    97,    33,
      97,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    41,    91,   118,    52,
     128,   129,    91,     6,    52,    91,    91,    90,   102,    90,
      90,    47,    91,    99,   100,   104,    69,   108,    64,     6,
      48,    91,   113,     9,     9,     9,    91,    91,    24,   100,
      48,    52,    91,   133,    99,    11,    11,    91,    91,    91,
      91,   121,    48,    11,    48,    11,    48,    24,     6,    48,
       9,    48,   105,    11,    12,   106,    89,    47,    48,    89,
     100,   100,   100,    52,    10,    11,    48,    11,    48,    48,
      52,   118,    85,    21,    91,    52,    52,   100,    48,    91,
      91,    90,    91,    10,    10,    10,    44,    48,    87,    95,
      11,    48,   124,    48,    10,    48,    91,   121,    90,    90,
      48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    79,    80,    81,    80,
      82,    80,    83,    80,    84,    85,    80,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    91,
      93,    91,    94,    95,    91,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    99,    99,   100,
     100,   101,   101,   102,    89,   103,   103,   104,   104,   104,
     105,   105,   106,   106,   107,    89,   108,    89,   109,    89,
     110,    89,    89,   111,   111,   112,   112,   113,   113,    91,
      91,    98,    97,    97,    89,    89,   114,    89,   115,   115,
     115,   115,   115,    97,    91,    91,    91,    91,    91,    91,
      91,    97,   116,   117,   117,    97,   118,    89,    89,   119,
     119,    97,    97,    97,    97,    97,   120,   121,   121,   122,
     122,    97,   123,   123,   124,   124,   125,   126,   127,   127,
     128,   128,   129,   129,   130,    97,   131,   131,   132,   132,
     132,   133,   133
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     0,     3,
       0,     3,     0,     3,     0,     0,     6,     3,     3,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     1,
       2,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     4,
       0,     4,     0,     0,     7,     1,     2,     1,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     1,     2,     2,     2,     2,     1,     0,     1,     1,
       3,     5,     1,     0,     5,     1,     1,     1,     3,     2,
       3,     3,     0,     2,     4,     2,     1,     4,     1,     7,
       4,     2,     4,     3,     4,     1,     2,     1,     2,     3,
       5,     5,     5,     6,     7,     3,     6,     2,     1,     2,
       6,     2,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     2,     5,     1,     3,     6,     1,     2,     3,     2,
       3,     1,     2,     2,     3,     4,     1,     1,     1,     2,
       3,     6,     1,     1,     1,     3,     2,     4,     2,     2,
       0,     1,     1,     3,     1,     3,     2,     2,     1,     3,
       3,     2,     2
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

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
        case 7:
#line 210 "parse.y" /* yacc.c:1645  */
    { /* this do nothing action removes a vacuous warning
                  from Bison */
             }
#line 1814 "y.tab.c" /* yacc.c:1645  */
    break;

  case 8:
#line 215 "parse.y" /* yacc.c:1645  */
    { be_setup(scope = SCOPE_BEGIN) ; }
#line 1820 "y.tab.c" /* yacc.c:1645  */
    break;

  case 9:
#line 218 "parse.y" /* yacc.c:1645  */
    { switch_code_to_main() ; }
#line 1826 "y.tab.c" /* yacc.c:1645  */
    break;

  case 10:
#line 221 "parse.y" /* yacc.c:1645  */
    { be_setup(scope = SCOPE_END) ; }
#line 1832 "y.tab.c" /* yacc.c:1645  */
    break;

  case 11:
#line 224 "parse.y" /* yacc.c:1645  */
    { switch_code_to_main() ; }
#line 1838 "y.tab.c" /* yacc.c:1645  */
    break;

  case 12:
#line 227 "parse.y" /* yacc.c:1645  */
    { code_jmp(_JZ, (INST*)0) ; }
#line 1844 "y.tab.c" /* yacc.c:1645  */
    break;

  case 13:
#line 230 "parse.y" /* yacc.c:1645  */
    { patch_jmp( code_ptr ) ; }
#line 1850 "y.tab.c" /* yacc.c:1645  */
    break;

  case 14:
#line 234 "parse.y" /* yacc.c:1645  */
    { 
	       INST *p1 = CDP((yyvsp[-1].start)) ;
             int len ;

	       code_push(p1, code_ptr - p1, scope, active_funct) ;
               code_ptr = p1 ;

               code2op(_RANGE, 1) ;
               code_ptr += 3 ;
               len = code_pop(code_ptr) ;
             code_ptr += len ;
               code1(_STOP) ;
             p1 = CDP((yyvsp[-1].start)) ;
               p1[2].op = code_ptr - (p1+1) ;
             }
#line 1870 "y.tab.c" /* yacc.c:1645  */
    break;

  case 15:
#line 250 "parse.y" /* yacc.c:1645  */
    { code1(_STOP) ; }
#line 1876 "y.tab.c" /* yacc.c:1645  */
    break;

  case 16:
#line 253 "parse.y" /* yacc.c:1645  */
    { 
	       INST *p1 = CDP((yyvsp[-5].start)) ;
	       
	       p1[3].op = CDP((yyvsp[0].start)) - (p1+1) ;
               p1[4].op = code_ptr - (p1+1) ;
             }
#line 1887 "y.tab.c" /* yacc.c:1645  */
    break;

  case 17:
#line 264 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; }
#line 1893 "y.tab.c" /* yacc.c:1645  */
    break;

  case 18:
#line 266 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; /* does nothing won't be executed */
              print_flag = getline_flag = paren_cnt = 0 ;
              yyerrok ; }
#line 1901 "y.tab.c" /* yacc.c:1645  */
    break;

  case 20:
#line 273 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ;
                       code1(_PUSHINT) ; code1(0) ;
                       code2(_PRINT, bi_print) ;
                     }
#line 1910 "y.tab.c" /* yacc.c:1645  */
    break;

  case 24:
#line 286 "parse.y" /* yacc.c:1645  */
    { code1(_POP) ; }
#line 1916 "y.tab.c" /* yacc.c:1645  */
    break;

  case 25:
#line 288 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; }
#line 1922 "y.tab.c" /* yacc.c:1645  */
    break;

  case 26:
#line 290 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ;
                print_flag = getline_flag = 0 ;
                paren_cnt = 0 ;
                yyerrok ;
              }
#line 1932 "y.tab.c" /* yacc.c:1645  */
    break;

  case 27:
#line 296 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; BC_insert('B', code_ptr+1) ;
               code2(_JMP, 0) /* don't use code_jmp ! */ ; }
#line 1939 "y.tab.c" /* yacc.c:1645  */
    break;

  case 28:
#line 299 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; BC_insert('C', code_ptr+1) ;
               code2(_JMP, 0) ; }
#line 1946 "y.tab.c" /* yacc.c:1645  */
    break;

  case 29:
#line 302 "parse.y" /* yacc.c:1645  */
    { if ( scope != SCOPE_FUNCT )
                     compile_error("return outside function body") ;
             }
#line 1954 "y.tab.c" /* yacc.c:1645  */
    break;

  case 30:
#line 306 "parse.y" /* yacc.c:1645  */
    { if ( scope != SCOPE_MAIN )
                   compile_error( "improper use of next" ) ;
                (yyval.start) = code_offset ; 
                code1(_NEXT) ;
              }
#line 1964 "y.tab.c" /* yacc.c:1645  */
    break;

  case 34:
#line 317 "parse.y" /* yacc.c:1645  */
    { code1(_ASSIGN) ; }
#line 1970 "y.tab.c" /* yacc.c:1645  */
    break;

  case 35:
#line 318 "parse.y" /* yacc.c:1645  */
    { code1(_ADD_ASG) ; }
#line 1976 "y.tab.c" /* yacc.c:1645  */
    break;

  case 36:
#line 319 "parse.y" /* yacc.c:1645  */
    { code1(_SUB_ASG) ; }
#line 1982 "y.tab.c" /* yacc.c:1645  */
    break;

  case 37:
#line 320 "parse.y" /* yacc.c:1645  */
    { code1(_MUL_ASG) ; }
#line 1988 "y.tab.c" /* yacc.c:1645  */
    break;

  case 38:
#line 321 "parse.y" /* yacc.c:1645  */
    { code1(_DIV_ASG) ; }
#line 1994 "y.tab.c" /* yacc.c:1645  */
    break;

  case 39:
#line 322 "parse.y" /* yacc.c:1645  */
    { code1(_MOD_ASG) ; }
#line 2000 "y.tab.c" /* yacc.c:1645  */
    break;

  case 40:
#line 323 "parse.y" /* yacc.c:1645  */
    { code1(_POW_ASG) ; }
#line 2006 "y.tab.c" /* yacc.c:1645  */
    break;

  case 41:
#line 324 "parse.y" /* yacc.c:1645  */
    { code1(_EQ) ; }
#line 2012 "y.tab.c" /* yacc.c:1645  */
    break;

  case 42:
#line 325 "parse.y" /* yacc.c:1645  */
    { code1(_NEQ) ; }
#line 2018 "y.tab.c" /* yacc.c:1645  */
    break;

  case 43:
#line 326 "parse.y" /* yacc.c:1645  */
    { code1(_LT) ; }
#line 2024 "y.tab.c" /* yacc.c:1645  */
    break;

  case 44:
#line 327 "parse.y" /* yacc.c:1645  */
    { code1(_LTE) ; }
#line 2030 "y.tab.c" /* yacc.c:1645  */
    break;

  case 45:
#line 328 "parse.y" /* yacc.c:1645  */
    { code1(_GT) ; }
#line 2036 "y.tab.c" /* yacc.c:1645  */
    break;

  case 46:
#line 329 "parse.y" /* yacc.c:1645  */
    { code1(_GTE) ; }
#line 2042 "y.tab.c" /* yacc.c:1645  */
    break;

  case 47:
#line 332 "parse.y" /* yacc.c:1645  */
    {
	    INST *p3 = CDP((yyvsp[0].start)) ;

            if ( p3 == code_ptr - 2 )
            {
               if ( p3->op == _MATCH0 )  p3->op = _MATCH1 ;

               else /* check for string */
               if ( p3->op == _PUSHS )
               { CELL *cp = ZMALLOC(CELL) ;

                 cp->type = C_STRING ; 
                 cp->ptr = p3[1].ptr ;
                 cast_to_RE(cp) ;
                 code_ptr -= 2 ;
                 code2(_MATCH1, cp->ptr) ;
                 ZFREE(cp) ;
               }
               else  code1(_MATCH2) ;
            }
            else code1(_MATCH2) ;

            if ( !(yyvsp[-1].ival) ) code1(_NOT) ;
          }
#line 2071 "y.tab.c" /* yacc.c:1645  */
    break;

  case 48:
#line 359 "parse.y" /* yacc.c:1645  */
    { code1(_TEST) ;
                code_jmp(_LJNZ, (INST*)0) ;
              }
#line 2079 "y.tab.c" /* yacc.c:1645  */
    break;

  case 49:
#line 363 "parse.y" /* yacc.c:1645  */
    { code1(_TEST) ; patch_jmp(code_ptr) ; }
#line 2085 "y.tab.c" /* yacc.c:1645  */
    break;

  case 50:
#line 366 "parse.y" /* yacc.c:1645  */
    { code1(_TEST) ; 
		code_jmp(_LJZ, (INST*)0) ;
	      }
#line 2093 "y.tab.c" /* yacc.c:1645  */
    break;

  case 51:
#line 370 "parse.y" /* yacc.c:1645  */
    { code1(_TEST) ; patch_jmp(code_ptr) ; }
#line 2099 "y.tab.c" /* yacc.c:1645  */
    break;

  case 52:
#line 372 "parse.y" /* yacc.c:1645  */
    { code_jmp(_JZ, (INST*)0) ; }
#line 2105 "y.tab.c" /* yacc.c:1645  */
    break;

  case 53:
#line 373 "parse.y" /* yacc.c:1645  */
    { code_jmp(_JMP, (INST*)0) ; }
#line 2111 "y.tab.c" /* yacc.c:1645  */
    break;

  case 54:
#line 375 "parse.y" /* yacc.c:1645  */
    { patch_jmp(code_ptr) ; patch_jmp(CDP((yyvsp[0].start))) ; }
#line 2117 "y.tab.c" /* yacc.c:1645  */
    break;

  case 56:
#line 380 "parse.y" /* yacc.c:1645  */
    { code1(_CAT) ; }
#line 2123 "y.tab.c" /* yacc.c:1645  */
    break;

  case 57:
#line 384 "parse.y" /* yacc.c:1645  */
    {  (yyval.start) = code_offset ; code2(_PUSHD, (yyvsp[0].ptr)) ; }
#line 2129 "y.tab.c" /* yacc.c:1645  */
    break;

  case 58:
#line 386 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; code2(_PUSHS, (yyvsp[0].ptr)) ; }
#line 2135 "y.tab.c" /* yacc.c:1645  */
    break;

  case 59:
#line 388 "parse.y" /* yacc.c:1645  */
    { check_var((yyvsp[0].stp)) ;
            (yyval.start) = code_offset ;
            if ( is_local((yyvsp[0].stp)) )
            { code2op(L_PUSHI, (yyvsp[0].stp)->offset) ; }
            else code2(_PUSHI, (yyvsp[0].stp)->stval.cp) ;
          }
#line 2146 "y.tab.c" /* yacc.c:1645  */
    break;

  case 60:
#line 396 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; }
#line 2152 "y.tab.c" /* yacc.c:1645  */
    break;

  case 61:
#line 400 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; code2(_MATCH0, (yyvsp[0].ptr)) ; }
#line 2158 "y.tab.c" /* yacc.c:1645  */
    break;

  case 62:
#line 403 "parse.y" /* yacc.c:1645  */
    { code1(_ADD) ; }
#line 2164 "y.tab.c" /* yacc.c:1645  */
    break;

  case 63:
#line 404 "parse.y" /* yacc.c:1645  */
    { code1(_SUB) ; }
#line 2170 "y.tab.c" /* yacc.c:1645  */
    break;

  case 64:
#line 405 "parse.y" /* yacc.c:1645  */
    { code1(_MUL) ; }
#line 2176 "y.tab.c" /* yacc.c:1645  */
    break;

  case 65:
#line 406 "parse.y" /* yacc.c:1645  */
    { code1(_DIV) ; }
#line 2182 "y.tab.c" /* yacc.c:1645  */
    break;

  case 66:
#line 407 "parse.y" /* yacc.c:1645  */
    { code1(_MOD) ; }
#line 2188 "y.tab.c" /* yacc.c:1645  */
    break;

  case 67:
#line 408 "parse.y" /* yacc.c:1645  */
    { code1(_POW) ; }
#line 2194 "y.tab.c" /* yacc.c:1645  */
    break;

  case 68:
#line 410 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[0].start) ; code1(_NOT) ; }
#line 2200 "y.tab.c" /* yacc.c:1645  */
    break;

  case 69:
#line 412 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[0].start) ; code1(_UPLUS) ; }
#line 2206 "y.tab.c" /* yacc.c:1645  */
    break;

  case 70:
#line 414 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[0].start) ; code1(_UMINUS) ; }
#line 2212 "y.tab.c" /* yacc.c:1645  */
    break;

  case 72:
#line 419 "parse.y" /* yacc.c:1645  */
    { check_var((yyvsp[-1].stp)) ;
             (yyval.start) = code_offset ;
             code_address((yyvsp[-1].stp)) ;

             if ( (yyvsp[0].ival) == '+' )  code1(_POST_INC) ;
             else  code1(_POST_DEC) ;
           }
#line 2224 "y.tab.c" /* yacc.c:1645  */
    break;

  case 73:
#line 427 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[0].start) ; 
              if ( (yyvsp[-1].ival) == '+' ) code1(_PRE_INC) ;
              else  code1(_PRE_DEC) ;
            }
#line 2233 "y.tab.c" /* yacc.c:1645  */
    break;

  case 74:
#line 434 "parse.y" /* yacc.c:1645  */
    { if ((yyvsp[0].ival) == '+' ) code1(F_POST_INC ) ; 
             else  code1(F_POST_DEC) ;
           }
#line 2241 "y.tab.c" /* yacc.c:1645  */
    break;

  case 75:
#line 438 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[0].start) ; 
             if ( (yyvsp[-1].ival) == '+' ) code1(F_PRE_INC) ;
             else  code1( F_PRE_DEC) ; 
           }
#line 2250 "y.tab.c" /* yacc.c:1645  */
    break;

  case 76:
#line 445 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; 
          check_var((yyvsp[0].stp)) ;
          code_address((yyvsp[0].stp)) ;
        }
#line 2259 "y.tab.c" /* yacc.c:1645  */
    break;

  case 77:
#line 453 "parse.y" /* yacc.c:1645  */
    { (yyval.ival) = 0 ; }
#line 2265 "y.tab.c" /* yacc.c:1645  */
    break;

  case 79:
#line 458 "parse.y" /* yacc.c:1645  */
    { (yyval.ival) = 1 ; }
#line 2271 "y.tab.c" /* yacc.c:1645  */
    break;

  case 80:
#line 460 "parse.y" /* yacc.c:1645  */
    { (yyval.ival) = (yyvsp[-2].ival) + 1 ; }
#line 2277 "y.tab.c" /* yacc.c:1645  */
    break;

  case 81:
#line 465 "parse.y" /* yacc.c:1645  */
    { BI_REC *p = (yyvsp[-4].bip) ;
          (yyval.start) = (yyvsp[-3].start) ;
          if ( (int)p->min_args > (yyvsp[-1].ival) || (int)p->max_args < (yyvsp[-1].ival) )
            compile_error(
            "wrong number of arguments in call to %s" ,
            p->name ) ;
          if ( p->min_args != p->max_args ) /* variable args */
              { code1(_PUSHINT) ;  code1((yyvsp[-1].ival)) ; }
          code2(_BUILTIN , p->fp) ;
        }
#line 2292 "y.tab.c" /* yacc.c:1645  */
    break;

  case 82:
#line 476 "parse.y" /* yacc.c:1645  */
    {
	    (yyval.start) = code_offset ;
	    code1(_PUSHINT) ; code1(0) ;
	    code2(_BUILTIN, (yyvsp[0].bip)->fp) ;
	  }
#line 2302 "y.tab.c" /* yacc.c:1645  */
    break;

  case 83:
#line 485 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; }
#line 2308 "y.tab.c" /* yacc.c:1645  */
    break;

  case 84:
#line 490 "parse.y" /* yacc.c:1645  */
    { code2(_PRINT, (yyvsp[-4].fp)) ; 
              if ( (yyvsp[-4].fp) == bi_printf && (yyvsp[-2].ival) == 0 )
                    compile_error("no arguments in call to printf") ;
              print_flag = 0 ;
              (yyval.start) = (yyvsp[-3].start) ;
            }
#line 2319 "y.tab.c" /* yacc.c:1645  */
    break;

  case 85:
#line 498 "parse.y" /* yacc.c:1645  */
    { (yyval.fp) = bi_print ; print_flag = 1 ;}
#line 2325 "y.tab.c" /* yacc.c:1645  */
    break;

  case 86:
#line 499 "parse.y" /* yacc.c:1645  */
    { (yyval.fp) = bi_printf ; print_flag = 1 ; }
#line 2331 "y.tab.c" /* yacc.c:1645  */
    break;

  case 87:
#line 502 "parse.y" /* yacc.c:1645  */
    { code2op(_PUSHINT, (yyvsp[0].ival)) ; }
#line 2337 "y.tab.c" /* yacc.c:1645  */
    break;

  case 88:
#line 504 "parse.y" /* yacc.c:1645  */
    { (yyval.ival) = (yyvsp[-1].arg2p)->cnt ; zfree((yyvsp[-1].arg2p),sizeof(ARG2_REC)) ; 
             code2op(_PUSHINT, (yyval.ival)) ; 
           }
#line 2345 "y.tab.c" /* yacc.c:1645  */
    break;

  case 89:
#line 508 "parse.y" /* yacc.c:1645  */
    { (yyval.ival)=0 ; code2op(_PUSHINT, 0) ; }
#line 2351 "y.tab.c" /* yacc.c:1645  */
    break;

  case 90:
#line 512 "parse.y" /* yacc.c:1645  */
    { (yyval.arg2p) = (ARG2_REC*) zmalloc(sizeof(ARG2_REC)) ;
             (yyval.arg2p)->start = (yyvsp[-2].start) ;
             (yyval.arg2p)->cnt = 2 ;
           }
#line 2360 "y.tab.c" /* yacc.c:1645  */
    break;

  case 91:
#line 517 "parse.y" /* yacc.c:1645  */
    { (yyval.arg2p) = (yyvsp[-2].arg2p) ; (yyval.arg2p)->cnt++ ; }
#line 2366 "y.tab.c" /* yacc.c:1645  */
    break;

  case 93:
#line 522 "parse.y" /* yacc.c:1645  */
    { code2op(_PUSHINT, (yyvsp[-1].ival)) ; }
#line 2372 "y.tab.c" /* yacc.c:1645  */
    break;

  case 94:
#line 529 "parse.y" /* yacc.c:1645  */
    {  (yyval.start) = (yyvsp[-1].start) ; eat_nl() ; code_jmp(_JZ, (INST*)0) ; }
#line 2378 "y.tab.c" /* yacc.c:1645  */
    break;

  case 95:
#line 534 "parse.y" /* yacc.c:1645  */
    { patch_jmp( code_ptr ) ;  }
#line 2384 "y.tab.c" /* yacc.c:1645  */
    break;

  case 96:
#line 537 "parse.y" /* yacc.c:1645  */
    { eat_nl() ; code_jmp(_JMP, (INST*)0) ; }
#line 2390 "y.tab.c" /* yacc.c:1645  */
    break;

  case 97:
#line 542 "parse.y" /* yacc.c:1645  */
    { patch_jmp(code_ptr) ; 
		  patch_jmp(CDP((yyvsp[0].start))) ; 
		}
#line 2398 "y.tab.c" /* yacc.c:1645  */
    break;

  case 98:
#line 551 "parse.y" /* yacc.c:1645  */
    { eat_nl() ; BC_new() ; }
#line 2404 "y.tab.c" /* yacc.c:1645  */
    break;

  case 99:
#line 556 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-5].start) ;
          code_jmp(_JNZ, CDP((yyvsp[-5].start))) ; 
          BC_clear(code_ptr, CDP((yyvsp[-2].start))) ; }
#line 2412 "y.tab.c" /* yacc.c:1645  */
    break;

  case 100:
#line 562 "parse.y" /* yacc.c:1645  */
    { eat_nl() ; BC_new() ;
                  (yyval.start) = (yyvsp[-1].start) ;

                  /* check if const expression */
                  if ( code_ptr - 2 == CDP((yyvsp[-1].start)) &&
                       code_ptr[-2].op == _PUSHD &&
                       *(double*)code_ptr[-1].ptr != 0.0 
                     )
                     code_ptr -= 2 ;
                  else
		  { INST *p3 = CDP((yyvsp[-1].start)) ;
		    code_push(p3, code_ptr-p3, scope, active_funct) ;
		    code_ptr = p3 ;
                    code2(_JMP, (INST*)0) ; /* code2() not code_jmp() */
		  }
                }
#line 2433 "y.tab.c" /* yacc.c:1645  */
    break;

  case 101:
#line 582 "parse.y" /* yacc.c:1645  */
    { 
		  int  saved_offset ;
		  int len ;
		  INST *p1 = CDP((yyvsp[-1].start)) ;
		  INST *p2 = CDP((yyvsp[0].start)) ;

                  if ( p1 != p2 )  /* real test in loop */
		  {
		    p1[1].op = code_ptr-(p1+1) ;
		    saved_offset = code_offset ;
		    len = code_pop(code_ptr) ;
		    code_ptr += len ;
		    code_jmp(_JNZ, CDP((yyvsp[0].start))) ;
		    BC_clear(code_ptr, CDP(saved_offset)) ;
		  }
		  else /* while(1) */
		  {
		    code_jmp(_JMP, p1) ;
		    BC_clear(code_ptr, CDP((yyvsp[0].start))) ;
		  }
                }
#line 2459 "y.tab.c" /* yacc.c:1645  */
    break;

  case 102:
#line 608 "parse.y" /* yacc.c:1645  */
    { 
		  int cont_offset = code_offset ;
                  unsigned len = code_pop(code_ptr) ;
		  INST *p2 = CDP((yyvsp[-2].start)) ;
		  INST *p4 = CDP((yyvsp[0].start)) ;

                  code_ptr += len ;

		  if ( p2 != p4 )  /* real test in for2 */
		  {
                    p4[-1].op = code_ptr - p4 + 1 ;
		    len = code_pop(code_ptr) ;
		    code_ptr += len ;
                    code_jmp(_JNZ, CDP((yyvsp[0].start))) ;
		  }
		  else /*  for(;;) */
		  code_jmp(_JMP, p4) ;

		  BC_clear(code_ptr, CDP(cont_offset)) ;

                }
#line 2485 "y.tab.c" /* yacc.c:1645  */
    break;

  case 103:
#line 631 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; }
#line 2491 "y.tab.c" /* yacc.c:1645  */
    break;

  case 104:
#line 633 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; code1(_POP) ; }
#line 2497 "y.tab.c" /* yacc.c:1645  */
    break;

  case 105:
#line 636 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; }
#line 2503 "y.tab.c" /* yacc.c:1645  */
    break;

  case 106:
#line 638 "parse.y" /* yacc.c:1645  */
    { 
             if ( code_ptr - 2 == CDP((yyvsp[-1].start)) &&
                  code_ptr[-2].op == _PUSHD &&
                  * (double*) code_ptr[-1].ptr != 0.0
                )
                    code_ptr -= 2 ;
             else   
	     {
	       INST *p1 = CDP((yyvsp[-1].start)) ;
	       code_push(p1, code_ptr-p1, scope, active_funct) ;
	       code_ptr = p1 ;
	       code2(_JMP, (INST*)0) ;
	     }
           }
#line 2522 "y.tab.c" /* yacc.c:1645  */
    break;

  case 107:
#line 655 "parse.y" /* yacc.c:1645  */
    { eat_nl() ; BC_new() ;
	     code_push((INST*)0,0, scope, active_funct) ;
	   }
#line 2530 "y.tab.c" /* yacc.c:1645  */
    break;

  case 108:
#line 659 "parse.y" /* yacc.c:1645  */
    { INST *p1 = CDP((yyvsp[-1].start)) ;
	   
	     eat_nl() ; BC_new() ; 
             code1(_POP) ;
             code_push(p1, code_ptr - p1, scope, active_funct) ;
             code_ptr -= code_ptr - p1 ;
           }
#line 2542 "y.tab.c" /* yacc.c:1645  */
    break;

  case 109:
#line 672 "parse.y" /* yacc.c:1645  */
    { check_array((yyvsp[0].stp)) ;
             code_array((yyvsp[0].stp)) ; 
             code1(A_TEST) ; 
            }
#line 2551 "y.tab.c" /* yacc.c:1645  */
    break;

  case 110:
#line 677 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-3].arg2p)->start ;
             code2op(A_CAT, (yyvsp[-3].arg2p)->cnt) ;
             zfree((yyvsp[-3].arg2p), sizeof(ARG2_REC)) ;

             check_array((yyvsp[0].stp)) ;
             code_array((yyvsp[0].stp)) ;
             code1(A_TEST) ;
           }
#line 2564 "y.tab.c" /* yacc.c:1645  */
    break;

  case 111:
#line 688 "parse.y" /* yacc.c:1645  */
    { 
             if ( (yyvsp[-1].ival) > 1 )
             { code2op(A_CAT, (yyvsp[-1].ival)) ; }

             check_array((yyvsp[-4].stp)) ;
             if( is_local((yyvsp[-4].stp)) )
             { code2op(LAE_PUSHA, (yyvsp[-4].stp)->offset) ; }
             else code2(AE_PUSHA, (yyvsp[-4].stp)->stval.array) ;
             (yyval.start) = (yyvsp[-3].start) ;
           }
#line 2579 "y.tab.c" /* yacc.c:1645  */
    break;

  case 112:
#line 701 "parse.y" /* yacc.c:1645  */
    { 
             if ( (yyvsp[-1].ival) > 1 )
             { code2op(A_CAT, (yyvsp[-1].ival)) ; }

             check_array((yyvsp[-4].stp)) ;
             if( is_local((yyvsp[-4].stp)) )
             { code2op(LAE_PUSHI, (yyvsp[-4].stp)->offset) ; }
             else code2(AE_PUSHI, (yyvsp[-4].stp)->stval.array) ;
             (yyval.start) = (yyvsp[-3].start) ;
           }
#line 2594 "y.tab.c" /* yacc.c:1645  */
    break;

  case 113:
#line 713 "parse.y" /* yacc.c:1645  */
    { 
             if ( (yyvsp[-2].ival) > 1 )
             { code2op(A_CAT,(yyvsp[-2].ival)) ; }

             check_array((yyvsp[-5].stp)) ;
             if( is_local((yyvsp[-5].stp)) )
             { code2op(LAE_PUSHA, (yyvsp[-5].stp)->offset) ; }
             else code2(AE_PUSHA, (yyvsp[-5].stp)->stval.array) ;
             if ( (yyvsp[0].ival) == '+' )  code1(_POST_INC) ;
             else  code1(_POST_DEC) ;

             (yyval.start) = (yyvsp[-4].start) ;
           }
#line 2612 "y.tab.c" /* yacc.c:1645  */
    break;

  case 114:
#line 730 "parse.y" /* yacc.c:1645  */
    { 
               (yyval.start) = (yyvsp[-4].start) ;
               if ( (yyvsp[-2].ival) > 1 ) { code2op(A_CAT, (yyvsp[-2].ival)) ; }
               check_array((yyvsp[-5].stp)) ;
               code_array((yyvsp[-5].stp)) ;
               code1(A_DEL) ;
             }
#line 2624 "y.tab.c" /* yacc.c:1645  */
    break;

  case 115:
#line 738 "parse.y" /* yacc.c:1645  */
    {
		(yyval.start) = code_offset ;
		check_array((yyvsp[-1].stp)) ;
		code_array((yyvsp[-1].stp)) ;
		code1(DEL_A) ;
	     }
#line 2635 "y.tab.c" /* yacc.c:1645  */
    break;

  case 116:
#line 749 "parse.y" /* yacc.c:1645  */
    { eat_nl() ; BC_new() ;
                      (yyval.start) = code_offset ;

                      check_var((yyvsp[-3].stp)) ;
                      code_address((yyvsp[-3].stp)) ;
                      check_array((yyvsp[-1].stp)) ;
                      code_array((yyvsp[-1].stp)) ;

                      code2(SET_ALOOP, (INST*)0) ;
                    }
#line 2650 "y.tab.c" /* yacc.c:1645  */
    break;

  case 117:
#line 763 "parse.y" /* yacc.c:1645  */
    { 
		INST *p2 = CDP((yyvsp[0].start)) ;

	        p2[-1].op = code_ptr - p2 + 1 ;
                BC_clear( code_ptr+2 , code_ptr) ;
		code_jmp(ALOOP, p2) ;
		code1(POP_AL) ;
              }
#line 2663 "y.tab.c" /* yacc.c:1645  */
    break;

  case 118:
#line 780 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ; code2(F_PUSHA, (yyvsp[0].cp)) ; }
#line 2669 "y.tab.c" /* yacc.c:1645  */
    break;

  case 119:
#line 782 "parse.y" /* yacc.c:1645  */
    { check_var((yyvsp[0].stp)) ;
             (yyval.start) = code_offset ;
             if ( is_local((yyvsp[0].stp)) )
             { code2op(L_PUSHI, (yyvsp[0].stp)->offset) ; }
             else code2(_PUSHI, (yyvsp[0].stp)->stval.cp) ;

	     CODE_FE_PUSHA() ;
           }
#line 2682 "y.tab.c" /* yacc.c:1645  */
    break;

  case 120:
#line 791 "parse.y" /* yacc.c:1645  */
    { 
             if ( (yyvsp[-1].ival) > 1 )
             { code2op(A_CAT, (yyvsp[-1].ival)) ; }

             check_array((yyvsp[-4].stp)) ;
             if( is_local((yyvsp[-4].stp)) )
             { code2op(LAE_PUSHI, (yyvsp[-4].stp)->offset) ; }
             else code2(AE_PUSHI, (yyvsp[-4].stp)->stval.array) ;

	     CODE_FE_PUSHA()  ;

             (yyval.start) = (yyvsp[-3].start) ;
           }
#line 2700 "y.tab.c" /* yacc.c:1645  */
    break;

  case 121:
#line 805 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[0].start) ;  CODE_FE_PUSHA() ; }
#line 2706 "y.tab.c" /* yacc.c:1645  */
    break;

  case 122:
#line 807 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; }
#line 2712 "y.tab.c" /* yacc.c:1645  */
    break;

  case 123:
#line 811 "parse.y" /* yacc.c:1645  */
    { field_A2I() ; }
#line 2718 "y.tab.c" /* yacc.c:1645  */
    break;

  case 124:
#line 814 "parse.y" /* yacc.c:1645  */
    { code1(F_ASSIGN) ; }
#line 2724 "y.tab.c" /* yacc.c:1645  */
    break;

  case 125:
#line 815 "parse.y" /* yacc.c:1645  */
    { code1(F_ADD_ASG) ; }
#line 2730 "y.tab.c" /* yacc.c:1645  */
    break;

  case 126:
#line 816 "parse.y" /* yacc.c:1645  */
    { code1(F_SUB_ASG) ; }
#line 2736 "y.tab.c" /* yacc.c:1645  */
    break;

  case 127:
#line 817 "parse.y" /* yacc.c:1645  */
    { code1(F_MUL_ASG) ; }
#line 2742 "y.tab.c" /* yacc.c:1645  */
    break;

  case 128:
#line 818 "parse.y" /* yacc.c:1645  */
    { code1(F_DIV_ASG) ; }
#line 2748 "y.tab.c" /* yacc.c:1645  */
    break;

  case 129:
#line 819 "parse.y" /* yacc.c:1645  */
    { code1(F_MOD_ASG) ; }
#line 2754 "y.tab.c" /* yacc.c:1645  */
    break;

  case 130:
#line 820 "parse.y" /* yacc.c:1645  */
    { code1(F_POW_ASG) ; }
#line 2760 "y.tab.c" /* yacc.c:1645  */
    break;

  case 131:
#line 827 "parse.y" /* yacc.c:1645  */
    { code2(_BUILTIN, bi_split) ; }
#line 2766 "y.tab.c" /* yacc.c:1645  */
    break;

  case 132:
#line 831 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-2].start) ;
              check_array((yyvsp[0].stp)) ;
              code_array((yyvsp[0].stp))  ;
            }
#line 2775 "y.tab.c" /* yacc.c:1645  */
    break;

  case 133:
#line 838 "parse.y" /* yacc.c:1645  */
    { code2(_PUSHI, &fs_shadow) ; }
#line 2781 "y.tab.c" /* yacc.c:1645  */
    break;

  case 134:
#line 840 "parse.y" /* yacc.c:1645  */
    { 
                  if ( CDP((yyvsp[-1].start)) == code_ptr - 2 )
                  {
                    if ( code_ptr[-2].op == _MATCH0 )
                        RE_as_arg() ;
                    else
                    if ( code_ptr[-2].op == _PUSHS )
                    { CELL *cp = ZMALLOC(CELL) ;

                      cp->type = C_STRING ;
                      cp->ptr = code_ptr[-1].ptr ;
                      cast_for_split(cp) ;
                      code_ptr[-2].op = _PUSHC ;
                      code_ptr[-1].ptr = (PTR) cp ;
                    }
                  }
                }
#line 2803 "y.tab.c" /* yacc.c:1645  */
    break;

  case 135:
#line 864 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-3].start) ; 
          code2(_BUILTIN, bi_match) ;
        }
#line 2811 "y.tab.c" /* yacc.c:1645  */
    break;

  case 136:
#line 871 "parse.y" /* yacc.c:1645  */
    {
	       INST *p1 = CDP((yyvsp[0].start)) ;

               if ( p1 == code_ptr - 2 ) 
               {
                 if ( p1->op == _MATCH0 ) RE_as_arg() ;
                 else
                 if ( p1->op == _PUSHS )
                 { CELL *cp = ZMALLOC(CELL) ;

                   cp->type = C_STRING ;
                   cp->ptr = p1[1].ptr ;
                   cast_to_RE(cp) ;
                   p1->op = _PUSHC ;
                   p1[1].ptr = (PTR) cp ;
                 } 
               }
             }
#line 2834 "y.tab.c" /* yacc.c:1645  */
    break;

  case 137:
#line 894 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ;
                      code1(_EXIT0) ; }
#line 2841 "y.tab.c" /* yacc.c:1645  */
    break;

  case 138:
#line 897 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; code1(_EXIT) ; }
#line 2847 "y.tab.c" /* yacc.c:1645  */
    break;

  case 139:
#line 901 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ;
                      code1(_RET0) ; }
#line 2854 "y.tab.c" /* yacc.c:1645  */
    break;

  case 140:
#line 904 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; code1(_RET) ; }
#line 2860 "y.tab.c" /* yacc.c:1645  */
    break;

  case 141:
#line 910 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ;
            code2(F_PUSHA, &field[0]) ;
            code1(_PUSHINT) ; code1(0) ; 
            code2(_BUILTIN, bi_getline) ;
            getline_flag = 0 ;
          }
#line 2871 "y.tab.c" /* yacc.c:1645  */
    break;

  case 142:
#line 917 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[0].start) ;
            code1(_PUSHINT) ; code1(0) ;
            code2(_BUILTIN, bi_getline) ;
            getline_flag = 0 ;
          }
#line 2881 "y.tab.c" /* yacc.c:1645  */
    break;

  case 143:
#line 923 "parse.y" /* yacc.c:1645  */
    { code1(_PUSHINT) ; code1(F_IN) ;
            code2(_BUILTIN, bi_getline) ;
            /* getline_flag already off in yylex() */
          }
#line 2890 "y.tab.c" /* yacc.c:1645  */
    break;

  case 144:
#line 928 "parse.y" /* yacc.c:1645  */
    { code2(F_PUSHA, &field[0]) ;
            code1(_PUSHINT) ; code1(PIPE_IN) ;
            code2(_BUILTIN, bi_getline) ;
          }
#line 2899 "y.tab.c" /* yacc.c:1645  */
    break;

  case 145:
#line 933 "parse.y" /* yacc.c:1645  */
    { 
            code1(_PUSHINT) ; code1(PIPE_IN) ;
            code2(_BUILTIN, bi_getline) ;
          }
#line 2908 "y.tab.c" /* yacc.c:1645  */
    break;

  case 146:
#line 939 "parse.y" /* yacc.c:1645  */
    { getline_flag = 1 ; }
#line 2914 "y.tab.c" /* yacc.c:1645  */
    break;

  case 149:
#line 944 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ;
                   code2(F_PUSHA, field+0) ;
                 }
#line 2922 "y.tab.c" /* yacc.c:1645  */
    break;

  case 150:
#line 948 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; }
#line 2928 "y.tab.c" /* yacc.c:1645  */
    break;

  case 151:
#line 956 "parse.y" /* yacc.c:1645  */
    {
	     INST *p5 = CDP((yyvsp[-1].start)) ;
	     INST *p6 = CDP((yyvsp[0].start)) ;

             if ( p6 - p5 == 2 && p5->op == _PUSHS  )
             { /* cast from STRING to REPL at compile time */
               CELL *cp = ZMALLOC(CELL) ;
               cp->type = C_STRING ;
               cp->ptr = p5[1].ptr ;
               cast_to_REPL(cp) ;
               p5->op = _PUSHC ;
               p5[1].ptr = (PTR) cp ;
             }
             code2(_BUILTIN, (yyvsp[-5].fp)) ;
             (yyval.start) = (yyvsp[-3].start) ;
           }
#line 2949 "y.tab.c" /* yacc.c:1645  */
    break;

  case 152:
#line 974 "parse.y" /* yacc.c:1645  */
    { (yyval.fp) = bi_sub ; }
#line 2955 "y.tab.c" /* yacc.c:1645  */
    break;

  case 153:
#line 975 "parse.y" /* yacc.c:1645  */
    { (yyval.fp) = bi_gsub ; }
#line 2961 "y.tab.c" /* yacc.c:1645  */
    break;

  case 154:
#line 980 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = code_offset ;
                  code2(F_PUSHA, &field[0]) ; 
                }
#line 2969 "y.tab.c" /* yacc.c:1645  */
    break;

  case 155:
#line 985 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ; }
#line 2975 "y.tab.c" /* yacc.c:1645  */
    break;

  case 156:
#line 993 "parse.y" /* yacc.c:1645  */
    { 
		   resize_fblock((yyvsp[-1].fbp)) ;
                   restore_ids() ;
		   switch_code_to_main() ;
                 }
#line 2985 "y.tab.c" /* yacc.c:1645  */
    break;

  case 157:
#line 1002 "parse.y" /* yacc.c:1645  */
    { eat_nl() ;
                   scope = SCOPE_FUNCT ;
                   active_funct = (yyvsp[-3].fbp) ;
                   *main_code_p = active_code ;

		   (yyvsp[-3].fbp)->nargs = (yyvsp[-1].ival) ;
                   if ( (yyvsp[-1].ival) )
                        (yyvsp[-3].fbp)->typev = (char *)
			memset( zmalloc((yyvsp[-1].ival)), ST_LOCAL_NONE, (yyvsp[-1].ival)) ;
                   else (yyvsp[-3].fbp)->typev = (char *) 0 ;

		   code_ptr = code_base =
                       (INST *) zmalloc(INST_BYTES(PAGESZ));
		   code_limit = code_base + PAGESZ ;
		   code_warn = code_limit - CODEWARN ;
                 }
#line 3006 "y.tab.c" /* yacc.c:1645  */
    break;

  case 158:
#line 1021 "parse.y" /* yacc.c:1645  */
    { FBLOCK  *fbp ;

                   if ( (yyvsp[0].stp)->type == ST_NONE )
                   {
                         (yyvsp[0].stp)->type = ST_FUNCT ;
                         fbp = (yyvsp[0].stp)->stval.fbp = 
                             (FBLOCK *) zmalloc(sizeof(FBLOCK)) ;
                         fbp->name = (yyvsp[0].stp)->name ;
			 fbp->code = (INST*) 0 ;
                   }
                   else
                   {
                         type_error( (yyvsp[0].stp) ) ;

                         /* this FBLOCK will not be put in
                            the symbol table */
                         fbp = (FBLOCK*) zmalloc(sizeof(FBLOCK)) ;
                         fbp->name = "" ;
                   }
                   (yyval.fbp) = fbp ;
                 }
#line 3032 "y.tab.c" /* yacc.c:1645  */
    break;

  case 159:
#line 1044 "parse.y" /* yacc.c:1645  */
    { (yyval.fbp) = (yyvsp[0].fbp) ; 
                   if ( (yyvsp[0].fbp)->code ) 
                       compile_error("redefinition of %s" , (yyvsp[0].fbp)->name) ;
                 }
#line 3041 "y.tab.c" /* yacc.c:1645  */
    break;

  case 160:
#line 1050 "parse.y" /* yacc.c:1645  */
    { (yyval.ival) = 0 ; }
#line 3047 "y.tab.c" /* yacc.c:1645  */
    break;

  case 162:
#line 1055 "parse.y" /* yacc.c:1645  */
    { (yyvsp[0].stp) = save_id((yyvsp[0].stp)->name) ;
                (yyvsp[0].stp)->type = ST_LOCAL_NONE ;
                (yyvsp[0].stp)->offset = 0 ;
                (yyval.ival) = 1 ;
              }
#line 3057 "y.tab.c" /* yacc.c:1645  */
    break;

  case 163:
#line 1061 "parse.y" /* yacc.c:1645  */
    { if ( is_local((yyvsp[0].stp)) ) 
                  compile_error("%s is duplicated in argument list",
                    (yyvsp[0].stp)->name) ;
                else
                { (yyvsp[0].stp) = save_id((yyvsp[0].stp)->name) ;
                  (yyvsp[0].stp)->type = ST_LOCAL_NONE ;
                  (yyvsp[0].stp)->offset = (yyvsp[-2].ival) ;
                  (yyval.ival) = (yyvsp[-2].ival) + 1 ;
                }
              }
#line 3072 "y.tab.c" /* yacc.c:1645  */
    break;

  case 164:
#line 1074 "parse.y" /* yacc.c:1645  */
    {  /* we may have to recover from a bungled function
		       definition */
		   /* can have local ids, before code scope
		      changes  */
		    restore_ids() ;

		    switch_code_to_main() ;
		 }
#line 3085 "y.tab.c" /* yacc.c:1645  */
    break;

  case 165:
#line 1087 "parse.y" /* yacc.c:1645  */
    { (yyval.start) = (yyvsp[-1].start) ;
             code2(_CALL, (yyvsp[-2].fbp)) ;

             if ( (yyvsp[0].ca_p) )  code1((yyvsp[0].ca_p)->arg_num+1) ;
             else  code1(0) ;
               
	     check_fcall((yyvsp[-2].fbp), scope, code_move_level, active_funct, 
			 (yyvsp[0].ca_p), token_lineno) ;
           }
#line 3099 "y.tab.c" /* yacc.c:1645  */
    break;

  case 166:
#line 1099 "parse.y" /* yacc.c:1645  */
    { (yyval.ca_p) = (CA_REC *) 0 ; }
#line 3105 "y.tab.c" /* yacc.c:1645  */
    break;

  case 167:
#line 1101 "parse.y" /* yacc.c:1645  */
    { (yyval.ca_p) = (yyvsp[0].ca_p) ;
                 (yyval.ca_p)->link = (yyvsp[-1].ca_p) ;
                 (yyval.ca_p)->arg_num = (yyvsp[-1].ca_p) ? (yyvsp[-1].ca_p)->arg_num+1 : 0 ;
               }
#line 3114 "y.tab.c" /* yacc.c:1645  */
    break;

  case 168:
#line 1116 "parse.y" /* yacc.c:1645  */
    { (yyval.ca_p) = (CA_REC *) 0 ; }
#line 3120 "y.tab.c" /* yacc.c:1645  */
    break;

  case 169:
#line 1118 "parse.y" /* yacc.c:1645  */
    { (yyval.ca_p) = ZMALLOC(CA_REC) ;
                (yyval.ca_p)->link = (yyvsp[-2].ca_p) ;
                (yyval.ca_p)->type = CA_EXPR  ;
                (yyval.ca_p)->arg_num = (yyvsp[-2].ca_p) ? (yyvsp[-2].ca_p)->arg_num+1 : 0 ;
		(yyval.ca_p)->call_offset = code_offset ;
              }
#line 3131 "y.tab.c" /* yacc.c:1645  */
    break;

  case 170:
#line 1125 "parse.y" /* yacc.c:1645  */
    { (yyval.ca_p) = ZMALLOC(CA_REC) ;
                (yyval.ca_p)->link = (yyvsp[-2].ca_p) ;
                (yyval.ca_p)->arg_num = (yyvsp[-2].ca_p) ? (yyvsp[-2].ca_p)->arg_num+1 : 0 ;

                code_call_id((yyval.ca_p), (yyvsp[-1].stp)) ;
              }
#line 3142 "y.tab.c" /* yacc.c:1645  */
    break;

  case 171:
#line 1134 "parse.y" /* yacc.c:1645  */
    { (yyval.ca_p) = ZMALLOC(CA_REC) ;
                (yyval.ca_p)->type = CA_EXPR ;
		(yyval.ca_p)->call_offset = code_offset ;
              }
#line 3151 "y.tab.c" /* yacc.c:1645  */
    break;

  case 172:
#line 1140 "parse.y" /* yacc.c:1645  */
    { (yyval.ca_p) = ZMALLOC(CA_REC) ;
                code_call_id((yyval.ca_p), (yyvsp[-1].stp)) ;
              }
#line 3159 "y.tab.c" /* yacc.c:1645  */
    break;


#line 3163 "y.tab.c" /* yacc.c:1645  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
#line 1148 "parse.y" /* yacc.c:1903  */


/* resize the code for a user function */

static void  resize_fblock( fbp )
  FBLOCK *fbp ;
{ 
  CODEBLOCK *p = ZMALLOC(CODEBLOCK) ;
  unsigned dummy ;

  code2op(_RET0, _HALT) ;
	/* make sure there is always a return */

  *p = active_code ;
  fbp->code = code_shrink(p, &dummy) ;
      /* code_shrink() zfrees p */

  if ( dump_code_flag ) add_to_fdump_list(fbp) ;
}


/* convert FE_PUSHA  to  FE_PUSHI
   or F_PUSH to F_PUSHI
*/

static void  field_A2I()
{ CELL *cp ;

  if ( code_ptr[-1].op == FE_PUSHA &&
       code_ptr[-1].ptr == (PTR) 0)
  /* On most architectures, the two tests are the same; a good
     compiler might eliminate one.  On LM_DOS, and possibly other
     segmented architectures, they are not */
  { code_ptr[-1].op = FE_PUSHI ; }
  else
  {
    cp = (CELL *) code_ptr[-1].ptr ;

    if ( cp == field  ||

#ifdef  MSDOS
	 SAMESEG(cp,field) &&
#endif
         cp > NF && cp <= LAST_PFIELD )
    {
         code_ptr[-2].op = _PUSHI  ;
    }
    else if ( cp == NF )
    { code_ptr[-2].op = NF_PUSHI ; code_ptr-- ; }

    else
    { 
      code_ptr[-2].op = F_PUSHI ;
      code_ptr -> op = field_addr_to_index( code_ptr[-1].ptr ) ;
      code_ptr++ ;
    }
  }
}

/* we've seen an ID in a context where it should be a VAR,
   check that's consistent with previous usage */

static void check_var( p )
  register SYMTAB *p ;
{
      switch(p->type)
      {
        case ST_NONE : /* new id */
            p->type = ST_VAR ;
            p->stval.cp = ZMALLOC(CELL) ;
            p->stval.cp->type = C_NOINIT ;
            break ;

        case ST_LOCAL_NONE :
            p->type = ST_LOCAL_VAR ;
            active_funct->typev[p->offset] = ST_LOCAL_VAR ;
            break ;

        case ST_VAR :
        case ST_LOCAL_VAR :  break ;

        default :
            type_error(p) ;
            break ;
      }
}

/* we've seen an ID in a context where it should be an ARRAY,
   check that's consistent with previous usage */
static  void  check_array(p)
  register SYMTAB *p ;
{
      switch(p->type)
      {
        case ST_NONE :  /* a new array */
            p->type = ST_ARRAY ;
            p->stval.array = new_ARRAY() ;
            break ;

        case  ST_ARRAY :
        case  ST_LOCAL_ARRAY :
            break ;

        case  ST_LOCAL_NONE  :
            p->type = ST_LOCAL_ARRAY ;
            active_funct->typev[p->offset] = ST_LOCAL_ARRAY ;
            break ;

        default : type_error(p) ; break ;
      }
}

static void code_array(p)
  register SYMTAB *p ;
{ 
  if ( is_local(p) ) code2op(LA_PUSHA, p->offset) ; 
  else  code2(A_PUSHA, p->stval.array) ;
}


/* we've seen an ID as an argument to a user defined function */

static void  code_call_id( p, ip )
  register CA_REC *p ;
  register SYMTAB *ip ;
{ static CELL dummy ;

  p->call_offset = code_offset ;
     /* This always get set now.  So that fcall:relocate_arglist
	works. */

  switch( ip->type )
  {
    case  ST_VAR  :
            p->type = CA_EXPR ;
            code2(_PUSHI, ip->stval.cp) ;
            break ;

    case  ST_LOCAL_VAR  :
            p->type = CA_EXPR ;
            code2op(L_PUSHI, ip->offset) ;
            break ;

    case  ST_ARRAY  :
            p->type = CA_ARRAY ;
            code2(A_PUSHA, ip->stval.array) ;
            break ;

    case  ST_LOCAL_ARRAY :
            p->type = CA_ARRAY ;
            code2op(LA_PUSHA, ip->offset) ;
            break ;

    /* not enough info to code it now; it will have to
       be patched later */

    case  ST_NONE :
            p->type = ST_NONE ;
            p->sym_p = ip ;
            code2(_PUSHI, &dummy) ;
            break ;

    case  ST_LOCAL_NONE :
            p->type = ST_LOCAL_NONE ;
            p->type_p = & active_funct->typev[ip->offset] ;
            code2op(L_PUSHI, ip->offset) ;
            break ;

  
#ifdef   DEBUG
    default :
            bozo("code_call_id") ;
#endif

  }
}

/* an RE by itself was coded as _MATCH0 , change to
   push as an expression */

static void RE_as_arg()
{ CELL *cp = ZMALLOC(CELL) ;

  code_ptr -= 2 ;
  cp->type = C_RE ;
  cp->ptr = code_ptr[1].ptr ;
  code2(_PUSHC, cp) ;
}

/* reset the active_code back to the MAIN block */
static void
switch_code_to_main()
{
   switch(scope)
   {
     case SCOPE_BEGIN :
	*begin_code_p = active_code ;
	active_code = *main_code_p ;
	break ;

     case SCOPE_END :
	*end_code_p = active_code ;
	active_code = *main_code_p ;
	break ;

     case SCOPE_FUNCT :
	active_code = *main_code_p ;
	break ;

     case SCOPE_MAIN :
	break ;
   }
   active_funct = (FBLOCK*) 0 ;
   scope = SCOPE_MAIN ;
}


void
parse()
{ 
   if ( yyparse() || compile_error_count != 0 ) mawk_exit(2) ;

   scan_cleanup() ;
   set_code() ; 
   /* code must be set before call to resolve_fcalls() */
   if ( resolve_list )  resolve_fcalls() ;

   if ( compile_error_count != 0 ) mawk_exit(2) ;
   if ( dump_code_flag ) { dump_code() ; mawk_exit(0) ; }
}

