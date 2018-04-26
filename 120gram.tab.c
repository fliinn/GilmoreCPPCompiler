/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 44 "120gram.y" /* yacc.c:339  */

#ifdef TOKEN_H_
#define TOKEN_H_
#endif

#define N(var) #var //Macro used to turn int codes into human readable var names
                    //Copy saved without N macro on alctrees element 1

#include <stdio.h>
#include <string.h>
#include "token.h"
#include "tree.h"
#include "treeFuncs.h"
#include "type.h"

extern int lineno;
extern char *yytext;
extern int yylex();
extern struct tree *globalTree;

int unsupported_error=0;   //global error flag for unsupported syntax, no errors if 0

static void yyerror(char *s);


#line 92 "120gram.tab.c" /* yacc.c:339  */

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
   by #include "120gram.tab.h".  */
#ifndef YY_YY_120GRAM_TAB_H_INCLUDED
# define YY_YY_120GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    FLOATING = 260,
    CHARACTER = 261,
    STRING = 262,
    TYPEDEF_NAME = 263,
    NAMESPACE_NAME = 264,
    CLASS_NAME = 265,
    ENUM_NAME = 266,
    TEMPLATE_NAME = 267,
    ELLIPSIS = 268,
    COLONCOLON = 269,
    DOTSTAR = 270,
    ADDEQ = 271,
    SUBEQ = 272,
    MULEQ = 273,
    DIVEQ = 274,
    MODEQ = 275,
    XOREQ = 276,
    ANDEQ = 277,
    OREQ = 278,
    SL = 279,
    SR = 280,
    SREQ = 281,
    SLEQ = 282,
    EQ = 283,
    NOTEQ = 284,
    LTEQ = 285,
    GTEQ = 286,
    ANDAND = 287,
    OROR = 288,
    PLUSPLUS = 289,
    MINUSMINUS = 290,
    ARROWSTAR = 291,
    ARROW = 292,
    ASM = 293,
    AUTO = 294,
    BOOL = 295,
    BREAK = 296,
    CASE = 297,
    CATCH = 298,
    CHAR = 299,
    CLASS = 300,
    CONST = 301,
    CONST_CAST = 302,
    CONTINUE = 303,
    DEFAULT = 304,
    DELETE = 305,
    DO = 306,
    DOUBLE = 307,
    DYNAMIC_CAST = 308,
    ELSE = 309,
    ENUM = 310,
    EXPLICIT = 311,
    EXPORT = 312,
    EXTERN = 313,
    FALSE = 314,
    FLOAT = 315,
    FOR = 316,
    FRIEND = 317,
    GOTO = 318,
    IF = 319,
    INLINE = 320,
    INT = 321,
    LONG = 322,
    MUTABLE = 323,
    NAMESPACE = 324,
    NEW = 325,
    OPERATOR = 326,
    PRIVATE = 327,
    PROTECTED = 328,
    PUBLIC = 329,
    REGISTER = 330,
    REINTERPRET_CAST = 331,
    RETURN = 332,
    SHORT = 333,
    SIGNED = 334,
    SIZEOF = 335,
    STATIC = 336,
    STATIC_CAST = 337,
    STRUCT = 338,
    SWITCH = 339,
    TEMPLATE = 340,
    THIS = 341,
    THROW = 342,
    TRUE = 343,
    TRY = 344,
    TYPEDEF = 345,
    TYPEID = 346,
    TYPENAME = 347,
    UNION = 348,
    UNSIGNED = 349,
    USING = 350,
    VIRTUAL = 351,
    VOID = 352,
    VOLATILE = 353,
    WCHAR_T = 354,
    WHILE = 355
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef  struct tree*  YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_120GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 244 "120gram.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
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

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  178
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4768

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  506
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  875

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,     2,     2,     2,   116,   111,     2,
     101,   102,   110,   112,   109,   113,   106,   115,   125,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   122,
     107,   121,   108,   119,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   104,     2,   105,   117,   126,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   123,   118,   124,   103,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,   100,   105,   110,   111,   116,   121,   129,
     133,   134,   135,   136,   137,   141,   145,   149,   153,   157,
     158,   166,   174,   175,   176,   177,   181,   182,   186,   187,
     188,   189,   193,   194,   198,   199,   200,   201,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   231,   232,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   249,   250,   251,   252,   256,   257,   258,
     259,   263,   267,   271,   272,   276,   277,   281,   285,   286,
     287,   288,   292,   293,   297,   298,   299,   303,   304,   305,
     306,   310,   311,   312,   316,   317,   318,   322,   323,   324,
     325,   326,   330,   331,   332,   336,   337,   341,   342,   346,
     347,   351,   352,   356,   357,   361,   362,   366,   367,   368,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   386,   387,   391,   399,   400,   401,   402,   403,   404,
     405,   406,   410,   411,   412,   416,   420,   424,   425,   429,
     430,   431,   435,   436,   440,   441,   442,   446,   447,   451,
     452,   453,   454,   458,   466,   467,   471,   472,   473,   474,
     475,   476,   477,   481,   482,   483,   484,   485,   489,   490,
     494,   495,   496,   497,   498,   502,   503,   507,   508,   509,
     510,   511,   515,   516,   517,   521,   522,   523,   524,   525,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   546,   547,   548,   552,   553,   554,
     555,   556,   557,   558,   568,   572,   573,   577,   578,   582,
     597,   598,   602,   603,   607,   611,   615,   619,   629,   633,
     634,   635,   636,   640,   641,   642,   643,   644,   648,   649,
     650,   651,   655,   659,   660,   668,   669,   673,   677,   678,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     695,   696,   697,   698,   699,   700,   704,   705,   709,   710,
     714,   715,   716,   717,   721,   725,   729,   730,   734,   735,
     736,   737,   738,   739,   743,   744,   745,   746,   747,   751,
     752,   756,   757,   758,   759,   763,   764,   765,   766,   770,
     774,   775,   779,   780,   781,   785,   786,   794,   797,   798,
     799,   800,   804,   805,   806,   810,   811,   815,   816,   817,
     818,   819,   820,   821,   822,   826,   827,   831,   832,   833,
     834,   843,   847,   855,   859,   860,   864,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   879,   880,
     881,   889,   893,   897,   901,   905,   906,   910,   914,   915,
     916,   917,   918,   926,   930,   931,   932,   933,   934,   935,
     936,   937,   938,   939,   940,   941,   942,   943,   944,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   979,   983,   984,   988,
     989,   993,   994,   995,   996,   997,   998,  1002,  1006,  1007,
    1011,  1012,  1013,  1017,  1021,  1029,  1033,  1037,  1041,  1045,
    1046,  1047,  1048,  1052,  1056,  1060,  1061,  1068,  1070,  1073,
    1075,  1078,  1080,  1083,  1085,  1088,  1090,  1093,  1095,  1098,
    1100,  1103,  1105,  1108,  1110,  1113,  1115,  1118,  1120,  1123,
    1125,  1128,  1130,  1133,  1135,  1138,  1140,  1143,  1145,  1148,
    1150,  1153,  1155,  1158,  1160,  1163,  1165,  1168,  1170,  1173,
    1175,  1178,  1180,  1183,  1185,  1188,  1190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "FLOATING",
  "CHARACTER", "STRING", "TYPEDEF_NAME", "NAMESPACE_NAME", "CLASS_NAME",
  "ENUM_NAME", "TEMPLATE_NAME", "ELLIPSIS", "COLONCOLON", "DOTSTAR",
  "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ", "MODEQ", "XOREQ", "ANDEQ", "OREQ",
  "SL", "SR", "SREQ", "SLEQ", "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND",
  "OROR", "PLUSPLUS", "MINUSMINUS", "ARROWSTAR", "ARROW", "ASM", "AUTO",
  "BOOL", "BREAK", "CASE", "CATCH", "CHAR", "CLASS", "CONST", "CONST_CAST",
  "CONTINUE", "DEFAULT", "DELETE", "DO", "DOUBLE", "DYNAMIC_CAST", "ELSE",
  "ENUM", "EXPLICIT", "EXPORT", "EXTERN", "FALSE", "FLOAT", "FOR",
  "FRIEND", "GOTO", "IF", "INLINE", "INT", "LONG", "MUTABLE", "NAMESPACE",
  "NEW", "OPERATOR", "PRIVATE", "PROTECTED", "PUBLIC", "REGISTER",
  "REINTERPRET_CAST", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STATIC_CAST", "STRUCT", "SWITCH", "TEMPLATE", "THIS", "THROW", "TRUE",
  "TRY", "TYPEDEF", "TYPEID", "TYPENAME", "UNION", "UNSIGNED", "USING",
  "VIRTUAL", "VOID", "VOLATILE", "WCHAR_T", "WHILE", "'('", "')'", "'~'",
  "'['", "']'", "'.'", "'<'", "'>'", "','", "'*'", "'&'", "'+'", "'-'",
  "'!'", "'/'", "'%'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "'0'", "'_'", "$accept", "typedef_name", "namespace_name",
  "original_namespace_name", "class_name", "enum_name", "template_name",
  "identifier", "literal", "integer_literal", "character_literal",
  "floating_literal", "string_literal", "boolean_literal",
  "translation_unit", "primary_expression", "id_expression",
  "unqualified_id", "qualified_id", "nested_name_specifier",
  "postfix_expression", "expression_list", "unary_expression",
  "unary_operator", "new_expression", "new_placement", "new_type_id",
  "new_declarator", "direct_new_declarator", "new_initializer",
  "delete_expression", "cast_expression", "pm_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_seq",
  "selection_statement", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "declaration_seq", "declaration", "block_declaration",
  "simple_declaration", "decl_specifier", "decl_specifier_seq",
  "storage_class_specifier", "function_specifier", "type_specifier",
  "simple_type_specifier", "type_name", "elaborated_type_specifier",
  "enum_specifier", "enumerator_list", "enumerator_definition",
  "enumerator", "namespace_definition", "named_namespace_definition",
  "original_namespace_definition", "extension_namespace_definition",
  "unnamed_namespace_definition", "namespace_body",
  "namespace_alias_definition", "qualified_namespace_specifier",
  "using_declaration", "using_directive", "asm_definition",
  "linkage_specification", "init_declarator_list", "init_declarator",
  "declarator", "direct_declarator", "ptr_operator", "cv_qualifier_seq",
  "cv_qualifier", "declarator_id", "type_id", "type_specifier_seq",
  "abstract_declarator", "direct_abstract_declarator",
  "parameter_declaration_clause", "parameter_declaration_list",
  "parameter_declaration", "function_definition", "function_body",
  "initializer", "initializer_clause", "initializer_list",
  "class_specifier", "class_head", "class_key", "member_specification",
  "member_declaration", "member_declarator_list", "member_declarator",
  "pure_specifier", "constant_initializer", "base_clause",
  "base_specifier_list", "base_specifier", "access_specifier",
  "conversion_function_id", "conversion_type_id", "conversion_declarator",
  "ctor_initializer", "mem_initializer_list", "mem_initializer",
  "mem_initializer_id", "operator_function_id", "operator",
  "template_declaration", "template_parameter_list", "template_parameter",
  "type_parameter", "template_id", "template_argument_list",
  "template_argument", "explicit_instantiation", "explicit_specialization",
  "try_block", "function_try_block", "handler_seq", "handler",
  "exception_declaration", "throw_expression", "exception_specification",
  "type_id_list", "declaration_seq_opt", "nested_name_specifier_opt",
  "expression_list_opt", "COLONCOLON_opt", "new_placement_opt",
  "new_initializer_opt", "new_declarator_opt", "expression_opt",
  "statement_seq_opt", "condition_opt", "enumerator_list_opt",
  "initializer_opt", "constant_expression_opt", "abstract_declarator_opt",
  "type_specifier_seq_opt", "direct_abstract_declarator_opt",
  "ctor_initializer_opt", "COMMA_opt", "member_specification_opt",
  "SEMICOLON_opt", "conversion_declarator_opt", "EXPORT_opt",
  "handler_seq_opt", "assignment_expression_opt", "type_id_list_opt", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    40,    41,   126,    91,    93,    46,    60,    62,    44,
      42,    38,    43,    45,    33,    47,    37,    94,   124,    63,
      58,    61,    59,   123,   125,    48,    95
};
# endif

#define YYPACT_NINF -670

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-670)))

