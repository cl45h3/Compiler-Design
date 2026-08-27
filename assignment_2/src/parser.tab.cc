/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BOOL = 258,
     BREAK = 259,
     CASE = 260,
     CHAR = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     DO = 265,
     DOUBLE = 266,
     ELSE = 267,
     EXTERN = 268,
     FLOAT = 269,
     FOR = 270,
     FRIEND = 271,
     GOTO = 272,
     IF = 273,
     INLINE = 274,
     INT = 275,
     LONG = 276,
     LONG_LONG = 277,
     NULLPTR = 278,
     OPERATOR = 279,
     RETURN = 280,
     SHORT = 281,
     SIGNED = 282,
     SIZEOF = 283,
     STATIC = 284,
     STRUCT = 285,
     SWITCH = 286,
     TEMPLATE = 287,
     TYPENAME = 288,
     TYPEDEF = 289,
     UNSIGNED = 290,
     VOID = 291,
     WHILE = 292,
     CLASS = 293,
     NEW = 294,
     DELETE = 295,
     PUBLIC = 296,
     PRIVATE = 297,
     PROTECTED = 298,
     UNTIL = 299,
     ENUM = 300,
     UNION = 301,
     AUTO = 302,
     REGISTER = 303,
     VOLATILE = 304,
     THIS = 305,
     IDENTIFIER = 306,
     TYPE_NAME = 307,
     INTEGER_LITERAL = 308,
     FLOAT_LITERAL = 309,
     EXPONENT_NUMBER_LITERAL = 310,
     HEXADECIMAL_LITERAL = 311,
     BINARY_LITERAL = 312,
     BOOLEAN_LITERAL = 313,
     STRING_LITERAL = 314,
     CHAR_LITERAL = 315,
     PRINTF_FUNCTION = 316,
     SCANF_FUNCTION = 317,
     MALLOC_FUNCTION = 318,
     CALLOC_FUNCTION = 319,
     REALLOC_FUNCTION = 320,
     FREE_FUNCTION = 321,
     PP_INCLUDE = 322,
     HEADER_NAME = 323,
     PP_DEFINE = 324,
     INC = 325,
     DEC = 326,
     PLUS = 327,
     MINUS = 328,
     STAR = 329,
     SLASH = 330,
     PERCENT = 331,
     ADD_ASSIGN = 332,
     SUB_ASSIGN = 333,
     MUL_ASSIGN = 334,
     DIV_ASSIGN = 335,
     MOD_ASSIGN = 336,
     ASSIGN = 337,
     EQ = 338,
     NE = 339,
     LE = 340,
     GE = 341,
     LT = 342,
     GT = 343,
     ANDAND = 344,
     OROR = 345,
     NOT = 346,
     SHL_ASSIGN = 347,
     SHR_ASSIGN = 348,
     SHL = 349,
     SHR = 350,
     AND_ASSIGN = 351,
     OR_ASSIGN = 352,
     XOR_ASSIGN = 353,
     BITAND = 354,
     BITOR = 355,
     BITXOR = 356,
     BITNOT = 357,
     ARROW = 358,
     SCOPE = 359,
     SEMICOLON = 360,
     COMMA = 361,
     LEFT_PAREN = 362,
     RIGHT_PAREN = 363,
     LEFT_BRACE = 364,
     RIGHT_BRACE = 365,
     LEFT_BRACKET = 366,
     RIGHT_BRACKET = 367,
     COLON = 368,
     QUESTION_MARK = 369,
     HASH = 370,
     DOT = 371,
     ELLIPSIS = 372,
     MALFORMED_DIRECTIVE = 373,
     UNARY = 374,
     UMINUS = 375,
     LOWER_THAN_ELSE = 376
   };
#endif
/* Tokens.  */
#define BOOL 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define EXTERN 268
#define FLOAT 269
#define FOR 270
#define FRIEND 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define LONG_LONG 277
#define NULLPTR 278
#define OPERATOR 279
#define RETURN 280
#define SHORT 281
#define SIGNED 282
#define SIZEOF 283
#define STATIC 284
#define STRUCT 285
#define SWITCH 286
#define TEMPLATE 287
#define TYPENAME 288
#define TYPEDEF 289
#define UNSIGNED 290
#define VOID 291
#define WHILE 292
#define CLASS 293
#define NEW 294
#define DELETE 295
#define PUBLIC 296
#define PRIVATE 297
#define PROTECTED 298
#define UNTIL 299
#define ENUM 300
#define UNION 301
#define AUTO 302
#define REGISTER 303
#define VOLATILE 304
#define THIS 305
#define IDENTIFIER 306
#define TYPE_NAME 307
#define INTEGER_LITERAL 308
#define FLOAT_LITERAL 309
#define EXPONENT_NUMBER_LITERAL 310
#define HEXADECIMAL_LITERAL 311
#define BINARY_LITERAL 312
#define BOOLEAN_LITERAL 313
#define STRING_LITERAL 314
#define CHAR_LITERAL 315
#define PRINTF_FUNCTION 316
#define SCANF_FUNCTION 317
#define MALLOC_FUNCTION 318
#define CALLOC_FUNCTION 319
#define REALLOC_FUNCTION 320
#define FREE_FUNCTION 321
#define PP_INCLUDE 322
#define HEADER_NAME 323
#define PP_DEFINE 324
#define INC 325
#define DEC 326
#define PLUS 327
#define MINUS 328
#define STAR 329
#define SLASH 330
#define PERCENT 331
#define ADD_ASSIGN 332
#define SUB_ASSIGN 333
#define MUL_ASSIGN 334
#define DIV_ASSIGN 335
#define MOD_ASSIGN 336
#define ASSIGN 337
#define EQ 338
#define NE 339
#define LE 340
#define GE 341
#define LT 342
#define GT 343
#define ANDAND 344
#define OROR 345
#define NOT 346
#define SHL_ASSIGN 347
#define SHR_ASSIGN 348
#define SHL 349
#define SHR 350
#define AND_ASSIGN 351
#define OR_ASSIGN 352
#define XOR_ASSIGN 353
#define BITAND 354
#define BITOR 355
#define BITXOR 356
#define BITNOT 357
#define ARROW 358
#define SCOPE 359
#define SEMICOLON 360
#define COMMA 361
#define LEFT_PAREN 362
#define RIGHT_PAREN 363
#define LEFT_BRACE 364
#define RIGHT_BRACE 365
#define LEFT_BRACKET 366
#define RIGHT_BRACKET 367
#define COLON 368
#define QUESTION_MARK 369
#define HASH 370
#define DOT 371
#define ELLIPSIS 372
#define MALFORMED_DIRECTIVE 373
#define UNARY 374
#define UMINUS 375
#define LOWER_THAN_ELSE 376




