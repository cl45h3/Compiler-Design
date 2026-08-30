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
     CONSTEXPR = 263,
     CONTINUE = 264,
     DEFAULT = 265,
     DO = 266,
     DOUBLE = 267,
     ELSE = 268,
     EXTERN = 269,
     FLOAT = 270,
     FOR = 271,
     FRIEND = 272,
     GOTO = 273,
     IF = 274,
     INLINE = 275,
     INT = 276,
     LONG = 277,
     LONG_LONG = 278,
     NULLPTR = 279,
     OPERATOR = 280,
     RETURN = 281,
     SHORT = 282,
     SIGNED = 283,
     SIZEOF = 284,
     STATIC = 285,
     STRUCT = 286,
     SWITCH = 287,
     TEMPLATE = 288,
     TYPENAME = 289,
     TYPEDEF = 290,
     UNSIGNED = 291,
     VOID = 292,
     WHILE = 293,
     CLASS = 294,
     NEW = 295,
     DELETE = 296,
     PUBLIC = 297,
     PRIVATE = 298,
     PROTECTED = 299,
     UNTIL = 300,
     ENUM = 301,
     UNION = 302,
     AUTO = 303,
     REGISTER = 304,
     VOLATILE = 305,
     THIS = 306,
     IDENTIFIER = 307,
     TYPE_NAME = 308,
     INTEGER_LITERAL = 309,
     FLOAT_LITERAL = 310,
     EXPONENT_NUMBER_LITERAL = 311,
     HEXADECIMAL_LITERAL = 312,
     BINARY_LITERAL = 313,
     BOOLEAN_LITERAL = 314,
     STRING_LITERAL = 315,
     CHAR_LITERAL = 316,
     PRINTF_FUNCTION = 317,
     SCANF_FUNCTION = 318,
     MALLOC_FUNCTION = 319,
     CALLOC_FUNCTION = 320,
     REALLOC_FUNCTION = 321,
     FREE_FUNCTION = 322,
     PP_INCLUDE = 323,
     HEADER_NAME = 324,
     PP_DEFINE = 325,
     INC = 326,
     DEC = 327,
     PLUS = 328,
     MINUS = 329,
     STAR = 330,
     SLASH = 331,
     PERCENT = 332,
     ADD_ASSIGN = 333,
     SUB_ASSIGN = 334,
     MUL_ASSIGN = 335,
     DIV_ASSIGN = 336,
     MOD_ASSIGN = 337,
     ASSIGN = 338,
     EQ = 339,
     NE = 340,
     LE = 341,
     GE = 342,
     LT = 343,
     GT = 344,
     ANDAND = 345,
     OROR = 346,
     NOT = 347,
     SHL_ASSIGN = 348,
     SHR_ASSIGN = 349,
     SHL = 350,
     SHR = 351,
     AND_ASSIGN = 352,
     OR_ASSIGN = 353,
     XOR_ASSIGN = 354,
     BITAND = 355,
     BITOR = 356,
     BITXOR = 357,
     BITNOT = 358,
     ARROW = 359,
     SCOPE = 360,
     SEMICOLON = 361,
     COMMA = 362,
     LEFT_PAREN = 363,
     RIGHT_PAREN = 364,
     LEFT_BRACE = 365,
     RIGHT_BRACE = 366,
     LEFT_BRACKET = 367,
     RIGHT_BRACKET = 368,
     COLON = 369,
     QUESTION_MARK = 370,
     HASH = 371,
     DOT = 372,
     ELLIPSIS = 373,
     MALFORMED_DIRECTIVE = 374,
     UNARY = 375,
     UMINUS = 376,
     LOWER_THAN_ELSE = 377
   };