#define YYTABLE_NINF -506

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    3436,  -670,  -670,  -670,    54,  -670,  -670,   436,   -41,  -670,
    -670,  -670,  -670,  -670,  -670,   258,  -670,  -670,    85,  -670,
    -670,  -670,  -670,  -670,  -670,    27,  3043,  -670,  -670,  -670,
    -670,  -670,  4033,  -670,    63,  -670,  -670,   450,  -670,  -670,
    -670,  -670,   941,   325,    29,  -670,  -670,    96,  -670,   105,
    -670,    21,  -670,   140,  -670,  -670,  -670,    68,  2158,  -670,
    -670,  -670,  -670,  2832,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,   -34,    45,   941,  -670,  -670,  -670,  -670,    31,   633,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,    77,    81,  3162,
    -670,  -670,   793,  -670,   514,    85,   272,   105,    47,   194,
    -670,  2262,  1811,    88,   300,   279,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,   128,   150,
     121,  -670,   155,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,   514,  3224,   205,  -670,
    -670,   163,  -670,  -670,   279,   590,   705,   751,   119,   436,
     153,   174,  -670,  -670,    29,   279,   279,  3321,  -670,   119,
      29,  -670,  -670,  -670,  -670,  -670,  -670,  -670,   -21,  -670,
     335,   160,   698,  -670,  -670,   178,  3162,  3859,  -670,  1707,
     272,   197,   194,   224,   242,   436,   315,   252,  -670,  2366,
     255,    33,  -670,  -670,  -670,  -670,   268,  -670,   194,   194,
    -670,  1811,  -670,   253,  -670,  1811,   779,  1811,  -670,   277,
     294,  -670,  -670,  -670,  -670,   279,   296,   205,  -670,  -670,
    4138,   194,   292,   119,   279,     8,   411,   279,   119,   307,
     793,  -670,  -670,  -670,  -670,  -670,  -670,  -670,   604,  3859,
    3859,   337,   340,   346,  3545,   356,   358,  -670,   362,   367,
     378,  3949,   381,  -670,  3657,  -670,   373,  3321,   325,  3859,
    3859,  -670,  -670,  -670,    21,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,   846,   937,  -670,  3859,  -670,  -670,  -670,
      58,   366,    76,   218,    94,   298,   379,   387,   377,   478,
    1070,  -670,  -670,  -670,   788,   257,  -670,  -670,  -670,  -670,
     941,  -670,  3657,  2476,  -670,  -670,  -670,   178,   178,   279,
     105,  -670,   325,  -670,   406,   427,  1468,  -670,  -670,   429,
      46,   337,   340,   356,   362,    14,  -670,  -670,   435,  -670,
    -670,  -670,   401,  -670,   423,   445,  2936,  -670,   440,   447,
    -670,  1707,    -9,  -670,   425,  -670,   433,  -670,   194,   463,
    -670,   197,  4425,  3162,   846,  3162,   954,   441,   906,  -670,
     196,   460,   280,  -670,  -670,  4517,   449,  -670,  -670,   466,
    -670,   462,   464,   467,  -670,   472,   279,    96,   411,   465,
     474,  -670,  -670,   491,  -670,  -670,   496,  -670,   486,    25,
     411,  -670,   487,   119,   490,  -670,  3747,   367,  -670,  -670,
    3657,  3657,  4669,   512,  -670,  3657,  4669,  3657,  3657,  -670,
    4302,  4669,  3321,  -670,  4669,  -670,  -670,  3321,  -670,    70,
     516,  -670,  -670,  -670,  -670,   668,  3657,  3657,  1117,  -670,
    3859,  3859,  3859,  3859,  3859,  3859,  3859,  3859,  3859,  3859,
    3859,  3859,  3859,  3859,  3859,  3859,  3859,  3859,  3859,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  3859,
    3657,  -670,  3657,   828,   788,  -670,  -670,  3321,  -670,    17,
     104,  -670,  1920,  -670,  -670,  -670,   579,   105,   325,  -670,
     698,  3657,   502,  3859,   503,   510,  2042,   533,   194,   536,
     194,  3657,   540,   178,   547,   529,   542,  -670,  -670,  -670,
    -670,  1590,  -670,  -670,  -670,  -670,  -670,  2832,  -670,   534,
     541,    10,  -670,  3859,  -670,  -670,   440,    22,  1342,  -670,
    -670,  -670,  -670,  -670,   941,  -670,  1707,  -670,  -670,   279,
     834,   105,   325,   548,  -670,   393,  -670,   194,   559,   184,
    -670,   370,  -670,  -670,   570,   574,   581,  3657,  -670,  3657,
    3162,  3859,  -670,  -670,  -670,   194,  3859,  -670,  -670,  -670,
      96,   411,  -670,  -670,  -670,  3321,  -670,  -670,   563,  -670,
     566,  -670,   594,  -670,  4362,   591,   601,   614,   612,  3859,
     621,   632,   627,   139,  4669,   640,   198,   634,   641,   644,
     201,   647,  -670,  3657,  3859,   590,   284,  -670,   652,   124,
     590,  1145,  -670,  -670,  -670,    58,    58,    58,   366,   366,
      76,    76,   218,   218,   218,   218,    94,    94,   298,   379,
     387,   377,   478,   111,  -670,  -670,  -670,  3657,  -670,  -670,
     648,   657,  -670,   579,  -670,  -670,   664,  -670,   649,  -670,
    2042,   673,  2597,   646,  3321,   655,   656,  3321,   579,  3321,
    2042,  -670,  -670,  -670,   679,   694,  -670,  -670,  -670,  -670,
    -670,   666,  -670,  -670,   105,   325,   279,   863,   325,  -670,
     463,   279,   913,   325,   671,  4425,   678,  4138,  4425,  -670,
    -670,  -670,  -670,  -670,   683,   702,  -670,  -670,  -670,   390,
    -670,  -670,  3859,  4669,   640,  -670,  -670,   711,  -670,  -670,
     712,  -670,  -670,   716,  3657,  -670,  -670,  3657,  -670,   717,
     198,  -670,   719,  -670,   729,  -670,  -670,  -670,  -670,  -670,
     590,  -670,  -670,  -670,  -670,   590,  -670,  3657,  -670,  2476,
     708,  4609,  -670,  -670,  -670,  2042,  -670,   733,  -670,  2717,
    -670,  -670,   542,   734,   941,  -670,   739,  -670,   743,  -670,
    4242,  -670,  -670,   325,   279,   325,  -670,  -670,   325,   279,
     325,  -670,  4669,   400,  4669,  -670,  -670,    10,  -670,  -670,
    -670,   750,  -670,  3657,  3657,   640,   759,   157,  3859,  -670,
    3657,  3657,  -670,  -670,  -670,  -670,  -670,  -670,   906,   761,
    -670,  3657,  -670,   746,  2042,   748,  2042,  2042,  -670,   765,
     781,  -670,   325,  -670,  -670,   325,  -670,  -670,   836,  -670,
     694,  -670,   640,   203,   219,  -670,  -670,  -670,   785,   223,
     237,  -670,  -670,   178,   239,  3657,   841,  3657,  -670,  -670,
    4669,  -670,  -670,  -670,   194,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,   778,   803,  2042,  -670,  -670,   789,  -670,
    2042,  -670,   901,  -670,  -670
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     328,     9,     2,     4,     5,     7,     8,     0,     0,   197,
     215,   213,   332,   288,   222,     0,   204,   500,   200,   221,
     193,   202,   217,   218,   201,     0,   328,   198,   216,   219,
     199,   333,   328,   194,   463,   334,   220,     0,   203,   223,
     289,   214,     0,     0,   280,   282,   226,     0,     3,   224,
     225,     0,    28,     0,   290,    26,    27,     0,   458,   174,
     176,   183,   195,   328,   190,   192,   191,   205,   210,   208,
     207,   182,   240,   242,   243,   241,   185,   186,   187,   184,
     181,   489,   268,     0,   209,   270,   177,   206,     0,     0,
      30,    29,   178,     6,   179,   180,    21,     0,     0,   307,
       5,   291,     0,   293,     0,     0,     0,     0,     0,     0,
      18,     0,   328,     0,     0,   459,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   422,   423,   385,   384,
       0,   396,     0,   399,   400,   421,   390,   394,   388,   397,
     391,   392,   393,   395,   398,   389,     0,   485,   497,   371,
     383,     0,   443,   464,     0,     0,     0,     0,     0,     0,
       0,     0,    31,   281,   286,    37,    36,   328,     1,     0,
     283,   224,    32,   211,   175,   200,   189,   196,     0,   265,
     479,   489,     0,   490,   317,     0,   307,   481,   269,   328,
       0,     0,     0,     0,     5,     0,     0,     0,   306,   483,
       0,   305,   309,   285,   292,   212,     0,   230,     0,   477,
     231,   328,   264,     0,   247,   328,     0,   328,   460,     0,
       0,   424,   425,   486,   295,     0,     0,   497,   498,   372,
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,   287,    35,    34,    15,    17,    16,   459,     0,
       0,   215,   213,     0,     0,   222,     0,    20,   217,   465,
       0,     0,     0,    23,   503,    19,     0,   328,    76,     0,
       0,    73,    74,    75,   442,    22,    10,    11,    12,    13,
      14,    38,    25,     0,    63,    92,     0,    71,    72,    94,
      97,   101,   104,   107,   112,   115,   117,   119,   121,   123,
     125,   127,   440,   441,   483,     0,   438,   129,    33,   284,
       0,   188,     0,     0,   480,   318,   267,     0,     0,     0,
     381,   382,     0,   374,   375,     0,   471,   319,   315,     0,
       0,     0,     0,     0,     0,   125,   143,   482,     0,   368,
     369,   370,     0,   340,    28,    27,   328,   343,   347,   495,
     494,   328,     0,   345,     0,   344,     0,   228,     0,     0,
     329,   330,   328,   307,     0,   307,   487,   311,   483,   484,
     297,   313,     0,   275,   304,   328,     0,   229,   239,   478,
     235,   237,     0,     0,   246,     0,     0,   252,     0,     0,
       0,   387,   386,     0,   373,   444,   232,   257,     0,     0,
       0,   261,     0,     0,     0,   256,     0,   465,    64,    65,
     461,   461,   328,     0,    88,   461,   328,   461,     0,   466,
     328,   328,   328,    69,   328,   504,   453,   328,   141,     0,
       0,    66,    67,    53,    54,     0,   461,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
     135,   131,   132,   133,   139,   138,   140,   136,   137,     0,
       0,   130,     0,   487,   483,   294,   437,   328,   266,   479,
       0,    61,     0,   322,   320,   316,     0,   379,     0,   380,
       0,   461,     0,     0,     0,     0,   471,     0,     0,     0,
       0,   471,     0,     0,     0,    28,   472,   157,   144,   145,
     146,   471,   147,   148,   149,   150,   173,   328,   151,     0,
       0,   274,   278,     0,   342,   338,   347,     0,     0,   348,
     349,   496,   341,   335,     0,   339,   328,   327,   227,     0,
       0,   359,     0,   353,   354,     0,   331,   332,     0,   463,
     430,     0,   427,   429,     0,     0,     0,     0,   296,     0,
     307,   481,   308,   310,   262,     0,     0,   234,   263,   245,
     250,     0,   251,   248,   244,   328,   255,   259,     0,   260,
       0,   254,     0,    89,   328,   462,     0,     0,     0,     0,
       0,     0,     0,     0,   328,   467,   469,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,    52,     0,     0,
       0,     0,    48,    95,    96,    98,    99,   100,   102,   103,
     105,   106,   110,   111,   108,   109,   113,   114,   116,   118,
     120,   122,   124,     0,   128,   439,   321,     0,   324,   325,
     491,     0,   446,   501,   378,   376,     0,   169,     0,   170,
     471,     0,   328,     0,   328,     0,     0,   328,     0,   328,
     471,   158,   155,   156,     0,   272,   273,   350,   337,   351,
     352,   347,   346,   336,   357,     0,     0,     0,     0,   358,
       0,     0,     0,     0,   431,   328,   433,   328,   328,   277,
     276,   303,   312,   314,     0,     0,   236,   238,   249,     0,
     258,   253,     0,   328,   467,    44,    43,     0,    90,    41,
       0,    42,    81,     0,   461,   468,    77,     0,   470,    84,
     469,    82,     0,    70,     0,    59,    60,   142,    93,    51,
       0,    50,    40,    39,    47,     0,    46,     0,    62,   492,
       0,   328,   502,   447,   377,   471,   154,     0,   167,   328,
     168,   172,   162,     0,     0,   171,     0,   445,     0,   152,
     328,   271,   356,     0,     0,     0,   363,   355,     0,     0,
       0,   367,   328,     0,   328,   426,   428,   301,   302,   233,
      91,     0,    78,     0,     0,   467,     0,     0,     0,    83,
       0,     0,    49,    45,   126,   326,   323,   452,   451,     0,
     153,     0,   476,     0,   471,     0,   471,   471,   455,   506,
       0,   362,     0,   361,   366,     0,   365,   432,     0,   434,
     299,   300,   467,     0,     0,    79,    87,    85,     0,     0,
       0,   449,   450,     0,     0,   471,   159,     0,   161,   164,
     328,   454,   360,   364,     0,   298,    80,    58,    55,    86,
      57,    56,   448,     0,     0,   471,   163,   456,   435,   165,
     471,   160,     0,   166,   436
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -670,  -670,  -141,   889,   454,  -670,  -176,   526,  -670,  -670,
    -670,  -670,    56,  -670,  -670,  -670,   626,   654,  -188,     0,
    -670,  -299,   650,  -670,  -670,  -670,   336,  -670,  -670,  -670,
    -670,  -198,   281,    78,    44,   -68,    84,   468,   453,   469,
     475,   455,  -159,  -143,  -142,  -670,  -173,  -474,  -347,  -670,
     270,  -191,  -670,  -670,  -616,  -670,  -670,  -670,  -670,  -670,
     -24,     9,   273,   -61,   879,  -670,  -670,   142,  -670,   347,
    -670,  -670,  -670,   383,  -670,  -670,  -670,  -670,  -670,  -670,
     225,  -670,  -670,  -179,  -670,  -670,  -670,  -670,   625,   -14,
    -670,   -86,  -168,   -39,   850,   158,   108,  -366,  -670,  -182,
    -670,  -315,  -178,   250,  -670,  -476,  -670,  -670,  -670,  -670,
    -670,  -670,   600,   415,  -670,  -670,   596,  -670,   271,  -356,
    -670,  -670,  -670,  -670,   470,  -670,  -670,  -670,  -670,  -175,
     267,   275,  -670,  -670,   380,   482,  -670,  -670,  -670,  -187,
    -603,  -670,  -670,  -670,  -627,  -670,    18,  -441,  -394,  -670,
     562,  -669,   246,  -494,  -670,  -670,  -670,  -670,   409,  -169,
    -670,  -670,  -147,  -670,  -342,  -670,   747,  -670,  -670,  -670,
    -670
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,    48,   107,    50,    51,    52,   285,   286,
     287,   288,   289,   290,    53,   291,   292,    55,    56,   206,
     294,   595,   295,   296,   297,   429,   605,   728,   729,   725,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   438,   482,   516,   347,   517,   518,
     519,   520,   521,   522,   763,   523,   759,   524,   525,    58,
      59,   526,    61,    62,   527,    64,    65,    66,    67,    68,
      69,    70,   389,   390,   391,    71,    72,    73,    74,    75,
     223,    76,   399,    77,    78,    79,    80,   188,   189,    81,
      82,    83,   173,    84,    85,   313,   314,   379,   380,   210,
     211,   212,    86,   338,   324,   494,   650,    87,    88,    89,
     360,   361,   362,   363,   539,   540,   370,   553,   554,   364,
      90,   159,   238,   193,   333,   334,   335,    91,   160,    92,
     561,   562,   563,    93,   315,   316,    94,    95,   528,   194,
     652,   653,   809,   317,   676,   819,   224,   104,   596,   164,
     430,   726,   731,   529,   530,   813,   392,   326,   348,   568,
     234,   382,   195,   750,   366,   542,   239,    97,   753,   436,
     820
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   284,   187,   325,   337,   174,   252,   102,   162,    60,
     566,   355,   319,   555,   339,   109,   649,   666,    96,   543,
     357,   359,   175,   490,   365,   245,   156,   597,   171,   658,
       1,   600,    57,   602,   184,   312,     3,   168,   345,   175,
     381,    60,   170,   327,   328,   792,   384,   479,   771,   190,
     752,   766,   618,   768,   346,   191,    13,   560,    57,   677,
     105,   418,   419,    57,   680,   767,   424,    60,    98,   198,
     573,     1,   237,   450,   111,    13,     2,   163,   100,     5,
       6,   441,   442,   170,     1,   397,   192,   222,   320,   202,
       3,   204,   110,     6,   451,   205,   416,   674,   449,   156,
     544,   321,   707,   409,   439,   412,   218,   656,    40,   688,
     175,    57,    57,   545,   693,   228,   417,   566,   322,   176,
      60,    60,     1,   378,   459,   460,   835,    40,   177,   603,
     411,   544,   435,   480,   158,   174,   337,   337,   323,    26,
     178,   174,   385,   812,   678,   485,   196,   587,   187,   197,
     112,   237,    26,   179,   199,    99,     1,   156,   236,   661,
     831,   216,   203,   856,   241,   243,   246,   248,   157,   250,
     219,    43,   612,   355,   671,   253,   254,   293,   180,   613,
     491,   493,   357,   359,    43,   358,   365,     1,   455,   456,
      26,   564,   332,   565,   687,   377,   156,     1,   163,    57,
     368,   461,   462,   855,   683,   374,   646,     3,   100,    57,
       6,   225,   235,   647,     3,   100,   405,     6,   593,   235,
     613,    57,    43,   231,    26,    57,   398,    57,   484,   743,
      60,   747,   229,   613,    60,   403,    60,   236,   179,   393,
      57,   722,   457,   458,   410,   773,   775,   413,   647,    60,
     778,   780,   623,   624,   230,   580,    43,   582,   228,   439,
     232,     1,   837,   180,   610,   233,   613,     3,   100,   588,
       6,   240,   106,   805,   619,     1,   251,   293,   491,   491,
     192,     3,   100,   491,     6,   491,   491,     1,     3,   100,
     378,     6,   378,     3,   100,   187,     6,  -488,   740,   157,
    -488,   336,   727,   735,   491,   857,   489,   643,    44,    45,
     613,   284,   613,   756,   236,    44,    45,   369,     1,   157,
     170,   858,   668,   769,   838,   860,   463,   464,   613,   498,
     796,   372,   613,   822,   555,   100,   293,     6,   825,   861,
     644,   863,   536,   373,   345,   312,   613,   358,   613,   325,
     493,   864,   168,   375,   103,    26,    57,   383,   355,   491,
     346,    57,   171,   675,   198,   486,   487,   357,   359,   552,
     386,   365,   156,   156,   345,   156,   170,   394,   170,   345,
     560,   570,   401,   560,   571,   156,    26,    43,   704,   327,
     346,   632,   633,   634,   635,   346,   581,   484,   484,   402,
     179,   718,     3,   100,   183,     6,   180,   691,   810,   284,
       3,   100,   345,     6,   407,   165,   738,   345,    43,   157,
       3,   226,   156,   227,   191,   702,   156,   703,   346,   415,
     156,   156,   293,   346,   156,   440,   322,   293,   420,     1,
     708,   421,   842,   312,     2,     3,   100,     5,     6,   214,
     395,   215,   400,   422,    49,   192,   323,   425,  -489,     3,
     100,    49,     6,   427,   165,   426,   187,   846,   428,   848,
     849,   737,     3,   100,   437,     6,   452,   549,   697,   698,
      49,   453,   454,   236,   236,   431,    49,   293,   434,   692,
     465,   762,   174,   167,   762,   467,   762,   172,   789,   487,
     332,   630,   631,   183,   466,   748,   293,    26,   828,   698,
     468,   181,    49,   489,   790,   500,   103,    49,   871,   166,
     730,   293,     2,   873,   100,     5,     6,    57,   501,   191,
     681,   531,   358,   628,   629,   349,   350,   351,   606,    43,
     532,   108,   167,   533,   170,   546,    57,   636,   637,   685,
     228,   114,   103,    49,   797,   228,   181,   547,   181,   550,
     192,   538,   567,  -489,   157,    49,    49,   534,   157,   541,
     156,   574,   157,   157,   157,   575,   157,   495,   496,   157,
     598,   569,   491,   576,   601,   293,   762,   583,   577,   607,
     608,   578,   609,     1,   156,   611,   579,   214,   584,     3,
     100,   213,     6,   585,   156,   804,   236,   493,   586,   589,
     181,    49,   591,     3,   100,   201,     6,   599,   614,   830,
     833,   834,   651,    49,   657,   659,    54,   839,   840,   157,
     660,    49,   217,   101,   662,   220,     1,   664,   844,   345,
     183,   667,     3,   100,   730,     6,   330,   200,   669,   670,
      49,   613,   862,    49,   416,   346,   672,   690,    54,    49,
     293,    26,   293,    49,   293,   673,   695,   293,    54,   293,
     293,     1,   699,   785,   417,    49,   700,     3,   100,    49,
       6,    49,   615,   701,    54,   710,   228,   228,   711,    54,
     552,   228,   228,    43,    49,   156,   874,    57,   156,   712,
     647,     1,   606,   715,   181,   866,    60,     3,   100,    54,
       6,   182,   329,   156,     3,   100,   716,     6,   331,   244,
     717,   214,   378,   719,    54,   354,   367,   157,   371,   721,
     236,    49,   172,   625,   626,   627,   157,    54,    54,    26,
     720,   724,   732,   733,   387,   388,   157,   181,   174,   736,
     815,   156,   734,   616,   742,   293,   182,   749,   751,   293,
       3,   100,   723,     6,   170,   247,   754,   406,   761,   755,
     156,    43,   764,   757,   228,   764,   226,   764,   765,   228,
     770,   674,   156,   497,   156,   787,   499,   538,     3,   100,
      49,     6,   782,   396,   841,   101,     1,     3,   100,   784,
       6,     2,   235,   100,     5,     6,   157,   788,   170,   157,
      49,   157,   793,   794,   293,    49,   293,   293,   795,   242,
     800,   798,   249,   551,   182,    54,    49,    49,   181,    49,
     801,   101,   806,   318,   811,    54,   814,     3,   100,    49,
       6,   816,   235,     3,   100,   817,     6,    54,   686,     1,
     156,    54,   832,    54,     2,   157,   100,     5,     6,   808,
     182,   836,   515,   843,    26,   293,    54,   764,   845,   847,
     293,   791,     3,   100,   850,     6,    49,   774,   179,    63,
      49,   854,   354,   851,    49,    49,    49,   354,    49,   483,
     859,    49,  -487,   157,   548,   865,    43,   408,    44,    45,
     869,   157,   414,   213,   182,   870,   349,   350,   351,     1,
     872,    63,   157,     6,   113,     3,     4,    26,     6,   639,
     169,   433,     3,   100,   157,     6,   157,   779,   818,   483,
     714,   179,   758,   638,   642,   760,   640,    63,    44,    45,
     827,    49,   829,   641,     1,   488,    54,   182,   207,    43,
       3,     4,   654,     6,   330,   169,   537,     1,   706,   682,
      49,   777,   783,     3,     4,   709,     6,   556,   169,   645,
     655,   443,   444,   786,   445,    49,   799,    26,   209,   594,
     705,    49,    54,     0,   404,     0,     0,    54,     0,     0,
      63,    63,   157,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    54,   684,    54,     0,   689,   376,   867,    43,
    -487,     0,    26,     0,     0,     0,    44,    45,     0,     0,
       0,     0,     0,     0,    49,    26,   331,     0,   182,     0,
       0,     0,   515,     0,   663,     0,   665,     0,   446,    49,
       0,   447,    42,   448,    43,     0,     0,   515,    49,     0,
       0,    44,    45,     0,     0,   376,     0,    43,    49,     0,
       0,     0,     0,     0,    44,    45,     0,   590,     0,     0,
     354,   617,   354,     0,   622,   209,     0,     0,   356,     0,
       0,     0,     0,   694,     0,   696,   469,   470,   471,   472,
     473,   474,   475,   476,     0,     0,   477,   478,     0,     0,
      63,   388,     0,   479,    63,     0,    63,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    49,     0,    49,    63,
       1,    49,     0,    49,    49,     0,     3,   100,     0,     6,
       0,   620,     0,     0,     0,     0,     0,     0,     0,   772,
       0,     0,   776,     0,   551,     0,     0,   781,     1,    49,
       0,    49,    49,    54,     3,   100,     0,     6,     0,   745,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      54,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   515,     0,    26,   480,
       0,   481,     0,     0,     0,     0,   515,     0,     0,     0,
       0,     0,   621,     0,     0,    49,     0,     0,     0,    49,
       0,     0,     0,    49,     0,     0,    26,     0,     0,     0,
      43,     0,     0,     0,    49,     0,     0,   821,     0,   823,
       0,     0,   824,     0,   826,     0,    49,     0,    49,     0,
     356,   739,   741,     0,     0,     0,   744,   746,    43,     0,
       0,   209,   209,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,    49,     0,
      49,    49,     0,     0,     0,     0,   852,     0,     0,   853,
       0,   515,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     0,    54,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,     0,   515,   515,     0,     1,   255,   256,   257,   110,
       0,     3,   100,     0,     6,     0,   340,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   802,     0,     0,     0,
       0,   803,     0,     0,     0,     0,   259,   260,     0,     0,
     868,     0,   341,     0,     0,     0,   342,     0,     0,   263,
      54,   515,   264,     0,   343,   266,   515,     0,     0,     0,
       0,   267,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,   269,    26,     0,     0,     0,     0,   270,     0,
       0,     0,   271,     0,   272,   356,     0,     0,   273,     0,
     275,     0,     0,   276,    54,     0,     0,     0,     0,     0,
       0,     0,     0,   277,     0,   278,     0,     0,     0,   209,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   679,     0,     0,
       0,     1,   255,   256,   257,   110,     2,     3,   100,     5,
       6,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,   260,     0,     0,     8,     9,   261,   502,
     503,     0,   262,    12,    13,   263,   504,   505,   264,   506,
     265,   266,     0,    15,    16,     0,   185,   267,    19,   507,
      20,   508,   509,    21,   268,    23,    24,   510,   269,    26,
       0,     0,     0,    27,   270,   511,    28,    29,   271,    30,
     272,    31,   512,     0,   273,   274,   275,   513,    33,   276,
      34,    35,    36,    37,    38,    39,    40,    41,   514,   277,
       0,   278,     0,     0,   209,     0,    63,   209,   279,   280,
     281,   282,   283,     0,     0,     0,     0,     0,     0,     0,
       0,   336,  -473,     1,   255,   256,   257,   110,     2,     3,
     100,     5,     6,     0,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   260,     0,     0,     8,     9,
     261,   502,   503,     0,   262,    12,    13,   263,   504,   505,
     264,   506,   265,   266,     0,    15,    16,     0,   185,   267,
      19,   507,    20,   508,   509,    21,   268,    23,    24,   510,
     269,    26,     0,     0,     0,    27,   270,   511,    28,    29,
     271,    30,   272,    31,   512,     0,   273,   274,   275,   513,
      33,   276,    34,    35,    36,    37,    38,    39,    40,    41,
     514,   277,     0,   278,     0,     0,     0,     0,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,     0,     0,
       1,     0,     0,   336,  -474,     2,     3,     4,     5,     6,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,    14,
       0,     0,    15,    16,    17,   185,     0,    19,     0,    20,
       0,     0,    21,    22,    23,    24,     0,     0,    26,   349,
     350,   351,    27,     0,     0,    28,    29,     0,    30,     0,
      31,     0,  -499,     0,     0,     0,     0,    33,     0,    34,
      35,    36,   352,    38,    39,    40,    41,     0,    42,     0,
      43,     0,     0,     0,     1,     0,     0,    44,    45,     2,
       3,     4,     5,     6,     0,     7,     0,     0,     0,   353,
       0,  -493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,     0,     0,     0,    11,    12,    13,     0,     0,
       0,     0,     0,    14,     0,     0,    15,    16,    17,    18,
       0,    19,     0,    20,     0,     0,    21,    22,    23,    24,
      25,     0,    26,     0,     0,     0,    27,     0,     0,    28,
      29,     0,    30,     0,    31,     0,    32,     0,     0,     0,
       0,    33,     0,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    42,     0,    43,     0,     0,     0,     0,     0,
       0,    44,    45,     1,   255,   256,   257,   110,     0,     3,
     100,     0,     6,     0,   340,  -457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   260,     0,     0,     0,     0,
     341,     0,     0,     0,   342,     0,     0,   263,     0,     0,
     264,     0,   343,   266,     0,     0,     0,     0,     0,   267,
       0,     0,     0,     0,     0,     0,   344,     0,     0,     0,
     269,    26,     0,     0,     0,     0,   270,     0,     0,     0,
     271,     0,   272,     0,     0,     0,   273,   274,   275,     0,
       0,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   277,     0,   278,     0,     0,     0,     0,     0,     0,
     279,   280,   281,   282,   283,     0,     0,     0,     0,     0,
       0,     0,     0,   492,   648,     1,   255,   256,   257,   110,
       2,     3,   100,     5,     6,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,   260,     0,     0,
       8,     9,   261,   502,   503,     0,   262,    12,    13,   263,
     504,   505,   264,   506,   265,   266,     0,    15,    16,     0,
     185,   267,    19,   507,    20,   508,   509,    21,   268,    23,
      24,   510,   269,    26,     0,     0,     0,    27,   270,   511,
      28,    29,   271,    30,   272,    31,   512,     0,   273,   274,
     275,   513,    33,   276,    34,    35,    36,    37,    38,    39,
      40,    41,   514,   277,     0,   278,     0,     0,     0,     0,
       0,     0,   279,   280,   281,   282,   283,     0,     0,     0,
       0,     1,     0,     0,     0,   336,     2,     3,     4,     5,
       6,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     0,
      14,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,     0,     0,    21,    22,    23,    24,    25,     0,    26,
       0,     0,     0,    27,     0,     0,    28,    29,     0,    30,
       0,    31,     0,    32,     0,     0,     0,     0,    33,     0,
      34,    35,    36,    37,    38,    39,    40,    41,     0,    42,
       0,    43,     0,     0,     0,     1,     0,     0,    44,    45,
       2,     3,     4,     5,     6,     0,     7,     0,     0,     0,
       0,  -328,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,     0,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,    16,    17,
      18,     0,    19,     0,    20,     0,     0,    21,    22,    23,
      24,    25,     0,    26,     0,     0,     0,    27,     0,     0,
      28,    29,     0,    30,     0,    31,     0,    32,     0,     0,
       0,     0,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,    42,     0,    43,     0,     0,     0,     1,
       0,     0,    44,    45,     2,     3,     4,     5,     6,     0,
       7,     0,     0,     0,     0,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,     0,     0,     0,    14,     0,
       0,    15,    16,     0,   185,     0,    19,     0,    20,     0,
       0,    21,    22,    23,    24,     0,     0,    26,     0,     0,
       0,    27,     0,     0,    28,    29,     0,    30,     0,    31,
       0,     0,     0,     0,     0,     0,    33,     0,    34,    35,
      36,     0,    38,    39,    40,    41,     0,   376,     0,    43,
    -487,     0,     0,     0,     0,     0,    44,    45,     0,     1,
     255,   256,   257,   110,     0,     3,   100,     0,     6,  -328,
     340,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     259,   260,     0,     0,     0,     0,   341,     0,     0,     0,
     342,     0,     0,   263,     0,     0,   264,     0,   343,   266,
       0,     0,     0,     0,     0,   267,     0,     0,     0,     0,
       0,     0,   344,     0,     0,     0,   269,    26,     0,     0,
       0,     0,   270,     0,     0,     0,   271,     0,   272,     0,
       0,     0,   273,   274,   275,     0,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,     0,   278,
       0,     0,     0,     0,     0,     0,   279,   280,   281,   282,
     283,     0,     0,     0,     0,     0,     0,     0,     0,   492,
       1,   255,   256,   257,   110,     2,     3,   100,     5,     6,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   260,     0,     0,     0,     9,   261,     0,     0,
       0,   262,    12,    13,   263,     0,     0,   264,     0,   265,
     266,     0,    15,    16,     0,   185,   267,    19,     0,    20,
       0,     0,    21,   268,    23,    24,     0,   269,    26,     0,
       0,     0,    27,   270,     0,    28,    29,   271,    30,   272,
      31,     0,     0,   273,   274,   275,     0,    33,   276,    34,
      35,    36,     0,    38,    39,    40,    41,     0,   277,     0,
     278,     0,     0,     0,     0,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,     0,     0,     0,     0,  -471,
       1,   255,   256,   257,   110,     2,     3,   100,     5,     6,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   260,     0,     0,     0,     0,   261,     0,     0,
       0,   262,    12,    13,   263,     0,     0,   264,     0,   265,
     266,     0,    15,     0,     0,     0,   267,    19,     0,     0,
       0,     0,     0,   268,    23,     0,     0,   269,    26,     0,
       0,     0,     0,   270,     0,    28,    29,   271,     0,   272,
      31,     0,     0,   273,   274,   275,     0,     0,   276,    34,
      35,    36,     0,     0,    39,    40,    41,     0,   277,     0,
     278,     0,     0,     0,     0,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,     1,     0,     0,     0,  -475,
       2,     3,     4,     5,     6,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,    16,     0,
     185,     0,    19,     0,    20,     0,     0,    21,    22,    23,
      24,     0,     0,    26,     0,     0,     0,    27,     0,     0,
      28,    29,     0,    30,     0,    31,     0,     0,     0,     0,
       0,     0,    33,     0,    34,    35,    36,     0,    38,    39,
      40,    41,     0,    42,     0,    43,     0,     0,     0,     1,
       0,     0,    44,    45,     2,     3,     4,     5,     6,     0,
       7,     0,     0,     0,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,     0,     0,     0,    14,     0,
       0,    15,    16,     0,   185,     0,    19,     0,    20,     0,
       0,    21,    22,    23,    24,     0,     0,    26,     0,     0,
       0,    27,     0,     0,    28,    29,     0,    30,     0,    31,
       0,     0,     0,     0,     0,     0,    33,     0,    34,    35,
      36,     0,    38,    39,    40,    41,     0,    42,     0,    43,
       0,     0,     0,     0,     0,     0,    44,    45,     0,     0,
       0,     2,     3,   100,     5,     6,     0,   115,   535,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,     0,    10,     0,     0,     0,    11,    12,    13,
       0,     0,     0,   138,     0,    14,     0,     0,    15,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,    22,
      23,     0,     0,   139,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,     0,     0,
      39,    40,    41,     0,   140,     0,   141,   142,     0,     0,
     143,   144,   145,   146,   147,   148,     0,   149,   150,   151,
     152,   153,     0,     0,   154,     0,     0,     0,     0,   155,
       2,     3,   100,     5,     6,   208,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,    16,     0,
     185,     0,    19,     0,    20,     0,     0,    21,    22,    23,
      24,     0,     2,     3,   100,     5,     6,    27,   115,     0,
      28,    29,     0,    30,     0,    31,     0,     0,     0,     0,
       0,     0,    33,     0,    34,    35,    36,     0,    38,    39,
      40,    41,     0,     0,    10,     0,     0,     0,    11,    12,
      13,     0,     0,     0,     0,     0,    14,     0,     0,    15,
       0,     0,     0,     0,    19,  -328,     0,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,     0,
       0,    39,    40,    41,     1,   255,   256,   257,   110,     2,
       3,   100,     5,     6,     0,   258,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -328,     0,     0,
       0,     0,     0,     0,     0,   259,   260,     0,     0,     0,
       0,   261,     0,     0,     0,   262,    12,    13,   263,     0,
       0,   264,     0,   265,   266,     0,    15,     0,     0,     0,
     267,    19,     0,     0,     0,     0,     0,   268,    23,     0,
       0,   269,    26,     0,     0,     0,     0,   270,     0,    28,
      29,   271,     0,   272,    31,     0,     0,   273,   274,   275,
       0,     0,   276,    34,    35,    36,     0,     0,    39,    40,
      41,     0,   277,     0,   278,     0,     0,     0,     0,     0,
       0,   279,   280,   281,   282,   283,  -457,     0,     0,     1,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
      11,    12,    13,     0,     0,     0,     0,     0,    14,     0,
       0,    15,    16,    17,    18,     0,    19,     0,    20,     0,
       0,    21,    22,    23,    24,    25,     0,    26,     0,     0,
       0,    27,     0,     0,    28,    29,     0,    30,     0,    31,
       0,    32,     0,     0,     0,     0,    33,     0,    34,    35,
      36,    37,    38,    39,    40,    41,     0,    42,     0,    43,
       0,     0,     0,     0,     0,     0,    44,    45,     1,   255,
     256,   257,   110,     0,     3,   100,     0,     6,     0,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   259,
     260,     0,     0,     0,     0,   341,     0,     0,     0,   342,
       0,     0,   263,     0,     0,   264,     0,   343,   266,     0,
       0,     0,     0,     0,   267,     0,     0,     0,     0,     0,
       0,   344,     0,     0,     0,   269,    26,     0,     0,     0,
       0,   270,     0,     0,     0,   271,     0,   272,     0,     0,
       0,   273,     0,   275,     0,     0,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,   278,   423,
       0,     0,     0,     0,     0,   279,   280,   281,   282,   283,
       1,   255,   256,   257,   110,     0,     3,   100,     0,     6,
       0,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   260,     0,     0,     0,     0,   341,     0,     0,
       0,   342,     0,     0,   263,     0,     0,   264,     0,   343,
     266,     0,     0,     0,     0,     0,   267,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,   269,    26,     0,
       0,     0,     0,   270,     0,     0,     0,   271,     0,   272,
       0,     0,     0,   273,   274,   275,     0,     0,   276,     0,
       1,   255,   256,   257,   110,     0,     3,   100,   277,     6,
     278,   340,     0,     0,     0,     0,     0,   279,   280,   281,
     282,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   260,     0,     0,     0,     0,   341,     0,     0,
       0,   342,     0,     0,   263,     0,     0,   264,     0,   343,
     266,     0,     0,     0,     0,     0,   267,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,   269,    26,     0,
       0,     0,     0,   270,     0,     0,     0,   271,     0,   272,
       0,     0,     0,   273,     0,   275,     0,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,     0,
     278,   592,     0,     0,     0,     0,     0,   279,   280,   281,
     282,   283,     1,   255,   256,   257,   110,     0,     3,   100,
       0,     6,     0,   340,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   259,   260,     0,     0,     0,     0,   341,
       0,     0,     0,   342,     0,     0,   263,     0,     0,   264,
       0,   343,   266,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,   344,     0,     0,     0,   269,
      26,     0,     0,     0,     0,   270,     0,     0,     0,   271,
       0,   272,     0,     0,     0,   273,     0,   275,     0,     0,
     276,     0,     1,   255,   256,   257,   110,     0,     3,   100,
     277,     6,   278,   340,     0,     0,     0,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   259,   260,     0,     0,     0,     0,   341,
       0,     0,     0,   342,     0,     0,   263,     0,     0,   264,
       0,   343,   266,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,   344,     0,     0,     0,   269,
      26,     0,     0,     0,     0,   270,     0,     0,     0,   271,
       0,   272,     0,     0,     0,   273,     1,   275,     0,     0,
     276,     2,     3,     4,     5,     6,     0,     7,     0,     0,
     432,     0,   278,     0,     0,     0,     0,     0,     0,   279,
     280,   281,   282,   283,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,    11,    12,    13,
       0,     0,     0,     0,     0,    14,     0,     0,    15,    16,
      17,    18,     0,    19,     0,    20,     0,     0,    21,    22,
      23,    24,    25,     0,    26,     0,     0,     0,    27,     0,
       0,    28,    29,     0,    30,     0,    31,     0,    32,     0,
       0,     0,     0,    33,     0,    34,    35,    36,    37,    38,
      39,    40,    41,     0,    42,     0,    43,     0,     0,     0,
     161,     1,     0,    44,    45,     0,     2,     3,     4,     5,
       6,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,     0,
       0,     0,    11,    12,    13,     0,     0,     0,     0,     0,
      14,     0,     0,    15,    16,    17,    18,     0,    19,     0,
      20,     0,     0,    21,    22,    23,    24,    25,     0,    26,
       0,     0,     0,    27,     0,     0,    28,    29,     0,    30,
       0,    31,     0,    32,     0,     0,     0,     0,    33,     0,
      34,    35,    36,    37,    38,    39,    40,    41,     0,    42,
       0,    43,     0,     0,     0,     0,     0,     0,    44,    45,
       2,     3,   100,     5,     6,     0,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    22,    23,
       2,     3,   100,     5,     6,     0,   115,     0,     0,     0,
      28,    29,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,    39,
      40,    41,    10,     0,  -505,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    22,    23,
       2,     3,   100,     5,     6,     0,   115,     0,     0,     0,
      28,    29,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,    39,
      40,    41,    10,   604,     0,     0,    11,    12,    13,     0,
       0,     0,     0,     0,    14,     0,     0,    15,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    22,    23,
       0,     0,     0,     2,     3,   100,     5,     6,     0,   115,
      28,    29,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,     0,     0,    39,
      40,    41,     0,   713,     9,    10,     0,     0,     0,    11,
     557,    13,     0,     0,     0,     0,     0,    14,     0,     0,
      15,    16,     0,   185,     0,    19,     0,    20,     0,     0,
      21,    22,    23,    24,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    28,    29,     0,    30,     0,    31,     0,
     558,     0,     0,     0,     0,    33,     0,   559,    35,    36,
       0,    38,    39,    40,    41,     2,     3,   100,     5,     6,
     572,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
       0,    11,    12,    13,     0,     0,     0,     0,     0,    14,
       0,     0,    15,    16,     0,   185,     0,    19,     0,    20,
       0,     0,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    28,    29,     0,    30,     0,
      31,     0,     0,     0,     0,     0,     0,    33,     0,    34,
      35,    36,     0,    38,    39,    40,    41,     2,     3,   100,
       5,     6,   807,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,    14,     0,     0,    15,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,    22,    23,     2,     3,   100,
       5,     6,     0,   115,     0,     0,     0,    28,    29,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     0,     0,    39,    40,    41,    10,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     0,
       0,    14,     0,     0,    15,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,    22,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,     0,     0,    39,    40,    41
};

