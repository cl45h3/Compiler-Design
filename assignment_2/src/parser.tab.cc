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


#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

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

static int lastYyerrorLine = 0;
static int lastYyerrorColumn = 0;

static string userFacingBisonMessage(const char* raw) {
    string message = raw ? raw : "syntax error";
    const string internalExpectation = ", expecting MALFORMED_DIRECTIVE";
    const auto expectation = message.find(internalExpectation);
    if (expectation != string::npos) message.erase(expectation);
    const auto eof = message.find("$end");
    if (eof != string::npos) message.replace(eof, 4, "end of file");
    const auto semicolon = message.find("SEMICOLON");
    if (semicolon != string::npos) message.replace(semicolon, 9, "';'");
    const auto rightParen = message.find("RIGHT_PAREN");
    if (rightParen != string::npos) message.replace(rightParen, 11, "')'");
    const auto assign = message.find("ASSIGN");
    if (assign != string::npos) message.replace(assign, 6, "'='");
    return message;
}
static void addSyntaxError(const char* message) {

    if (currentParserTokenIsLexicalError) return;

    const int errorLine = lastYyerrorLine ? lastYyerrorLine : tokenStartLine;
    const int errorColumn = lastYyerrorColumn ? lastYyerrorColumn : tokenStartColumn;
    if (!syntaxErrorList.empty() && syntaxErrorList.back().lineNumber == errorLine &&
        syntaxErrorList.back().column == errorColumn) return;
    syntaxErrorList.push_back({userFacingBisonMessage(message), errorLine, errorColumn});
}
void reportSyntaxErrorAt(int line, int column, const char* message) {
    syntaxErrorList.push_back({message, line, column});
}