#endif
/* Tokens.  */
#define BOOL 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONSTEXPR 263
#define CONTINUE 264
#define DEFAULT 265
#define DO 266
#define DOUBLE 267
#define ELSE 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define FRIEND 272
#define GOTO 273
#define IF 274
#define INLINE 275
#define INT 276
#define LONG 277
#define LONG_LONG 278
#define NULLPTR 279
#define OPERATOR 280
#define RETURN 281
#define SHORT 282
#define SIGNED 283
#define SIZEOF 284
#define STATIC 285
#define STRUCT 286
#define SWITCH 287
#define TEMPLATE 288
#define TYPENAME 289
#define TYPEDEF 290
#define UNSIGNED 291
#define VOID 292
#define WHILE 293
#define CLASS 294
#define NEW 295
#define DELETE 296
#define PUBLIC 297
#define PRIVATE 298
#define PROTECTED 299
#define UNTIL 300
#define ENUM 301
#define UNION 302
#define AUTO 303
#define REGISTER 304
#define VOLATILE 305
#define THIS 306
#define IDENTIFIER 307
#define TYPE_NAME 308
#define INTEGER_LITERAL 309
#define FLOAT_LITERAL 310
#define EXPONENT_NUMBER_LITERAL 311
#define HEXADECIMAL_LITERAL 312
#define BINARY_LITERAL 313
#define BOOLEAN_LITERAL 314
#define STRING_LITERAL 315
#define CHAR_LITERAL 316
#define PRINTF_FUNCTION 317
#define SCANF_FUNCTION 318
#define MALLOC_FUNCTION 319
#define CALLOC_FUNCTION 320
#define REALLOC_FUNCTION 321
#define FREE_FUNCTION 322
#define PP_INCLUDE 323
#define HEADER_NAME 324
#define PP_DEFINE 325
#define INC 326
#define DEC 327
#define PLUS 328
#define MINUS 329
#define STAR 330
#define SLASH 331
#define PERCENT 332
#define ADD_ASSIGN 333
#define SUB_ASSIGN 334
#define MUL_ASSIGN 335
#define DIV_ASSIGN 336
#define MOD_ASSIGN 337
#define ASSIGN 338
#define EQ 339
#define NE 340
#define LE 341
#define GE 342
#define LT 343
#define GT 344
#define ANDAND 345
#define OROR 346
#define NOT 347
#define SHL_ASSIGN 348
#define SHR_ASSIGN 349
#define SHL 350
#define SHR 351
#define AND_ASSIGN 352
#define OR_ASSIGN 353
#define XOR_ASSIGN 354
#define BITAND 355
#define BITOR 356
#define BITXOR 357
#define BITNOT 358
#define ARROW 359
#define SCOPE 360
#define SEMICOLON 361
#define COMMA 362
#define LEFT_PAREN 363
#define RIGHT_PAREN 364
#define LEFT_BRACE 365
#define RIGHT_BRACE 366
#define LEFT_BRACKET 367
#define RIGHT_BRACKET 368
#define COLON 369
#define QUESTION_MARK 370
#define HASH 371
#define DOT 372
#define ELLIPSIS 373
#define MALFORMED_DIRECTIVE 374
#define UNARY 375
#define UMINUS 376
#define LOWER_THAN_ELSE 377




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
#line 378 "src/parser.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 391 "src/parser.tab.cc"

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
#define YYLAST   1271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  123
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  321
/* YYNRULES -- Number of states.  */
#define YYNSTATES  523

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

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
     115,   116,   117,   118,   119,   120,   121,   122
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
     214,   218,   222,   223,   226,   228,   230,   232,   234,   235,
     238,   240,   242,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   282,   284,   286,   288,   290,   292,   294,   297,
     300,   303,   306,   309,   312,   315,   317,   321,   323,   327,
     332,   334,   338,   339,   341,   343,   347,   350,   354,   356,
     357,   359,   361,   363,   364,   366,   369,   370,   372,   375,
     377,   379,   382,   386,   391,   399,   404,   405,   408,   413,
     418,   424,   431,   433,   435,   437,   439,   441,   443,   445,
     447,   449,   452,   455,   456,   458,   459,   461,   463,   467,
     471,   473,   477,   480,   482,   483,   486,   490,   491,   493,
     495,   498,   500,   502,   504,   506,   508,   510,   512,   514,
     516,   519,   522,   528,   536,   542,   548,   554,   562,   570,
     580,   581,   583,   586,   590,   593,   596,   600,   604,   609,
     613,   614,   616,   618,   622,   624,   628,   630,   632,   634,
     636,   638,   640,   642,   644,   646,   648,   650,   652,   658,
     660,   662,   666,   668,   672,   674,   678,   680,   684,   686,
     690,   692,   696,   700,   702,   706,   710,   714,   718,   720,
     724,   728,   730,   734,   738,   740,   744,   748,   752,   754,
     759,   762,   764,   767,   770,   773,   776,   779,   782,   785,
     788,   791,   796,   799,   805,   811,   814,   819,   821,   826,
     831,   835,   839,   842,   845,   846,   848,   850,   854,   856,
     860,   862,   864,   866,   868,   870,   872,   874,   876,   878,
     880,   882,   884,   886,   888,   890,   892,   896,   898,   907,
     908,   910,   912,   916,   918,   921,   923,   925,   926,   929,
     931,   935
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     124,     0,    -1,    -1,   124,   125,    -1,   126,    -1,   146,
      -1,   148,    -1,   147,    -1,   149,    -1,   133,    -1,   141,
      -1,   143,    -1,   142,    -1,   127,    -1,     1,   111,    -1,
      68,    69,    -1,    70,    52,   202,    -1,    70,    52,    -1,
      52,   119,    -1,   128,   125,    -1,    33,    88,    34,    52,
      89,    -1,    33,    88,    39,    52,    89,    -1,    39,   226,
      -1,    31,   226,    -1,    46,   226,    -1,    47,   226,    -1,
     129,   134,   110,   138,   111,   106,    -1,   129,   134,   110,
     138,   111,    -1,    -1,   114,   135,   137,    -1,    -1,   136,
      -1,    42,    -1,    43,    -1,    44,    -1,   225,    -1,    53,
      -1,   137,   107,   135,   225,    -1,    -1,   138,   139,    -1,
     136,   114,    -1,   146,    -1,   148,    -1,   147,    -1,   149,
      -1,   133,    -1,   141,    -1,   143,    -1,   142,    -1,   140,
      -1,   225,   108,   181,   109,   186,    -1,   130,   110,   138,
     111,   106,    -1,   130,   110,   138,   111,    -1,   132,   110,
     138,   111,   106,    -1,   132,   110,   138,   111,    -1,   131,
     110,   144,   111,   106,    -1,   131,   110,   144,   111,    -1,
      -1,   145,    -1,   226,    -1,   226,    83,   202,    -1,   145,
     107,   226,    -1,   145,   107,   226,    83,   202,    -1,   152,
     176,   186,    -1,   152,   162,   106,    -1,   152,   176,   106,
      -1,    35,   152,   150,   106,    -1,   151,    -1,   150,   107,
     151,    -1,   167,    -1,   167,    83,   164,    -1,   153,   161,
     155,    -1,    -1,   153,   154,    -1,   160,    -1,   157,    -1,
     158,    -1,   159,    -1,    -1,   155,   156,    -1,    27,    -1,
      22,    -1,    23,    -1,    28,    -1,    36,    -1,     7,    -1,
      50,    -1,    30,    -1,    14,    -1,    49,    -1,    17,    -1,
      20,    -1,     8,    -1,     7,    -1,    50,    -1,    37,    -1,
       6,    -1,    21,    -1,    15,    -1,    12,    -1,     3,    -1,
      48,    -1,    27,    -1,    22,    -1,    23,    -1,    28,    -1,
      36,    -1,    53,    -1,    31,   226,    -1,    31,    53,    -1,
      46,   226,    -1,    46,    53,    -1,    47,   226,    -1,    47,
      53,    -1,    34,   225,    -1,   163,    -1,   162,   107,   163,
      -1,   167,    -1,   167,    83,   164,    -1,   167,   108,   217,
     109,    -1,   199,    -1,   110,   165,   111,    -1,    -1,   166,
      -1,   164,    -1,   166,   107,   164,    -1,   166,   107,    -1,
     170,   168,   174,    -1,   175,    -1,    -1,   169,    -1,   100,
      -1,    90,    -1,    -1,   171,    -1,    75,   172,    -1,    -1,
     171,    -1,   173,   172,    -1,   160,    -1,   225,    -1,    25,
     179,    -1,   108,   167,   109,    -1,   174,   112,   180,   113,
      -1,   108,   171,   226,   109,   108,   181,   109,    -1,   170,
     168,   178,   177,    -1,    -1,   177,   160,    -1,   226,   108,
     181,   109,    -1,   225,   108,   181,   109,    -1,    25,   179,
     108,   181,   109,    -1,   108,   176,   109,   108,   181,   109,
      -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    83,    -1,    84,    -1,    88,    -1,    89,    -1,   112,
     113,    -1,   108,   109,    -1,    -1,   202,    -1,    -1,   182,
      -1,   183,    -1,   182,   107,   183,    -1,   182,   107,   118,
      -1,   118,    -1,   152,   184,   185,    -1,   152,   185,    -1,
     167,    -1,    -1,    83,   164,    -1,   110,   187,   111,    -1,
      -1,   188,    -1,   189,    -1,   188,   189,    -1,   190,    -1,
     147,    -1,   149,    -1,   186,    -1,   191,    -1,   192,    -1,
     193,    -1,   195,    -1,   196,    -1,     1,   106,    -1,   197,
     106,    -1,    19,   108,   198,   109,   190,    -1,    19,   108,
     198,   109,   190,    13,   190,    -1,    32,   108,   198,   109,
     190,    -1,    38,   108,   198,   109,   190,    -1,    45,   108,
     198,   109,   190,    -1,    11,   190,    38,   108,   198,   109,
     106,    -1,    11,   190,    45,   108,   198,   109,   106,    -1,
      16,   108,   194,   106,   197,   106,   197,   109,   190,    -1,
      -1,   198,    -1,   152,   162,    -1,    18,   226,   106,    -1,
       9,   106,    -1,     4,   106,    -1,    26,   197,   106,    -1,
     226,   114,   190,    -1,     5,   202,   114,   190,    -1,    10,
     114,   190,    -1,    -1,   198,    -1,   199,    -1,   198,   107,
     199,    -1,   201,    -1,   203,   200,   199,    -1,    83,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
      97,    -1,    98,    -1,    99,    -1,    93,    -1,    94,    -1,
     203,    -1,   203,   115,   198,   114,   201,    -1,   201,    -1,
     204,    -1,   203,    91,   204,    -1,   205,    -1,   204,    90,
     205,    -1,   206,    -1,   205,   101,   206,    -1,   207,    -1,
     206,   102,   207,    -1,   208,    -1,   207,   100,   208,    -1,
     209,    -1,   208,    84,   209,    -1,   208,    85,   209,    -1,
     210,    -1,   209,    88,   210,    -1,   209,    89,   210,    -1,
     209,    86,   210,    -1,   209,    87,   210,    -1,   211,    -1,
     210,    95,   211,    -1,   210,    96,   211,    -1,   212,    -1,
     211,    73,   212,    -1,   211,    74,   212,    -1,   213,    -1,
     212,    75,   213,    -1,   212,    76,   213,    -1,   212,    77,
     213,    -1,   215,    -1,   108,   214,   109,   213,    -1,   152,
     170,    -1,   216,    -1,    71,   215,    -1,    72,   215,    -1,
     100,   213,    -1,    75,   213,    -1,    73,   213,    -1,    74,
     213,    -1,    92,   213,    -1,   103,   213,    -1,    29,   215,
      -1,    29,   108,   214,   109,    -1,    40,   214,    -1,    40,
     214,   108,   217,   109,    -1,    40,   214,   112,   198,   113,
      -1,    41,   213,    -1,    41,   112,   113,   213,    -1,   219,
      -1,   216,   112,   198,   113,    -1,   216,   108,   217,   109,
      -1,   216,   117,   226,    -1,   216,   104,   226,    -1,   216,
      71,    -1,   216,    72,    -1,    -1,   218,    -1,   199,    -1,
     218,   107,   199,    -1,    52,    -1,    52,   105,   226,    -1,
      54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,
      59,    -1,    60,    -1,    61,    -1,    24,    -1,    51,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,   108,   198,   109,    -1,   220,    -1,   112,   221,
     113,   108,   181,   109,   224,   186,    -1,    -1,   222,    -1,
     223,    -1,   222,   107,   223,    -1,   226,    -1,   100,   226,
      -1,    83,    -1,   100,    -1,    -1,   104,   214,    -1,   226,
      -1,   225,   105,   226,    -1,    52,    -1
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
     204,   208,   210,   212,   215,   215,   215,   215,   217,   219,
     222,   222,   222,   222,   222,   222,   222,   225,   225,   225,
     225,   228,   231,   234,   234,   237,   237,   237,   237,   237,
     237,   237,   238,   238,   238,   238,   238,   239,   240,   240,
     241,   241,   242,   242,   243,   247,   248,   251,   252,   253,
     256,   257,   259,   260,   263,   264,   265,   269,   270,   272,
     273,   276,   276,   278,   280,   284,   286,   288,   289,   292,
     295,   296,   297,   298,   303,   307,   312,   314,   317,   318,
     319,   320,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   325,   326,   328,   329,   332,   333,   334,
     335,   338,   339,   342,   344,   346,   350,   352,   353,   356,
     357,   360,   361,   362,   366,   367,   368,   369,   370,   371,
     372,   375,   378,   379,   380,   383,   384,   385,   386,   387,
     389,   391,   392,   395,   396,   397,   398,   401,   402,   403,
     406,   407,   410,   411,   414,   417,   420,   420,   420,   420,
     420,   420,   421,   421,   421,   421,   421,   424,   425,   428,
     431,   431,   434,   434,   437,   437,   440,   440,   443,   443,
     446,   446,   446,   449,   450,   450,   451,   451,   454,   454,
     454,   457,   457,   457,   460,   460,   460,   460,   463,   464,
     467,   470,   471,   471,   472,   472,   472,   472,   473,   473,
     474,   474,   475,   475,   476,   477,   477,   480,   481,   482,
     483,   484,   485,   485,   487,   488,   491,   492,   495,   496,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     498,   498,   498,   498,   498,   498,   499,   500,   503,   505,
     506,   509,   509,   512,   512,   512,   512,   514,   515,   518,
     519,   522
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "BREAK", "CASE", "CHAR", "CONST",
  "CONSTEXPR", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTERN",
  "FLOAT", "FOR", "FRIEND", "GOTO", "IF", "INLINE", "INT", "LONG",
  "LONG_LONG", "NULLPTR", "OPERATOR", "RETURN", "SHORT", "SIGNED",
  "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TEMPLATE", "TYPENAME",
  "TYPEDEF", "UNSIGNED", "VOID", "WHILE", "CLASS", "NEW", "DELETE",
  "PUBLIC", "PRIVATE", "PROTECTED", "UNTIL", "ENUM", "UNION", "AUTO",
  "REGISTER", "VOLATILE", "THIS", "IDENTIFIER", "TYPE_NAME",
  "INTEGER_LITERAL", "FLOAT_LITERAL", "EXPONENT_NUMBER_LITERAL",
  "HEXADECIMAL_LITERAL", "BINARY_LITERAL", "BOOLEAN_LITERAL",
  "STRING_LITERAL", "CHAR_LITERAL", "PRINTF_FUNCTION", "SCANF_FUNCTION",
  "MALLOC_FUNCTION", "CALLOC_FUNCTION", "REALLOC_FUNCTION",
  "FREE_FUNCTION", "PP_INCLUDE", "HEADER_NAME", "PP_DEFINE", "INC", "DEC",
  "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ASSIGN", "EQ", "NE", "LE",
  "GE", "LT", "GT", "ANDAND", "OROR", "NOT", "SHL_ASSIGN", "SHR_ASSIGN",
  "SHL", "SHR", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "BITAND", "BITOR",
  "BITXOR", "BITNOT", "ARROW", "SCOPE", "SEMICOLON", "COMMA", "LEFT_PAREN",
  "RIGHT_PAREN", "LEFT_BRACE", "RIGHT_BRACE", "LEFT_BRACKET",
  "RIGHT_BRACKET", "COLON", "QUESTION_MARK", "HASH", "DOT", "ELLIPSIS",
  "MALFORMED_DIRECTIVE", "UNARY", "UMINUS", "LOWER_THAN_ELSE", "$accept",
  "translation_unit", "external_declaration", "preprocessor_directive",
  "template_declaration", "template_head", "class_head", "struct_head",
  "enum_head", "union_head", "class_declaration", "inheritance_opt",
  "access_specifier_opt", "access_specifier", "base_class_list",
  "member_list", "member_declaration", "constructor_definition",
  "struct_declaration", "union_declaration", "enum_declaration",
  "enumerator_list_opt", "enumerator_list", "function_definition",
  "declaration", "function_declaration", "typedef_declaration",
  "typedef_declarator_list", "typedef_declarator",
  "declaration_specifiers", "declaration_prefix_opt", "declaration_prefix",
  "type_suffixes", "type_suffix", "storage_class_specifier",
  "function_specifier", "constexpr_specifier", "type_qualifier",
  "type_specifier", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list_opt", "initializer_list", "declarator",
  "reference_opt", "reference", "pointer_opt", "pointer",
  "pointer_after_star", "type_qualifier_list", "direct_declarator",
  "function_pointer_declarator", "function_declarator",
  "function_cv_qualifier_seq_opt", "function_direct_declarator",
  "overload_operator", "constant_expression_opt", "parameter_list_opt",
  "parameter_list", "parameter_declaration", "parameter_declarator",
  "default_argument_opt", "compound_statement", "block_item_list_opt",
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
     375,   376,   377
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   123,   124,   124,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   126,   127,
     128,   128,   129,   130,   131,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   136,   137,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   145,   145,   146,   147,   148,   149,   150,   150,   151,
     151,   152,   153,   153,   154,   154,   154,   154,   155,   155,
     156,   156,   156,   156,   156,   156,   156,   157,   157,   157,
     157,   158,   159,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   172,   172,   172,   173,
     174,   174,   174,   174,   175,   176,   177,   177,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   182,   182,   182,
     182,   183,   183,   184,   185,   185,   186,   187,   187,   188,
     188,   189,   189,   189,   190,   190,   190,   190,   190,   190,
     190,   191,   192,   192,   192,   193,   193,   193,   193,   193,
     194,   194,   194,   195,   195,   195,   195,   196,   196,   196,
     197,   197,   198,   198,   199,   199,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   201,   201,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   208,   209,   209,   209,   209,   209,   210,   210,
     210,   211,   211,   211,   212,   212,   212,   212,   213,   213,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   216,   216,   216,
     216,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   220,   221,
     221,   222,   222,   223,   223,   223,   223,   224,   224,   225,
     225,   226
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
       3,     3,     0,     2,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     3,     4,
       1,     3,     0,     1,     1,     3,     2,     3,     1,     0,
       1,     1,     1,     0,     1,     2,     0,     1,     2,     1,
       1,     2,     3,     4,     7,     4,     0,     2,     4,     4,
       5,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     1,     0,     1,     1,     3,     3,
       1,     3,     2,     1,     0,     2,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     5,     7,     5,     5,     5,     7,     7,     9,
       0,     1,     2,     3,     2,     2,     3,     3,     4,     3,
       0,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     2,     5,     5,     2,     4,     1,     4,     4,
       3,     3,     2,     2,     0,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     8,     0,
       1,     1,     3,     1,     2,     1,     1,     0,     2,     1,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     3,     4,    13,     0,    28,     0,     0,
       0,     9,    10,    12,    11,     5,     7,     6,     8,   133,
       0,    14,   321,    23,     0,   133,    22,    24,    25,    18,
      15,    17,    19,    30,     0,    38,    57,    38,   136,     0,
       0,   115,   117,   129,   134,   128,     0,   100,    96,    93,
      92,    99,    88,    98,    90,    91,    97,   103,   104,   102,
     105,    87,     0,     0,   106,    95,     0,     0,   101,    89,
      94,   107,    73,    75,    76,    77,    74,    78,     0,     0,
       0,    67,    69,   129,   298,     0,    72,     0,   299,   288,
     290,   291,   292,   293,   294,   295,   296,   297,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,    72,   309,   229,    16,   227,   230,   232,   234,
     236,   238,   240,   243,   248,   251,   254,   258,   261,   277,
     307,    32,    33,    34,     0,    31,    38,    72,     0,    58,
      59,    72,   139,   137,   135,   136,     0,    64,   133,     0,
     284,   132,   131,     0,   130,    65,     0,    63,   109,   108,
     114,   319,   111,   110,   113,   112,    71,     0,     0,    66,
     133,     0,     0,    72,   270,   133,   272,     0,   275,     0,
       0,   262,   263,   266,   267,   265,   268,   264,   269,     0,
     212,   214,   227,     0,   315,   316,     0,   310,   311,   313,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
     283,     0,   284,     0,     0,    36,    29,    35,    72,    52,
      45,     0,    39,    49,    46,    48,    47,    41,    43,    42,
      44,     0,    56,     0,     0,    54,   138,     0,   116,   122,
     118,   120,   286,     0,   285,     0,   133,   127,   146,   140,
     319,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,   288,   182,   183,   133,   184,     0,
       0,   179,   181,   185,   186,   187,   188,   189,     0,   211,
       0,     0,    85,    81,    82,    80,    83,    84,    86,    79,
      20,    21,    68,    70,     0,   133,   140,     0,   260,   284,
       0,     0,   289,     0,   306,   217,   218,   219,   220,   221,
     216,   225,   226,   222,   223,   224,     0,     0,   314,     0,
       0,   231,     0,   233,   235,   237,   239,   241,   242,   246,
     247,   244,   245,   249,   250,   252,   253,   255,   256,   257,
     281,     0,     0,   280,    30,    27,    51,    40,    72,    55,
      61,    60,    53,     0,   124,     0,   123,   119,     0,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
     141,     0,     0,   163,   145,    72,    72,   190,   205,     0,
     204,     0,     0,    72,     0,     0,     0,     0,     0,     0,
     176,   180,   191,     0,   320,   141,   271,     0,     0,   276,
     213,   215,   259,    72,   312,     0,   279,   278,     0,    26,
     170,   133,     0,   166,   167,     0,    72,   121,   126,   287,
     162,   161,    72,   142,     0,     0,   164,   147,     0,     0,
       0,   209,     0,     0,   133,     0,   201,   203,     0,   206,
       0,     0,     0,   207,   273,   274,     0,   228,    37,     0,
     173,   174,   172,     0,    72,    62,     0,   125,     0,    72,
     143,   149,   148,   208,     0,     0,   202,   210,     0,     0,
       0,     0,   317,   175,   171,    50,   169,   168,   144,   150,
       0,     0,     0,     0,   192,   194,   195,   196,    72,     0,
     151,     0,     0,   210,     0,   318,   308,   197,   198,     0,
     193,     0,   199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    14,    15,    16,    17,    18,    19,    20,
     240,    44,   144,   241,   236,   147,   242,   243,   244,   245,
     246,   148,   149,   247,   248,   249,   250,    90,    91,   431,
      30,    82,   176,   309,    83,    84,    85,   152,    87,    50,
      51,   260,   375,   376,    52,   163,   164,    93,    54,   154,
     155,   267,    55,    56,   394,   268,   390,   445,   432,   433,
     434,   471,   472,   288,   289,   290,   291,   292,   293,   294,
     295,   455,   296,   297,   298,   299,   200,   336,   201,   125,
     202,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   186,   137,   138,   263,   264,   139,   140,   206,   207,
     208,   509,   251,   300
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -368
static const yytype_int16 yypact[] =
{
    -368,  1144,  -368,   -62,    20,     5,  -368,    20,    20,    20,
      -2,    78,   114,  -368,  -368,  -368,  1201,    74,   130,   133,
     138,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   -20,
     400,  -368,  -368,  -368,    86,   -20,  -368,  -368,  -368,  -368,
    -368,   842,  -368,   159,   146,  -368,    20,  -368,    33,   124,
      36,  -368,   -51,    34,  -368,  -368,    35,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,     8,    20,  -368,  -368,   153,   207,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   164,   168,
     105,  -368,   150,    34,  -368,   906,  -368,   970,  -368,   156,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  1034,  1034,   842,   842,   842,   842,
     842,   842,   842,     1,  -368,  -368,   -57,   174,   167,   170,
     175,   211,   109,   202,   242,   152,  -368,  -368,    27,  -368,
    -368,  -368,  -368,  -368,   248,  -368,  -368,   179,   172,   173,
     209,   227,  -368,  -368,  -368,    33,    20,  -368,   -20,   714,
     842,  -368,  -368,    10,  -368,  -368,   463,  -368,  -368,  -368,
     198,  -368,  -368,  -368,  -368,  -368,    64,   224,   228,  -368,
     -20,   714,    11,   842,  -368,   124,    49,    -4,  -368,    20,
     842,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,    -3,
    -368,  -368,   254,   215,  -368,    20,   214,   232,  -368,  -368,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,  -368,
    -368,    20,   842,   842,    20,  -368,   236,   198,   279,   240,
    -368,   235,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,    73,   244,    20,   842,   249,  -368,   250,  -368,   714,
    -368,  -368,  -368,   251,   256,    96,   -20,   245,  -368,    84,
     253,   252,   258,   842,   259,   257,   650,   260,    20,   264,
     842,   265,   266,   267,   -46,  -368,  -368,   -20,  -368,   255,
     575,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   261,   269,
     263,    20,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,    96,   -20,   198,   270,  -368,   842,
     842,   842,  -368,   842,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,   842,   842,  -368,   272,
       1,   174,    22,   167,   170,   175,   211,   109,   109,   202,
     202,   202,   202,   242,   242,   152,   152,  -368,  -368,  -368,
    -368,   273,    55,  -368,   159,   275,  -368,  -368,    31,  -368,
     295,  -368,  -368,   277,  -368,   276,   284,  -368,   842,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   283,   280,
     286,   288,   290,   842,    44,    31,    31,  -368,  -368,   281,
    -368,   650,   118,   778,   294,   842,   298,   842,   842,   842,
    -368,  -368,  -368,   650,  -368,  -368,  -368,   292,    70,  -368,
    -368,  -368,  -368,    31,  -368,   842,  -368,  -368,    20,  -368,
    -368,   -42,   296,   302,  -368,   842,    31,  -368,   714,  -368,
    -368,  -368,    31,  -368,   303,   300,  -368,  -368,   307,   310,
     650,  -368,   316,   317,   -20,   320,   269,  -368,   123,  -368,
     132,   137,   158,  -368,  -368,  -368,   324,  -368,   198,   714,
    -368,   346,  -368,   325,   321,  -368,   329,  -368,   331,    31,
    -368,  -368,  -368,  -368,   842,   842,   334,   842,   650,   650,
     650,   650,   338,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
     335,   169,   184,   337,   432,  -368,  -368,  -368,  -368,   325,
    -368,   345,   349,   842,   650,  -368,  -368,  -368,  -368,   343,
    -368,   650,  -368
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -368,  -368,   440,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
      69,  -368,    93,   -34,  -368,   -31,  -368,  -368,    89,   110,
     112,  -368,  -368,   121,     9,   122,    21,  -368,   278,    -1,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,   -24,  -368,     6,
     301,  -157,  -368,  -368,   -21,   368,  -368,   -11,   -22,   308,
    -368,  -368,  -368,   196,  -368,  -368,   151,  -368,  -367,  -368,
       2,  -368,    17,   -55,  -368,  -368,   206,  -237,  -368,  -368,
    -368,  -368,  -368,  -368,  -263,  -101,  -129,  -368,   -39,  -235,
     -37,   322,   293,   289,   319,   291,   103,    67,   106,   117,
     -74,  -119,   -41,  -368,  -212,  -368,  -368,  -368,  -368,  -368,
     191,  -368,   -66,     4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -322
static const yytype_int16 yytable[] =
{
      29,   167,   124,   203,   126,    35,    86,   170,    33,   145,
      26,    36,    37,    38,    92,    29,   151,   406,    53,   371,
     361,   199,    28,   188,   313,    26,   153,   156,   448,   449,
     261,   262,   159,    48,   210,   265,   314,    28,   399,   402,
      59,   469,   193,   194,   195,   196,   197,   198,    32,    31,
     150,    59,   261,    32,   184,    48,   466,   160,   211,   189,
      32,   168,    32,    32,   317,  -174,    49,  -174,  -321,   476,
      21,   302,    32,   191,   192,   478,   169,   171,   237,   204,
     173,   175,   199,    80,   204,    21,   303,   304,    49,   199,
      22,   305,   306,    34,    80,   185,   205,   269,   229,   230,
     307,   205,   374,   262,   323,    22,   324,   417,    48,   321,
     342,    23,   500,    24,   308,   238,   316,    39,   266,   315,
      88,   185,    25,    27,   161,    89,    23,   209,    24,   323,
     261,   231,   362,   153,   162,   232,   425,    25,    27,   233,
    -165,   165,   157,   158,   234,   166,    29,    40,   171,   430,
      29,   171,   357,   358,   359,   171,   452,   319,   446,    92,
     257,   320,   323,   453,   451,   287,    41,   270,   427,   379,
     380,   381,   382,   383,   318,   285,   463,   323,   301,   384,
     385,   368,   185,   465,   386,   387,   171,   286,    43,   301,
     262,   209,   395,   322,   420,   218,   219,   220,   221,    48,
     475,   141,   142,   143,   388,    32,   172,   421,   389,   338,
       4,   179,   180,   483,     6,   124,   177,   126,     7,   418,
     178,   141,   142,   143,   503,     8,     9,   226,   227,   228,
     323,    32,   488,   181,   124,   360,   126,    29,   363,   323,
      45,   489,   171,    46,   323,   391,   490,   419,    47,   439,
     519,   504,   505,   506,   507,    53,   146,   370,     4,    32,
     174,   189,     6,   422,   212,   323,     7,   491,   213,   141,
     142,   143,   214,     8,     9,   215,   323,   520,   511,    32,
     253,   477,   404,   252,   522,   349,   350,   351,   352,   287,
     239,   323,   254,   512,   391,   216,   217,   222,   223,   285,
      32,   235,   456,   301,   458,   414,   460,   461,   462,   261,
       4,   286,   493,   310,     6,   224,   225,   311,     7,   347,
     348,   141,   142,   143,   337,     8,     9,   339,   353,   354,
     145,    32,   325,   326,   327,   328,   329,   330,   255,   340,
     261,   355,   356,   364,   209,   210,   366,   331,   332,   367,
     369,   333,   334,   335,   124,   372,   126,   393,   397,   373,
     377,   396,   468,   378,   398,   400,   410,   412,   403,   211,
     447,   401,   405,   407,   408,   409,   323,   413,   435,   416,
     423,   429,   426,   501,   502,   436,   467,   437,   126,   515,
     365,   438,   440,   441,   442,   450,   124,   443,   126,   444,
     457,   464,   454,    57,   459,   473,    58,    59,    60,   474,
     470,   479,    61,   480,    62,    63,   481,    64,   495,   482,
      65,    66,    67,    68,   484,   485,   487,    69,    70,   469,
      71,    72,   171,   492,    73,   166,    74,    75,   498,   496,
     499,   158,   508,   513,   510,   514,    76,    77,    78,    79,
      80,   517,   521,    81,   516,   518,    42,   428,   312,   258,
     486,   182,   392,   256,   271,   415,   -72,   272,   273,   -72,
     -72,   -72,   274,   275,   276,   -72,   497,   -72,   -72,   277,
     -72,   278,   279,   -72,   -72,   -72,   -72,    94,   494,   280,
     -72,   -72,    95,   -72,   -72,   281,   411,   -72,     6,   -72,
     -72,   282,   344,    96,    97,   343,   346,   185,   283,   -72,
     -72,   -72,   -72,   -72,    98,   284,   -72,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   424,   341,   345,   114,   115,   116,   117,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,   121,     0,     0,  -210,
       0,   122,     0,   166,  -177,   123,   271,     0,   -72,   272,
     273,   -72,   -72,   -72,   274,   275,   276,   -72,     0,   -72,
     -72,   277,   -72,   278,   279,   -72,   -72,   -72,   -72,    94,
       0,   280,   -72,   -72,    95,   -72,   -72,   281,     0,   -72,
       6,   -72,   -72,   282,     0,    96,    97,     0,     0,     0,
     283,   -72,   -72,   -72,   -72,   -72,    98,   284,   -72,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,     0,   114,   115,   116,   117,
     118,   271,     0,     0,   272,   273,     0,     0,     0,   274,
     275,   276,     0,     0,     0,     0,   277,   119,   278,   279,
       0,     0,     0,     0,    94,   120,   280,     0,   121,    95,
       0,  -210,   281,   122,     0,   166,  -178,   123,   282,     0,
      96,    97,     0,     0,     0,   283,     0,     0,     0,     0,
       0,    98,   284,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,     0,
       0,   114,   115,   116,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,   119,    95,     0,     0,     0,     0,     0,     0,
     120,     0,     0,   121,    96,    97,  -210,     0,   122,     0,
     166,     0,   123,     0,     0,    98,    99,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,     0,     0,   114,   115,   116,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,     0,   119,    95,     0,     0,
       0,     0,     0,     0,   120,     0,     0,   121,    96,    97,
       0,     0,   122,     0,   259,     0,   123,     0,     0,    98,
      99,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,     0,     0,   114,
     115,   116,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
     119,    95,     0,     0,     0,     0,     0,     0,   120,     0,
       0,   121,    96,    97,  -200,     0,   122,     0,     0,     0,
     123,     0,     0,    98,    99,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,     0,     0,   114,   115,   116,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,     0,   119,    95,     0,     0,     0,     0,
       0,     0,   120,     0,     0,   121,    96,    97,     0,     0,
     122,     0,     0,     0,   123,     0,     0,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,     0,     0,   114,   115,   116,
     117,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,   119,    95,
       0,     0,     0,     0,     0,     0,   120,     0,     0,   121,
      96,    97,     0,     0,   183,     0,     0,     0,   123,     0,
       0,    98,    99,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,     0,
       0,   114,   115,   116,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,   119,    95,     0,     0,     0,     0,     0,     0,
     120,     0,     0,   121,    96,    97,     0,     0,   122,     0,
       0,     0,   187,     0,     0,    98,    99,     0,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,     0,     0,   114,   115,   116,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,   121,     0,     0,
       0,     0,   190,     0,     2,     3,   123,   -72,     0,     0,
     -72,   -72,   -72,     0,     0,     0,   -72,     0,   -72,   -72,
       0,   -72,     0,     0,   -72,   -72,   -72,   -72,     0,     0,
       0,   -72,   -72,     0,   -72,     4,     0,     5,   -72,     6,
     -72,   -72,     0,     7,     0,     0,     0,     0,     0,     0,
       8,     9,   -72,   -72,   -72,     0,    10,   -72,     0,     0,
       0,     0,     3,     0,   -72,     0,     0,   -72,   -72,   -72,
       0,     0,    11,   -72,    12,   -72,   -72,     0,   -72,     0,
       0,   -72,   -72,   -72,   -72,     0,     0,     0,   -72,   -72,
       0,   -72,     4,     0,     5,   -72,     6,   -72,   -72,     0,
       7,     0,     0,     0,     0,     0,     0,     8,     9,   -72,
     -72,   -72,     0,    10,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,    12
};

static const yytype_int16 yycheck[] =
{
       1,    56,    41,   122,    41,     6,    30,    73,     4,    43,
       1,     7,     8,     9,    35,    16,    47,   280,    29,   254,
     232,   122,     1,    97,   181,    16,    48,    49,   395,   396,
     159,   160,    83,    75,    91,    25,    25,    16,   273,   276,
       7,    83,   116,   117,   118,   119,   120,   121,    52,   111,
      46,     7,   181,    52,    95,    75,   423,   108,   115,   105,
      52,    53,    52,    52,   183,   107,   108,   109,   114,   436,
       1,     7,    52,   114,   115,   442,    72,    73,   144,    83,
      76,    77,   183,    50,    83,    16,    22,    23,   108,   190,
       1,    27,    28,    88,    50,    96,   100,   163,    71,    72,
      36,   100,   259,   232,   107,    16,   109,   319,    75,   113,
     211,     1,   479,     1,    50,   146,   182,   119,   108,   108,
      34,   122,     1,     1,    90,    39,    16,   123,    16,   107,
     259,   104,   233,   155,   100,   108,   114,    16,    16,   112,
     109,   106,   106,   107,   117,   110,   147,    69,   144,   118,
     151,   147,   226,   227,   228,   151,    38,   108,   393,   180,
     156,   112,   107,    45,   401,   166,    52,   163,   113,    73,
      74,    75,    76,    77,   185,   166,   413,   107,   105,    83,
      84,   108,   183,   113,    88,    89,   182,   166,   114,   105,
     319,   187,   108,   189,   323,    86,    87,    88,    89,    75,
     435,    42,    43,    44,   108,    52,    53,   336,   112,   205,
      31,   106,   107,   450,    35,   254,    52,   254,    39,   320,
      52,    42,    43,    44,   487,    46,    47,    75,    76,    77,
     107,    52,   109,    83,   273,   231,   273,   238,   234,   107,
     110,   109,   238,   110,   107,   266,   109,   321,   110,   378,
     513,   488,   489,   490,   491,   266,   110,   253,    31,    52,
      53,   105,    35,   337,    90,   107,    39,   109,   101,    42,
      43,    44,   102,    46,    47,   100,   107,   514,   109,    52,
     107,   438,   278,   111,   521,   218,   219,   220,   221,   290,
     111,   107,    83,   109,   315,    84,    85,    95,    96,   290,
      52,    53,   403,   105,   405,   301,   407,   408,   409,   438,
      31,   290,   469,    89,    35,    73,    74,    89,    39,   216,
     217,    42,    43,    44,   109,    46,    47,   113,   222,   223,
     364,    52,    78,    79,    80,    81,    82,    83,   111,   107,
     469,   224,   225,   107,   340,    91,   106,    93,    94,   114,
     106,    97,    98,    99,   393,   106,   393,   112,   106,   109,
     109,   108,   428,   107,   106,   106,   111,   106,   108,   115,
     394,   114,   108,   108,   108,   108,   107,   114,    83,   109,
     108,   106,   109,   484,   485,   108,   425,   111,   425,   508,
     111,   107,   109,   113,   108,   114,   435,   109,   435,   109,
     106,   109,   403,     3,   106,   109,     6,     7,     8,   107,
     431,   108,    12,   113,    14,    15,   109,    17,   473,   109,
      20,    21,    22,    23,   108,   108,   106,    27,    28,    83,
      30,    31,   428,   109,    34,   110,    36,    37,   109,   118,
     109,   107,   104,   106,   109,    13,    46,    47,    48,    49,
      50,   106,   109,    53,   509,   106,    16,   364,   180,   158,
     454,    93,   266,   155,     1,   314,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   474,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   471,    26,
      27,    28,    29,    30,    31,    32,   290,    34,    35,    36,
      37,    38,   213,    40,    41,   212,   215,   508,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,   340,   210,   214,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,   103,    -1,    -1,   106,
      -1,   108,    -1,   110,   111,   112,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,     1,    -1,    -1,     4,     5,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    16,    92,    18,    19,
      -1,    -1,    -1,    -1,    24,   100,    26,    -1,   103,    29,
      -1,   106,    32,   108,    -1,   110,   111,   112,    38,    -1,
      40,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    92,    29,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   103,    40,    41,   106,    -1,   108,    -1,
     110,    -1,   112,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    92,    29,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   103,    40,    41,
      -1,    -1,   108,    -1,   110,    -1,   112,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      92,    29,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,   103,    40,    41,   106,    -1,   108,    -1,    -1,    -1,
     112,    -1,    -1,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    92,    29,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,   103,    40,    41,    -1,    -1,
     108,    -1,    -1,    -1,   112,    -1,    -1,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    92,    29,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,   103,
      40,    41,    -1,    -1,   108,    -1,    -1,    -1,   112,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    92,    29,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   103,    40,    41,    -1,    -1,   108,    -1,
      -1,    -1,   112,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   103,    -1,    -1,
      -1,    -1,   108,    -1,     0,     1,   112,     3,    -1,    -1,
       6,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    -1,    52,    53,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,
      -1,    -1,    68,    12,    70,    14,    15,    -1,    17,    -1,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   124,     0,     1,    31,    33,    35,    39,    46,    47,
      52,    68,    70,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   141,   142,   143,   146,   147,   148,   149,   152,
     153,   111,    52,   226,    88,   152,   226,   226,   226,   119,
      69,    52,   125,   114,   134,   110,   110,   110,    75,   108,
     162,   163,   167,   170,   171,   175,   176,     3,     6,     7,
       8,    12,    14,    15,    17,    20,    21,    22,    23,    27,
      28,    30,    31,    34,    36,    37,    46,    47,    48,    49,
      50,    53,   154,   157,   158,   159,   160,   161,    34,    39,
     150,   151,   167,   170,    24,    29,    40,    41,    51,    52,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    71,    72,    73,    74,    75,    92,
     100,   103,   108,   112,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   215,   216,   219,
     220,    42,    43,    44,   135,   136,   110,   138,   144,   145,
     226,   138,   160,   171,   172,   173,   171,   106,   107,    83,
     108,    90,   100,   168,   169,   106,   110,   186,    53,   226,
     225,   226,    53,   226,    53,   226,   155,    52,    52,   106,
     107,    83,   168,   108,   215,   152,   214,   112,   213,   105,
     108,   215,   215,   213,   213,   213,   213,   213,   213,   198,
     199,   201,   203,   214,    83,   100,   221,   222,   223,   226,
      91,   115,    90,   101,   102,   100,    84,    85,    86,    87,
      88,    89,    95,    96,    73,    74,    75,    76,    77,    71,
      72,   104,   108,   112,   117,    53,   137,   225,   138,   111,
     133,   136,   139,   140,   141,   142,   143,   146,   147,   148,
     149,   225,   111,   107,    83,   111,   172,   226,   163,   110,
     164,   199,   199,   217,   218,    25,   108,   174,   178,   225,
     226,     1,     4,     5,     9,    10,    11,    16,    18,    19,
      26,    32,    38,    45,    52,   147,   149,   152,   186,   187,
     188,   189,   190,   191,   192,   193,   195,   196,   197,   198,
     226,   105,     7,    22,    23,    27,    28,    36,    50,   156,
      89,    89,   151,   164,    25,   108,   225,   214,   170,   108,
     112,   113,   226,   107,   109,    78,    79,    80,    81,    82,
      83,    93,    94,    97,    98,    99,   200,   109,   226,   113,
     107,   204,   198,   205,   206,   207,   208,   209,   209,   210,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   213,
     226,   217,   198,   226,   107,   111,   106,   114,   108,   106,
     226,   202,   106,   109,   164,   165,   166,   109,   107,    73,
      74,    75,    76,    77,    83,    84,    88,    89,   108,   112,
     179,   167,   176,   112,   177,   108,   108,   106,   106,   202,
     106,   114,   190,   108,   226,   108,   197,   108,   108,   108,
     111,   189,   106,   114,   226,   179,   109,   217,   198,   213,
     199,   199,   213,   108,   223,   114,   109,   113,   135,   106,
     118,   152,   181,   182,   183,    83,   108,   111,   107,   199,
     109,   113,   108,   109,   109,   180,   202,   160,   181,   181,
     114,   190,    38,    45,   152,   194,   198,   106,   198,   106,
     198,   198,   198,   190,   109,   113,   181,   201,   225,    83,
     167,   184,   185,   109,   107,   202,   181,   164,   181,   108,
     113,   109,   109,   190,   108,   108,   162,   106,   109,   109,
     109,   109,   109,   164,   185,   186,   118,   183,   109,   109,
     181,   198,   198,   197,   190,   190,   190,   190,   104,   224,
     109,   109,   109,   106,    13,   214,   186,   106,   106,   197,
     190,   109,   190
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

  case 127:
#line 269 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (3)].text); ;}
    break;

  case 128:
#line 270 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 140:
#line 295 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 141:
#line 296 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (2)].text); ;}
    break;

  case 142:
#line 297 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (3)].text); ;}
    break;

  case 143:
#line 298 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 144:
#line 303 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (7)].text); ;}
    break;

  case 145:
#line 307 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (4)].text); ;}
    break;

  case 148:
#line 317 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 149:
#line 318 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 150:
#line 319 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (5)].text); ;}
    break;

  case 151:
#line 320 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (6)].text); ;}
    break;

  case 190:
#line 372 "src/parser.y"
    { yyerrok; ;}
    break;

  case 319:
#line 518 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 320:
#line 519 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (3)].text); ;}
    break;

  case 321:
#line 522 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2423 "src/parser.tab.cc"
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


#line 525 "src/parser.y"


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

