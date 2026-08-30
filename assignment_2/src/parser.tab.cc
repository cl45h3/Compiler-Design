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
#define YYLSP_NEEDED 1



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
     INVALID_TOKEN = 375,
     UNARY = 376,
     UMINUS = 377,
     LOWER_THAN_ELSE = 378
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
#define INVALID_TOKEN 375
#define UNARY 376
#define UMINUS 377
#define LOWER_THAN_ELSE 378




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
extern bool currentParserTokenIsLexicalError;
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
    /* The lexer has already issued the useful diagnostic for INVALID_TOKEN.
       Suppress only this immediate parser cascade; recovery still advances to
       the statement/block boundary, so later independent errors are kept. */
    if (currentParserTokenIsLexicalError) return;
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
#line 42 "src/parser.y"
{ char* text; }
/* Line 193 of yacc.c.  */
#line 385 "src/parser.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 410 "src/parser.tab.cc"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   1282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  324
/* YYNRULES -- Number of states.  */
#define YYNSTATES  537

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   378

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
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    30,    33,    36,    40,    43,
      46,    49,    55,    61,    64,    67,    70,    73,    80,    86,
      95,    96,   100,   101,   103,   105,   107,   109,   111,   113,
     118,   119,   122,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   149,   155,   160,   169,   175,   180,   186,
     191,   192,   194,   196,   200,   204,   210,   214,   218,   221,
     225,   230,   232,   236,   238,   242,   246,   247,   250,   252,
     254,   256,   258,   259,   262,   264,   266,   268,   270,   272,
     274,   276,   278,   280,   282,   284,   286,   288,   290,   292,
     294,   296,   298,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   318,   321,   324,   327,   330,   332,   336,   338,
     342,   347,   349,   353,   354,   356,   358,   362,   365,   369,
     371,   372,   374,   376,   378,   379,   381,   384,   385,   387,
     390,   392,   394,   397,   401,   406,   414,   415,   417,   422,
     423,   426,   431,   436,   442,   449,   451,   453,   455,   457,
     459,   461,   463,   465,   467,   470,   473,   474,   476,   478,
     482,   486,   488,   492,   495,   497,   498,   501,   505,   506,
     508,   510,   513,   515,   517,   519,   521,   523,   525,   527,
     529,   531,   534,   537,   543,   551,   557,   563,   569,   577,
     585,   595,   596,   598,   601,   605,   608,   611,   615,   619,
     624,   628,   629,   631,   633,   637,   639,   643,   645,   647,
     649,   651,   653,   655,   657,   659,   661,   663,   665,   667,
     673,   675,   677,   681,   683,   687,   689,   693,   695,   699,
     701,   705,   707,   711,   715,   717,   721,   725,   729,   733,
     735,   739,   743,   745,   749,   753,   755,   759,   763,   767,
     769,   774,   777,   779,   782,   785,   788,   791,   794,   797,
     800,   803,   806,   811,   814,   820,   826,   829,   834,   836,
     841,   846,   850,   854,   857,   860,   861,   863,   865,   869,
     871,   875,   877,   879,   881,   883,   885,   887,   889,   891,
     893,   895,   897,   899,   901,   903,   905,   907,   911,   913,
     922,   923,   925,   927,   931,   933,   936,   938,   940,   941,
     944,   946,   950,   952,   954
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     125,     0,    -1,    -1,   125,   126,    -1,   127,    -1,   147,
      -1,   149,    -1,   148,    -1,   150,    -1,   134,    -1,   142,
      -1,   144,    -1,   143,    -1,   128,    -1,     1,   106,    -1,
       1,   111,    -1,    68,    69,    -1,    70,    52,   203,    -1,
      70,    52,    -1,    52,   119,    -1,   129,   126,    -1,    33,
      88,    34,    52,    89,    -1,    33,    88,    39,    52,    89,
      -1,    39,   228,    -1,    31,   228,    -1,    46,   228,    -1,
      47,   228,    -1,   130,   135,   110,   139,   111,   106,    -1,
     130,   135,   110,   139,   111,    -1,   130,   108,     1,   109,
     110,   139,   111,   106,    -1,    -1,   114,   136,   138,    -1,
      -1,   137,    -1,    42,    -1,    43,    -1,    44,    -1,   226,
      -1,    53,    -1,   138,   107,   136,   226,    -1,    -1,   139,
     140,    -1,   137,   114,    -1,   147,    -1,   149,    -1,   148,
      -1,   150,    -1,   134,    -1,   142,    -1,   144,    -1,   143,
      -1,   141,    -1,   226,   108,   182,   109,   187,    -1,   131,
     110,   139,   111,   106,    -1,   131,   110,   139,   111,    -1,
     131,   108,     1,   109,   110,   139,   111,   106,    -1,   133,
     110,   139,   111,   106,    -1,   133,   110,   139,   111,    -1,
     132,   110,   145,   111,   106,    -1,   132,   110,   145,   111,
      -1,    -1,   146,    -1,   227,    -1,   227,    83,   203,    -1,
     146,   107,   227,    -1,   146,   107,   227,    83,   203,    -1,
     153,   178,   187,    -1,   153,   163,   106,    -1,   153,   163,
      -1,   153,   178,   106,    -1,    35,   153,   151,   106,    -1,
     152,    -1,   151,   107,   152,    -1,   168,    -1,   168,    83,
     165,    -1,   154,   162,   156,    -1,    -1,   154,   155,    -1,
     161,    -1,   158,    -1,   159,    -1,   160,    -1,    -1,   156,
     157,    -1,    27,    -1,    22,    -1,    23,    -1,    28,    -1,
      36,    -1,     7,    -1,    50,    -1,    30,    -1,    14,    -1,
      49,    -1,    17,    -1,    20,    -1,     8,    -1,     7,    -1,
      50,    -1,    37,    -1,     6,    -1,    21,    -1,    15,    -1,
      12,    -1,     3,    -1,    48,    -1,    27,    -1,    22,    -1,
      23,    -1,    28,    -1,    36,    -1,    53,    -1,    31,   228,
      -1,    46,   228,    -1,    47,   228,    -1,    34,   226,    -1,
     164,    -1,   163,   107,   164,    -1,   168,    -1,   168,    83,
     165,    -1,   168,   108,   218,   109,    -1,   200,    -1,   110,
     166,   111,    -1,    -1,   167,    -1,   165,    -1,   167,   107,
     165,    -1,   167,   107,    -1,   171,   169,   175,    -1,   176,
      -1,    -1,   170,    -1,   100,    -1,    90,    -1,    -1,   172,
      -1,    75,   173,    -1,    -1,   172,    -1,   174,   173,    -1,
     161,    -1,   226,    -1,    25,   181,    -1,   108,   168,   109,
      -1,   175,   112,   177,   113,    -1,   108,   172,   227,   109,
     108,   182,   109,    -1,    -1,   203,    -1,   171,   169,   180,
     179,    -1,    -1,   179,   161,    -1,   227,   108,   182,   109,
      -1,   226,   108,   182,   109,    -1,    25,   181,   108,   182,
     109,    -1,   108,   178,   109,   108,   182,   109,    -1,    73,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    83,
      -1,    84,    -1,    88,    -1,    89,    -1,   112,   113,    -1,
     108,   109,    -1,    -1,   183,    -1,   184,    -1,   183,   107,
     184,    -1,   183,   107,   118,    -1,   118,    -1,   153,   185,
     186,    -1,   153,   186,    -1,   168,    -1,    -1,    83,   165,
      -1,   110,   188,   111,    -1,    -1,   189,    -1,   190,    -1,
     189,   190,    -1,   191,    -1,   148,    -1,   150,    -1,   187,
      -1,   192,    -1,   193,    -1,   194,    -1,   196,    -1,   197,
      -1,     1,   106,    -1,   198,   106,    -1,    19,   108,   199,
     109,   191,    -1,    19,   108,   199,   109,   191,    13,   191,
      -1,    32,   108,   199,   109,   191,    -1,    38,   108,   199,
     109,   191,    -1,    45,   108,   199,   109,   191,    -1,    11,
     191,    38,   108,   199,   109,   106,    -1,    11,   191,    45,
     108,   199,   109,   106,    -1,    16,   108,   195,   106,   198,
     106,   198,   109,   191,    -1,    -1,   199,    -1,   153,   163,
      -1,    18,   227,   106,    -1,     9,   106,    -1,     4,   106,
      -1,    26,   198,   106,    -1,   227,   114,   191,    -1,     5,
     203,   114,   191,    -1,    10,   114,   191,    -1,    -1,   199,
      -1,   200,    -1,   199,   107,   200,    -1,   202,    -1,   204,
     201,   200,    -1,    83,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    97,    -1,    98,    -1,    99,
      -1,    93,    -1,    94,    -1,   204,    -1,   204,   115,   199,
     114,   202,    -1,   202,    -1,   205,    -1,   204,    91,   205,
      -1,   206,    -1,   205,    90,   206,    -1,   207,    -1,   206,
     101,   207,    -1,   208,    -1,   207,   102,   208,    -1,   209,
      -1,   208,   100,   209,    -1,   210,    -1,   209,    84,   210,
      -1,   209,    85,   210,    -1,   211,    -1,   210,    88,   211,
      -1,   210,    89,   211,    -1,   210,    86,   211,    -1,   210,
      87,   211,    -1,   212,    -1,   211,    95,   212,    -1,   211,
      96,   212,    -1,   213,    -1,   212,    73,   213,    -1,   212,
      74,   213,    -1,   214,    -1,   213,    75,   214,    -1,   213,
      76,   214,    -1,   213,    77,   214,    -1,   216,    -1,   108,
     215,   109,   214,    -1,   153,   171,    -1,   217,    -1,    71,
     216,    -1,    72,   216,    -1,   100,   214,    -1,    75,   214,
      -1,    73,   214,    -1,    74,   214,    -1,    92,   214,    -1,
     103,   214,    -1,    29,   216,    -1,    29,   108,   215,   109,
      -1,    40,   215,    -1,    40,   215,   108,   218,   109,    -1,
      40,   215,   112,   199,   113,    -1,    41,   214,    -1,    41,
     112,   113,   214,    -1,   220,    -1,   217,   112,   199,   113,
      -1,   217,   108,   218,   109,    -1,   217,   117,   227,    -1,
     217,   104,   227,    -1,   217,    71,    -1,   217,    72,    -1,
      -1,   219,    -1,   200,    -1,   219,   107,   200,    -1,    52,
      -1,    52,   105,   227,    -1,    54,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    24,    -1,    51,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,   108,   199,   109,
      -1,   221,    -1,   112,   222,   113,   108,   182,   109,   225,
     187,    -1,    -1,   223,    -1,   224,    -1,   223,   107,   224,
      -1,   227,    -1,   100,   227,    -1,    83,    -1,   100,    -1,
      -1,   104,   215,    -1,   227,    -1,   226,   105,   227,    -1,
      52,    -1,    52,    -1,    53,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    81,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    98,   101,   105,   106,   107,   108,
     114,   117,   118,   123,   126,   129,   132,   136,   137,   142,
     144,   146,   148,   150,   153,   153,   153,   156,   157,   158,
     160,   162,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   177,   181,   182,   185,   188,   189,   193,   194,
     197,   198,   201,   202,   203,   204,   208,   212,   216,   220,
     223,   226,   227,   230,   231,   235,   237,   239,   242,   242,
     242,   242,   244,   246,   249,   249,   249,   249,   249,   249,
     249,   252,   252,   252,   252,   255,   258,   261,   261,   264,
     264,   264,   264,   264,   264,   264,   265,   265,   265,   265,
     265,   266,   267,   268,   269,   270,   274,   275,   278,   279,
     280,   283,   284,   286,   287,   290,   291,   292,   296,   297,
     299,   300,   303,   303,   305,   307,   311,   313,   315,   316,
     319,   322,   323,   324,   328,   333,   335,   337,   341,   346,
     348,   351,   352,   353,   354,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   359,   360,   363,   364,
     365,   366,   369,   370,   373,   375,   377,   381,   383,   384,
     387,   388,   391,   392,   393,   397,   398,   399,   400,   401,
     402,   403,   406,   409,   410,   411,   414,   415,   416,   417,
     418,   420,   422,   423,   426,   427,   428,   429,   432,   433,
     434,   437,   438,   441,   442,   445,   448,   451,   451,   451,
     451,   451,   451,   452,   452,   452,   452,   452,   455,   456,
     459,   462,   462,   465,   465,   468,   468,   471,   471,   474,
     474,   477,   477,   477,   480,   481,   481,   482,   482,   485,
     485,   485,   488,   488,   488,   491,   491,   491,   491,   494,
     495,   498,   501,   502,   502,   503,   503,   503,   503,   504,
     504,   505,   505,   506,   506,   507,   508,   508,   511,   512,
     513,   514,   515,   516,   516,   518,   519,   522,   523,   526,
     527,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   529,   529,   529,   529,   529,   529,   530,   531,   534,
     536,   537,   540,   540,   543,   543,   543,   543,   545,   546,
     549,   550,   553,   559,   560
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
  "MALFORMED_DIRECTIVE", "INVALID_TOKEN", "UNARY", "UMINUS",
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
  "storage_class_specifier", "function_specifier", "constexpr_specifier",
  "type_qualifier", "type_specifier", "init_declarator_list",
  "init_declarator", "initializer", "initializer_list_opt",
  "initializer_list", "declarator", "reference_opt", "reference",
  "pointer_opt", "pointer", "pointer_after_star", "type_qualifier_list",
  "direct_declarator", "function_pointer_declarator",
  "constant_expression_opt", "function_declarator",
  "function_cv_qualifier_seq_opt", "function_direct_declarator",
  "overload_operator", "parameter_list_opt", "parameter_list",
  "parameter_declaration", "parameter_declarator", "default_argument_opt",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "statement", "expression_statement", "selection_statement",
  "iteration_statement", "for_init_opt", "jump_statement",
  "labeled_statement", "expression_opt", "expression",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "constant_expression", "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "type_id", "unary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "primary_expression", "lambda_expression", "capture_list_opt",
  "capture_list", "capture_item", "lambda_return_opt", "qualified_name",
  "named_identifier", "tag_identifier", 0
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
     375,   376,   377,   378
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   127,   127,   127,
     128,   129,   129,   130,   131,   132,   133,   134,   134,   134,
     135,   135,   136,   136,   137,   137,   137,   138,   138,   138,
     139,   139,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   142,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   146,   146,   147,   148,   148,   149,
     150,   151,   151,   152,   152,   153,   154,   154,   155,   155,
     155,   155,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   158,   158,   158,   158,   159,   160,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   164,   164,
     164,   165,   165,   166,   166,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   173,   173,   173,
     174,   175,   175,   175,   175,   176,   177,   177,   178,   179,
     179,   180,   180,   180,   180,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   182,   182,   183,   183,
     183,   183,   184,   184,   185,   186,   186,   187,   188,   188,
     189,   189,   190,   190,   190,   191,   191,   191,   191,   191,
     191,   191,   192,   193,   193,   193,   194,   194,   194,   194,
     194,   195,   195,   195,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   202,   202,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209,   209,   210,   210,   210,   210,   210,   211,
     211,   211,   212,   212,   212,   213,   213,   213,   213,   214,
     214,   215,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   217,   217,
     217,   217,   217,   217,   217,   218,   218,   219,   219,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   221,
     222,   222,   223,   223,   224,   224,   224,   224,   225,   225,
     226,   226,   227,   228,   228
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     2,     2,
       2,     5,     5,     2,     2,     2,     2,     6,     5,     8,
       0,     3,     0,     1,     1,     1,     1,     1,     1,     4,
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     4,     8,     5,     4,     5,     4,
       0,     1,     1,     3,     3,     5,     3,     3,     2,     3,
       4,     1,     3,     1,     3,     3,     0,     2,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     3,     1,     3,
       4,     1,     3,     0,     1,     1,     3,     2,     3,     1,
       0,     1,     1,     1,     0,     1,     2,     0,     1,     2,
       1,     1,     2,     3,     4,     7,     0,     1,     4,     0,
       2,     4,     4,     5,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     1,     3,
       3,     1,     3,     2,     1,     0,     2,     3,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     5,     7,     5,     5,     5,     7,     7,
       9,     0,     1,     2,     3,     2,     2,     3,     3,     4,
       3,     0,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     2,     5,     5,     2,     4,     1,     4,
       4,     3,     3,     2,     2,     0,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     8,
       0,     1,     1,     3,     1,     2,     1,     1,     0,     2,
       1,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     3,     4,    13,     0,    30,     0,     0,
       0,     9,    10,    12,    11,     5,     7,     6,     8,   134,
       0,    14,    15,   323,   324,    24,     0,   134,    23,    25,
      26,    19,    16,    18,    20,     0,    32,     0,     0,    40,
      60,    40,   137,     0,    68,   116,   118,   130,   135,   129,
       0,   104,   100,    97,    96,   103,    92,   102,    94,    95,
     101,   107,   108,   106,   109,    91,     0,     0,   110,    99,
       0,     0,   105,    93,    98,   111,    77,    79,    80,    81,
      78,    82,     0,     0,     0,    71,    73,   130,   299,     0,
      76,     0,   300,   289,   291,   292,   293,   294,   295,   296,
     297,   298,   301,   302,   303,   304,   305,   306,     0,     0,
       0,     0,     0,     0,     0,     0,    76,   310,   230,    17,
     228,   231,   233,   235,   237,   239,   241,   244,   249,   252,
     255,   259,   262,   278,   308,     0,    34,    35,    36,     0,
      33,    40,     0,    76,   322,     0,    61,    62,    76,   140,
     138,   136,   137,     0,    67,   134,     0,   285,   133,   132,
       0,   131,    69,     0,    66,   112,   115,   320,   113,   114,
      75,     0,     0,    70,   134,     0,     0,    76,   271,   134,
     273,     0,   276,     0,     0,   263,   264,   267,   268,   266,
     269,   265,   270,     0,   213,   215,   228,     0,   316,   317,
       0,   311,   312,   314,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   283,   284,     0,   285,     0,     0,     0,
      38,    31,    37,    76,     0,    54,    47,     0,    41,    51,
      48,    50,    49,    43,    45,    44,    46,     0,    59,     0,
       0,    57,   139,     0,   117,   123,   119,   121,   287,     0,
     286,     0,   134,   128,   149,   141,   320,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,     0,     0,     0,
     289,   183,   184,   134,   185,     0,     0,   180,   182,   186,
     187,   188,   189,   190,     0,   212,     0,     0,    89,    85,
      86,    84,    87,    88,    90,    83,    21,    22,    72,    74,
       0,   134,   141,     0,   261,   285,     0,     0,   290,     0,
     307,   218,   219,   220,   221,   222,   217,   226,   227,   223,
     224,   225,     0,     0,   315,     0,     0,   232,     0,   234,
     236,   238,   240,   242,   243,   247,   248,   245,   246,   250,
     251,   253,   254,   256,   257,   258,   282,     0,     0,   281,
      40,    32,    28,    40,    53,    42,    76,    58,    64,    63,
      56,     0,   125,     0,   124,   120,     0,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,     0,   142,     0,
       0,   146,   148,    76,    76,   191,   206,     0,   205,     0,
       0,    76,     0,     0,     0,     0,     0,     0,   177,   181,
     192,     0,   321,   142,   272,     0,     0,   277,   214,   216,
     260,    76,   313,     0,   280,   279,    76,     0,    27,    76,
     171,   134,     0,   167,   168,     0,    76,   122,   127,   288,
     165,   164,    76,   143,     0,     0,   147,   150,     0,     0,
       0,   210,     0,     0,   134,     0,   202,   204,     0,   207,
       0,     0,     0,   208,   274,   275,     0,   229,     0,    39,
       0,     0,   174,   175,   173,     0,    76,    65,     0,   126,
       0,    76,   144,   152,   151,   209,     0,     0,   203,   211,
       0,     0,     0,     0,   318,    29,    55,   176,   172,    52,
     170,   169,   145,   153,     0,     0,     0,     0,   193,   195,
     196,   197,    76,     0,   154,     0,     0,   211,     0,   319,
     309,   198,   199,     0,   194,     0,   200
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    14,    15,    16,    17,    18,    19,    20,
     246,    47,   149,   247,   241,   153,   248,   249,   250,   251,
     252,   155,   156,   253,   254,   255,   256,    94,    95,   441,
      30,    86,   180,   315,    87,    88,    89,   159,    91,    54,
      55,   266,   383,   384,    56,   170,   171,    97,    58,   161,
     162,   273,    59,   455,    60,   402,   274,   398,   442,   443,
     444,   483,   484,   294,   295,   296,   297,   298,   299,   300,
     301,   465,   302,   303,   304,   305,   204,   342,   205,   129,
     206,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   190,   141,   142,   269,   270,   143,   144,   210,   211,
     212,   523,   257,   306,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -358