static void replaceLookaheadErrorWithMissingSemicolon(int line, int column) {

    if (!syntaxErrorList.empty()) syntaxErrorList.pop_back();
    reportSyntaxErrorAt(line, column, "expected ';' after declaration");
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
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 67 "src/parser.y"
{ char* text; }
/* Line 193 of yacc.c.  */
#line 410 "src/parser.tab.cc"
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
#line 435 "src/parser.tab.cc"

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
#define YYLAST   1438

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNRULES -- Number of states.  */
#define YYNSTATES  568

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
      46,    49,    55,    61,    64,    66,    68,    71,    74,    81,
      87,    96,    97,   101,   102,   104,   106,   108,   110,   112,
     114,   119,   120,   123,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   144,   146,   148,   150,   156,   162,   168,
     174,   180,   185,   191,   196,   197,   199,   201,   205,   209,
     215,   219,   223,   226,   230,   235,   240,   245,   248,   252,
     256,   261,   263,   267,   269,   273,   277,   278,   281,   283,
     285,   287,   289,   290,   293,   295,   297,   299,   301,   303,
     305,   307,   309,   311,   313,   315,   317,   319,   321,   323,
     325,   327,   329,   331,   333,   335,   337,   339,   341,   343,
     345,   347,   349,   351,   354,   357,   360,   364,   369,   370,
     374,   376,   380,   382,   386,   391,   393,   397,   398,   400,
     402,   406,   409,   413,   415,   416,   418,   420,   422,   423,
     425,   428,   429,   431,   434,   436,   438,   441,   445,   450,
     458,   459,   461,   466,   467,   470,   475,   480,   486,   493,
     495,   497,   499,   501,   503,   505,   507,   509,   511,   514,
     517,   518,   520,   522,   526,   530,   532,   536,   539,   541,
     542,   545,   549,   550,   552,   554,   557,   559,   561,   563,
     565,   567,   569,   571,   573,   575,   578,   581,   587,   595,
     601,   606,   613,   618,   621,   627,   633,   641,   649,   659,
     664,   669,   670,   672,   675,   679,   682,   685,   689,   693,
     698,   702,   703,   705,   707,   711,   713,   717,   719,   721,
     723,   725,   727,   729,   731,   733,   735,   737,   739,   741,
     747,   749,   751,   755,   757,   761,   763,   767,   769,   773,
     775,   779,   781,   785,   789,   791,   795,   799,   803,   807,
     809,   813,   817,   819,   823,   827,   829,   833,   837,   841,
     843,   848,   851,   853,   856,   859,   862,   865,   868,   871,
     874,   877,   880,   885,   888,   894,   900,   905,   908,   913,
     915,   920,   925,   929,   933,   936,   939,   940,   942,   944,
     948,   950,   954,   956,   958,   960,   962,   964,   966,   968,
     970,   972,   974,   976,   978,   980,   982,   984,   986,   990,
     992,  1001,  1002,  1004,  1006,  1010,  1012,  1015,  1017,  1019,
    1020,  1023,  1025,  1029,  1031,  1033
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     125,     0,    -1,    -1,   125,   126,    -1,   127,    -1,   149,
      -1,   153,    -1,   151,    -1,   154,    -1,   134,    -1,   146,
      -1,   145,    -1,   128,    -1,   150,    -1,     1,   106,    -1,
       1,   111,    -1,    68,    69,    -1,    70,    52,   210,    -1,
      70,    52,    -1,    52,   119,    -1,   129,   126,    -1,    33,
      88,    34,    52,    89,    -1,    33,    88,    39,    52,    89,
      -1,    39,   131,    -1,    52,    -1,    53,    -1,    46,   235,
      -1,    47,   235,    -1,   130,   135,   110,   139,   111,   106,
      -1,   130,   135,   110,   139,   111,    -1,   130,   108,     1,
     109,   110,   139,   111,   106,    -1,    -1,   114,   136,   138,
      -1,    -1,   137,    -1,    42,    -1,    43,    -1,    44,    -1,
     233,    -1,    53,    -1,   138,   107,   136,   233,    -1,    -1,
     139,   140,    -1,   137,   114,    -1,   149,    -1,   153,    -1,
     151,    -1,   154,    -1,   134,    -1,   146,    -1,   145,    -1,
     141,    -1,   142,    -1,   143,    -1,   144,    -1,   150,    -1,
      52,   108,   188,   109,   193,    -1,    52,   108,   188,   109,
     106,    -1,   103,    52,   108,   109,   193,    -1,   103,    52,
     108,   109,   106,    -1,   133,   110,   139,   111,   106,    -1,
     133,   110,   139,   111,    -1,   132,   110,   147,   111,   106,
      -1,   132,   110,   147,   111,    -1,    -1,   148,    -1,   234,
      -1,   234,    83,   210,    -1,   148,   107,   234,    -1,   148,
     107,   234,    83,   210,    -1,   157,   184,   193,    -1,   157,
     174,   193,    -1,   157,   106,    -1,   157,   169,   106,    -1,
     157,   169,   152,   106,    -1,   157,   169,     1,   106,    -1,
     157,   169,     1,   120,    -1,   157,   169,    -1,   152,   157,
     169,    -1,   157,   184,   106,    -1,    35,   157,   155,   106,
      -1,   156,    -1,   155,   107,   156,    -1,   174,    -1,   174,
      83,   171,    -1,   158,   166,   160,    -1,    -1,   158,   159,
      -1,   165,    -1,   162,    -1,   163,    -1,   164,    -1,    -1,
     160,   161,    -1,    27,    -1,    22,    -1,    23,    -1,    28,
      -1,    36,    -1,     7,    -1,    50,    -1,    30,    -1,    14,
      -1,    49,    -1,    17,    -1,    20,    -1,     8,    -1,     7,
      -1,    50,    -1,    37,    -1,     6,    -1,    21,    -1,    15,
      -1,    12,    -1,     3,    -1,    48,    -1,    27,    -1,    22,
      -1,    23,    -1,    28,    -1,    36,    -1,    53,    -1,   167,
      -1,    46,   235,    -1,    47,   235,    -1,    34,   233,    -1,
      31,   235,   168,    -1,    31,   110,   139,   111,    -1,    -1,
     110,   139,   111,    -1,   170,    -1,   169,   107,   170,    -1,
     174,    -1,   174,    83,   171,    -1,   174,   108,   225,   109,
      -1,   207,    -1,   110,   172,   111,    -1,    -1,   173,    -1,
     171,    -1,   173,   107,   171,    -1,   173,   107,    -1,   177,
     175,   181,    -1,   182,    -1,    -1,   176,    -1,   100,    -1,
      90,    -1,    -1,   178,    -1,    75,   179,    -1,    -1,   178,
      -1,   180,   179,    -1,   165,    -1,   233,    -1,    25,   187,
      -1,   108,   174,   109,    -1,   181,   112,   183,   113,    -1,
     108,   178,   234,   109,   108,   188,   109,    -1,    -1,   210,
      -1,   177,   175,   186,   185,    -1,    -1,   185,   165,    -1,
     234,   108,   188,   109,    -1,   233,   108,   188,   109,    -1,
      25,   187,   108,   188,   109,    -1,   108,   184,   109,   108,
     188,   109,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    83,    -1,    84,    -1,    88,    -1,    89,
      -1,   112,   113,    -1,   108,   109,    -1,    -1,   189,    -1,
     190,    -1,   189,   107,   190,    -1,   189,   107,   118,    -1,
     118,    -1,   157,   191,   192,    -1,   157,   192,    -1,   174,
      -1,    -1,    83,   171,    -1,   110,   194,   111,    -1,    -1,
     195,    -1,   196,    -1,   195,   196,    -1,   197,    -1,   151,
      -1,   154,    -1,   193,    -1,   198,    -1,   199,    -1,   201,
      -1,   203,    -1,   204,    -1,     1,   106,    -1,   205,   106,
      -1,    19,   108,   206,   109,   197,    -1,    19,   108,   206,
     109,   197,    13,   197,    -1,    32,   108,   206,   109,   197,
      -1,    19,   108,   200,   197,    -1,    19,   108,   200,   197,
      13,   197,    -1,    32,   108,   200,   197,    -1,     1,   109,
      -1,    38,   108,   206,   109,   197,    -1,    45,   108,   206,
     109,   197,    -1,    11,   197,    38,   108,   206,   109,   106,
      -1,    11,   197,    45,   108,   206,   109,   106,    -1,    16,
     108,   202,   106,   205,   106,   205,   109,   197,    -1,    38,
     108,   200,   197,    -1,    45,   108,   200,   197,    -1,    -1,
     206,    -1,   157,   169,    -1,    18,   234,   106,    -1,     9,
     106,    -1,     4,   106,    -1,    26,   205,   106,    -1,   234,
     114,   197,    -1,     5,   210,   114,   197,    -1,    10,   114,
     197,    -1,    -1,   206,    -1,   207,    -1,   206,   107,   207,
      -1,   209,    -1,   211,   208,   207,    -1,    83,    -1,    78,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    97,
      -1,    98,    -1,    99,    -1,    93,    -1,    94,    -1,   211,
      -1,   211,   115,   206,   114,   209,    -1,   209,    -1,   212,
      -1,   211,    91,   212,    -1,   213,    -1,   212,    90,   213,
      -1,   214,    -1,   213,   101,   214,    -1,   215,    -1,   214,
     102,   215,    -1,   216,    -1,   215,   100,   216,    -1,   217,
      -1,   216,    84,   217,    -1,   216,    85,   217,    -1,   218,
      -1,   217,    88,   218,    -1,   217,    89,   218,    -1,   217,
      86,   218,    -1,   217,    87,   218,    -1,   219,    -1,   218,
      95,   219,    -1,   218,    96,   219,    -1,   220,    -1,   219,
      73,   220,    -1,   219,    74,   220,    -1,   221,    -1,   220,
      75,   221,    -1,   220,    76,   221,    -1,   220,    77,   221,
      -1,   223,    -1,   108,   222,   109,   221,    -1,   157,   177,
      -1,   224,    -1,    71,   223,    -1,    72,   223,    -1,   100,
     221,    -1,    75,   221,    -1,    73,   221,    -1,    74,   221,
      -1,    92,   221,    -1,   103,   221,    -1,    29,   223,    -1,
      29,   108,   222,   109,    -1,    40,   222,    -1,    40,   222,
     108,   225,   109,    -1,    40,   222,   112,   206,   113,    -1,
      40,   222,   112,   113,    -1,    41,   221,    -1,    41,   112,
     113,   221,    -1,   227,    -1,   224,   112,   206,   113,    -1,
     224,   108,   225,   109,    -1,   224,   117,   234,    -1,   224,
     104,   234,    -1,   224,    71,    -1,   224,    72,    -1,    -1,
     226,    -1,   207,    -1,   226,   107,   207,    -1,    52,    -1,
      52,   105,   234,    -1,    54,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      24,    -1,    51,    -1,    62,    -1,    63,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,   108,   206,   109,    -1,
     228,    -1,   112,   229,   113,   108,   188,   109,   232,   193,
      -1,    -1,   230,    -1,   231,    -1,   230,   107,   231,    -1,
     234,    -1,   100,   234,    -1,    83,    -1,   100,    -1,    -1,
     104,   222,    -1,   234,    -1,   233,   105,   234,    -1,    52,
      -1,    52,    -1,    53,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   108,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   123,   125,   129,   130,   131,   132,
     138,   141,   142,   147,   151,   152,   155,   158,   162,   164,
     167,   169,   171,   173,   175,   178,   178,   178,   181,   182,
     183,   185,   187,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   205,   208,   212,   215,
     219,   220,   224,   225,   228,   229,   232,   233,   234,   235,
     239,   243,   249,   253,   255,   259,   263,   269,   270,   275,
     278,   281,   282,   285,   286,   290,   292,   294,   297,   297,
     297,   297,   299,   301,   304,   304,   304,   304,   304,   304,
     304,   307,   307,   307,   307,   310,   313,   316,   316,   319,
     319,   319,   320,   320,   320,   320,   321,   321,   321,   322,
     322,   323,   324,   325,   326,   327,   331,   332,   335,   336,
     340,   341,   344,   345,   346,   349,   350,   352,   353,   356,
     357,   358,   362,   363,   365,   366,   369,   369,   371,   373,
     377,   379,   381,   382,   385,   388,   389,   390,   392,   396,
     398,   400,   404,   407,   409,   412,   413,   414,   415,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     420,   421,   424,   425,   426,   427,   430,   431,   434,   436,
     438,   442,   444,   445,   448,   449,   452,   453,   454,   458,
     459,   460,   461,   462,   463,   464,   467,   470,   471,   472,
     474,   475,   476,   479,   482,   483,   484,   485,   486,   487,
     488,   490,   492,   493,   496,   497,   498,   499,   502,   503,
     504,   507,   508,   511,   512,   515,   517,   520,   520,   520,
     520,   520,   520,   521,   521,   521,   521,   521,   524,   525,
     528,   531,   531,   534,   534,   537,   537,   540,   540,   543,
     543,   546,   546,   546,   549,   550,   550,   551,   551,   554,
     554,   554,   557,   557,   557,   560,   560,   560,   560,   563,
     564,   567,   570,   571,   571,   572,   572,   572,   572,   573,
     573,   574,   574,   575,   575,   576,   577,   578,   578,   581,
     582,   583,   584,   585,   586,   586,   588,   589,   592,   593,
     596,   597,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   599,   599,   599,   599,   599,   599,   600,   601,
     604,   606,   607,   610,   610,   613,   613,   613,   613,   615,
     616,   619,   620,   623,   627,   628
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
  "class_head", "class_identifier", "enum_head", "union_head",
  "class_declaration", "inheritance_opt", "access_specifier_opt",
  "access_specifier", "base_class_list", "member_list",
  "member_declaration", "constructor_definition",
  "constructor_declaration", "destructor_definition",
  "destructor_declaration", "union_declaration", "enum_declaration",
  "enumerator_list_opt", "enumerator_list", "function_definition",
  "malformed_function_definition", "declaration",
  "missing_declaration_chain", "function_declaration",
  "typedef_declaration", "typedef_declarator_list", "typedef_declarator",
  "declaration_specifiers", "declaration_prefix_opt", "declaration_prefix",
  "type_suffixes", "type_suffix", "storage_class_specifier",
  "function_specifier", "constexpr_specifier", "type_qualifier",
  "type_specifier", "struct_specifier", "struct_body_opt",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list_opt", "initializer_list", "declarator",
  "reference_opt", "reference", "pointer_opt", "pointer",
  "pointer_after_star", "type_qualifier_list", "direct_declarator",
  "function_pointer_declarator", "constant_expression_opt",
  "function_declarator", "function_cv_qualifier_seq_opt",
  "function_direct_declarator", "overload_operator", "parameter_list_opt",
  "parameter_list", "parameter_declaration", "parameter_declarator",
  "default_argument_opt", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "statement", "expression_statement",
  "selection_statement", "malformed_condition", "iteration_statement",
  "for_init_opt", "jump_statement", "labeled_statement", "expression_opt",
  "expression", "assignment_expression", "assignment_operator",
  "conditional_expression", "constant_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "type_id",
  "unary_expression", "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "primary_expression", "lambda_expression",
  "capture_list_opt", "capture_list", "capture_item", "lambda_return_opt",
  "qualified_name", "named_identifier", "tag_identifier", 0
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
     128,   129,   129,   130,   131,   131,   132,   133,   134,   134,
     134,   135,   135,   136,   136,   137,   137,   137,   138,   138,
     138,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   141,   142,   143,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   148,   148,
     149,   150,   151,   151,   151,   151,   151,   152,   152,   153,
     154,   155,   155,   156,   156,   157,   158,   158,   159,   159,
     159,   159,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   162,   162,   162,   162,   163,   164,   165,   165,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   170,   171,   171,   172,   172,   173,
     173,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   179,   179,   179,   180,   181,   181,   181,   181,   182,
     183,   183,   184,   185,   185,   186,   186,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     188,   188,   189,   189,   189,   189,   190,   190,   191,   192,
     192,   193,   194,   194,   195,   195,   196,   196,   196,   197,
     197,   197,   197,   197,   197,   197,   198,   199,   199,   199,
     199,   199,   199,   200,   201,   201,   201,   201,   201,   201,
     201,   202,   202,   202,   203,   203,   203,   203,   204,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   209,   209,
     210,   211,   211,   212,   212,   213,   213,   214,   214,   215,
     215,   216,   216,   216,   217,   217,   217,   217,   217,   218,
     218,   218,   219,   219,   219,   220,   220,   220,   220,   221,
     221,   222,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   224,
     224,   224,   224,   224,   224,   224,   225,   225,   226,   226,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     228,   229,   229,   230,   230,   231,   231,   231,   231,   232,
     232,   233,   233,   234,   235,   235
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     2,     2,
       2,     5,     5,     2,     1,     1,     2,     2,     6,     5,
       8,     0,     3,     0,     1,     1,     1,     1,     1,     1,
       4,     0,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     5,     5,     5,
       5,     4,     5,     4,     0,     1,     1,     3,     3,     5,
       3,     3,     2,     3,     4,     4,     4,     2,     3,     3,
       4,     1,     3,     1,     3,     3,     0,     2,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     4,     0,     3,
       1,     3,     1,     3,     4,     1,     3,     0,     1,     1,
       3,     2,     3,     1,     0,     1,     1,     1,     0,     1,
       2,     0,     1,     2,     1,     1,     2,     3,     4,     7,
       0,     1,     4,     0,     2,     4,     4,     5,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     1,     1,     3,     3,     1,     3,     2,     1,     0,
       2,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     5,     7,     5,
       4,     6,     4,     2,     5,     5,     7,     7,     9,     4,
       4,     0,     1,     2,     3,     2,     2,     3,     3,     4,
       3,     0,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     2,     5,     5,     4,     2,     4,     1,
       4,     4,     3,     3,     2,     2,     0,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       8,     0,     1,     1,     3,     1,     2,     1,     1,     0,
       2,     1,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     3,     4,    12,     0,    31,     0,     0,     9,
      11,    10,     5,    13,     7,     6,     8,   148,     0,    14,
      15,     0,   148,    24,    25,    23,   344,   345,    26,    27,
      19,    16,    18,    20,     0,    33,     0,    64,    41,   151,
      72,     0,     0,   130,   132,   144,   149,   143,     0,   114,
     110,   107,   106,   113,   102,   112,   104,   105,   111,   117,
     118,   116,   119,   101,     0,     0,   120,   109,     0,     0,
     115,   103,   108,   121,    87,    89,    90,    91,    88,    92,
     122,     0,     0,     0,    81,    83,   144,   320,     0,    86,
       0,   321,   310,   312,   313,   314,   315,   316,   317,   318,
     319,   322,   323,   324,   325,   326,   327,     0,     0,     0,
       0,     0,     0,     0,     0,    86,   331,   250,    17,   248,
     251,   253,   255,   257,   259,   261,   264,   269,   272,   275,
     279,   282,   299,   329,     0,    35,    36,    37,     0,    34,
      41,   343,     0,    65,    66,    86,   154,   152,   150,   151,
       0,     0,    73,   148,    86,   148,     0,   306,     0,    71,
     147,   146,     0,   145,    79,    70,    41,   128,   125,   341,
     123,   124,    85,     0,     0,    80,   148,     0,     0,    86,
     291,   148,   293,     0,   297,     0,     0,   283,   284,   287,
     288,   286,   289,   285,   290,     0,   233,   235,   248,     0,
     337,   338,     0,   332,   333,   335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,   305,     0,   306,     0,
       0,     0,    39,    32,    38,    86,    63,     0,     0,     0,
       0,    61,    48,     0,    42,    51,    52,    53,    54,    50,
      49,    44,    55,    46,    45,    47,   153,     0,    75,    76,
     131,   132,    74,   148,    77,   137,   133,   135,   308,     0,
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,     0,     0,     0,   310,   197,   198,   148,   199,     0,
       0,   194,   196,   200,   201,   202,   203,   204,     0,   232,
       0,     0,   148,   142,   163,   155,   341,    86,    41,   126,
       0,    99,    95,    96,    94,    97,    98,   100,    93,    21,
      22,    82,    84,     0,   148,   155,     0,   281,   306,     0,
       0,   311,     0,   328,   238,   239,   240,   241,   242,   237,
     246,   247,   243,   244,   245,     0,     0,   336,     0,     0,
     252,     0,   254,   256,   258,   260,   262,   263,   267,   268,
     265,   266,   270,   271,   273,   274,   276,   277,   278,   303,
       0,     0,   302,    41,    33,    29,    62,    68,    67,    86,
       0,    60,    43,     0,    78,   139,     0,   138,   134,     0,
     205,   226,     0,   225,     0,     0,    86,     0,     0,     0,
       0,     0,     0,   191,   195,   206,     0,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,   156,     0,
       0,   160,   162,    86,    86,   127,    86,   342,   156,   292,
       0,   296,     0,   298,   234,   236,   280,    86,   334,     0,
     301,   300,    86,     0,    28,     0,   185,   148,     0,   181,
     182,     0,    86,   136,   141,   309,     0,   230,     0,     0,
     148,     0,   222,   224,     0,     0,     0,   227,     0,     0,
       0,     0,     0,     0,   228,   179,   178,    86,   157,     0,
       0,   161,   164,     0,     0,   129,   294,   295,     0,   249,
       0,    40,    69,     0,   188,   189,   187,     0,    86,     0,
       0,   140,   229,     0,     0,   223,   231,   213,   210,     0,
     212,     0,   219,     0,   220,     0,     0,    86,   158,   166,
     165,   339,    30,   190,   186,    57,    56,   184,   183,    59,
      58,   159,     0,     0,     0,     0,   207,   209,   214,   215,
     167,     0,    86,     0,     0,     0,   231,   211,     0,   168,
     340,   330,   216,   217,     0,   208,     0,   218
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    13,    14,    15,    16,    35,    17,    18,
     252,    46,   148,   253,   243,   155,   254,   255,   256,   257,
     258,   259,   260,   152,   153,   261,   262,   263,   164,   264,
     265,    93,    94,   457,    28,    84,   182,   328,    85,    86,
      87,   156,    89,    90,   319,    52,    53,   276,   396,   397,
     271,   172,   173,    96,    56,   158,   159,   313,    57,   490,
      58,   432,   314,   428,   458,   459,   460,   505,   506,   298,
     299,   300,   301,   302,   303,   304,   475,   305,   471,   306,
     307,   308,   309,   206,   355,   207,   128,   208,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   192,   140,
     141,   279,   280,   142,   143,   212,   213,   214,   553,   178,
     310,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -386
static const yytype_int16 yypact[] =
{
    -386,  1276,  -386,    81,   -42,  -386,    95,   214,   214,   -84,
      91,    38,  -386,  -386,  -386,  1333,   -22,    66,    89,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,     4,  1385,  -386,
    -386,   162,   -43,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,   974,  -386,   203,   232,   105,   171,  -386,    24,
    -386,   151,   338,  -386,   -39,    19,  -386,  -386,    67,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,    20,   171,  -386,  -386,   214,   214,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,   179,   194,   178,  -386,   180,    19,  -386,  1038,  -386,
    1102,  -386,   129,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  1166,  1166,   974,
     974,   974,   974,   974,   974,   974,    -5,  -386,  -386,   -49,
     181,   187,   193,   200,   229,   153,   223,   250,   235,  -386,
    -386,    45,  -386,  -386,   199,  -386,  -386,  -386,   281,  -386,
    -386,  -386,   217,   231,   264,    41,  -386,  -386,  -386,    24,
     171,     1,  -386,   -43,   243,   -43,   846,   974,   456,  -386,
    -386,  -386,    -7,  -386,  -386,  -386,  -386,   244,   252,  -386,
    -386,  -386,   157,   275,   278,  -386,   -43,   846,    18,   974,
    -386,   151,    94,   -19,  -386,   171,   974,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,     6,  -386,  -386,   139,   261,
    -386,   171,   258,   266,  -386,  -386,   974,   974,   974,   974,
     974,   974,   974,   974,   974,   974,   974,   974,   974,   974,
     974,   974,   974,   974,   974,  -386,  -386,   171,   974,   974,
     171,   267,  -386,   269,   252,   226,   272,   171,   974,   271,
     328,   276,  -386,   279,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,   274,  -386,  -386,
    -386,   -54,  -386,   -43,   282,   846,  -386,  -386,  -386,   283,
     287,   284,   290,   974,   292,   288,   643,   273,   171,   293,
     974,   295,   296,   298,   -64,  -386,  -386,     4,  -386,   297,
     568,  -386,  -386,  -386,  -386,  -386,  -386,  -386,   301,   302,
     300,  1173,   -43,   299,  -386,   108,   304,   685,  -386,  -386,
     171,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  1173,   -43,   252,   309,  -386,   974,   782,
     974,  -386,   974,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,   974,   974,  -386,   312,    -5,
     181,    68,   187,   193,   200,   229,   153,   153,   223,   223,
     223,   223,   250,   250,   235,   235,  -386,  -386,  -386,  -386,
     313,    30,  -386,  -386,   232,   317,  -386,   327,  -386,    50,
     316,  -386,  -386,   318,   282,  -386,   314,   320,  -386,   974,
    -386,  -386,   315,  -386,   643,   152,   910,   322,   718,   325,
     718,   718,   718,  -386,  -386,  -386,   643,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,   324,   321,   329,   330,
     331,   974,    46,    50,    50,  -386,   773,  -386,  -386,  -386,
     332,  -386,    65,  -386,  -386,  -386,  -386,    50,  -386,   974,
    -386,  -386,   825,   171,  -386,   974,  -386,    31,   333,   336,
    -386,   337,    50,  -386,   846,  -386,   643,  -386,   339,   340,
     -43,   343,   302,  -386,   341,   643,   120,  -386,   643,   136,
     643,   146,   643,   149,  -386,  -386,  -386,    50,  -386,   344,
     323,  -386,  -386,   346,   349,  -386,  -386,  -386,   360,  -386,
     347,   252,  -386,   846,  -386,   355,  -386,    99,   363,   118,
     380,  -386,  -386,   974,   974,   282,   974,  -386,   482,   643,
    -386,   643,  -386,   643,  -386,   643,   389,    50,  -386,  -386,
    -386,   395,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,   182,   197,   418,   643,   512,  -386,  -386,  -386,
    -386,   417,  -386,   422,   427,   428,   974,  -386,   643,  -386,
    -386,  -386,  -386,  -386,   426,  -386,   643,  -386
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -386,  -386,   521,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
     107,  -386,   154,   -33,  -386,  -124,  -386,  -386,  -386,  -386,
    -386,   117,   119,  -386,  -386,   130,   135,    15,  -386,   140,
      21,  -386,   351,    -1,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,   -15,  -386,  -386,  -386,  -144,   376,  -178,  -386,  -386,
     -25,   444,  -386,   -10,   -26,   382,  -386,  -386,  -386,  -386,
     230,  -386,  -386,   210,  -385,  -386,    36,  -386,    40,   -53,
    -386,  -386,   246,  -218,  -386,  -386,   -80,  -386,  -386,  -386,
    -386,  -266,  -114,  -147,  -386,   -36,  -220,   -34,   334,   335,
     342,   345,   326,   113,    55,   114,   132,   -63,  -122,    48,
    -386,  -211,  -386,  -386,  -386,  -386,  -386,   190,  -386,  -133,
     -37,    26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -344
static const yytype_int16 yytable[] =
{
      27,   169,    54,   209,    32,   175,   127,    95,   129,   332,
     154,   205,   149,    88,    27,   244,    24,    55,   311,   277,
     278,   274,    26,   157,   409,   160,   245,   380,   388,   166,
      24,    61,    49,   151,    39,    40,    26,   194,   179,   315,
     277,   195,   216,   333,   166,   151,    31,   151,   493,   494,
    -343,   165,   317,    61,   167,   335,   199,   200,   201,   202,
     203,   204,   498,   402,   210,    51,   217,   336,   405,   167,
     151,   168,    36,    37,    82,   205,     5,   510,   210,    49,
       6,   211,   205,   145,   146,   147,    44,     7,     8,   215,
      42,   278,    45,   249,   340,   211,    82,   395,   191,    49,
     177,   312,   526,   361,   180,   181,    49,   268,    19,   170,
      50,   179,    51,   342,   503,   343,   235,   236,    20,   171,
      21,   269,    19,   267,   191,   381,   334,   440,   277,   394,
     176,    22,    20,   157,    21,   316,    23,   342,  -189,    51,
    -189,    25,   551,   451,   250,    22,   190,    33,    34,   237,
      23,   179,   251,   238,    27,    25,   215,   239,   341,  -180,
      41,    95,   240,   273,   321,   197,   198,   297,   456,   376,
     377,   378,   342,   174,   357,   342,    47,   168,   497,   322,
     323,   337,   449,   295,   324,   325,   467,    29,   191,   296,
     468,   278,    30,   326,   436,   444,    91,   469,   484,    48,
     379,    92,   338,   382,   144,   535,   339,   327,   445,   168,
     387,   491,   127,   320,   129,   150,   433,   344,   345,   346,
     347,   348,   349,   151,   539,   442,    49,   342,   168,   519,
     216,   183,   350,   351,   195,   502,   352,   353,   354,   224,
     225,   226,   227,   342,    27,   521,   184,   127,   512,   129,
     544,   407,   465,   342,   217,   523,   342,   518,   525,   452,
     520,     5,   522,   187,   524,     6,    36,    37,   145,   146,
     147,   218,     7,     8,   145,   146,   147,   443,   249,   368,
     369,   370,   371,   437,   185,   186,   511,   429,   219,   342,
     564,   554,   472,   446,   476,   220,   479,   481,   483,   297,
     221,   546,    55,   547,   342,   548,   555,   549,   241,   429,
     232,   233,   234,   222,   223,   295,    27,   277,   228,   229,
     501,   296,   215,   230,   231,   533,   515,   557,   246,   250,
     478,   480,   482,   151,   242,   366,   367,   385,   247,   161,
     565,   -86,   372,   373,   -86,   -86,   -86,   248,   567,   272,
     -86,   149,   -86,   -86,   318,   -86,   277,   320,   -86,   -86,
     -86,   -86,   374,   375,   329,   -86,   -86,   330,   -86,   -86,
     356,   358,   -86,   359,   -86,   -86,   384,   383,   386,   389,
     390,   406,   391,   393,   -86,   -86,   -86,   -86,   -86,   163,
     400,   -86,   398,   392,   399,   127,   401,   129,   403,   542,
     543,   408,   404,   410,   411,   470,   412,   415,   413,   342,
     455,   431,   434,   499,   416,   129,   179,   492,   439,   127,
     447,   129,   450,   454,   461,   463,   462,   464,   473,   466,
     560,   477,   504,   485,   486,    27,   528,   487,   503,   488,
     489,   496,   507,   508,   162,   163,   509,   513,   514,   516,
     517,    27,   527,   532,   536,   529,   540,   281,   530,   -86,
     282,   283,   -86,   -86,   -86,   284,   285,   286,   -86,   531,
     -86,   -86,   287,   -86,   288,   289,   -86,   -86,   -86,   -86,
      97,   537,   290,   -86,   -86,    98,   -86,   -86,   291,   541,
     -86,     5,   -86,   -86,   292,   545,    99,   100,   550,   552,
     561,   293,   -86,   -86,   -86,   -86,   -86,   101,   294,   -86,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   556,   558,   559,   117,   118,   119,
     120,   121,   168,   562,   563,   566,    43,   331,   453,   270,
     188,   266,   430,   438,   538,   534,   414,   365,   122,   448,
     360,   191,     0,   362,     0,     0,   123,     0,     0,   124,
       0,   363,  -231,     0,   125,   364,   168,  -192,   126,   281,
       0,   -86,   282,   283,   -86,   -86,   -86,   284,   285,   286,
     -86,     0,   -86,   -86,   287,   -86,   288,   289,   -86,   -86,
     -86,   -86,    97,     0,   290,   -86,   -86,    98,   -86,   -86,
     291,     0,   -86,     5,   -86,   -86,   292,     0,    99,   100,
       0,     0,     0,   293,   -86,   -86,   -86,   -86,   -86,   101,
     294,   -86,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,     0,     0,   117,
     118,   119,   120,   121,   281,     0,     0,   282,   283,     0,
       0,     0,   284,   285,   286,     0,     0,     0,     0,   287,
     122,   288,   289,     0,     0,     0,     0,    97,   123,   290,
       0,   124,    98,     0,  -231,   291,   125,     0,   168,  -193,
     126,   292,     0,    99,   100,     0,     0,     0,   293,     0,
       0,     0,     0,     0,   101,   294,     0,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     0,     0,     0,   117,   118,   119,   120,   121,   474,
       5,     0,     0,     0,     6,     0,     0,   145,   146,   147,
       0,     7,     8,     0,     0,   122,     0,   249,     0,     0,
       0,     0,    97,   123,     0,     0,   124,    98,     0,  -231,
       0,   125,     0,   168,     0,   126,     0,     0,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,     0,   250,   117,
     118,   119,   120,   121,     0,     0,   435,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     5,     0,
     122,    98,     6,     0,     0,   145,   146,   147,   123,     7,
       8,   124,    99,   100,     0,   249,   125,     0,     0,     0,
     126,     0,     0,   101,   102,     0,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
       0,     0,     0,   117,   118,   119,   120,   121,     0,     0,
       5,     0,     0,     0,     6,     0,     0,   145,   146,   147,
      97,     7,     8,     0,   122,    98,   250,   249,     0,     0,
       0,     0,   123,     0,   495,   124,    99,   100,     0,     0,
     125,     0,     0,     0,   126,   441,     0,   101,   102,     0,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,     0,     0,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,     0,    97,     0,   500,     0,   122,    98,
       0,     0,     0,     0,     0,     0,   123,     0,     0,   124,
      99,   100,     0,     0,   125,     0,   275,     0,   126,     0,
       0,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,     0,     0,
       0,   117,   118,   119,   120,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,   122,    98,     0,     0,     0,     0,     0,     0,
     123,     0,     0,   124,    99,   100,  -221,     0,   125,     0,
       0,     0,   126,     0,     0,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,     0,     0,     0,   117,   118,   119,   120,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,   122,    98,     0,     0,
       0,     0,     0,     0,   123,     0,     0,   124,    99,   100,
       0,     0,   125,     0,     0,     0,   126,     0,     0,   101,
     102,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,     0,     0,     0,   117,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
     122,    98,     0,     0,     0,     0,     0,     0,   123,     0,
       0,   124,    99,   100,     0,     0,   189,     0,     0,     0,
     126,     0,     0,   101,   102,     0,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
       0,     0,     0,   117,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,   122,    98,     0,     0,     0,     0,
       0,     0,   123,     0,     0,   124,    99,   100,     0,     0,
     125,     0,     0,     0,   193,     0,     0,   101,   102,     0,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,     0,     0,     0,   117,   118,   119,
     120,   121,     0,     0,     0,     0,   417,   418,   419,   420,
     421,     0,     0,     0,     0,     0,   422,   423,   122,     0,
       0,   424,   425,     0,     0,     0,   123,     0,     0,   124,
       0,     0,     0,     0,   196,     0,     2,     3,   126,   -86,
       0,   426,   -86,   -86,   -86,   427,     0,     0,   -86,     0,
     -86,   -86,     0,   -86,     0,     0,   -86,   -86,   -86,   -86,
       0,     0,     0,   -86,   -86,     0,   -86,   -86,     0,     4,
     -86,     5,   -86,   -86,     0,     6,     0,     0,     0,     0,
       0,     0,     7,     8,   -86,   -86,   -86,     0,     9,   -86,
       0,     0,     0,     0,     3,     0,   -86,     0,     0,   -86,
     -86,   -86,     0,     0,    10,   -86,    11,   -86,   -86,     0,
     -86,     0,     0,   -86,   -86,   -86,   -86,     0,     0,     0,
     -86,   -86,     0,   -86,   -86,     0,     4,   -86,     5,   -86,
     -86,     0,     6,     0,     0,     0,     0,     0,     0,     7,
       8,   -86,   -86,   -86,     0,     9,   -86,     0,    59,     0,
       0,    60,    61,    62,     0,     0,     0,    63,     0,    64,
      65,    10,    66,    11,     0,    67,    68,    69,    70,     0,
       0,     0,    71,    72,     0,    73,    74,     0,     0,    75,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,    80,    81,    82,     0,     0,    83
};

static const yytype_int16 yycheck[] =
{
       1,    54,    27,   125,     5,    58,    42,    32,    42,   187,
      47,   125,    45,    28,    15,   148,     1,    27,    25,   166,
     167,   165,     1,    49,   290,    51,   150,   238,   248,    83,
      15,     7,    75,    52,     8,   119,    15,   100,    75,   172,
     187,   105,    91,    25,    83,    52,    88,    52,   433,   434,
     114,    52,   176,     7,   108,   188,   119,   120,   121,   122,
     123,   124,   447,   283,    83,   108,   115,   189,   286,   108,
      52,   110,    52,    53,    50,   189,    35,   462,    83,    75,
      39,   100,   196,    42,    43,    44,   108,    46,    47,   126,
      52,   238,   114,    52,   113,   100,    50,   275,    99,    75,
      74,   108,   487,   217,    78,    79,    75,   106,     1,    90,
     106,   148,   108,   107,    83,   109,    71,    72,     1,   100,
       1,   120,    15,   160,   125,   239,   108,   338,   275,   273,
     110,     1,    15,   159,    15,   172,     1,   107,   107,   108,
     109,     1,   527,   113,   103,    15,    98,    52,    53,   104,
      15,   188,   111,   108,   155,    15,   193,   112,   195,   109,
      69,   186,   117,   164,     7,   117,   118,   168,   118,   232,
     233,   234,   107,   106,   211,   107,   110,   110,   113,    22,
      23,   191,   114,   168,    27,    28,   404,   106,   189,   168,
      38,   338,   111,    36,   318,   342,    34,    45,   416,   110,
     237,    39,   108,   240,     1,   106,   112,    50,   355,   110,
     247,   431,   248,   105,   248,   110,   108,    78,    79,    80,
      81,    82,    83,    52,   106,   339,    75,   107,   110,   109,
      91,    52,    93,    94,   105,   455,    97,    98,    99,    86,
      87,    88,    89,   107,   245,   109,    52,   283,   466,   283,
     516,   288,   399,   107,   115,   109,   107,   475,   109,   383,
     478,    35,   480,    83,   482,    39,    52,    53,    42,    43,
      44,    90,    46,    47,    42,    43,    44,   340,    52,   224,
     225,   226,   227,   320,   106,   107,   464,   312,   101,   107,
     556,   109,   406,   356,   408,   102,   410,   411,   412,   300,
     100,   519,   312,   521,   107,   523,   109,   525,   109,   334,
      75,    76,    77,    84,    85,   300,   317,   464,    95,    96,
     453,   300,   359,    73,    74,   503,   470,   545,   111,   103,
     410,   411,   412,    52,    53,   222,   223,   111,   107,     1,
     558,     3,   228,   229,     6,     7,     8,    83,   566,   106,
      12,   384,    14,    15,   110,    17,   503,   105,    20,    21,
      22,    23,   230,   231,    89,    27,    28,    89,    30,    31,
     109,   113,    34,   107,    36,    37,   107,   110,   106,   108,
      52,   108,   106,   109,    46,    47,    48,    49,    50,   107,
     106,    53,   109,   114,   107,   431,   106,   431,   106,   513,
     514,   108,   114,   108,   108,   406,   108,   106,   111,   107,
      83,   112,   108,   449,   114,   449,   453,   432,   109,   455,
     108,   455,   109,   106,   108,   111,   108,   107,   106,   114,
     552,   106,   457,   109,   113,   436,   113,   108,    83,   109,
     109,   109,   109,   107,   106,   107,   109,   108,   108,   106,
     109,   452,   108,   106,   507,   109,   509,     1,   109,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   109,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   118,    26,    27,    28,    29,    30,    31,    32,   109,
      34,    35,    36,    37,    38,    13,    40,    41,   109,   104,
     553,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,   106,    13,   109,    71,    72,    73,
      74,    75,   110,   106,   106,   109,    15,   186,   384,   163,
      96,   159,   312,   333,   508,   505,   300,   221,    92,   359,
     216,   552,    -1,   218,    -1,    -1,   100,    -1,    -1,   103,
      -1,   219,   106,    -1,   108,   220,   110,   111,   112,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,     1,    -1,    -1,     4,     5,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      92,    18,    19,    -1,    -1,    -1,    -1,    24,   100,    26,
      -1,   103,    29,    -1,   106,    32,   108,    -1,   110,   111,
     112,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    75,     1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    46,    47,    -1,    -1,    92,    -1,    52,    -1,    -1,
      -1,    -1,    24,   100,    -1,    -1,   103,    29,    -1,   106,
      -1,   108,    -1,   110,    -1,   112,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,   103,    71,
      72,    73,    74,    75,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    35,    -1,
      92,    29,    39,    -1,    -1,    42,    43,    44,   100,    46,
      47,   103,    40,    41,    -1,    52,   108,    -1,    -1,    -1,
     112,    -1,    -1,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      24,    46,    47,    -1,    92,    29,   103,    52,    -1,    -1,
      -1,    -1,   100,    -1,   111,   103,    40,    41,    -1,    -1,
     108,    -1,    -1,    -1,   112,   113,    -1,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    24,    -1,   111,    -1,    92,    29,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,   103,
      40,    41,    -1,    -1,   108,    -1,   110,    -1,   112,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    92,    29,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,   103,    40,    41,   106,    -1,   108,    -1,
      -1,    -1,   112,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    92,    29,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,   103,    40,    41,
      -1,    -1,   108,    -1,    -1,    -1,   112,    -1,    -1,    51,
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
      74,    75,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    92,    -1,
      -1,    88,    89,    -1,    -1,    -1,   100,    -1,    -1,   103,
      -1,    -1,    -1,    -1,   108,    -1,     0,     1,   112,     3,
      -1,   108,     6,     7,     8,   112,    -1,    -1,    12,    -1,
      14,    15,    -1,    17,    -1,    -1,    20,    21,    22,    23,
      -1,    -1,    -1,    27,    28,    -1,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    -1,    52,    53,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,    -1,     6,
       7,     8,    -1,    -1,    68,    12,    70,    14,    15,    -1,
      17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    -1,    52,    53,    -1,     3,    -1,
      -1,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    14,
      15,    68,    17,    70,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    30,    31,    -1,    -1,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   125,     0,     1,    33,    35,    39,    46,    47,    52,
      68,    70,   126,   127,   128,   129,   130,   132,   133,   134,
     145,   146,   149,   150,   151,   153,   154,   157,   158,   106,
     111,    88,   157,    52,    53,   131,    52,    53,   235,   235,
     119,    69,    52,   126,   108,   114,   135,   110,   110,    75,
     106,   108,   169,   170,   174,   177,   178,   182,   184,     3,
       6,     7,     8,    12,    14,    15,    17,    20,    21,    22,
      23,    27,    28,    30,    31,    34,    36,    37,    46,    47,
      48,    49,    50,    53,   159,   162,   163,   164,   165,   166,
     167,    34,    39,   155,   156,   174,   177,    24,    29,    40,
      41,    51,    52,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    71,    72,    73,
      74,    75,    92,   100,   103,   108,   112,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     223,   224,   227,   228,     1,    42,    43,    44,   136,   137,
     110,    52,   147,   148,   234,   139,   165,   178,   179,   180,
     178,     1,   106,   107,   152,   157,    83,   108,   110,   193,
      90,   100,   175,   176,   106,   193,   110,   235,   233,   234,
     235,   235,   160,    52,    52,   106,   107,    83,   175,   108,
     223,   157,   222,   112,   221,   105,   108,   223,   223,   221,
     221,   221,   221,   221,   221,   206,   207,   209,   211,   222,
      83,   100,   229,   230,   231,   234,    91,   115,    90,   101,
     102,   100,    84,    85,    86,    87,    88,    89,    95,    96,
      73,    74,    75,    76,    77,    71,    72,   104,   108,   112,
     117,   109,    53,   138,   233,   139,   111,   107,    83,    52,
     103,   111,   134,   137,   140,   141,   142,   143,   144,   145,
     146,   149,   150,   151,   153,   154,   179,   234,   106,   120,
     170,   174,   106,   157,   169,   110,   171,   207,   207,   225,
     226,     1,     4,     5,     9,    10,    11,    16,    18,    19,
      26,    32,    38,    45,    52,   151,   154,   157,   193,   194,
     195,   196,   197,   198,   199,   201,   203,   204,   205,   206,
     234,    25,   108,   181,   186,   233,   234,   139,   110,   168,
     105,     7,    22,    23,    27,    28,    36,    50,   161,    89,
      89,   156,   171,    25,   108,   233,   222,   177,   108,   112,
     113,   234,   107,   109,    78,    79,    80,    81,    82,    83,
      93,    94,    97,    98,    99,   208,   109,   234,   113,   107,
     212,   206,   213,   214,   215,   216,   217,   217,   218,   218,
     218,   218,   219,   219,   220,   220,   221,   221,   221,   234,
     225,   206,   234,   110,   107,   111,   106,   234,   210,   108,
      52,   106,   114,   109,   169,   171,   172,   173,   109,   107,
     106,   106,   210,   106,   114,   197,   108,   234,   108,   205,
     108,   108,   108,   111,   196,   106,   114,    73,    74,    75,
      76,    77,    83,    84,    88,    89,   108,   112,   187,   174,
     184,   112,   185,   108,   108,   111,   139,   234,   187,   109,
     225,   113,   206,   221,   207,   207,   221,   108,   231,   114,
     109,   113,   139,   136,   106,    83,   118,   157,   188,   189,
     190,   108,   108,   111,   107,   207,   114,   197,    38,    45,
     157,   202,   206,   106,     1,   200,   206,   106,   200,   206,
     200,   206,   200,   206,   197,   109,   113,   108,   109,   109,
     183,   210,   165,   188,   188,   111,   109,   113,   188,   209,
     111,   233,   210,    83,   174,   191,   192,   109,   107,   109,
     188,   171,   197,   108,   108,   169,   106,   109,   197,   109,
     197,   109,   197,   109,   197,   109,   188,   108,   113,   109,
     109,   109,   106,   171,   192,   106,   193,   118,   190,   106,
     193,   109,   206,   206,   205,    13,   197,   197,   197,   197,
     109,   188,   104,   232,   109,   109,   106,   197,    13,   109,
     222,   193,   106,   106,   205,   197,   109,   197
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
#line 123 "src/parser.y"
    { yyerrok; ;}
    break;

  case 15:
#line 125 "src/parser.y"
    { yyerrok; ;}
    break;

  case 19:
#line 133 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(2) - (2)]).first_line, (yylsp[(2) - (2)]).first_column,
                            "preprocessor directive must begin a line"); ;}
    break;

  case 21:
#line 141 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 22:
#line 142 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 23:
#line 147 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 24:
#line 151 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 25:
#line 152 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 26:
#line 155 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 27:
#line 158 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 28:
#line 163 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (6)].text)); ;}
    break;

  case 29:
#line 165 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (5)].text)); reportSyntaxErrorAt((yylsp[(5) - (5)]).first_line, (yylsp[(5) - (5)]).last_column + 1, "expected ';' after class definition"); ;}
    break;

  case 30:
#line 167 "src/parser.y"
    { yyerrok; ;}
    break;

  case 61:
#line 221 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).last_column + 1, "expected ';' after union definition"); ;}
    break;

  case 63:
#line 226 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).last_column + 1, "expected ';' after enum definition"); ;}
    break;

  case 71:
#line 244 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(3) - (3)]).first_line, (yylsp[(3) - (3)]).first_column,
                            "expected parameter list before function body"); ;}
    break;

  case 72:
#line 250 "src/parser.y"
    { if (std::string((yyvsp[(1) - (2)].text)) != "@struct_definition")
            reportSyntaxErrorAt((yylsp[(2) - (2)]).first_line, (yylsp[(2) - (2)]).first_column,
                                "declaration requires a declarator"); ;}
    break;

  case 74:
#line 256 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column + 1,
                            "expected ';' after declaration"); ;}
    break;

  case 75:
#line 260 "src/parser.y"
    { if ((yylsp[(3) - (4)]).first_line > (yylsp[(2) - (4)]).last_line)
            replaceLookaheadErrorWithMissingSemicolon((yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column + 1);
        yyerrok; ;}
    break;

  case 76:
#line 264 "src/parser.y"
    { if ((yylsp[(3) - (4)]).first_line > (yylsp[(2) - (4)]).last_line)
            replaceLookaheadErrorWithMissingSemicolon((yylsp[(2) - (4)]).last_line, (yylsp[(2) - (4)]).last_column + 1);
        yyerrok; ;}
    break;

  case 78:
#line 271 "src/parser.y"
    { reportSyntaxErrorAt((yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column + 1,
                            "expected ';' after declaration"); ;}
    break;

  case 83:
#line 285 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (1)].text)); ;}
    break;

  case 84:
#line 286 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (3)].text)); ;}
    break;

  case 85:
#line 290 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (3)].text); ;}
    break;

  case 109:
#line 319 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 110:
#line 319 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 111:
#line 319 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 112:
#line 320 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 113:
#line 320 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 114:
#line 320 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 115:
#line 320 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 116:
#line 321 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 117:
#line 321 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 118:
#line 321 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 119:
#line 322 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 120:
#line 322 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 121:
#line 323 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 122:
#line 324 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 123:
#line 325 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 124:
#line 326 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 125:
#line 327 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 126:
#line 331 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (3)].text); ;}
    break;

  case 127:
#line 332 "src/parser.y"
    { (yyval.text) = strdup("@struct_definition"); ;}
    break;

  case 128:
#line 335 "src/parser.y"
    { (yyval.text) = strdup("@struct_type"); ;}
    break;

  case 129:
#line 336 "src/parser.y"
    { (yyval.text) = strdup("@struct_definition"); ;}
    break;

  case 142:
#line 362 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (3)].text); ;}
    break;

  case 143:
#line 363 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 155:
#line 388 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 156:
#line 389 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (2)].text); ;}
    break;

  case 157:
#line 390 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (3)].text); ;}
    break;

  case 158:
#line 392 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 159:
#line 396 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (7)].text); ;}
    break;

  case 162:
#line 404 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (4)].text); ;}
    break;

  case 165:
#line 412 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 166:
#line 413 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 167:
#line 414 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (5)].text); ;}
    break;

  case 168:
#line 415 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (6)].text); ;}
    break;

  case 205:
#line 464 "src/parser.y"
    { yyerrok; ;}
    break;

  case 213:
#line 479 "src/parser.y"
    { yyerrok; ;}
    break;

  case 341:
#line 619 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 342:
#line 620 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (3)].text); ;}
    break;

  case 343:
#line 623 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 344:
#line 627 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (1)].text)); (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 345:
#line 628 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2764 "src/parser.tab.cc"
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


#line 631 "src/parser.y"


void yyerror(const char* message) {
    lastYyerrorLine = tokenStartLine;
    lastYyerrorColumn = tokenStartColumn;
    addSyntaxError(message);
    lastYyerrorLine = 0;
    lastYyerrorColumn = 0;
}

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
        std::stable_sort(syntaxErrorList.begin(), syntaxErrorList.end(),
            [](const SyntaxError& left, const SyntaxError& right) {
                return left.lineNumber != right.lineNumber
                    ? left.lineNumber < right.lineNumber
                    : left.column < right.column;
            });
        for (const auto& e : syntaxErrorList)
            cout << "Syntax Error at line " << e.lineNumber << ", column " << e.column << ": " << e.message << endl;
        cout << "Summary: " << lexicalErrorCount() << " lexical error(s), "
             << syntaxErrorList.size() << " syntax error(s)." << endl;
    }
    fclose(yyin);
    return (lexicalErrorCount() == 0 && syntaxErrorList.empty() && result == 0) ? 0 : 1;
}