static const yytype_int16 yycheck[] =
{
       0,   177,    63,   190,   195,    44,   174,     7,    32,     0,
     376,   199,   180,   369,   196,    15,   492,   511,     0,   361,
     199,   199,    14,   322,   199,   166,    26,   421,    42,   503,
       3,   425,    32,   427,    58,   177,     9,    37,   197,    14,
     209,    32,    42,   190,   191,   714,    13,    33,   675,    63,
     653,   667,   446,   669,   197,    89,    46,   372,    58,   533,
     101,   259,   260,    63,   538,   668,   264,    58,    14,    83,
     385,     3,   158,    15,    18,    46,     8,    14,    10,    11,
      12,   279,   280,    83,     3,   226,   120,   111,   109,    89,
       9,    10,     7,    12,    36,    14,    50,    87,   296,    99,
     109,   122,   576,   244,   277,   246,   106,   501,    98,   550,
      14,   111,   112,   122,   555,   115,    70,   483,   101,    14,
     111,   112,     3,   209,    30,    31,   795,    98,   107,   428,
     122,   109,   274,   119,    26,   174,   327,   328,   121,    71,
       0,   180,   109,   759,   122,   314,   101,   122,   209,   104,
     123,   237,    71,    85,   123,   101,     3,   157,   158,   506,
     787,   105,    85,   832,   164,   165,   166,   167,    26,   169,
     123,   103,   102,   361,   521,   175,   176,   177,   110,   109,
     322,   323,   361,   361,   103,   199,   361,     3,   112,   113,
      71,   373,   192,   375,   550,   209,   196,     3,    14,   199,
     200,   107,   108,   830,   546,   205,   102,     9,    10,   209,
      12,   123,    14,   109,     9,    10,   240,    12,   416,    14,
     109,   221,   103,   102,    71,   225,   226,   227,   314,   105,
     221,   120,   104,   109,   225,   235,   227,   237,    85,   221,
     240,   102,    24,    25,   244,   686,   687,   247,   109,   240,
     691,   692,   450,   451,   104,   396,   103,   398,   258,   432,
     105,     3,   105,   110,   437,   157,   109,     9,    10,   410,
      12,   108,    14,   749,   447,     3,   102,   277,   420,   421,
     120,     9,    10,   425,    12,   427,   428,     3,     9,    10,
     376,    12,   378,     9,    10,   356,    12,   101,    14,   157,
     104,   123,   104,   102,   446,   102,   320,   480,   110,   111,
     109,   487,   109,   660,   314,   110,   111,   120,     3,   177,
     320,   102,   513,   670,   798,   102,    28,    29,   109,   329,
     724,   107,   109,   774,   690,    10,   336,    12,   779,   102,
     482,   102,   356,   101,   503,   487,   109,   361,   109,   536,
     492,   845,   352,   101,     7,    71,   356,   102,   546,   501,
     503,   361,   376,   531,   378,   108,   109,   546,   546,   369,
     102,   546,   372,   373,   533,   375,   376,   124,   378,   538,
     695,   101,   105,   698,   104,   385,    71,   103,   570,   536,
     533,   459,   460,   461,   462,   538,   396,   483,   484,   105,
      85,   599,     9,    10,    57,    12,   110,    14,   755,   585,
       9,    10,   571,    12,   122,    14,   614,   576,   103,   277,
       9,   121,   422,   123,    89,   567,   426,   569,   571,   122,
     430,   431,   432,   576,   434,   277,   101,   437,   101,     3,
     581,   101,   808,   585,     8,     9,    10,    11,    12,   102,
     225,   104,   227,   107,     0,   120,   121,   101,   123,     9,
      10,     7,    12,   101,    14,   107,   527,   814,   101,   816,
     817,   613,     9,    10,   101,    12,   110,    14,   108,   109,
      26,   115,   116,   483,   484,   107,    32,   487,   107,    96,
     111,   664,   531,    92,   667,   118,   669,    43,   108,   109,
     500,   457,   458,   156,   117,   647,   506,    71,   108,   109,
      32,    57,    58,   527,   712,   109,   169,    63,   865,    69,
     606,   521,     8,   870,    10,    11,    12,   527,   101,    89,
     544,   102,   546,   455,   456,    72,    73,    74,   430,   103,
     105,    15,    92,   120,   544,   120,   546,   463,   464,   549,
     550,    25,   205,    99,   727,   555,   102,   124,   104,    96,
     120,   121,   121,   123,   422,   111,   112,   122,   426,   122,
     570,   122,   430,   431,   432,   109,   434,   327,   328,   437,
     422,   121,   724,   121,   426,   585,   759,   122,   124,   431,
     432,   124,   434,     3,   594,   437,   124,   250,   124,     9,
      10,   110,    12,   107,   604,   747,   606,   749,   122,   122,
     156,   157,   122,     9,    10,    89,    12,   105,   102,   787,
     793,   794,    43,   169,   122,   122,     0,   800,   801,   487,
     120,   177,   106,     7,   101,   109,     3,   101,   811,   798,
     293,   101,     9,    10,   730,    12,   192,    14,   101,   120,
     196,   109,   843,   199,    50,   798,   122,   109,    32,   205,
     660,    71,   662,   209,   664,   124,   107,   667,    42,   669,
     670,     3,   102,   697,    70,   221,   102,     9,    10,   225,
      12,   227,    14,   102,    58,   122,   686,   687,   122,    63,
     690,   691,   692,   103,   240,   695,   872,   697,   698,   105,
     109,     3,   594,   102,   250,   847,   697,     9,    10,    83,
      12,    57,    14,   713,     9,    10,   102,    12,   192,    14,
     108,   374,   808,   102,    98,   199,   200,   585,   202,   102,
     730,   277,   278,   452,   453,   454,   594,   111,   112,    71,
     108,   101,   108,   102,   218,   219,   604,   293,   787,   102,
     764,   751,   108,    85,   102,   755,   102,   109,   101,   759,
       9,    10,   604,    12,   764,    14,   102,   241,   122,   120,
     770,   103,   664,   100,   774,   667,   121,   669,   122,   779,
     101,    87,   782,   329,   784,   102,   332,   121,     9,    10,
     336,    12,   121,    14,   808,   169,     3,     9,    10,   121,
      12,     8,    14,    10,    11,    12,   664,   105,   808,   667,
     356,   669,   101,   101,   814,   361,   816,   817,   102,   165,
     101,   104,   168,   369,   170,   199,   372,   373,   374,   375,
     101,   205,   124,   179,   101,   209,   102,     9,    10,   385,
      12,   102,    14,     9,    10,   102,    12,   221,    14,     3,
     850,   225,   102,   227,     8,   713,    10,    11,    12,   751,
     206,   102,   336,   102,    71,   865,   240,   759,   122,   121,
     870,   713,     9,    10,   109,    12,   422,    14,    85,     0,
     426,    45,   356,   102,   430,   431,   432,   361,   434,   101,
     105,   437,   104,   751,   368,    54,   103,   243,   110,   111,
     122,   759,   248,   110,   250,   102,    72,    73,    74,     3,
     121,    32,   770,    12,    25,     9,    10,    71,    12,   466,
      14,   271,     9,    10,   782,    12,   784,    14,   770,   101,
     594,    85,   662,   465,   479,   662,   467,    58,   110,   111,
     782,   487,   784,   468,     3,   320,   320,   293,    98,   103,
       9,    10,   498,    12,   500,    14,   356,     3,   575,   544,
     506,   690,   695,     9,    10,   585,    12,   371,    14,   487,
     500,    34,    35,   698,    37,   521,   730,    71,    99,   417,
     571,   527,   356,    -1,   237,    -1,    -1,   361,    -1,    -1,
     111,   112,   850,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     546,    -1,   376,   549,   378,    -1,   552,   101,   850,   103,
     104,    -1,    71,    -1,    -1,    -1,   110,   111,    -1,    -1,
      -1,    -1,    -1,    -1,   570,    71,   500,    -1,   374,    -1,
      -1,    -1,   506,    -1,   508,    -1,   510,    -1,   101,   585,
      -1,   104,   101,   106,   103,    -1,    -1,   521,   594,    -1,
      -1,   110,   111,    -1,    -1,   101,    -1,   103,   604,    -1,
      -1,    -1,    -1,    -1,   110,   111,    -1,   413,    -1,    -1,
     544,   445,   546,    -1,   448,   196,    -1,    -1,   199,    -1,
      -1,    -1,    -1,   557,    -1,   559,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
     221,   575,    -1,    33,   225,    -1,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   660,    -1,   662,    -1,   664,   240,
       3,   667,    -1,   669,   670,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   685,
      -1,    -1,   688,    -1,   690,    -1,    -1,   693,     3,   695,
      -1,   697,   698,   527,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   713,    -1,    -1,
     544,    -1,   546,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   660,    -1,    71,   119,
      -1,   121,    -1,    -1,    -1,    -1,   670,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,   751,    -1,    -1,    -1,   755,
      -1,    -1,    -1,   759,    -1,    -1,    71,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   770,    -1,    -1,   773,    -1,   775,
      -1,    -1,   778,    -1,   780,    -1,   782,    -1,   784,    -1,
     361,   615,   616,    -1,    -1,    -1,   620,   621,   103,    -1,
      -1,   372,   373,    -1,   375,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,   814,    -1,
     816,   817,    -1,    -1,    -1,    -1,   822,    -1,    -1,   825,
      -1,   755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   850,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   865,
      -1,    -1,    -1,   697,   870,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     814,    -1,   816,   817,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   740,    -1,    -1,    -1,
      -1,   745,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
     854,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
     764,   865,    50,    -1,    52,    53,   870,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    82,   546,    -1,    -1,    86,    -1,
      88,    -1,    -1,    91,   808,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,   570,
      -1,    -1,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,    -1,    -1,   695,    -1,   697,   698,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,   123,   124,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    57,    58,    -1,    60,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    78,    79,    -1,    81,    -1,
      83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,     3,    -1,    -1,   110,   111,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,   122,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      69,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    78,
      79,    -1,    81,    -1,    83,    -1,    85,    -1,    -1,    -1,
      -1,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    12,    -1,    14,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,   123,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    58,    -1,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    -1,    71,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,    81,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,   103,    -1,    -1,    -1,     3,    -1,    -1,   110,   111,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,
      58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    69,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    -1,    85,    -1,    -1,
      -1,    -1,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,     3,
      -1,    -1,   110,   111,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    99,    -1,   101,    -1,   103,
     104,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    12,   123,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,    53,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,
      -1,    -1,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    -1,    -1,    50,    -1,    52,
      53,    -1,    55,    56,    -1,    58,    59,    60,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    -1,    70,    71,    -1,
      -1,    -1,    75,    76,    -1,    78,    79,    80,    81,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    -1,    96,    97,    98,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    -1,    -1,    50,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    -1,    78,    79,    80,    -1,    82,
      83,    -1,    -1,    86,    87,    88,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    97,    98,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,    -1,    -1,    -1,     3,    -1,    -1,    -1,   122,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,    97,
      98,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,     3,
      -1,    -1,   110,   111,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    96,    97,    98,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    14,   122,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,
      97,    98,    99,    -1,   101,    -1,   103,   104,    -1,    -1,
     107,   108,   109,   110,   111,   112,    -1,   114,   115,   116,
     117,   118,    -1,    -1,   121,    -1,    -1,    -1,    -1,   126,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    -1,     8,     9,    10,    11,    12,    75,    14,    -1,
      78,    79,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    92,    93,    94,    -1,    96,    97,
      98,    99,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    60,   123,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    -1,
      -1,    97,    98,    99,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    47,    -1,
      -1,    50,    -1,    52,    53,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,    78,
      79,    80,    -1,    82,    83,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    97,    98,
      99,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,     0,    -1,    -1,     3,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    58,    -1,    60,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    69,    -1,    71,    -1,    -1,
      -1,    75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,
      -1,    85,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,   104,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      -1,    -1,    -1,    86,    87,    88,    -1,    -1,    91,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,   101,    12,
     103,    14,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      -1,    -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
     103,   104,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    -1,    -1,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
     101,    12,   103,    14,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    -1,    -1,    -1,    86,     3,    88,    -1,    -1,
      91,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      57,    58,    -1,    60,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    81,    -1,    83,    -1,    85,    -1,
      -1,    -1,    -1,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
     107,     3,    -1,   110,   111,    -1,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    58,    -1,    60,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    69,    -1,    71,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,    81,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,    40,    -1,   102,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,    40,   101,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,    14,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    -1,    -1,    97,
      98,    99,    -1,   101,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    79,    -1,    81,    -1,    83,    -1,
      85,    -1,    -1,    -1,    -1,    90,    -1,    92,    93,    94,
      -1,    96,    97,    98,    99,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    79,    -1,    81,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    92,
      93,    94,    -1,    96,    97,    98,    99,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    67,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    -1,    -1,    97,    98,    99,    40,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    -1,    -1,    97,    98,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     8,     9,    10,    11,    12,    14,    38,    39,
      40,    44,    45,    46,    52,    55,    56,    57,    58,    60,
      62,    65,    66,    67,    68,    69,    71,    75,    78,    79,
      81,    83,    85,    90,    92,    93,    94,    95,    96,    97,
      98,    99,   101,   103,   110,   111,   128,   129,   130,   131,
     132,   133,   134,   141,   143,   144,   145,   146,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   202,   203,   204,   205,   206,   208,   210,   211,   212,
     213,   216,   217,   218,   220,   221,   229,   234,   235,   236,
     247,   254,   256,   260,   263,   264,   273,   294,    14,   101,
      10,   143,   146,   196,   274,   101,    14,   131,   134,   146,
       7,   139,   123,   130,   134,    14,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    50,    70,
     101,   103,   104,   107,   108,   109,   110,   111,   112,   114,
     115,   116,   117,   118,   121,   126,   146,   194,   223,   248,
     255,   107,   187,    14,   276,    14,    69,    92,   146,    14,
     146,   216,   131,   219,   220,    14,    14,   107,     0,    85,
     110,   131,   144,   196,   187,    58,   122,   190,   214,   215,
     216,    89,   120,   250,   266,   289,   101,   104,   216,   123,
      14,   134,   146,    85,    10,    14,   146,   221,    13,   191,
     226,   227,   228,   110,   196,   196,   139,   134,   146,   123,
     134,   123,   187,   207,   273,   123,   121,   123,   146,   104,
     104,   102,   105,   223,   287,    14,   146,   218,   249,   293,
     108,   146,   144,   146,    14,   129,   146,    14,   146,   144,
     146,   102,   219,   146,   146,     4,     5,     6,    14,    34,
      35,    40,    44,    47,    50,    52,    53,    59,    66,    70,
      76,    80,    82,    86,    87,    88,    91,   101,   103,   110,
     111,   112,   113,   114,   133,   135,   136,   137,   138,   139,
     140,   142,   143,   146,   147,   149,   150,   151,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   222,   223,   261,   262,   270,   144,   219,
     109,   122,   101,   121,   231,   266,   284,   289,   289,    14,
     131,   134,   146,   251,   252,   253,   123,   178,   230,   226,
      14,    40,    44,    52,    66,   169,   170,   174,   285,    72,
      73,    74,    95,   122,   134,   145,   191,   210,   216,   229,
     237,   238,   239,   240,   246,   256,   291,   134,   146,   120,
     243,   134,   107,   101,   146,   101,   101,   216,   218,   224,
     225,   286,   288,   102,    13,   109,   102,   134,   134,   199,
     200,   201,   283,   273,   124,   207,    14,   129,   146,   209,
     207,   105,   105,   146,   293,   187,   134,   122,   144,   129,
     146,   122,   129,   146,   144,   122,    50,    70,   158,   158,
     101,   101,   107,   104,   158,   101,   107,   101,   101,   152,
     277,   107,   101,   149,   107,   171,   296,   101,   171,   173,
     222,   158,   158,    34,    35,    37,   101,   104,   106,   158,
      15,    36,   110,   115,   116,   112,   113,    24,    25,    30,
      31,   107,   108,    28,    29,   111,   117,   118,    32,    16,
      17,    18,    19,    20,    21,    22,    23,    26,    27,    33,
     119,   121,   172,   101,   218,   286,   108,   109,   215,   216,
     148,   171,   123,   171,   232,   230,   230,   131,   146,   131,
     109,   101,    41,    42,    48,    49,    51,    61,    63,    64,
      69,    77,    84,    89,   100,   134,   173,   175,   176,   177,
     178,   179,   180,   182,   184,   185,   188,   191,   265,   280,
     281,   102,   105,   120,   122,   122,   216,   239,   121,   241,
     242,   122,   292,   291,   109,   122,   120,   124,   134,    14,
      96,   131,   146,   244,   245,   246,   243,    45,    85,    92,
     228,   257,   258,   259,   226,   226,   224,   121,   286,   121,
     101,   104,    13,   228,   122,   109,   121,   124,   124,   124,
     129,   146,   129,   122,   124,   107,   122,   122,   129,   122,
     144,   122,   104,   158,   277,   148,   275,   275,   222,   105,
     275,   222,   275,   148,   101,   153,   223,   222,   222,   222,
     173,   222,   102,   109,   102,    14,    85,   143,   275,   173,
      14,    85,   143,   158,   158,   159,   159,   159,   160,   160,
     161,   161,   162,   162,   162,   162,   163,   163,   164,   165,
     166,   167,   168,   173,   171,   262,   102,   109,   124,   232,
     233,    43,   267,   268,   131,   251,   275,   122,   174,   122,
     120,   175,   101,   134,   101,   134,   280,   101,   178,   101,
     120,   175,   122,   124,    87,   219,   271,   174,   122,   125,
     174,   216,   240,   291,   131,   146,    14,   246,   274,   131,
     109,    14,    96,   274,   134,   107,   134,   108,   109,   102,
     102,   102,   171,   171,   226,   285,   200,   174,   129,   261,
     122,   122,   105,   101,   153,   102,   102,   108,   158,   102,
     108,   102,   102,   222,   101,   156,   278,   104,   154,   155,
     218,   279,   108,   102,   108,   102,   102,   171,   158,   143,
      14,   143,   102,   105,   143,    14,   143,   120,   171,   109,
     290,   101,   267,   295,   102,   120,   175,   100,   177,   183,
     189,   122,   173,   181,   223,   122,   181,   267,   181,   175,
     101,   271,   131,   274,    14,   274,   131,   245,   274,    14,
     274,   131,   121,   257,   121,   187,   258,   102,   105,   108,
     158,   222,   278,   101,   101,   102,   275,   173,   104,   279,
     101,   101,   143,   143,   171,   232,   124,    13,   223,   269,
     175,   101,   181,   282,   102,   216,   102,   102,   222,   272,
     297,   131,   274,   131,   131,   274,   131,   222,   108,   222,
     219,   271,   102,   173,   173,   278,   102,   105,   174,   173,
     173,   216,   224,   102,   173,   122,   175,   121,   175,   175,
     109,   102,   131,   131,    45,   271,   278,   102,   102,   105,
     102,   102,   178,   102,   280,    54,   171,   222,   134,   122,
     102,   175,   121,   175,   133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   127,   128,   129,   130,   131,   131,   132,   133,   134,
     135,   135,   135,   135,   135,   136,   137,   138,   139,   140,
     140,   141,   142,   142,   142,   142,   143,   143,   144,   144,
     144,   144,   145,   145,   146,   146,   146,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   148,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   151,
     151,   152,   153,   154,   154,   155,   155,   156,   157,   157,
     157,   157,   158,   158,   159,   159,   159,   160,   160,   160,
     160,   161,   161,   161,   162,   162,   162,   163,   163,   163,
     163,   163,   164,   164,   164,   165,   165,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   171,   171,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   173,   173,   174,   175,   175,   175,   175,   175,   175,
     175,   175,   176,   176,   176,   177,   178,   179,   179,   180,
     180,   180,   181,   181,   182,   182,   182,   183,   183,   184,
     184,   184,   184,   185,   186,   186,   187,   187,   187,   187,
     187,   187,   187,   188,   188,   188,   188,   188,   189,   189,
     190,   190,   190,   190,   190,   191,   191,   192,   192,   192,
     192,   192,   193,   193,   193,   194,   194,   194,   194,   194,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   196,   196,   196,   197,   197,   197,
     197,   197,   197,   197,   198,   199,   199,   200,   200,   201,
     202,   202,   203,   203,   204,   205,   206,   207,   208,   209,
     209,   209,   209,   210,   210,   210,   210,   210,   211,   211,
     211,   211,   212,   213,   213,   214,   214,   215,   216,   216,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     218,   218,   218,   218,   218,   218,   219,   219,   220,   220,
     221,   221,   221,   221,   222,   223,   224,   224,   225,   225,
     225,   225,   225,   225,   226,   226,   226,   226,   226,   227,
     227,   228,   228,   228,   228,   229,   229,   229,   229,   230,
     231,   231,   232,   232,   232,   233,   233,   234,   235,   235,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   238,
     238,   238,   238,   238,   238,   239,   239,   240,   240,   240,
     240,   241,   242,   243,   244,   244,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   246,   246,
     246,   247,   248,   249,   250,   251,   251,   252,   253,   253,
     253,   253,   253,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   256,   257,   257,   258,
     258,   259,   259,   259,   259,   259,   259,   260,   261,   261,
     262,   262,   262,   263,   264,   265,   266,   267,   268,   269,
     269,   269,   269,   270,   271,   272,   272,   273,   273,   274,
     274,   275,   275,   276,   276,   277,   277,   278,   278,   279,
     279,   280,   280,   281,   281,   282,   282,   283,   283,   284,
     284,   285,   285,   286,   286,   287,   287,   288,   288,   289,
     289,   290,   290,   291,   291,   292,   292,   293,   293,   294,
     294,   295,   295,   296,   296,   297,   297
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     2,     2,     1,     4,
       4,     4,     4,     4,     4,     5,     4,     4,     3,     5,
       4,     4,     3,     2,     2,     7,     7,     7,     7,     4,
       4,     1,     3,     1,     2,     2,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     4,     5,     6,
       7,     3,     2,     2,     1,     3,     4,     3,     2,     3,
       4,     5,     1,     4,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     1,     2,     5,
       7,     5,     1,     4,     5,     7,     8,     1,     1,     2,
       2,     3,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       3,     3,     4,     7,     5,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     5,     5,     4,     1,     5,     3,
       2,     2,     1,     6,     5,     5,     4,     4,     6,     5,
       5,     4,     5,     5,     3,     1,     3,     2,     1,     2,
       1,     6,     5,     5,     4,     4,     6,     6,     4,     3,
       1,     2,     1,     2,     3,     3,     1,     2,     1,     1,
       1,     2,     3,     2,     2,     2,     2,     1,     6,     5,
       5,     4,     4,     3,     2,     1,     1,     0,     3,     1,
       3,     2,     4,     2,     4,     3,     4,     2,     3,     1,
       2,     3,     1,     4,     2,     1,     3,     4,     0,     3,
       3,     4,     1,     1,     1,     2,     3,     3,     2,     2,
       1,     2,     2,     1,     1,     1,     3,     1,     2,     2,
       3,     2,     2,     2,     1,     3,     3,     2,     2,     1,
       5,     4,     4,     3,     5,     4,     4,     3,     1,     1,
       1,     2,     2,     2,     2,     1,     3,     4,     3,     2,
       2,     1,     1,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     6,     1,     3,     1,
       1,     2,     4,     2,     4,     6,     8,     4,     1,     3,
       1,     1,     1,     2,     4,     3,     4,     2,     5,     2,
       2,     1,     1,     2,     4,     1,     3,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1
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
  unsigned long int yylno = yyrline[yyrule];
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
#line 96 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TYPEDEF_NAME, -1, (yyval)->u.leaf ); }
#line 2800 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2806 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 105 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NAMESPACE_NAME, -1, (yyval)->u.leaf ); }
#line 2812 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CLASS_NAME, -1, (yyval)->u.leaf ); }
#line 2818 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 116 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; yyerror("Enum not supported by 120++. "); unsupported_error++; }
#line 2824 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 121 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; yyerror("Templates not supported by 120++. "); unsupported_error++; }
#line 2830 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 129 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( IDENTIFIER, -1, (yyval)->u.leaf ); }
#line 2836 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 133 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2842 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 134 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2848 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2854 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 136 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2860 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 137 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2866 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 141 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INTEGER, -1, (yyval)->u.leaf ); }
#line 2872 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 145 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CHARACTER, -1, (yyval)->u.leaf ); }
#line 2878 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 149 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FLOATING, -1, (yyval)->u.leaf ); }
#line 2884 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 153 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STRING, -1, (yyval)->u.leaf ); }
#line 2890 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 157 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TRUE, -1, (yyval)->u.leaf ); }
#line 2896 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 158 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FALSE, -1, (yyval)->u.leaf ); }
#line 2902 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 166 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree(root, 1, (yyvsp[0])); globalTree = (yyval); }
#line 2908 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 175 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( THIS, -1 ); }
#line 2914 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 176 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2920 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 177 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2926 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 181 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2932 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 182 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2938 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 186 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2944 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 187 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2950 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 188 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2956 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 189 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DESTRUCTOR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 2962 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 193 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NESTED_UNQUALIFIED, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 2968 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 194 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NESTED_TEMPLATE, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 2974 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 198 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NESTED_CLASS_SPEC, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 2980 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 199 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NESTED_NAMESPACE_SPEC, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 2986 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 200 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NESTED_CLASS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 2992 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 201 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NESTED_NAMESPACE, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 2998 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 205 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3004 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 206 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_ARRAY, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3010 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 207 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_CALL, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3016 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 208 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_CAST, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3022 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 209 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_CAST, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3028 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 210 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_CAST, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3034 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 211 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_CAST, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3040 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 212 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_DOT, 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 3046 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 213 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_DOT, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3052 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 214 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_DOT, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3058 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 215 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_DOT, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3064 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 216 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_ARROW, 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3070 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 217 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_ARROW, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3076 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 218 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_ARROW, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3082 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 219 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_ARROW, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3088 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 220 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_PLUSPLUS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3094 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 221 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( POSTFIX_MINUSMINUS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3100 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 222 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DYNAMIC_CAST, 5, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3106 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 223 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATIC_CAST, 5, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3112 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 224 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( REINTERPRET_CAST, 5, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3118 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 225 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONST_CAST, 5, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3124 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 226 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TYPEID, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3130 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 227 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TYPEID, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3136 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 231 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3142 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXPRESSION_ASSIGN, 2, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3148 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 236 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3154 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 237 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNARY_PLUSPLUS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3160 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 238 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNARY_MINUSMINUS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3166 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 239 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNARY_STAR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3172 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 240 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNARY_AND, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3178 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 241 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNARY_CAST, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3184 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 242 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNARY_SIZEOF_EXPR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3190 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 243 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNARY_SIZEOF_TYPE, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3196 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 244 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3202 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 245 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3208 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 249 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( '+', -1, (yyval)->u.leaf ); }
#line 3214 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 250 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( '-', -1, (yyval)->u.leaf ); }
#line 3220 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 251 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( '!', -1, (yyval)->u.leaf ); }
#line 3226 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 252 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( '~', -1, (yyval)->u.leaf ); }
#line 3232 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 256 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NEW_TYPE, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3238 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 257 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NEW_TYPE_CC, 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3244 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 258 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NEW_PARAM, 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3250 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 259 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NEW_PARAM_CC, 5, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3256 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 263 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 3262 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 267 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NEW_TYPE_ID, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3268 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 271 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; yyerror("Pointers not supported in 120++\n"); unsupported_error++; }
#line 3274 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 272 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3280 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 276 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 3286 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 277 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIRECT_NEW, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 3292 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 281 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 3298 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 285 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DELETE_EXPR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3304 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 286 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DELETE_CC_EXPR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3310 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 287 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DELETE_BRACKET_EXPR, 2, (yyvsp[-3]), (yyvsp[0]) ); }
#line 3316 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 288 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DELETE_CC_BRACKET_EXPR, 3, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[0]) ); }
#line 3322 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 292 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3328 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 293 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CAST_EXPR, 2, (yyvsp[-2]), (yyvsp[0]) ); }
#line 3334 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 297 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3340 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 298 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PM_DOTSTAR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3346 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 299 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PM_ARROWSTAR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3352 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 303 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3358 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 304 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MULT_STAR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3364 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 305 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MULT_DIV, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3370 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 306 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MULT_PERC, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3376 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 310 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3382 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 311 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ADD_PLUS, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3388 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 312 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ADD_MINUS, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3394 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 316 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3400 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 317 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SHIFT_EXPR_SL, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3406 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 318 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SHIFT_EXPR_SR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3412 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 322 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3418 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 323 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( RELATION_LT, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3424 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 324 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( RELATION_GT, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3430 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 325 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( RELATION_LTEQ, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3436 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 326 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( RELATION_GTEQ, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3442 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 330 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3448 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 331 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EQUAL, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3454 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 332 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NEQUAL, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3460 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 336 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3466 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 337 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( AND_EQUAL, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3472 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 341 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3478 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 342 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXLUSIVE_OR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3484 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 346 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3490 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 347 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INCLUSIVE_OR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3496 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 351 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3502 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 352 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( LOGICAL_AND, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3508 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 356 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3514 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 357 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( LOGICAL_OR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3520 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 361 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3526 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 362 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONDITIONAL_OR, 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3532 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 366 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3538 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 367 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ASSIGNMENT_EXPR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3544 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 368 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3550 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 373 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MULEQ, -1, (yyval)->u.leaf ); }
#line 3556 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 374 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIVEQ, -1, (yyval)->u.leaf ); }
#line 3562 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 375 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MODEQ, -1, (yyval)->u.leaf ); }
#line 3568 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 376 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ADDEQ, -1, (yyval)->u.leaf ); }
#line 3574 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 377 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SUBEQ, -1, (yyval)->u.leaf ); }
#line 3580 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 378 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SREQ, -1, (yyval)->u.leaf ); }
#line 3586 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 379 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SLEQ, -1, (yyval)->u.leaf ); }
#line 3592 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 380 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ANDEQ, -1, (yyval)->u.leaf ); }
#line 3598 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 381 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( XOREQ, -1, (yyval)->u.leaf ); }
#line 3604 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 382 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( OREQ, -1, (yyval)->u.leaf ); }
#line 3610 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 386 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3616 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 387 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXPRESSION, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3622 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 391 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3628 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 399 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3634 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 400 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3640 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 401 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3646 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 402 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3652 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 403 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3658 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 404 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3664 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 405 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3670 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 406 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3676 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 410 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATEMENT_LABELED, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3682 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 411 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATEMENT_CASE, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3688 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 412 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATEMENT_DEFAULT, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3694 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 416 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3700 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 420 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( COMPOUND, 1, (yyvsp[-2])); }
#line 3706 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 424 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3712 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 425 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATEMENT_SEQ, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3718 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 429 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATEMENT_IF, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 3724 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 430 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATEMENT_IF_ELSE, 5, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3730 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 431 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATEMENT_SWITCH, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 3736 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 435 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3742 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 436 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONDITION, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3748 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 440 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( WHILE_STATEMENT, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 3754 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 441 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DOWHILE_STATEMENT, 5, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 3760 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 442 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FOR_STATEMENT, 6, (yyvsp[-7]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 3766 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 446 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3772 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 447 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3778 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 451 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BREAK, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3784 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 452 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONTINUE, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3790 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 453 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( RETURN_STATEMENT, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3796 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 454 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( GOTO_STATEMENT, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3802 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 458 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3808 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 466 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3814 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 467 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECL_SEQ, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3820 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 471 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3826 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 472 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3832 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 473 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3838 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 474 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3844 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 475 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3850 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 476 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3856 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 477 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3862 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 481 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3868 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 482 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3874 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 483 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3880 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 484 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3886 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 485 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3892 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 489 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECL_SPEC_INIT, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 3898 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 490 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3904 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 494 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3910 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 495 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3916 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 496 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3922 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 497 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FRIEND, -1, (yyval)->u.leaf ); }
#line 3928 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 498 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TYPEDEF, -1, (yyval)->u.leaf ); }
#line 3934 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 502 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3940 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 503 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECL_SPEC_SEQ, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 3946 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 507 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( AUTO, -1, (yyval)->u.leaf ); }
#line 3952 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 508 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( REGISTER, -1, (yyval)->u.leaf ); }
#line 3958 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 509 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( STATIC, -1, (yyval)->u.leaf ); }
#line 3964 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 510 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXTERN, -1, (yyval)->u.leaf ); }
#line 3970 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 511 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MUTABLE, -1, (yyval)->u.leaf ); }
#line 3976 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 515 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INLINE, -1, (yyval)->u.leaf ); }
#line 3982 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 516 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; yyerror("Virtual not supported by 120++. "); unsupported_error++; }
#line 3988 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 517 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXPLICIT, -1, (yyval)->u.leaf ); }
#line 3994 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 521 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4000 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 522 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4006 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 523 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4012 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 524 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4018 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 525 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4024 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 529 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4030 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 530 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SIMPLE_TYPE_NESTED, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4036 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 531 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SIMPLE_TYPE_CC, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4042 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 532 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CHAR, -1, (yyval)->u.leaf ); }
#line 4048 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 533 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( WCHAR_T, -1, (yyval)->u.leaf ); }
#line 4054 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 534 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BOOL, -1, (yyval)->u.leaf ); }
#line 4060 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 535 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SHORT, -1, (yyval)->u.leaf ); }
#line 4066 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 536 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INT, -1, (yyval)->u.leaf ); }
#line 4072 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 537 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( LONG, -1, (yyval)->u.leaf ); }
#line 4078 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 538 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( SIGNED, -1, (yyval)->u.leaf ); }
#line 4084 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 539 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNSIGNED, -1, (yyval)->u.leaf ); }
#line 4090 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 540 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FLOAT, -1, (yyval)->u.leaf ); }
#line 4096 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 541 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DOUBLE, -1, (yyval)->u.leaf ); }
#line 4102 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 542 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( VOID, -1, (yyval)->u.leaf ); }
#line 4108 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 546 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4114 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 547 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4120 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 548 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4126 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 552 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ELAB_TYPE_CC_NESTED, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4132 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 553 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ELAB_TYPE_CC, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4138 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 554 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ELAB_TYPE_CC_ENUM_NESTED, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4144 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 555 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ELAB_TYPE_CC_ENUM, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 4150 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 556 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ELAB_TYPE_ENUM, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4156 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 557 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ELAB_TYPENAME, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4162 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 558 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ELAB_TYPENAME_ARGS, 7, (yyvsp[-6]), (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4168 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 568 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ENUM_SPEC, 3, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]) ); }
#line 4174 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 573 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ENUM_LIST, 2, (yyvsp[-2]), (yyvsp[0]) ); }
#line 4180 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 577 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4186 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 578 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ENUM_DEF, 2, (yyvsp[-2]), (yyvsp[0]) ); }
#line 4192 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 582 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4198 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 597 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4204 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 598 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4210 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 602 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4216 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 603 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4222 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 607 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ORIG_NS_DEF, 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4228 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 611 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXTEN_NS_DEF, 5, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4234 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 615 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNNAMED_NS_DEF, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4240 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 619 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4246 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 629 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( UNNAMED_NS_DEF, 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4252 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 633 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( QUAL_CC_NS_NESTED, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4258 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 634 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( QUAL_CC_NS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4264 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 635 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( QUAL_NS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4270 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 636 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4276 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 640 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DECL_1, 5, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4282 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 641 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DECL_2, 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4288 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 642 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DECL_3, 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4294 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 643 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DECL_4, 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4300 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 644 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DECL_5, 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4306 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 648 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DIREC_1, 5, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4312 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 649 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DIREC_2, 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4318 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 650 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DIREC_3, 4, (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4324 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 651 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( USING_DIREC_4, 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4330 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 655 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 4336 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 659 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 4342 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 660 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 4348 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 668 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4354 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 669 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INIT_LIST, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4360 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 673 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INIT_DECL, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4366 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 677 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4372 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 678 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INIT_PTR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4378 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 682 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4384 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 683 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIRECT_DECL1, 4, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4390 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 684 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIRECT_DECL2, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 4396 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 685 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree(DIRECT_DECL3, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 4402 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 686 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree(DIRECT_DECL4, 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 4408 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 687 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree(DIR_CLASS_DECL1, 2, (yyvsp[-3]), (yyvsp[-1])); }
#line 4414 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 688 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree(DIR_CLASS_DECL2, 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]) ); }
#line 4420 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 689 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree(DIR_CLASS_DECL3, 4, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]) ); }
#line 4426 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 690 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree(DIRECT_DECL5, 2, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4432 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 691 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4438 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 695 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4444 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 696 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PTR_OP1, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4450 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 697 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4456 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 698 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PTR_OP2, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4462 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 699 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PTR_OP3, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4468 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 700 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PTR_OP4, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4474 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 704 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4480 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 705 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CV_SEQ, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4486 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 709 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4492 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 710 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4498 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 714 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4504 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 715 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CV_SEQ, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4510 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 716 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECL_IDN, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4516 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 717 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECL_TN, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4522 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 721 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TYPE_ID, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4528 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 725 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TYPE_SPEC, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4534 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 729 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ABS_DECL, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4540 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 730 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4546 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 734 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIR_ABS1, 4, (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4552 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 735 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIR_ABS2, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 4558 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 736 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIR_ABS3, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 4564 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 737 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIR_ABS4, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 4570 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 738 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DIR_ABS5, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 4576 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 739 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 4582 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 743 "120gram.y" /* yacc.c:1646  */
    { yyerror("Ellipses not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 4588 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 744 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4594 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 745 "120gram.y" /* yacc.c:1646  */
    { yyerror("Ellipses not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 4600 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 746 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 4606 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 747 "120gram.y" /* yacc.c:1646  */
    { yyerror("Ellipses not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 4612 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 751 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4618 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 752 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PARAM_DECL_LIST, 2, (yyvsp[-2]), (yyvsp[0]) ); }
#line 4624 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 756 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PARAM_DECL1, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4630 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 757 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PARAM_DECL2, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4636 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 758 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PARAM_DECL3, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4642 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 759 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PARAM_DECL4, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4648 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 763 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FUNC_DEF1, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4654 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 764 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FUNC_DEF2, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4660 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 765 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; unsupported_error++; fprintf(stderr, "Try not implemented in 120++.\n"); }
#line 4666 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 766 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; unsupported_error++; fprintf(stderr, "Try not implemented in 120++.\n"); }
#line 4672 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 770 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4678 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 774 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INIT, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4684 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 775 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 4690 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 779 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4696 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 780 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INIT_CLAUSE, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4702 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 781 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INIT_CLAUSE, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4708 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 785 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4714 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 786 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( INITR_LIST, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4720 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 794 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CLASS_SPEC, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4726 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 804 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CLASS, -1, (yyval)->u.leaf ); }
#line 4732 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 805 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 4738 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 806 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 4744 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 810 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEMBER_SPEC, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4750 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 811 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( ACCESS_SPEC, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4756 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 815 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEMBER_DECL2, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 4762 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 816 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4768 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 817 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4774 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 818 "120gram.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 4780 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 819 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEMBER_DECL2, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4786 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 820 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 4792 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 821 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4798 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 822 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4804 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 826 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4810 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 827 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEMBER_DECL_LIST, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4816 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 831 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4822 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 832 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECLARATOR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4828 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 833 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECLARATOR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4834 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 834 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DECLARATOR, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4840 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 847 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONST_INIT, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4846 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 855 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BASE_CLAUSE, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4852 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 859 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4858 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 860 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BASE_SPEC_LIST, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4864 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 864 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BASE_SPEC1, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4870 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 865 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BASE_SPEC2, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4876 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 866 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BASE_SPEC3, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4882 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 867 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4888 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 868 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-4]); }
#line 4894 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 869 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]); }
#line 4900 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 870 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]); }
#line 4906 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 871 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 4912 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 872 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]); }
#line 4918 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 873 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 4924 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 874 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BASE_SPEC4, 4, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4930 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 875 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BASE_SPEC5, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 4936 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 879 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4942 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 880 "120gram.y" /* yacc.c:1646  */
    { yyerror("Protected type not supported in 120++.\n"); (yyval) = NULL; unsupported_error++; }
#line 4948 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 881 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4954 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 889 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONV_FUNC, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4960 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 893 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONV_TYPE, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4966 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 897 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CONV_DECL, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4972 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 901 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( CTOR_INIT, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 4978 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 905 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 4984 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 906 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEM_INIT_LIST, 3, (yyvsp[-2]), (yyvsp[0]) ); }
#line 4990 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 910 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEM_INIT, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 4996 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 914 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEM_INIT_ID1, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 5002 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 915 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEM_INIT_ID2, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5008 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 916 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( MEM_INIT_ID3, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5014 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 917 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5020 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 918 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5026 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 926 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( OP_FUNC, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5032 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 930 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5038 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 931 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5044 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 932 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( NEW_ARRAY, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 5050 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 933 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( DELETE_ARRAY, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 5056 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 934 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5062 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 935 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5068 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 936 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5074 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 937 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5080 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 938 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5086 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 939 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5092 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 940 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5098 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 941 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5104 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 942 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5110 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 943 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5116 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 944 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5122 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 945 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5128 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 946 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5134 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 947 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5140 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 948 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5146 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 949 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5152 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 950 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5158 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 951 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5164 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 952 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5170 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 953 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5176 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 954 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5182 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 955 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5188 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 956 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5194 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 957 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5200 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 958 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5206 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 959 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5212 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 960 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5218 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 961 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5224 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 962 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5230 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 963 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5236 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 964 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5242 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 965 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5248 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 966 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5254 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 967 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5260 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 968 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5266 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 969 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5272 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 970 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( PARENS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5278 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 971 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( BRACKETS, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5284 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 979 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5290 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 983 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5296 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 984 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5302 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 988 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5308 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 989 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5314 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 993 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5320 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 994 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5326 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 995 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5332 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 996 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5338 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 997 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5344 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 998 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5350 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 1002 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); (yyval) = NULL; }
#line 5356 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 1006 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++:\n"); unsupported_error++; (yyval) = NULL; }
#line 5362 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 1007 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported in 120++.\n"); unsupported_error++; (yyval) = NULL; }
#line 5368 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 1011 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported."); unsupported_error++; (yyval) = NULL; }
#line 5374 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 1012 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported."); unsupported_error++; (yyval) = NULL; }
#line 5380 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 1013 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported."); unsupported_error++; (yyval) = NULL; }
#line 5386 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 1017 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported."); unsupported_error++; (yyval) = NULL; }
#line 5392 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 1021 "120gram.y" /* yacc.c:1646  */
    { yyerror("Templates not supported."); (yyval) = NULL; }
#line 5398 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 1029 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TRY_BLOCK, 2, (yyvsp[-2]), (yyvsp[-1]) ); }
#line 5404 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 1033 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( FUNC_TRY_BLOCK, 3, (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]) ); }
#line 5410 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 1037 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( HANDLER_SEQ, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5416 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 1041 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( HANDLER, 3, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]) ); }
#line 5422 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 1045 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXCEP_DECL1, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5428 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 1046 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXCEP_DECL2, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5434 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 1047 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5440 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 1048 "120gram.y" /* yacc.c:1646  */
    { yyerror("Ellipsis not supported."); (yyval) = NULL; }
#line 5446 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 1052 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( THROW_EXPR, 2, (yyvsp[-1]), (yyvsp[0]) ); }
#line 5452 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 1056 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( EXCEP_SPEC, 2, (yyvsp[-3]), (yyvsp[-1]) ); }
#line 5458 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 1060 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5464 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 1061 "120gram.y" /* yacc.c:1646  */
    { (yyval) = alctree( TRY_BLOCK, 3, (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]) ); }
#line 5470 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 1070 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5476 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 1075 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5482 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 1080 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5488 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 1085 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5494 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 1090 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5500 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 1095 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5506 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 1100 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5512 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 1105 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5518 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 1110 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5524 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 1115 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5530 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 1120 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5536 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 1125 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5542 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 1130 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5548 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 1135 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5554 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 1140 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5560 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 1145 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5566 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 1150 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5572 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 1155 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5578 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 1160 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5584 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 1165 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5590 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 1170 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5596 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 1175 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5602 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 1180 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5608 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 1185 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5614 "120gram.tab.c" /* yacc.c:1646  */
    break;

  case 506:
#line 1190 "120gram.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5620 "120gram.tab.c" /* yacc.c:1646  */
    break;


#line 5624 "120gram.tab.c" /* yacc.c:1646  */
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
#line 1193 "120gram.y" /* yacc.c:1906  */


static void
yyerror(char *s)
{
    unsupported_error++;
    fprintf(stderr, "%d: %s\n", lineno, s);
}