/* Copy the first part of user declarations.  */
#line 1 "src/parser.y"

/* Assignment 2: Bison syntax analyzer.  The grammar deliberately checks
 * syntax only: names, types, and runtime meanings are outside its scope. */
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <set>

using std::cout; using std::cerr; using std::endl; using std::string;

struct SyntaxError { string message; int lineNumber; int column; };
extern int tokenStartLine, tokenStartColumn, currentLineNumber;
extern void registerTypeName(const char* name);
extern bool isKnownTypeName(const char* name);
extern void printTokenTable();
extern void printLexicalErrors();
extern size_t lexicalErrorCount();
extern FILE* yyin;
extern int yylex();
void yyerror(const char* message);

std::vector<SyntaxError> syntaxErrorList;
static void addSyntaxError(const char* message) {
    /* Bison can call yyerror more than once at the same recovery point. */
    if (!syntaxErrorList.empty() && syntaxErrorList.back().lineNumber == tokenStartLine &&
        syntaxErrorList.back().column == tokenStartColumn) return;
    syntaxErrorList.push_back({message, tokenStartLine, tokenStartColumn});
}
void reportSyntaxErrorAt(int line, int column, const char* message) {
    syntaxErrorList.push_back({message, line, column});
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 37 "src/parser.y"
{ char* text; }
/* Line 193 of yacc.c.  */
#line 376 "src/parser.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 389 "src/parser.tab.cc"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNRULES -- Number of states.  */
#define YYNSTATES  514

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   376

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    30,    33,    37,    40,    43,
      46,    52,    58,    61,    64,    67,    70,    77,    83,    84,
      88,    89,    91,    93,    95,    97,    99,   101,   106,   107,
     110,   113,   115,   117,   119,   121,   123,   125,   127,   129,
     131,   137,   143,   148,   154,   159,   165,   170,   171,   173,
     175,   179,   183,   189,   193,   197,   201,   206,   208,   212,
     214,   218,   222,   223,   226,   228,   230,   232,   233,   236,
     238,   240,   242,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   282,   284,   286,   288,   290,   293,   296,   299,
     302,   305,   308,   311,   313,   317,   319,   323,   328,   330,
     334,   335,   337,   339,   343,   346,   350,   352,   353,   355,
     357,   360,   361,   363,   366,   367,   369,   372,   374,   376,
     379,   383,   388,   396,   400,   405,   410,   416,   423,   425,
     427,   429,   431,   433,   435,   437,   439,   441,   444,   447,
     448,   450,   451,   453,   455,   459,   463,   465,   468,   470,
     474,   475,   477,   479,   482,   484,   486,   488,   490,   492,
     494,   496,   498,   500,   503,   506,   512,   520,   526,   532,
     538,   546,   554,   564,   565,   567,   570,   574,   577,   580,
     584,   588,   593,   597,   598,   600,   602,   606,   608,   612,
     614,   616,   618,   620,   622,   624,   626,   628,   630,   632,
     634,   636,   642,   644,   646,   650,   652,   656,   658,   662,
     664,   668,   670,   674,   676,   680,   684,   686,   690,   694,
     698,   702,   704,   708,   712,   714,   718,   722,   724,   728,
     732,   736,   738,   743,   746,   748,   751,   754,   757,   760,
     763,   766,   769,   772,   775,   780,   783,   789,   795,   798,
     803,   805,   810,   815,   819,   823,   826,   829,   830,   832,
     834,   838,   840,   844,   846,   848,   850,   852,   854,   856,
     858,   860,   862,   864,   866,   868,   870,   872,   874,   876,
     880,   882,   891,   892,   894,   896,   900,   902,   905,   907,
     909,   910,   913,   915,   919
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     123,     0,    -1,    -1,   123,   124,    -1,   125,    -1,   145,
      -1,   147,    -1,   146,    -1,   148,    -1,   132,    -1,   140,
      -1,   142,    -1,   141,    -1,   126,    -1,     1,   110,    -1,
      67,    68,    -1,    69,    51,   197,    -1,    69,    51,    -1,
      51,   118,    -1,   127,   124,    -1,    32,    87,    33,    51,
      88,    -1,    32,    87,    38,    51,    88,    -1,    38,   221,
      -1,    30,   221,    -1,    45,   221,    -1,    46,   221,    -1,
     128,   133,   109,   137,   110,   105,    -1,   128,   133,   109,
     137,   110,    -1,    -1,   113,   134,   136,    -1,    -1,   135,
      -1,    41,    -1,    42,    -1,    43,    -1,   220,    -1,    52,
      -1,   136,   106,   134,   220,    -1,    -1,   137,   138,    -1,
     135,   113,    -1,   145,    -1,   147,    -1,   146,    -1,   148,
      -1,   132,    -1,   140,    -1,   142,    -1,   141,    -1,   139,
      -1,   220,   107,   178,   108,   181,    -1,   129,   109,   137,
     110,   105,    -1,   129,   109,   137,   110,    -1,   131,   109,
     137,   110,   105,    -1,   131,   109,   137,   110,    -1,   130,
     109,   143,   110,   105,    -1,   130,   109,   143,   110,    -1,
      -1,   144,    -1,   221,    -1,   221,    82,   197,    -1,   144,
     106,   221,    -1,   144,   106,   221,    82,   197,    -1,   151,
     174,   181,    -1,   151,   160,   105,    -1,   151,   174,   105,
      -1,    34,   151,   149,   105,    -1,   150,    -1,   149,   106,
     150,    -1,   165,    -1,   165,    82,   162,    -1,   152,   159,
     154,    -1,    -1,   152,   153,    -1,   158,    -1,   156,    -1,
     157,    -1,    -1,   154,   155,    -1,    26,    -1,    21,    -1,
      22,    -1,    27,    -1,    35,    -1,     7,    -1,    49,    -1,
      29,    -1,    13,    -1,    48,    -1,    16,    -1,    19,    -1,
       7,    -1,    49,    -1,    36,    -1,     6,    -1,    20,    -1,
      14,    -1,    11,    -1,     3,    -1,    47,    -1,    26,    -1,
      21,    -1,    22,    -1,    27,    -1,    35,    -1,    52,    -1,
      30,   221,    -1,    30,    52,    -1,    45,   221,    -1,    45,
      52,    -1,    46,   221,    -1,    46,    52,    -1,    33,   220,
      -1,   161,    -1,   160,   106,   161,    -1,   165,    -1,   165,
      82,   162,    -1,   165,   107,   212,   108,    -1,   194,    -1,
     109,   163,   110,    -1,    -1,   164,    -1,   162,    -1,   164,
     106,   162,    -1,   164,   106,    -1,   168,   166,   172,    -1,
     173,    -1,    -1,   167,    -1,    99,    -1,    99,   167,    -1,
      -1,   169,    -1,    74,   170,    -1,    -1,   169,    -1,   171,
     170,    -1,   158,    -1,   220,    -1,    24,   176,    -1,   107,
     165,   108,    -1,   172,   111,   177,   112,    -1,   107,   169,
     221,   108,   107,   178,   108,    -1,   168,   166,   175,    -1,
     221,   107,   178,   108,    -1,   220,   107,   178,   108,    -1,
      24,   176,   107,   178,   108,    -1,   107,   174,   108,   107,
     178,   108,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    82,    -1,    83,    -1,    87,    -1,    88,
      -1,   111,   112,    -1,   107,   108,    -1,    -1,   197,    -1,
      -1,   179,    -1,   180,    -1,   179,   106,   180,    -1,   179,
     106,   117,    -1,   117,    -1,   151,   165,    -1,   151,    -1,
     109,   182,   110,    -1,    -1,   183,    -1,   184,    -1,   183,
     184,    -1,   185,    -1,   146,    -1,   148,    -1,   181,    -1,
     186,    -1,   187,    -1,   188,    -1,   190,    -1,   191,    -1,
       1,   105,    -1,   192,   105,    -1,    18,   107,   193,   108,
     185,    -1,    18,   107,   193,   108,   185,    12,   185,    -1,
      31,   107,   193,   108,   185,    -1,    37,   107,   193,   108,
     185,    -1,    44,   107,   193,   108,   185,    -1,    10,   185,
      37,   107,   193,   108,   105,    -1,    10,   185,    44,   107,
     193,   108,   105,    -1,    15,   107,   189,   105,   192,   105,
     192,   108,   185,    -1,    -1,   193,    -1,   151,   160,    -1,
      17,   221,   105,    -1,     8,   105,    -1,     4,   105,    -1,
      25,   192,   105,    -1,   221,   113,   185,    -1,     5,   197,
     113,   185,    -1,     9,   113,   185,    -1,    -1,   193,    -1,
     194,    -1,   193,   106,   194,    -1,   196,    -1,   210,   195,
     194,    -1,    82,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    96,    -1,    97,    -1,    98,    -1,
      92,    -1,    93,    -1,   198,    -1,   198,   114,   193,   113,
     196,    -1,   196,    -1,   199,    -1,   198,    90,   199,    -1,
     200,    -1,   199,    89,   200,    -1,   201,    -1,   200,   100,
     201,    -1,   202,    -1,   201,   101,   202,    -1,   203,    -1,
     202,    99,   203,    -1,   204,    -1,   203,    83,   204,    -1,
     203,    84,   204,    -1,   205,    -1,   204,    87,   205,    -1,
     204,    88,   205,    -1,   204,    85,   205,    -1,   204,    86,
     205,    -1,   206,    -1,   205,    94,   206,    -1,   205,    95,
     206,    -1,   207,    -1,   206,    72,   207,    -1,   206,    73,
     207,    -1,   208,    -1,   207,    74,   208,    -1,   207,    75,
     208,    -1,   207,    76,   208,    -1,   210,    -1,   107,   209,
     108,   208,    -1,   151,   168,    -1,   211,    -1,    70,   210,
      -1,    71,   210,    -1,    99,   208,    -1,    74,   208,    -1,
      72,   208,    -1,    73,   208,    -1,    91,   208,    -1,   102,
     208,    -1,    28,   210,    -1,    28,   107,   209,   108,    -1,
      39,   209,    -1,    39,   209,   107,   212,   108,    -1,    39,
     209,   111,   193,   112,    -1,    40,   208,    -1,    40,   111,
     112,   208,    -1,   214,    -1,   211,   111,   193,   112,    -1,
     211,   107,   212,   108,    -1,   211,   116,   221,    -1,   211,
     103,   221,    -1,   211,    70,    -1,   211,    71,    -1,    -1,
     213,    -1,   194,    -1,   213,   106,   194,    -1,    51,    -1,
      51,   104,   221,    -1,    53,    -1,    54,    -1,    55,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,
      23,    -1,    50,    -1,    61,    -1,    62,    -1,    63,    -1,
      64,    -1,    65,    -1,    66,    -1,   107,   193,   108,    -1,
     215,    -1,   111,   216,   112,   107,   178,   108,   219,   181,
      -1,    -1,   217,    -1,   218,    -1,   217,   106,   218,    -1,
     221,    -1,    99,   221,    -1,    82,    -1,    99,    -1,    -1,
     103,   209,    -1,   221,    -1,   220,   104,   221,    -1,    51,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    75,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    91,    95,    96,    97,    98,   102,
     105,   106,   111,   114,   117,   120,   124,   125,   127,   129,
     131,   133,   136,   136,   136,   139,   140,   141,   143,   145,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     160,   164,   165,   168,   169,   172,   173,   175,   176,   179,
     180,   181,   182,   186,   190,   193,   196,   199,   200,   203,
     204,   208,   210,   212,   215,   215,   215,   217,   219,   222,
     222,   222,   222,   222,   222,   222,   225,   225,   225,   225,
     228,   231,   231,   234,   234,   234,   234,   234,   234,   234,
     235,   235,   235,   235,   235,   236,   237,   237,   238,   238,
     239,   239,   240,   244,   245,   248,   249,   250,   253,   254,
     256,   257,   260,   261,   262,   266,   267,   269,   270,   273,
     273,   275,   277,   281,   283,   285,   286,   289,   292,   293,
     294,   295,   300,   304,   307,   308,   309,   310,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   315,
     316,   318,   319,   322,   323,   324,   325,   328,   329,   333,
     335,   336,   339,   340,   343,   344,   345,   349,   350,   351,
     352,   353,   354,   355,   358,   361,   362,   363,   366,   367,
     368,   369,   370,   372,   374,   375,   378,   379,   380,   381,
     384,   385,   386,   389,   390,   393,   394,   397,   398,   401,
     401,   401,   401,   401,   401,   402,   402,   402,   402,   402,
     405,   406,   409,   412,   412,   415,   415,   418,   418,   421,
     421,   424,   424,   427,   427,   427,   430,   431,   431,   432,
     432,   435,   435,   435,   438,   438,   438,   441,   441,   441,
     441,   444,   445,   448,   451,   452,   452,   453,   453,   453,
     453,   454,   454,   455,   455,   456,   456,   457,   458,   458,
     461,   462,   463,   464,   465,   466,   466,   468,   469,   472,
     473,   476,   477,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   479,   479,   479,   479,   479,   479,   480,
     481,   484,   486,   487,   490,   490,   493,   493,   493,   493,
     495,   496,   499,   500,   503
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTERN", "FLOAT", "FOR",
  "FRIEND", "GOTO", "IF", "INLINE", "INT", "LONG", "LONG_LONG", "NULLPTR",
  "OPERATOR", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT",
  "SWITCH", "TEMPLATE", "TYPENAME", "TYPEDEF", "UNSIGNED", "VOID", "WHILE",
  "CLASS", "NEW", "DELETE", "PUBLIC", "PRIVATE", "PROTECTED", "UNTIL",
  "ENUM", "UNION", "AUTO", "REGISTER", "VOLATILE", "THIS", "IDENTIFIER",
  "TYPE_NAME", "INTEGER_LITERAL", "FLOAT_LITERAL",
  "EXPONENT_NUMBER_LITERAL", "HEXADECIMAL_LITERAL", "BINARY_LITERAL",
  "BOOLEAN_LITERAL", "STRING_LITERAL", "CHAR_LITERAL", "PRINTF_FUNCTION",
  "SCANF_FUNCTION", "MALLOC_FUNCTION", "CALLOC_FUNCTION",
  "REALLOC_FUNCTION", "FREE_FUNCTION", "PP_INCLUDE", "HEADER_NAME",
  "PP_DEFINE", "INC", "DEC", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ASSIGN", "EQ", "NE", "LE", "GE", "LT", "GT", "ANDAND", "OROR", "NOT",
  "SHL_ASSIGN", "SHR_ASSIGN", "SHL", "SHR", "AND_ASSIGN", "OR_ASSIGN",
  "XOR_ASSIGN", "BITAND", "BITOR", "BITXOR", "BITNOT", "ARROW", "SCOPE",
  "SEMICOLON", "COMMA", "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE",
  "RIGHT_BRACE", "LEFT_BRACKET", "RIGHT_BRACKET", "COLON", "QUESTION_MARK",
  "HASH", "DOT", "ELLIPSIS", "MALFORMED_DIRECTIVE", "UNARY", "UMINUS",
  "LOWER_THAN_ELSE", "$accept", "translation_unit", "external_declaration",
  "preprocessor_directive", "template_declaration", "template_head",
  "class_head", "struct_head", "enum_head", "union_head",
  "class_declaration", "inheritance_opt", "access_specifier_opt",
  "access_specifier", "base_class_list", "member_list",
  "member_declaration", "constructor_definition", "struct_declaration",
  "union_declaration", "enum_declaration", "enumerator_list_opt",
  "enumerator_list", "function_definition", "declaration",
  "function_declaration", "typedef_declaration", "typedef_declarator_list",
  "typedef_declarator", "declaration_specifiers", "declaration_prefix_opt",
  "declaration_prefix", "type_suffixes", "type_suffix",
  "storage_class_specifier", "function_specifier", "type_qualifier",
  "type_specifier", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list_opt", "initializer_list", "declarator",
  "reference_opt", "reference", "pointer_opt", "pointer",
  "pointer_after_star", "type_qualifier_list", "direct_declarator",
  "function_pointer_declarator", "function_declarator",
  "function_direct_declarator", "overload_operator",
  "constant_expression_opt", "parameter_list_opt", "parameter_list",
  "parameter_declaration", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "statement", "expression_statement",
  "selection_statement", "iteration_statement", "for_init_opt",
  "jump_statement", "labeled_statement", "expression_opt", "expression",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "constant_expression", "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "type_id", "unary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "primary_expression", "lambda_expression", "capture_list_opt",
  "capture_list", "capture_item", "lambda_return_opt", "qualified_name",
  "named_identifier", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   125,   125,   125,   125,   126,
     127,   127,   128,   129,   130,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   135,   136,   136,   136,   137,   137,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   144,   144,   145,   146,   147,   148,   149,   149,   150,
     150,   151,   152,   152,   153,   153,   153,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   156,   156,   156,   156,
     157,   158,   158,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   160,   160,   161,   161,   161,   162,   162,
     163,   163,   164,   164,   164,   165,   165,   166,   166,   167,
     167,   168,   168,   169,   170,   170,   170,   171,   172,   172,
     172,   172,   173,   174,   175,   175,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   177,
     177,   178,   178,   179,   179,   179,   179,   180,   180,   181,
     182,   182,   183,   183,   184,   184,   184,   185,   185,   185,
     185,   185,   185,   185,   186,   187,   187,   187,   188,   188,
     188,   188,   188,   189,   189,   189,   190,   190,   190,   190,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     196,   196,   197,   198,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   203,   204,   204,   204,   204,
     204,   205,   205,   205,   206,   206,   206,   207,   207,   207,
     207,   208,   208,   209,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     211,   211,   211,   211,   211,   211,   211,   212,   212,   213,
     213,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   215,   216,   216,   217,   217,   218,   218,   218,   218,
     219,   219,   220,   220,   221
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     2,     2,     2,
       5,     5,     2,     2,     2,     2,     6,     5,     0,     3,
       0,     1,     1,     1,     1,     1,     1,     4,     0,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     4,     5,     4,     5,     4,     0,     1,     1,
       3,     3,     5,     3,     3,     3,     4,     1,     3,     1,
       3,     3,     0,     2,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     1,     3,     4,     1,     3,
       0,     1,     1,     3,     2,     3,     1,     0,     1,     1,
       2,     0,     1,     2,     0,     1,     2,     1,     1,     2,
       3,     4,     7,     3,     4,     4,     5,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       1,     0,     1,     1,     3,     3,     1,     2,     1,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     5,     7,     5,     5,     5,
       7,     7,     9,     0,     1,     2,     3,     2,     2,     3,
       3,     4,     3,     0,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     5,     5,     2,     4,
       1,     4,     4,     3,     3,     2,     2,     0,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     8,     0,     1,     1,     3,     1,     2,     1,     1,
       0,     2,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     3,     4,    13,     0,    28,     0,     0,
       0,     9,    10,    12,    11,     5,     7,     6,     8,   131,
       0,    14,   314,    23,     0,   131,    22,    24,    25,    18,
      15,    17,    19,    30,     0,    38,    57,    38,   134,     0,
       0,   113,   115,   127,   132,   126,     0,    98,    94,    91,
      97,    87,    96,    89,    90,    95,   101,   102,   100,   103,
      86,     0,     0,   104,    93,     0,     0,    99,    88,    92,
     105,    73,    75,    76,    74,    77,     0,     0,     0,    67,
      69,   127,   291,     0,    72,     0,   292,   281,   283,   284,
     285,   286,   287,   288,   289,   290,   293,   294,   295,   296,
     297,   298,     0,     0,     0,     0,     0,     0,     0,     0,
      72,   302,   222,    16,   220,   223,   225,   227,   229,   231,
     233,   236,   241,   244,   247,   251,   254,   270,   300,    32,
      33,    34,     0,    31,    38,    72,     0,    58,    59,    72,
     137,   135,   133,   134,     0,    64,   131,     0,   277,   129,
       0,   128,    65,     0,    63,   107,   106,   112,   312,   109,
     108,   111,   110,    71,     0,     0,    66,   131,     0,     0,
      72,   263,   131,   265,     0,   268,     0,     0,   255,   256,
     259,   260,   258,   261,   257,   262,     0,   205,   207,     0,
     251,   308,   309,     0,   303,   304,   306,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   275,   276,     0,   277,
       0,     0,    36,    29,    35,    72,    52,    45,     0,    39,
      49,    46,    48,    47,    41,    43,    42,    44,     0,    56,
       0,     0,    54,   136,     0,   114,   120,   116,   118,   279,
       0,   278,   130,     0,   131,   125,   143,   138,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,     0,
       0,     0,   281,   175,   176,   131,   177,     0,     0,   172,
     174,   178,   179,   180,   181,   182,     0,   204,     0,     0,
      84,    80,    81,    79,    82,    83,    85,    78,    20,    21,
      68,    70,     0,   131,   138,     0,   253,   277,     0,     0,
     282,     0,   299,     0,   210,   211,   212,   213,   214,   209,
     218,   219,   215,   216,   217,     0,   307,     0,     0,   224,
       0,   226,   228,   230,   232,   234,   235,   239,   240,   237,
     238,   242,   243,   245,   246,   248,   249,   250,   274,     0,
       0,   273,    30,    27,    51,    40,    72,    55,    61,    60,
      53,     0,   122,     0,   121,   117,     0,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,   139,     0,
       0,   159,    72,    72,   183,   198,     0,   197,     0,     0,
      72,     0,     0,     0,     0,     0,     0,   169,   173,   184,
       0,   313,   139,   264,     0,     0,   269,   206,   252,   208,
      72,   305,     0,   272,   271,     0,    26,   166,   131,     0,
     162,   163,     0,    72,   119,   124,   280,   158,   157,    72,
     140,     0,     0,   160,     0,     0,     0,   202,     0,     0,
     131,     0,   194,   196,     0,   199,     0,     0,     0,   200,
     266,   267,     0,   221,    37,   167,     0,    72,    62,     0,
     123,     0,    72,   141,   145,   144,   201,     0,     0,   195,
     203,     0,     0,     0,     0,   310,    50,   165,   164,   142,
     146,     0,     0,     0,     0,   185,   187,   188,   189,    72,
       0,   147,     0,     0,   203,     0,   311,   301,   190,   191,
       0,   186,     0,   192
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    14,    15,    16,    17,    18,    19,    20,
     237,    44,   142,   238,   233,   145,   239,   240,   241,   242,
     243,   146,   147,   244,   245,   246,   247,    88,    89,   428,
      30,    81,   173,   307,    82,    83,   150,    85,    50,    51,
     257,   373,   374,    52,   160,   161,    91,    54,   152,   153,
     265,    55,    56,   266,   388,   442,   429,   430,   431,   286,
     287,   288,   289,   290,   291,   292,   293,   451,   294,   295,
     296,   297,   197,   335,   198,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   183,   200,   136,
     260,   261,   137,   138,   203,   204,   205,   500,   248,   298
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -352
static const yytype_int16 yypact[] =
{
    -352,  1127,  -352,   -64,    50,   -33,  -352,    50,    50,    50,
     -44,    37,    69,  -352,  -352,  -352,  1179,    30,    28,    45,
      51,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,   -42,
    1231,  -352,  -352,  -352,    94,   -42,  -352,  -352,  -352,  -352,
    -352,   832,  -352,   109,    66,  -352,    50,  -352,    23,    73,
      24,  -352,   -51,   102,  -352,  -352,    26,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,   167,    50,  -352,  -352,   178,   186,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,   112,   153,   136,  -352,
     126,   102,  -352,   896,  -352,   960,  -352,   117,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  1024,  1024,   832,   832,   832,   832,   832,   832,
     832,    -4,  -352,  -352,   -57,   142,   133,   147,   164,     3,
      80,   156,   194,   110,  -352,  -352,   -26,  -352,  -352,  -352,
    -352,  -352,   207,  -352,  -352,   219,   145,   163,   192,   325,
    -352,  -352,  -352,    23,    50,  -352,   -42,   397,   832,   102,
       1,  -352,  -352,   518,  -352,  -352,  -352,   174,  -352,  -352,
    -352,  -352,  -352,    77,   191,   195,  -352,   -42,   397,    16,
     832,  -352,    73,    29,   -16,  -352,    50,   832,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,    49,  -352,  -352,   177,
    1192,  -352,    50,   179,   187,  -352,  -352,   832,   832,   832,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   832,   832,   832,  -352,  -352,    50,   832,
     832,    50,  -352,   193,   174,   449,   196,  -352,   184,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,    34,   197,
      50,   832,   199,  -352,   190,  -352,   397,  -352,  -352,  -352,
     198,   218,  -352,   321,   -42,   189,  -352,    38,   220,   221,
     223,   832,   225,   222,   704,   227,    50,   229,   832,   230,
     231,   232,     2,  -352,  -352,   -42,  -352,   233,   629,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,   235,   238,   228,    50,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,   321,   -42,   174,   237,  -352,   832,   832,   832,
    -352,   832,  -352,   832,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,   832,  -352,   239,    -4,   142,
      -6,   133,   147,   164,     3,    80,    80,   156,   156,   156,
     156,   194,   194,   110,   110,  -352,  -352,  -352,  -352,   240,
      12,  -352,   109,   242,  -352,  -352,     5,  -352,   268,  -352,
    -352,   244,  -352,   243,   246,  -352,   832,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,   249,   252,   247,   250,
     257,   832,     5,     5,  -352,  -352,   259,  -352,   704,    65,
     768,   269,   832,   270,   832,   832,   832,  -352,  -352,  -352,
     704,  -352,  -352,  -352,   265,    22,  -352,  -352,  -352,  -352,
       5,  -352,   832,  -352,  -352,    50,  -352,  -352,   -47,   271,
     272,  -352,   832,     5,  -352,   397,  -352,  -352,  -352,     5,
    -352,   273,   274,  -352,   275,   276,   704,  -352,   278,   280,
     -42,   277,   238,  -352,    64,  -352,    70,    74,    81,  -352,
    -352,  -352,   281,  -352,   174,  -352,   279,   260,  -352,   282,
    -352,   284,     5,  -352,  -352,  -352,  -352,   832,   832,   292,
     832,   704,   704,   704,   704,   297,  -352,  -352,  -352,  -352,
    -352,   294,    86,    99,   300,   394,  -352,  -352,  -352,  -352,
     279,  -352,   305,   307,   832,   704,  -352,  -352,  -352,  -352,
     306,  -352,   704,  -352
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,   399,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
      33,  -352,    56,   -37,  -352,   -27,  -352,  -352,    35,    42,
      47,  -352,  -352,    52,     6,    54,     8,  -352,   236,    -1,
    -352,  -352,  -352,  -352,  -352,  -352,   386,  -352,   -28,   263,
    -162,  -352,  -352,   -21,   332,   267,    -8,   -20,   285,  -352,
    -352,  -352,   160,  -352,   118,  -352,  -351,  -352,   -34,   -55,
    -352,  -352,   146,  -237,  -352,  -352,  -352,  -352,  -352,  -352,
    -252,  -116,  -140,  -352,   -31,  -232,  -352,   234,   255,   256,
     254,   261,    58,   -19,    57,    60,   108,  -118,    98,  -352,
    -206,  -352,  -352,  -352,  -352,  -352,   101,  -352,   -69,     4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -315
static const yytype_int16 yytable[] =
{
      29,   164,   199,   167,   196,    35,   143,    26,    33,    28,
     122,    36,    37,    38,    90,    29,   311,   258,   259,   369,
     149,    53,    26,   359,    28,   263,   403,    48,   151,   154,
      59,   157,    48,   207,    21,    32,    22,   399,   258,   396,
     312,   444,   445,    23,   226,   227,    31,    32,    24,    21,
     148,    22,    32,    25,    34,    27,   158,   208,    23,  -168,
      49,  -168,   315,    24,   196,    49,   201,    32,    25,   462,
      27,   196,    79,   234,    39,   166,   168,   228,   201,   170,
     172,   229,   469,   202,   300,   230,   213,   214,   471,   259,
     231,   267,   340,   182,   372,   202,   319,    48,   301,   302,
     321,    32,   448,   303,   304,    40,   186,   422,   264,   449,
     314,   414,   305,  -161,   360,  -314,   258,   235,   321,   182,
      41,   491,   427,   313,   424,   206,   306,    86,   321,   155,
     156,   162,    87,   151,   461,   163,   317,    45,   299,   135,
     318,   366,   299,    43,    29,   392,   168,    48,    29,   168,
     139,   140,   141,   168,    46,   321,    90,   322,   254,   443,
      47,   447,   285,   174,   268,   215,   216,   217,   218,   283,
     321,   284,   481,   459,   316,   144,   321,   259,   482,   182,
     321,   417,   483,   168,   223,   224,   225,   321,   206,   484,
     320,   181,   321,   135,   502,   419,   347,   348,   349,   350,
     468,   159,   415,   185,   175,   321,   336,   503,   178,   476,
     188,   189,   135,   135,   135,   135,   135,   135,    32,   165,
     122,   186,   190,   191,   192,   193,   194,   195,   494,    32,
     169,   209,   358,   210,    29,   361,   436,    32,   171,   168,
     122,   176,   177,   389,   495,   496,   497,   498,   211,     4,
     219,   220,   510,     6,   368,   249,    53,     7,    32,   232,
     139,   140,   141,   212,     8,     9,   221,   222,   511,   250,
      32,   345,   346,   470,   251,   513,   351,   352,   299,   308,
     401,   353,   354,   309,   452,   323,   454,   285,   456,   457,
     458,   337,   389,   338,   283,   258,   284,   365,   371,   362,
     391,   364,   367,   411,   370,   135,   375,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   376,   143,   394,   393,   395,   236,
     397,   355,   356,   357,   400,   398,   402,   404,   405,   406,
     409,   410,   206,   407,   321,   413,   420,   426,   423,   135,
     432,   433,   435,   434,   439,     4,   464,   437,   440,     6,
     122,   492,   493,     7,   438,   441,   139,   140,   141,   135,
       8,     9,   446,   460,   453,   455,    32,   487,   467,   466,
     472,   506,   480,   474,   475,   477,   473,   478,   163,   485,
     489,   463,   490,   377,   378,   379,   380,   381,   156,   450,
     499,   122,   501,   382,   383,   504,   505,   465,   384,   385,
     508,   486,   509,   310,   512,    42,    84,   135,   425,   255,
      92,   135,   479,   179,   390,    93,   262,   416,   386,   168,
     412,   418,   387,   488,   408,   252,    94,    95,   253,   421,
       0,   339,     0,     0,     0,   507,     0,    96,    97,     0,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   341,   343,   342,   112,   113,   114,
     115,   116,     0,   344,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     6,     0,     0,     0,     7,   117,   135,
     139,   140,   141,     0,     8,     9,   118,     0,   182,   119,
      32,     0,     0,     0,   120,     0,   256,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
     135,   -72,   270,   271,   -72,   -72,   272,   273,   274,   -72,
     135,   -72,   -72,   275,   -72,   276,   277,   -72,   -72,   -72,
     -72,    92,     0,   278,   -72,   -72,    93,   -72,   -72,   279,
       0,   -72,     6,   -72,   -72,   280,     0,    94,    95,   363,
       0,     0,   281,   -72,   -72,   -72,   -72,   -72,    96,   282,
     -72,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,   112,   113,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,     0,     0,  -203,     0,   120,     0,   163,  -170,   121,
     269,     0,   -72,   270,   271,   -72,   -72,   272,   273,   274,
     -72,     0,   -72,   -72,   275,   -72,   276,   277,   -72,   -72,
     -72,   -72,    92,     0,   278,   -72,   -72,    93,   -72,   -72,
     279,     0,   -72,     6,   -72,   -72,   280,     0,    94,    95,
       0,     0,     0,   281,   -72,   -72,   -72,   -72,   -72,    96,
     282,   -72,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,   112,
     113,   114,   115,   116,     0,   269,     0,     0,   270,   271,
       0,     0,   272,   273,   274,     0,     0,     0,     0,   275,
     117,   276,   277,     0,     0,     0,     0,    92,   118,   278,
       0,   119,    93,     0,  -203,   279,   120,     0,   163,  -171,
     121,   280,     0,    94,    95,     0,     0,     0,   281,     0,
       0,     0,     0,     0,    96,   282,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,     0,   112,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,   117,    93,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,    94,    95,  -203,
       0,   120,     0,   163,     0,   121,     0,     0,    96,    97,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,   112,   113,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,   117,
      93,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     119,    94,    95,  -193,     0,   120,     0,     0,     0,   121,
       0,     0,    96,    97,     0,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,   112,   113,   114,   115,   116,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,   117,    93,     0,     0,     0,     0,     0,
       0,   118,     0,     0,   119,    94,    95,     0,     0,   120,
       0,     0,     0,   121,     0,     0,    96,    97,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,   112,   113,   114,   115,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,   117,    93,     0,
       0,     0,     0,     0,     0,   118,     0,     0,   119,    94,
      95,     0,     0,   180,     0,     0,     0,   121,     0,     0,
      96,    97,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     0,     0,
     112,   113,   114,   115,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,   117,    93,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   119,    94,    95,     0,     0,   120,     0,     0,
       0,   184,     0,     0,    96,    97,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,     0,   112,   113,   114,   115,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,     2,     3,     0,
     -72,   187,     0,   -72,   -72,   121,     0,     0,   -72,     0,
     -72,   -72,     0,   -72,     0,     0,   -72,   -72,   -72,   -72,
       0,     0,     0,   -72,   -72,     0,   -72,     4,     0,     5,
     -72,     6,   -72,   -72,     0,     7,     0,     0,     0,     0,
       0,     0,     8,     9,   -72,   -72,   -72,     0,    10,   -72,
       3,     0,   -72,     0,     0,   -72,   -72,     0,     0,     0,
     -72,     0,   -72,   -72,    11,   -72,    12,     0,   -72,   -72,
     -72,   -72,     0,     0,     0,   -72,   -72,     0,   -72,     4,
       0,     5,   -72,     6,   -72,   -72,     0,     7,     0,     0,
       0,     0,     0,     0,     8,     9,   -72,   -72,   -72,     0,
      10,   -72,     0,     0,    57,     0,     0,    58,    59,     0,
       0,     0,    60,     0,    61,    62,    11,    63,    12,     0,
      64,    65,    66,    67,     0,     0,     0,    68,    69,     0,
      70,    71,     0,     0,    72,     0,    73,    74,     0,   324,
     325,   326,   327,   328,   329,     0,    75,    76,    77,    78,
      79,     0,     0,    80,   330,   331,     0,     0,   332,   333,
     334
};

static const yytype_int16 yycheck[] =
{
       1,    56,   120,    72,   120,     6,    43,     1,     4,     1,
      41,     7,     8,     9,    35,    16,   178,   157,   158,   251,
      47,    29,    16,   229,    16,    24,   278,    74,    48,    49,
       7,    82,    74,    90,     1,    51,     1,   274,   178,   271,
      24,   392,   393,     1,    70,    71,   110,    51,     1,    16,
      46,    16,    51,     1,    87,     1,   107,   114,    16,   106,
     107,   108,   180,    16,   180,   107,    82,    51,    16,   420,
      16,   187,    49,   142,   118,    71,    72,   103,    82,    75,
      76,   107,   433,    99,     7,   111,    83,    84,   439,   229,
     116,   160,   208,    94,   256,    99,   112,    74,    21,    22,
     106,    51,    37,    26,    27,    68,   104,   113,   107,    44,
     179,   317,    35,   108,   230,   113,   256,   144,   106,   120,
      51,   472,   117,   107,   112,   121,    49,    33,   106,   105,
     106,   105,    38,   153,   112,   109,   107,   109,   104,    41,
     111,   107,   104,   113,   145,   107,   142,    74,   149,   145,
      41,    42,    43,   149,   109,   106,   177,   108,   154,   391,
     109,   398,   163,    51,   160,    85,    86,    87,    88,   163,
     106,   163,   108,   410,   182,   109,   106,   317,   108,   180,
     106,   321,   108,   179,    74,    75,    76,   106,   184,   108,
     186,    93,   106,    95,   108,   335,   215,   216,   217,   218,
     432,    99,   318,    95,    51,   106,   202,   108,    82,   446,
     112,   113,   114,   115,   116,   117,   118,   119,    51,    52,
     251,   104,   114,   115,   116,   117,   118,   119,   480,    51,
      52,    89,   228,   100,   235,   231,   376,    51,    52,   235,
     271,   105,   106,   264,   481,   482,   483,   484,   101,    30,
      94,    95,   504,    34,   250,   110,   264,    38,    51,    52,
      41,    42,    43,    99,    45,    46,    72,    73,   505,   106,
      51,   213,   214,   435,    82,   512,   219,   220,   104,    88,
     276,   221,   222,    88,   400,   108,   402,   288,   404,   405,
     406,   112,   313,   106,   288,   435,   288,   113,   108,   106,
     111,   105,   105,   299,   105,   207,   108,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   106,   362,   105,   107,   105,   110,
     105,   223,   224,   225,   107,   113,   107,   107,   107,   107,
     105,   113,   338,   110,   106,   108,   107,   105,   108,   251,
      82,   107,   106,   110,   107,    30,   425,   108,   108,    34,
     391,   477,   478,    38,   112,   108,    41,    42,    43,   271,
      45,    46,   113,   108,   105,   105,    51,   117,   106,   108,
     107,   499,   105,   108,   108,   107,   112,   107,   109,   108,
     108,   422,   108,    72,    73,    74,    75,    76,   106,   400,
     103,   432,   108,    82,    83,   105,    12,   428,    87,    88,
     105,   466,   105,   177,   108,    16,    30,   319,   362,   156,
      23,   323,   450,    91,   264,    28,   159,   319,   107,   425,
     312,   323,   111,   467,   288,   110,    39,    40,   153,   338,
      -1,   207,    -1,    -1,    -1,   500,    -1,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,   209,   211,   210,    70,    71,    72,
      73,    74,    -1,   212,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    91,   391,
      41,    42,    43,    -1,    45,    46,    99,    -1,   499,   102,
      51,    -1,    -1,    -1,   107,    -1,   109,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
     422,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     432,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,   110,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
     102,    -1,    -1,   105,    -1,   107,    -1,   109,   110,   111,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,     1,    -1,    -1,     4,     5,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    15,
      91,    17,    18,    -1,    -1,    -1,    -1,    23,    99,    25,
      -1,   102,    28,    -1,   105,    31,   107,    -1,   109,   110,
     111,    37,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    91,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,   102,    39,    40,   105,
      -1,   107,    -1,   109,    -1,   111,    -1,    -1,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    91,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
     102,    39,    40,   105,    -1,   107,    -1,    -1,    -1,   111,
      -1,    -1,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    91,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,   102,    39,    40,    -1,    -1,   107,
      -1,    -1,    -1,   111,    -1,    -1,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    91,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,   102,    39,
      40,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,    -1,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    91,    28,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,   102,    39,    40,    -1,    -1,   107,    -1,    -1,
      -1,   111,    -1,    -1,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,   102,     0,     1,    -1,
       3,   107,    -1,     6,     7,   111,    -1,    -1,    11,    -1,
      13,    14,    -1,    16,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    67,    16,    69,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    67,    16,    69,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    -1,    -1,    33,    -1,    35,    36,    -1,    77,
      78,    79,    80,    81,    82,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    52,    92,    93,    -1,    -1,    96,    97,
      98
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   123,     0,     1,    30,    32,    34,    38,    45,    46,
      51,    67,    69,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   140,   141,   142,   145,   146,   147,   148,   151,
     152,   110,    51,   221,    87,   151,   221,   221,   221,   118,
      68,    51,   124,   113,   133,   109,   109,   109,    74,   107,
     160,   161,   165,   168,   169,   173,   174,     3,     6,     7,
      11,    13,    14,    16,    19,    20,    21,    22,    26,    27,
      29,    30,    33,    35,    36,    45,    46,    47,    48,    49,
      52,   153,   156,   157,   158,   159,    33,    38,   149,   150,
     165,   168,    23,    28,    39,    40,    50,    51,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    70,    71,    72,    73,    74,    91,    99,   102,
     107,   111,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   210,   211,   214,   215,    41,
      42,    43,   134,   135,   109,   137,   143,   144,   221,   137,
     158,   169,   170,   171,   169,   105,   106,    82,   107,    99,
     166,   167,   105,   109,   181,    52,   221,   220,   221,    52,
     221,    52,   221,   154,    51,    51,   105,   106,    82,   166,
     107,   210,   151,   209,   111,   208,   104,   107,   210,   210,
     208,   208,   208,   208,   208,   208,   193,   194,   196,   209,
     210,    82,    99,   216,   217,   218,   221,    90,   114,    89,
     100,   101,    99,    83,    84,    85,    86,    87,    88,    94,
      95,    72,    73,    74,    75,    76,    70,    71,   103,   107,
     111,   116,    52,   136,   220,   137,   110,   132,   135,   138,
     139,   140,   141,   142,   145,   146,   147,   148,   220,   110,
     106,    82,   110,   170,   221,   161,   109,   162,   194,   194,
     212,   213,   167,    24,   107,   172,   175,   220,   221,     1,
       4,     5,     8,     9,    10,    15,    17,    18,    25,    31,
      37,    44,    51,   146,   148,   151,   181,   182,   183,   184,
     185,   186,   187,   188,   190,   191,   192,   193,   221,   104,
       7,    21,    22,    26,    27,    35,    49,   155,    88,    88,
     150,   162,    24,   107,   220,   209,   168,   107,   111,   112,
     221,   106,   108,   108,    77,    78,    79,    80,    81,    82,
      92,    93,    96,    97,    98,   195,   221,   112,   106,   199,
     193,   200,   201,   202,   203,   204,   204,   205,   205,   205,
     205,   206,   206,   207,   207,   208,   208,   208,   221,   212,
     193,   221,   106,   110,   105,   113,   107,   105,   221,   197,
     105,   108,   162,   163,   164,   108,   106,    72,    73,    74,
      75,    76,    82,    83,    87,    88,   107,   111,   176,   165,
     174,   111,   107,   107,   105,   105,   197,   105,   113,   185,
     107,   221,   107,   192,   107,   107,   107,   110,   184,   105,
     113,   221,   176,   108,   212,   193,   208,   194,   208,   194,
     107,   218,   113,   108,   112,   134,   105,   117,   151,   178,
     179,   180,    82,   107,   110,   106,   194,   108,   112,   107,
     108,   108,   177,   197,   178,   178,   113,   185,    37,    44,
     151,   189,   193,   105,   193,   105,   193,   193,   193,   185,
     108,   112,   178,   196,   220,   165,   108,   106,   197,   178,
     162,   178,   107,   112,   108,   108,   185,   107,   107,   160,
     105,   108,   108,   108,   108,   108,   181,   117,   180,   108,
     108,   178,   193,   193,   192,   185,   185,   185,   185,   103,
     219,   108,   108,   108,   105,    12,   209,   181,   105,   105,
     192,   185,   108,   185
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 14:
#line 91 "src/parser.y"
    { yyerrok; ;}
    break;

  case 20:
#line 105 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 21:
#line 106 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 22:
#line 111 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 23:
#line 114 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 24:
#line 117 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 25:
#line 120 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 69:
#line 203 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (1)].text)); ;}
    break;

  case 70:
#line 204 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (3)].text)); ;}
    break;

  case 125:
#line 266 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (3)].text); ;}
    break;

  case 126:
#line 267 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 138:
#line 292 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 139:
#line 293 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (2)].text); ;}
    break;

  case 140:
#line 294 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (3)].text); ;}
    break;

  case 141:
#line 295 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 142:
#line 300 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (7)].text); ;}
    break;

  case 143:
#line 304 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (3)].text); ;}
    break;

  case 144:
#line 307 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 145:
#line 308 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 146:
#line 309 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (5)].text); ;}
    break;

  case 147:
#line 310 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (6)].text); ;}
    break;

  case 183:
#line 355 "src/parser.y"
    { yyerrok; ;}
    break;

  case 312:
#line 499 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 313:
#line 500 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (3)].text); ;}
    break;

  case 314:
#line 503 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2413 "src/parser.tab.cc"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 506 "src/parser.y"


void yyerror(const char* message) { addSyntaxError(message); }

int main(int argc, char* argv[]) {
    if (argc < 2 || argc > 3) {
        cerr << "Usage: " << argv[0] << " <input_file> [output_file]" << endl;
        return 1;
    }
    yyin = fopen(argv[1], "r");
    if (!yyin) { cerr << "Error: Cannot open input file '" << argv[1] << "'" << endl; return 1; }
    if (argc == 3 && !freopen(argv[2], "w", stdout)) {
        cerr << "Error: Cannot open output file '" << argv[2] << "'" << endl; fclose(yyin); return 1;
    }
    extern int yydebug;
    if (std::getenv("YYDEBUG")) yydebug = 1;
    int result = yyparse();
    if (lexicalErrorCount() == 0 && syntaxErrorList.empty() && result == 0) {
        printTokenTable();
    } else {
        printLexicalErrors();
        for (const auto& e : syntaxErrorList)
            cout << "Syntax Error at line " << e.lineNumber << ", column " << e.column << ": " << e.message << endl;
        cout << "Summary: " << lexicalErrorCount() << " lexical error(s), "
             << syntaxErrorList.size() << " syntax error(s)." << endl;
    }
    fclose(yyin);
    return (lexicalErrorCount() == 0 && syntaxErrorList.empty() && result == 0) ? 0 : 1;
}