static const yytype_int16 yypact[] =
{
    -358,  1120,  -358,   -33,    74,   -52,  -358,    74,    74,    74,
     -14,   -19,   126,  -358,  -358,  -358,  1177,    50,    52,    72,
     101,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,   -42,
    1229,  -358,  -358,  -358,  -358,  -358,   103,   -42,  -358,  -358,
    -358,  -358,  -358,   818,  -358,   154,   189,   131,   207,  -358,
     138,  -358,    17,   141,    64,  -358,   -29,   -49,  -358,  -358,
      70,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,    74,   138,  -358,  -358,
      74,    74,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,   196,   215,    88,  -358,   195,   -49,  -358,   882,
    -358,   946,  -358,   185,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  1010,  1010,
     818,   818,   818,   818,   818,   818,   818,   -12,  -358,  -358,
     -57,   197,   190,   191,   192,   117,   111,   133,   182,   187,
    -358,  -358,    -8,  -358,  -358,   188,  -358,  -358,  -358,   224,
    -358,  -358,   194,   104,  -358,   209,   203,   223,   270,  -358,
    -358,  -358,    17,   138,  -358,   -42,   690,   818,  -358,  -358,
       4,  -358,  -358,   439,  -358,  -358,   213,  -358,  -358,  -358,
     199,   244,   245,  -358,   -42,   690,     5,   818,  -358,   141,
      69,    -7,  -358,   138,   818,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,    80,  -358,  -358,   292,   230,  -358,   138,
     227,   234,  -358,  -358,   818,   818,   818,   818,   818,   818,
     818,   818,   818,   818,   818,   818,   818,   818,   818,   818,
     818,   818,   818,  -358,  -358,   138,   818,   818,   138,   233,
    -358,   237,   213,   284,   235,   241,  -358,   238,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,   -11,   242,   138,
     818,   249,  -358,   247,  -358,   690,  -358,  -358,  -358,   248,
     251,   177,   -42,   250,  -358,    36,   252,   257,   258,   818,
     260,   253,   626,   261,   138,   268,   818,   269,   274,   276,
      26,  -358,  -358,   -42,  -358,   277,   551,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,   281,   285,   280,   138,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
     177,   -42,   213,   287,  -358,   818,   818,   818,  -358,   818,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,   818,   818,  -358,   290,   -12,   197,    16,   190,
     191,   192,   117,   111,   111,   133,   133,   133,   133,   182,
     182,   187,   187,  -358,  -358,  -358,  -358,   293,    60,  -358,
    -358,   189,   295,  -358,  -358,  -358,    45,  -358,   316,  -358,
    -358,   296,  -358,   297,   306,  -358,   818,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,  -358,  -358,   294,   302,   308,   310,
     311,   818,    25,    45,    45,  -358,  -358,   303,  -358,   626,
      10,   754,   315,   818,   317,   818,   818,   818,  -358,  -358,
    -358,   626,  -358,  -358,  -358,   313,    62,  -358,  -358,  -358,
    -358,    45,  -358,   818,  -358,  -358,   307,   138,  -358,   681,
    -358,   -48,   318,   321,  -358,   818,    45,  -358,   690,  -358,
    -358,  -358,    45,  -358,   322,   312,  -358,  -358,   320,   323,
     626,  -358,   325,   326,   -42,   330,   285,  -358,    98,  -358,
     105,   110,   116,  -358,  -358,  -358,   328,  -358,   333,   213,
     335,   690,  -358,   341,  -358,   342,   354,  -358,   369,  -358,
     372,    45,  -358,  -358,  -358,  -358,   818,   818,   324,   818,
     626,   626,   626,   626,   378,  -358,  -358,  -358,  -358,  -358,
    -358,  -358,  -358,  -358,   374,   129,   166,   401,   495,  -358,
    -358,  -358,  -358,   342,  -358,   403,   409,   818,   626,  -358,
    -358,  -358,  -358,   407,  -358,   626,  -358
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -358,  -358,   501,  -358,  -358,  -358,  -358,  -358,  -358,  -358,
      37,  -358,   147,   -34,  -358,   -41,  -358,  -358,    71,   102,
     106,  -358,  -358,   113,    12,   120,    15,  -358,   336,    -1,
    -358,  -358,  -358,  -358,  -358,  -358,  -358,   -24,  -358,    55,
     357,  -174,  -358,  -358,   -35,   426,  -358,   -15,   -30,   362,
    -358,  -358,  -358,  -358,   254,  -358,  -358,   205,  -357,  -358,
      41,  -358,    47,   -59,  -358,  -358,   232,  -256,  -358,  -358,
    -358,  -358,  -358,  -358,  -269,  -117,  -146,  -358,   -40,  -242,
     -36,   319,   327,   329,   314,   334,    63,    46,    54,    96,
     -39,  -122,   -50,  -358,  -217,  -358,  -358,  -358,  -358,  -358,
     183,  -358,   -69,   -25,    35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -323
static const yytype_int16 yytable[] =
{
      29,   174,    96,   128,   207,    37,    90,   130,   176,   203,
     158,   319,   150,    26,    57,    29,    28,   414,   379,   367,
     267,   268,   160,   163,    63,   157,   410,    52,    26,   271,
     320,    28,    63,    52,   214,   481,    36,   407,    21,   267,
     154,   168,    38,    39,    40,   154,   458,   459,   462,   188,
      42,   169,   177,    21,   166,   463,   154,   154,   215,  -175,
      53,  -175,   192,   233,   234,   323,    53,    84,   195,   196,
     203,   208,    22,    31,   476,    84,   208,   203,    32,   167,
     242,   197,   198,   199,   200,   201,   202,    22,   209,   488,
     268,   382,    52,   209,   307,   490,   235,   376,   348,   189,
     236,   275,   213,    23,   237,    41,   327,    24,   425,   238,
     243,   175,   272,   321,    25,   178,   179,   322,    23,   267,
     368,    27,    24,   329,   177,   189,    33,    34,   177,    25,
     433,   193,   160,   177,   514,     4,    27,    92,   263,     6,
    -322,   307,    93,     7,   403,   276,   146,   147,   148,    96,
       8,     9,    29,   461,  -166,   145,   154,    29,    45,   456,
      48,   177,    49,   440,    46,   473,   213,   329,   328,   329,
     164,   165,   293,   435,   324,   475,   172,   325,    43,   268,
     173,   326,    50,   428,   344,   291,   189,   329,   292,   330,
     154,   363,   364,   365,   183,   184,   429,   222,   223,   224,
     225,   220,   221,   487,   495,   329,   308,   500,   152,   426,
     366,    51,   329,   369,   501,   245,    52,   329,   177,   502,
     128,   309,   310,   329,   130,   503,   311,   312,   226,   227,
     517,   146,   147,   148,   378,   313,   329,   399,   525,   128,
     449,   151,    29,   130,   518,   519,   520,   521,   181,   314,
     387,   388,   389,   390,   391,   228,   229,    57,   533,   412,
     392,   393,   230,   231,   232,   394,   395,   182,   355,   356,
     357,   358,   534,   329,   489,   526,   154,   240,   185,   536,
     359,   360,   422,   353,   354,   396,   399,   216,   427,   397,
     193,   217,   219,   218,   466,   293,   468,   239,   470,   471,
     472,     4,   267,   244,   430,     6,   260,   507,   291,     7,
     259,   292,   146,   147,   148,     4,     8,     9,   307,     6,
     258,   213,   154,     7,   361,   362,   146,   147,   148,   436,
       8,     9,   439,   316,   317,   267,   154,   150,     4,   343,
     345,   346,     6,   370,   371,   373,     7,   374,   377,   146,
     147,   148,   375,     8,     9,   380,   381,   385,   386,   154,
     404,   128,   401,   405,   406,   130,   408,   409,   479,   411,
     331,   332,   333,   334,   335,   336,   413,   415,   457,   515,
     516,   261,   416,   214,   417,   337,   338,   420,   418,   339,
     340,   341,   329,   477,   421,   372,   424,   130,   431,   445,
     529,   438,   434,   450,   446,   128,   482,   215,   447,   130,
     464,   177,   177,   448,   177,   451,   452,   460,   478,   453,
     454,   467,   474,   469,   481,   492,   509,   485,   486,   493,
     491,   165,   494,   496,   497,    29,   499,   504,    29,   505,
     277,   506,   -76,   278,   279,   -76,   -76,   -76,   280,   281,
     282,   -76,   173,   -76,   -76,   283,   -76,   284,   285,   -76,
     -76,   -76,   -76,    98,   530,   286,   -76,   -76,    99,   -76,
     -76,   287,   510,   -76,     6,   -76,   -76,   288,   512,   100,
     101,   513,   522,   524,   289,   -76,   -76,   -76,   -76,   -76,
     102,   290,   -76,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   527,   528,   531,
     118,   119,   120,   121,   122,   532,   535,    44,   437,   498,
     318,   189,   264,   186,   262,   423,   400,   511,   419,   432,
     508,   123,   351,   347,     0,     0,     0,     0,     0,   124,
       0,     0,   125,   349,     0,  -211,   350,   126,     0,   173,
    -178,   127,   277,   352,   -76,   278,   279,   -76,   -76,   -76,
     280,   281,   282,   -76,     0,   -76,   -76,   283,   -76,   284,
     285,   -76,   -76,   -76,   -76,    98,     0,   286,   -76,   -76,
      99,   -76,   -76,   287,     0,   -76,     6,   -76,   -76,   288,
       0,   100,   101,     0,     0,     0,   289,   -76,   -76,   -76,
     -76,   -76,   102,   290,   -76,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,     0,
       0,     0,   118,   119,   120,   121,   122,   277,     0,     0,
     278,   279,     0,     0,     0,   280,   281,   282,     0,     0,
       0,     0,   283,   123,   284,   285,     0,     0,     0,     0,
      98,   124,   286,     0,   125,    99,     0,  -211,   287,   126,
       0,   173,  -179,   127,   288,     0,   100,   101,     0,     0,
       0,   289,     0,     0,     0,     0,     0,   102,   290,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,   118,   119,   120,
     121,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,    98,     0,     6,     0,   123,    99,
       7,     0,     0,   146,   147,   148,   124,     8,     9,   125,
     100,   101,  -211,   154,   126,     0,   173,     0,   127,     0,
       0,   102,   103,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,   118,   119,   120,   121,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,     0,   123,    99,     0,     0,     0,     0,     0,     0,
     124,     0,   480,   125,   100,   101,     0,     0,   126,     0,
     265,     0,   127,     0,     0,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,   118,   119,   120,   121,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,   123,    99,     0,     0,
       0,     0,     0,     0,   124,     0,     0,   125,   100,   101,
    -201,     0,   126,     0,     0,     0,   127,     0,     0,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,     0,     0,     0,   118,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
     123,    99,     0,     0,     0,     0,     0,     0,   124,     0,
       0,   125,   100,   101,     0,     0,   126,     0,     0,     0,
     127,     0,     0,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
       0,     0,     0,   118,   119,   120,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,   123,    99,     0,     0,     0,     0,
       0,     0,   124,     0,     0,   125,   100,   101,     0,     0,
     187,     0,     0,     0,   127,     0,     0,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,   118,   119,   120,
     121,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,   123,    99,
       0,     0,     0,     0,     0,     0,   124,     0,     0,   125,
     100,   101,     0,     0,   126,     0,     0,     0,   191,     0,
       0,   102,   103,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,     0,     0,
       0,   118,   119,   120,   121,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     0,
     124,     0,     0,   125,     0,     0,     0,     0,   194,     0,
       2,     3,   127,   -76,     0,     0,   -76,   -76,   -76,     0,
       0,     0,   -76,     0,   -76,   -76,     0,   -76,     0,     0,
     -76,   -76,   -76,   -76,     0,     0,     0,   -76,   -76,     0,
     -76,     4,     0,     5,   -76,     6,   -76,   -76,     0,     7,
       0,     0,     0,     0,     0,     0,     8,     9,   -76,   -76,
     -76,     0,    10,   -76,     0,     0,     0,     0,     3,     0,
     -76,     0,     0,   -76,   -76,   -76,     0,     0,    11,   -76,
      12,   -76,   -76,     0,   -76,     0,     0,   -76,   -76,   -76,
     -76,     0,     0,     0,   -76,   -76,     0,   -76,     4,     0,
       5,   -76,     6,   -76,   -76,     0,     7,     0,     0,     0,
       0,     0,     0,     8,     9,   -76,   -76,   -76,     0,    10,
     -76,     0,    61,     0,     0,    62,    63,    64,     0,     0,
       0,    65,     0,    66,    67,    11,    68,    12,     0,    69,
      70,    71,    72,     0,     0,     0,    73,    74,     0,    75,
      76,     0,     0,    77,     0,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,    82,    83,    84,
       0,     0,    85
};

static const yytype_int16 yycheck[] =
{
       1,    60,    37,    43,   126,     6,    30,    43,    77,   126,
      51,   185,    46,     1,    29,    16,     1,   286,   260,   236,
     166,   167,    52,    53,     7,    50,   282,    75,    16,    25,
      25,    16,     7,    75,    91,    83,    88,   279,     1,   185,
      52,    90,     7,     8,     9,    52,   403,   404,    38,    99,
      69,   100,    77,    16,    83,    45,    52,    52,   115,   107,
     108,   109,   101,    71,    72,   187,   108,    50,   118,   119,
     187,    83,     1,   106,   431,    50,    83,   194,   111,   108,
     149,   120,   121,   122,   123,   124,   125,    16,   100,   446,
     236,   265,    75,   100,   105,   452,   104,   108,   215,   100,
     108,   170,   127,     1,   112,   119,   113,     1,   325,   117,
     151,    76,   108,   108,     1,    80,    81,   186,    16,   265,
     237,     1,    16,   107,   149,   126,    52,    53,   153,    16,
     114,   105,   162,   158,   491,    31,    16,    34,   163,    35,
     114,   105,    39,    39,   108,   170,    42,    43,    44,   184,
      46,    47,   153,   409,   109,     1,    52,   158,   108,   401,
     108,   186,   110,   118,   114,   421,   191,   107,   193,   107,
     106,   107,   173,   113,   189,   113,   106,   108,    52,   325,
     110,   112,   110,   329,   209,   173,   187,   107,   173,   109,
      52,   230,   231,   232,   106,   107,   342,    86,    87,    88,
      89,    84,    85,   445,   460,   107,     7,   109,     1,   326,
     235,   110,   107,   238,   109,   111,    75,   107,   243,   109,
     260,    22,    23,   107,   260,   109,    27,    28,    95,    96,
     499,    42,    43,    44,   259,    36,   107,   272,   109,   279,
     386,   110,   243,   279,   500,   501,   502,   503,    52,    50,
      73,    74,    75,    76,    77,    73,    74,   272,   527,   284,
      83,    84,    75,    76,    77,    88,    89,    52,   222,   223,
     224,   225,   528,   107,   448,   109,    52,    53,    83,   535,
     226,   227,   307,   220,   221,   108,   321,    90,   327,   112,
     105,   101,   100,   102,   411,   296,   413,   109,   415,   416,
     417,    31,   448,   109,   343,    35,    83,   481,   296,    39,
     107,   296,    42,    43,    44,    31,    46,    47,   105,    35,
     111,   346,    52,    39,   228,   229,    42,    43,    44,   370,
      46,    47,   373,    89,    89,   481,    52,   371,    31,   109,
     113,   107,    35,   110,   107,   110,    39,   106,   106,    42,
      43,    44,   114,    46,    47,   106,   109,   109,   107,    52,
     108,   401,   112,   106,   106,   401,   106,   114,   437,   108,
      78,    79,    80,    81,    82,    83,   108,   108,   402,   496,
     497,   111,   108,    91,   108,    93,    94,   106,   111,    97,
      98,    99,   107,   433,   114,   111,   109,   433,   108,    83,
     522,   106,   109,   109,   108,   445,   441,   115,   111,   445,
     411,   436,   437,   107,   439,   113,   108,   114,   111,   109,
     109,   106,   109,   106,    83,   113,   485,   109,   107,   109,
     108,   107,   109,   108,   108,   436,   106,   109,   439,   106,
       1,   106,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   110,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   523,    26,    27,    28,    29,    30,
      31,    32,   118,    34,    35,    36,    37,    38,   109,    40,
      41,   109,   104,   109,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,   106,    13,   106,
      71,    72,    73,    74,    75,   106,   109,    16,   371,   464,
     184,   522,   165,    97,   162,   320,   272,   486,   296,   346,
     483,    92,   218,   214,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,   103,   216,    -1,   106,   217,   108,    -1,   110,
     111,   112,     1,   219,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    74,    75,     1,    -1,    -1,
       4,     5,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    16,    92,    18,    19,    -1,    -1,    -1,    -1,
      24,   100,    26,    -1,   103,    29,    -1,   106,    32,   108,
      -1,   110,   111,   112,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    24,    -1,    35,    -1,    92,    29,
      39,    -1,    -1,    42,    43,    44,   100,    46,    47,   103,
      40,    41,   106,    52,   108,    -1,   110,    -1,   112,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    92,    29,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,   111,   103,    40,    41,    -1,    -1,   108,    -1,
     110,    -1,   112,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    92,    29,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   103,    40,    41,
     106,    -1,   108,    -1,    -1,    -1,   112,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      92,    29,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,   103,    40,    41,    -1,    -1,   108,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   103,    -1,    -1,    -1,    -1,   108,    -1,
       0,     1,   112,     3,    -1,    -1,     6,     7,     8,    -1,
      -1,    -1,    12,    -1,    14,    15,    -1,    17,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    -1,    52,    53,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,     6,     7,     8,    -1,    -1,    68,    12,
      70,    14,    15,    -1,    17,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    -1,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    -1,    52,
      53,    -1,     3,    -1,    -1,     6,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    15,    68,    17,    70,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      31,    -1,    -1,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   125,     0,     1,    31,    33,    35,    39,    46,    47,
      52,    68,    70,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   142,   143,   144,   147,   148,   149,   150,   153,
     154,   106,   111,    52,    53,   228,    88,   153,   228,   228,
     228,   119,    69,    52,   126,   108,   114,   135,   108,   110,
     110,   110,    75,   108,   163,   164,   168,   171,   172,   176,
     178,     3,     6,     7,     8,    12,    14,    15,    17,    20,
      21,    22,    23,    27,    28,    30,    31,    34,    36,    37,
      46,    47,    48,    49,    50,    53,   155,   158,   159,   160,
     161,   162,    34,    39,   151,   152,   168,   171,    24,    29,
      40,    41,    51,    52,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    71,    72,
      73,    74,    75,    92,   100,   103,   108,   112,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   216,   217,   220,   221,     1,    42,    43,    44,   136,
     137,   110,     1,   139,    52,   145,   146,   227,   139,   161,
     172,   173,   174,   172,   106,   107,    83,   108,    90,   100,
     169,   170,   106,   110,   187,   228,   226,   227,   228,   228,
     156,    52,    52,   106,   107,    83,   169,   108,   216,   153,
     215,   112,   214,   105,   108,   216,   216,   214,   214,   214,
     214,   214,   214,   199,   200,   202,   204,   215,    83,   100,
     222,   223,   224,   227,    91,   115,    90,   101,   102,   100,
      84,    85,    86,    87,    88,    89,    95,    96,    73,    74,
      75,    76,    77,    71,    72,   104,   108,   112,   117,   109,
      53,   138,   226,   139,   109,   111,   134,   137,   140,   141,
     142,   143,   144,   147,   148,   149,   150,   226,   111,   107,
      83,   111,   173,   227,   164,   110,   165,   200,   200,   218,
     219,    25,   108,   175,   180,   226,   227,     1,     4,     5,
       9,    10,    11,    16,    18,    19,    26,    32,    38,    45,
      52,   148,   150,   153,   187,   188,   189,   190,   191,   192,
     193,   194,   196,   197,   198,   199,   227,   105,     7,    22,
      23,    27,    28,    36,    50,   157,    89,    89,   152,   165,
      25,   108,   226,   215,   171,   108,   112,   113,   227,   107,
     109,    78,    79,    80,    81,    82,    83,    93,    94,    97,
      98,    99,   201,   109,   227,   113,   107,   205,   199,   206,
     207,   208,   209,   210,   210,   211,   211,   211,   211,   212,
     212,   213,   213,   214,   214,   214,   227,   218,   199,   227,
     110,   107,   111,   110,   106,   114,   108,   106,   227,   203,
     106,   109,   165,   166,   167,   109,   107,    73,    74,    75,
      76,    77,    83,    84,    88,    89,   108,   112,   181,   168,
     178,   112,   179,   108,   108,   106,   106,   203,   106,   114,
     191,   108,   227,   108,   198,   108,   108,   108,   111,   190,
     106,   114,   227,   181,   109,   218,   199,   214,   200,   200,
     214,   108,   224,   114,   109,   113,   139,   136,   106,   139,
     118,   153,   182,   183,   184,    83,   108,   111,   107,   200,
     109,   113,   108,   109,   109,   177,   203,   161,   182,   182,
     114,   191,    38,    45,   153,   195,   199,   106,   199,   106,
     199,   199,   199,   191,   109,   113,   182,   202,   111,   226,
     111,    83,   168,   185,   186,   109,   107,   203,   182,   165,
     182,   108,   113,   109,   109,   191,   108,   108,   163,   106,
     109,   109,   109,   109,   109,   106,   106,   165,   186,   187,
     118,   184,   109,   109,   182,   199,   199,   198,   191,   191,
     191,   191,   104,   225,   109,   109,   109,   106,    13,   215,
     187,   106,   106,   198,   191,   109,   191
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



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

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

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
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 14:
#line 98 "src/parser.y"
    { yyerrok; ;}
    break;

  case 15:
#line 101 "src/parser.y"
    { yyerrok; ;}
    break;

  case 19:
#line 109 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(2) - (2)]).first_line, (yylsp[(2) - (2)]).first_column,
                            "preprocessor directive must begin a line"); ;}
    break;

  case 21:
#line 117 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 22:
#line 118 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 23:
#line 123 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 24:
#line 126 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 25:
#line 129 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 26:
#line 132 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 28:
#line 138 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(5) - (5)]).first_line, (yylsp[(5) - (5)]).last_column + 1, "expected ';' after class definition"); ;}
    break;

  case 29:
#line 142 "src/parser.y"
    { yyerrok; ;}
    break;

  case 54:
#line 183 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).last_column + 1, "expected ';' after struct definition"); ;}
    break;

  case 55:
#line 185 "src/parser.y"
    { yyerrok; ;}
    break;

  case 57:
#line 190 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).last_column + 1, "expected ';' after union definition"); ;}
    break;

  case 59:
#line 195 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).last_column + 1, "expected ';' after enum definition"); ;}
    break;

  case 68:
#line 217 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(2) - (2)]).last_line, (yylsp[(2) - (2)]).last_column + 1, "expected ';' after declaration"); ;}
    break;

  case 73:
#line 230 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (1)].text)); ;}
    break;

  case 74:
#line 231 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (3)].text)); ;}
    break;

  case 128:
#line 296 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (3)].text); ;}
    break;

  case 129:
#line 297 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 141:
#line 322 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 142:
#line 323 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (2)].text); ;}
    break;

  case 143:
#line 324 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (3)].text); ;}
    break;

  case 144:
#line 328 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 145:
#line 333 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (7)].text); ;}
    break;

  case 148:
#line 341 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (4)].text); ;}
    break;

  case 151:
#line 351 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 152:
#line 352 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 153:
#line 353 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (5)].text); ;}
    break;

  case 154:
#line 354 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (6)].text); ;}
    break;

  case 191:
#line 403 "src/parser.y"
    { yyerrok; ;}
    break;

  case 320:
#line 549 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 321:
#line 550 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (3)].text); ;}
    break;

  case 322:
#line 553 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 323:
#line 559 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 324:
#line 560 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2530 "src/parser.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 563 "src/parser.y"


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

