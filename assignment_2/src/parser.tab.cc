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
     UNARY = 373,
     UMINUS = 374,
     LOWER_THAN_ELSE = 375
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
#define UNARY 373
#define UMINUS 374
#define LOWER_THAN_ELSE 375




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
#line 34 "src/parser.y"
{ char* text; }
/* Line 193 of yacc.c.  */
#line 371 "src/parser.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 384 "src/parser.tab.cc"

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
#define YYLAST   1502

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  306
/* YYNRULES -- Number of states.  */
#define YYNSTATES  485

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

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
     115,   116,   117,   118,   119,   120
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    28,    31,    35,    38,    41,    47,
      53,    56,    59,    62,    65,    72,    78,    79,    83,    84,
      86,    88,    90,    92,    94,    96,   101,   102,   105,   108,
     110,   112,   114,   116,   118,   120,   122,   124,   127,   133,
     139,   144,   150,   155,   161,   166,   167,   169,   171,   175,
     179,   185,   189,   193,   198,   200,   204,   206,   210,   214,
     215,   218,   220,   222,   224,   225,   228,   230,   232,   234,
     236,   238,   240,   242,   244,   246,   248,   250,   252,   254,
     256,   258,   260,   262,   264,   266,   268,   270,   272,   274,
     276,   278,   280,   282,   285,   288,   291,   294,   297,   300,
     303,   305,   309,   311,   315,   317,   321,   322,   324,   326,
     330,   333,   337,   338,   340,   342,   345,   346,   348,   351,
     352,   354,   357,   359,   361,   364,   368,   373,   378,   383,
     385,   387,   389,   391,   393,   395,   397,   399,   401,   404,
     407,   408,   410,   411,   413,   415,   419,   423,   425,   428,
     430,   434,   438,   439,   441,   443,   446,   448,   450,   452,
     454,   456,   458,   460,   462,   464,   467,   470,   476,   484,
     490,   496,   502,   510,   518,   528,   529,   531,   534,   538,
     541,   544,   548,   552,   557,   561,   562,   564,   566,   570,
     572,   576,   578,   580,   582,   584,   586,   588,   590,   592,
     594,   596,   598,   600,   606,   608,   610,   614,   616,   620,
     622,   626,   628,   632,   634,   638,   640,   644,   648,   650,
     654,   658,   662,   666,   668,   672,   676,   678,   682,   686,
     688,   692,   696,   700,   702,   707,   710,   712,   715,   718,
     721,   724,   727,   730,   733,   736,   739,   744,   747,   753,
     759,   762,   767,   769,   774,   779,   783,   787,   790,   793,
     794,   796,   798,   802,   804,   808,   810,   812,   814,   816,
     818,   820,   822,   824,   826,   828,   830,   832,   834,   836,
     838,   840,   844,   846,   855,   856,   858,   860,   864,   866,
     869,   871,   873,   874,   877,   879,   883
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     122,     0,    -1,    -1,   122,   123,    -1,   124,    -1,   144,
      -1,   145,    -1,   146,    -1,   131,    -1,   139,    -1,   141,
      -1,   140,    -1,   125,    -1,     1,   105,    -1,    67,    68,
      -1,    69,    51,   192,    -1,    69,    51,    -1,   126,   123,
      -1,    32,    87,    33,    51,    88,    -1,    32,    87,    38,
      51,    88,    -1,    38,   216,    -1,    30,   216,    -1,    45,
     216,    -1,    46,   216,    -1,   127,   132,   109,   136,   110,
     105,    -1,   127,   132,   109,   136,   110,    -1,    -1,   113,
     133,   135,    -1,    -1,   134,    -1,    41,    -1,    42,    -1,
      43,    -1,   215,    -1,    52,    -1,   135,   106,   133,   215,
      -1,    -1,   136,   137,    -1,   134,   113,    -1,   144,    -1,
     145,    -1,   146,    -1,   131,    -1,   139,    -1,   141,    -1,
     140,    -1,   138,    -1,     1,   105,    -1,   215,   107,   173,
     108,   176,    -1,   128,   109,   136,   110,   105,    -1,   128,
     109,   136,   110,    -1,   130,   109,   136,   110,   105,    -1,
     130,   109,   136,   110,    -1,   129,   109,   142,   110,   105,
      -1,   129,   109,   142,   110,    -1,    -1,   143,    -1,   216,
      -1,   216,    82,   192,    -1,   143,   106,   216,    -1,   143,
     106,   216,    82,   192,    -1,   149,   163,   176,    -1,   149,
     158,   105,    -1,    34,   149,   147,   105,    -1,   148,    -1,
     147,   106,   148,    -1,   163,    -1,   163,    82,   160,    -1,
     150,   157,   152,    -1,    -1,   150,   151,    -1,   156,    -1,
     154,    -1,   155,    -1,    -1,   152,   153,    -1,    26,    -1,
      21,    -1,    22,    -1,    27,    -1,    35,    -1,     7,    -1,
      49,    -1,    29,    -1,    13,    -1,    48,    -1,    16,    -1,
      19,    -1,     7,    -1,    49,    -1,    36,    -1,     6,    -1,
      20,    -1,    14,    -1,    11,    -1,     3,    -1,    47,    -1,
      26,    -1,    21,    -1,    22,    -1,    27,    -1,    35,    -1,
      52,    -1,    30,   216,    -1,    30,    52,    -1,    45,   216,
      -1,    45,    52,    -1,    46,   216,    -1,    46,    52,    -1,
      33,   215,    -1,   159,    -1,   158,   106,   159,    -1,   163,
      -1,   163,    82,   160,    -1,   189,    -1,   109,   161,   110,
      -1,    -1,   162,    -1,   160,    -1,   162,   106,   160,    -1,
     162,   106,    -1,   166,   164,   170,    -1,    -1,   165,    -1,
      99,    -1,    99,   165,    -1,    -1,   167,    -1,    74,   168,
      -1,    -1,   167,    -1,   169,   168,    -1,   156,    -1,   215,
      -1,    24,   171,    -1,   107,   163,   108,    -1,   170,   111,
     172,   112,    -1,   170,   107,   173,   108,    -1,   170,   107,
     208,   108,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    82,    -1,    83,    -1,    87,    -1,    88,
      -1,   111,   112,    -1,   107,   108,    -1,    -1,   192,    -1,
      -1,   174,    -1,   175,    -1,   174,   106,   175,    -1,   174,
     106,   117,    -1,   117,    -1,   149,   163,    -1,   149,    -1,
     109,   177,   110,    -1,   109,     1,   110,    -1,    -1,   178,
      -1,   179,    -1,   178,   179,    -1,   180,    -1,   145,    -1,
     146,    -1,   176,    -1,   181,    -1,   182,    -1,   183,    -1,
     185,    -1,   186,    -1,     1,   105,    -1,   187,   105,    -1,
      18,   107,   188,   108,   180,    -1,    18,   107,   188,   108,
     180,    12,   180,    -1,    31,   107,   188,   108,   180,    -1,
      37,   107,   188,   108,   180,    -1,    44,   107,   188,   108,
     180,    -1,    10,   180,    37,   107,   188,   108,   105,    -1,
      10,   180,    44,   107,   188,   108,   105,    -1,    15,   107,
     184,   105,   187,   105,   187,   108,   180,    -1,    -1,   188,
      -1,   149,   158,    -1,    17,   216,   105,    -1,     8,   105,
      -1,     4,   105,    -1,    25,   187,   105,    -1,   216,   113,
     180,    -1,     5,   192,   113,   180,    -1,     9,   113,   180,
      -1,    -1,   188,    -1,   189,    -1,   188,   106,   189,    -1,
     191,    -1,   205,   190,   189,    -1,    82,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    -1,    96,    -1,
      97,    -1,    98,    -1,    92,    -1,    93,    -1,   193,    -1,
     193,   114,   188,   113,   191,    -1,   191,    -1,   194,    -1,
     193,    90,   194,    -1,   195,    -1,   194,    89,   195,    -1,
     196,    -1,   195,   100,   196,    -1,   197,    -1,   196,   101,
     197,    -1,   198,    -1,   197,    99,   198,    -1,   199,    -1,
     198,    83,   199,    -1,   198,    84,   199,    -1,   200,    -1,
     199,    87,   200,    -1,   199,    88,   200,    -1,   199,    85,
     200,    -1,   199,    86,   200,    -1,   201,    -1,   200,    94,
     201,    -1,   200,    95,   201,    -1,   202,    -1,   201,    72,
     202,    -1,   201,    73,   202,    -1,   203,    -1,   202,    74,
     203,    -1,   202,    75,   203,    -1,   202,    76,   203,    -1,
     205,    -1,   107,   204,   108,   203,    -1,   149,   166,    -1,
     206,    -1,    70,   205,    -1,    71,   205,    -1,    99,   203,
      -1,    74,   203,    -1,    72,   203,    -1,    73,   203,    -1,
      91,   203,    -1,   102,   203,    -1,    28,   205,    -1,    28,
     107,   204,   108,    -1,    39,   204,    -1,    39,   204,   107,
     207,   108,    -1,    39,   204,   111,   188,   112,    -1,    40,
     203,    -1,    40,   111,   112,   203,    -1,   209,    -1,   206,
     111,   188,   112,    -1,   206,   107,   207,   108,    -1,   206,
     116,   216,    -1,   206,   103,   216,    -1,   206,    70,    -1,
     206,    71,    -1,    -1,   208,    -1,   189,    -1,   208,   106,
     189,    -1,    51,    -1,    51,   104,   216,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,
      59,    -1,    60,    -1,    23,    -1,    50,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
     107,   188,   108,    -1,   210,    -1,   111,   211,   112,   107,
     173,   108,   214,   176,    -1,    -1,   212,    -1,   213,    -1,
     212,   106,   213,    -1,   216,    -1,    99,   216,    -1,    82,
      -1,    99,    -1,    -1,   103,   204,    -1,   216,    -1,   215,
     104,   216,    -1,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    72,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    89,    90,    91,    95,    98,    99,
     104,   107,   110,   113,   117,   118,   120,   122,   124,   126,
     129,   129,   129,   132,   133,   134,   136,   138,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   153,   157,
     158,   161,   162,   165,   166,   168,   169,   172,   173,   174,
     175,   179,   183,   186,   189,   190,   193,   194,   198,   200,
     202,   205,   205,   205,   207,   209,   212,   212,   212,   212,
     212,   212,   212,   215,   215,   215,   215,   218,   221,   221,
     224,   224,   224,   224,   224,   224,   224,   225,   225,   225,
     225,   225,   226,   227,   227,   228,   228,   229,   229,   230,
     234,   235,   238,   239,   242,   243,   245,   246,   249,   250,
     251,   255,   257,   258,   261,   261,   263,   265,   269,   271,
     273,   274,   277,   280,   281,   282,   283,   284,   285,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     290,   291,   293,   294,   297,   298,   299,   300,   303,   304,
     308,   309,   311,   312,   315,   316,   319,   320,   321,   325,
     326,   327,   328,   329,   330,   331,   334,   337,   338,   339,
     342,   343,   344,   345,   346,   348,   350,   351,   354,   355,
     356,   357,   360,   361,   362,   365,   366,   369,   370,   373,
     374,   377,   377,   377,   377,   377,   377,   378,   378,   378,
     378,   378,   381,   382,   385,   388,   388,   391,   391,   394,
     394,   397,   397,   400,   400,   403,   403,   403,   406,   407,
     407,   408,   408,   411,   411,   411,   414,   414,   414,   417,
     417,   417,   417,   420,   421,   424,   427,   428,   428,   429,
     429,   429,   429,   430,   430,   431,   431,   432,   432,   433,
     434,   434,   437,   438,   439,   440,   441,   442,   442,   444,
     445,   448,   449,   452,   453,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   455,   455,   455,   455,   455,
     455,   456,   457,   460,   462,   463,   466,   466,   469,   469,
     469,   469,   471,   472,   475,   476,   479
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
  "HASH", "DOT", "ELLIPSIS", "UNARY", "UMINUS", "LOWER_THAN_ELSE",
  "$accept", "translation_unit", "external_declaration",
  "preprocessor_directive", "template_declaration", "template_head",
  "class_head", "struct_head", "enum_head", "union_head",
  "class_declaration", "inheritance_opt", "access_specifier_opt",
  "access_specifier", "base_class_list", "member_list",
  "member_declaration", "constructor_definition", "struct_declaration",
  "union_declaration", "enum_declaration", "enumerator_list_opt",
  "enumerator_list", "function_definition", "declaration",
  "typedef_declaration", "typedef_declarator_list", "typedef_declarator",
  "declaration_specifiers", "declaration_prefix_opt", "declaration_prefix",
  "type_suffixes", "type_suffix", "storage_class_specifier",
  "function_specifier", "type_qualifier", "type_specifier",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list_opt", "initializer_list", "declarator",
  "reference_opt", "reference", "pointer_opt", "pointer",
  "pointer_after_star", "type_qualifier_list", "direct_declarator",
  "overload_operator", "constant_expression_opt", "parameter_list_opt",
  "parameter_list", "parameter_declaration", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item", "statement",
  "expression_statement", "selection_statement", "iteration_statement",
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
  "qualified_name", "named_identifier", 0
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
     375
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   124,   125,   126,   126,
     127,   128,   129,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   135,   135,   135,   136,   136,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   144,   145,   146,   147,   147,   148,   148,   149,   150,
     150,   151,   151,   151,   152,   152,   153,   153,   153,   153,
     153,   153,   153,   154,   154,   154,   154,   155,   156,   156,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   163,   164,   164,   165,   165,   166,   166,   167,   168,
     168,   168,   169,   170,   170,   170,   170,   170,   170,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     172,   172,   173,   173,   174,   174,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   179,   180,
     180,   180,   180,   180,   180,   180,   181,   182,   182,   182,
     183,   183,   183,   183,   183,   184,   184,   184,   185,   185,
     185,   185,   186,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   197,   198,   198,   198,   199,   199,
     199,   199,   199,   200,   200,   200,   201,   201,   201,   202,
     202,   202,   202,   203,   203,   204,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   206,   206,   206,   206,   206,   206,   206,   207,
     207,   208,   208,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   210,   211,   211,   212,   212,   213,   213,
     213,   213,   214,   214,   215,   215,   216
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     2,     2,     5,     5,
       2,     2,     2,     2,     6,     5,     0,     3,     0,     1,
       1,     1,     1,     1,     1,     4,     0,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     5,
       4,     5,     4,     5,     4,     0,     1,     1,     3,     3,
       5,     3,     3,     4,     1,     3,     1,     3,     3,     0,
       2,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     1,     3,     1,     3,     0,     1,     1,     3,
       2,     3,     0,     1,     1,     2,     0,     1,     2,     0,
       1,     2,     1,     1,     2,     3,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     1,     0,     1,     1,     3,     3,     1,     2,     1,
       3,     3,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     5,     7,     5,
       5,     5,     7,     7,     9,     0,     1,     2,     3,     2,
       2,     3,     3,     4,     3,     0,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     2,     5,     5,
       2,     4,     1,     4,     4,     3,     3,     2,     2,     0,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     8,     0,     1,     1,     3,     1,     2,
       1,     1,     0,     2,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,    69,     0,     0,     0,
       0,     0,     3,     4,    12,     0,    26,     0,     0,     0,
       8,     9,    11,    10,     5,     6,     7,   126,     0,    13,
     306,    21,     0,   126,    20,    22,    23,    14,    16,    17,
      28,     0,    36,    55,    36,   129,     0,   110,   112,   122,
     127,    95,    91,    88,    94,    84,    93,    86,    87,    92,
      98,    99,    97,   100,    83,     0,     0,   101,    90,     0,
       0,    96,    85,    89,   102,    70,    72,    73,    71,    74,
       0,     0,     0,    64,    66,   283,     0,    69,     0,   284,
     273,   275,   276,   277,   278,   279,   280,   281,   282,   285,
     286,   287,   288,   289,   290,     0,     0,     0,     0,     0,
       0,     0,     0,    69,   294,   214,    15,   212,   215,   217,
     219,   221,   223,   225,   228,   233,   236,   239,   243,   246,
     262,   292,    30,    31,    32,     0,    29,    36,     0,     0,
      56,    57,     0,   132,   130,   128,   129,    62,   126,     0,
       0,    61,   124,     0,   123,   104,   103,   109,   304,   106,
     105,   108,   107,    68,     0,     0,    63,   126,     0,    69,
     255,   126,   257,     0,   260,     0,     0,   247,   248,   251,
     252,   250,   253,   249,   254,     0,   197,   199,     0,   243,
     300,   301,     0,   295,   296,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,   268,     0,   269,     0,
       0,    34,    27,    33,     0,     0,    50,    42,     0,    37,
      46,    43,    45,    44,    39,    40,    41,     0,    54,     0,
       0,    52,   131,   111,   112,   116,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   195,     0,     0,
       0,   273,   167,   168,   126,   169,     0,     0,   164,   166,
     170,   171,   172,   173,   174,     0,   196,     0,   125,     0,
     126,   121,   133,     0,    81,    77,    78,    76,    79,    80,
      82,    75,    18,    19,    65,    67,     0,   245,   269,     0,
       0,   274,     0,   291,     0,   202,   203,   204,   205,   206,
     201,   210,   211,   207,   208,   209,     0,   299,     0,     0,
     216,     0,   218,   220,   222,   224,   226,   227,   231,   232,
     229,   230,   234,   235,   237,   238,   240,   241,   242,   266,
     271,     0,   270,     0,   265,    28,    25,    47,    49,    38,
      69,    53,    59,    58,    51,   118,     0,   117,   175,   161,
     190,     0,   189,     0,     0,     0,    69,     0,     0,     0,
       0,     0,     0,   160,   165,   176,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,   134,     0,
      69,   150,   305,   256,     0,     0,   261,   198,   244,   200,
      69,   297,     0,   264,     0,   263,     0,    24,   157,   126,
       0,   153,   154,     0,   115,   120,     0,   194,     0,     0,
     126,     0,   186,   188,     0,   191,     0,     0,     0,   192,
     149,   148,   135,     0,     0,     0,   151,   258,   259,     0,
     213,   272,    35,   158,     0,    69,    60,   119,   193,     0,
       0,   187,   195,     0,     0,     0,     0,   137,   138,   136,
     302,    48,   156,   155,     0,     0,     0,   177,   179,   180,
     181,    69,     0,     0,     0,   195,     0,   303,   293,   182,
     183,     0,   178,     0,   184
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    13,    14,    15,    16,    17,    18,    19,
     227,    41,   135,   228,   222,   138,   229,   230,   231,   232,
     233,   139,   140,   234,   235,   236,    82,    83,    27,    28,
      75,   163,   291,    76,    77,   143,    79,    46,    47,   246,
     356,   357,   244,   153,   154,    49,    50,   145,   146,   281,
     388,   435,   410,   411,   412,   265,   266,   267,   268,   269,
     270,   271,   272,   421,   273,   274,   275,   276,   186,   316,
     187,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   172,   189,   129,   341,   342,   130,   131,
     192,   193,   194,   472,   237,   277
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -316
static const yytype_int16 yypact[] =
{
    -316,   400,  -316,   -69,    47,    -8,  -316,    47,    47,    47,
       4,    62,  -316,  -316,  -316,  1398,   -53,    14,    18,    20,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,    12,  1450,  -316,
    -316,  -316,     0,    12,  -316,  -316,  -316,  -316,  1104,  -316,
      96,    23,  -316,    47,  -316,    13,    36,  -316,   -52,    19,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,   118,    47,  -316,  -316,   156,
     169,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
      84,   104,    40,  -316,    77,  -316,  1168,  -316,  1232,  -316,
     -10,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  1296,  1296,  1104,  1104,  1104,
    1104,  1104,  1104,  1104,   -17,  -316,  -316,   -55,    73,    85,
      98,    81,   146,    79,   139,   163,    74,  -316,  -316,   -15,
    -316,  -316,  -316,  -316,  -316,   187,  -316,  -316,   790,    65,
     106,   122,   842,  -316,  -316,  -316,    13,  -316,    12,   976,
     497,  -316,    19,    -5,  -316,  -316,  -316,   119,  -316,  -316,
    -316,  -316,  -316,    82,   143,   155,  -316,    12,   976,  1104,
    -316,    12,     9,   -29,  -316,    47,  1104,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,    50,  -316,  -316,   142,   284,
    -316,    47,   140,   145,  -316,  -316,  1104,  1104,  1104,  1104,
    1104,  1104,  1104,  1104,  1104,  1104,  1104,  1104,  1104,  1104,
    1104,  1104,  1104,  1104,  1104,  -316,  -316,    47,  1104,  1104,
      47,  -316,   149,   119,   895,   152,   153,  -316,   147,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,    21,   154,    47,
    1104,   157,  -316,  -316,   182,   976,  -316,  -316,     5,   160,
    1104,   161,   158,   683,   162,    47,   168,  1104,   172,   173,
     176,   -13,  -316,  -316,    12,  -316,   166,   608,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,   196,   202,   197,  -316,   231,
      12,    15,   119,    47,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,   159,  -316,  1104,  1104,
    1104,  -316,  1104,  -316,  1104,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  1104,  -316,   204,   -17,
      73,   -74,    85,    98,    81,   146,    79,    79,   139,   139,
     139,   139,   163,   163,    74,    74,  -316,  -316,  -316,  -316,
    -316,   201,   206,   -22,  -316,    96,   215,  -316,  -316,  -316,
     -11,  -316,   239,  -316,  -316,  -316,   212,   217,  -316,  -316,
    -316,   211,  -316,   683,   220,    29,  1040,   223,  1104,   224,
    1104,  1104,  1104,  -316,  -316,  -316,   683,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,   222,   219,  -316,   225,
     911,  1104,  -316,  -316,   226,    -1,  -316,  -316,  -316,  -316,
     -11,  -316,  1104,  -316,  1104,  -316,    47,  -316,  -316,   -32,
     227,   233,  -316,  1104,  -316,   976,   683,  -316,   230,   234,
      12,   235,   202,  -316,    75,  -316,    76,    80,    94,  -316,
    -316,  -316,  -316,   237,    97,   238,  -316,  -316,  -316,   241,
    -316,  -316,   119,  -316,   244,   229,  -316,  -316,  -316,  1104,
    1104,   248,  1104,   683,   683,   683,   683,  -316,  -316,  -316,
     240,  -316,  -316,  -316,   105,   111,   242,   320,  -316,  -316,
    -316,  -316,   244,   250,   251,  1104,   683,  -316,  -316,  -316,
    -316,   259,  -316,   683,  -316
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -316,  -316,   343,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
      22,  -316,    24,   -30,  -316,   -23,  -316,  -316,    28,    30,
      39,  -316,  -316,    43,    10,    11,  -316,   192,    -6,  -316,
    -316,  -316,  -316,  -316,  -316,   342,  -316,   -48,   243,  -152,
    -316,  -316,   -24,  -316,   221,   203,   -27,   232,  -316,  -316,
    -316,  -316,  -315,  -316,   -70,   -47,  -316,  -316,   116,  -229,
    -316,  -316,  -316,  -316,  -316,  -316,  -243,   -98,   -88,  -316,
     -34,  -223,  -316,   191,   190,   193,   189,   194,    46,   -28,
      33,    35,   -60,  -100,    86,  -316,    95,     6,  -316,  -316,
    -316,  -316,    83,  -316,   -58,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -307
static const yytype_int16 yytable[] =
{
      33,   151,    31,    48,   115,    34,    35,    36,   157,    84,
     136,    25,    26,   188,   369,   185,   295,   353,   144,   279,
      53,   142,    30,    20,   365,    25,    26,   361,   174,    21,
     149,    22,   302,    80,    30,   196,    29,    20,    81,   402,
      23,   141,    45,    21,    24,    22,    30,   179,   180,   181,
     182,   183,   184,   190,    23,   215,   216,   150,    24,   197,
      40,   247,    73,   156,   158,   190,   418,   160,   162,   296,
     191,   185,    37,   419,  -159,   433,  -159,   223,   185,    32,
     247,   171,   191,   300,   302,   439,    45,    45,   217,   284,
     405,   175,   218,   355,   175,   282,   219,  -152,    30,   321,
    -306,   220,   280,   285,   286,   302,   408,   171,   287,   288,
     358,   438,   195,    38,   224,   359,   298,   289,   152,   144,
     299,   343,   390,    42,   128,   283,   391,    43,   350,    44,
     340,   290,   137,   158,   417,   164,   158,   132,   133,   134,
     158,   147,   148,    84,   264,   166,   167,   429,   212,   213,
     214,   158,   336,   337,   338,   165,   302,   247,   303,   168,
     262,   263,   198,   171,   204,   205,   206,   207,   436,    30,
     155,   195,   170,   301,   128,   238,   328,   329,   330,   331,
     201,   302,   302,   453,   454,   199,   302,   448,   455,   317,
     446,   177,   178,   128,   128,   128,   128,   128,   128,   200,
     302,   395,   456,   404,   240,   458,   115,    30,   159,   466,
     340,   302,   239,   473,   397,   339,   115,   302,   344,   474,
      30,   161,   158,   283,   467,   468,   469,   470,   399,   202,
     203,   292,   481,   208,   209,   210,   211,   352,    30,   221,
     396,   332,   333,   293,   398,   334,   335,   482,   326,   327,
     304,   319,   318,   367,   484,   345,   389,   347,   348,   351,
     349,   264,   354,   447,   149,   360,   362,   393,   422,   366,
     424,   363,   426,   427,   428,   368,   373,   262,   263,   370,
     371,   392,   128,   372,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   375,   340,   377,   378,   379,   380,   381,   302,   403,
     376,   400,   404,   382,   383,   136,   441,   195,   384,   385,
     407,   413,   414,   415,   416,   358,   128,   247,   423,   425,
     430,   431,   476,   432,   437,   444,   128,   449,   386,   445,
     452,   450,   387,   471,   409,   457,   462,   475,   442,   460,
     459,   464,   465,   150,   148,   479,   480,   115,    39,   294,
     420,   305,   306,   307,   308,   309,   310,   483,   440,   406,
      78,   477,   451,   278,   297,   463,   311,   312,   242,   115,
     313,   314,   315,   374,   409,   443,   128,   320,   322,   324,
     128,   243,   323,   394,   409,   325,   434,   461,     0,     0,
       2,     3,   401,   -69,   158,     0,   -69,   -69,     0,     0,
       0,   -69,     0,   -69,   -69,     0,   -69,     0,     0,   -69,
     -69,   -69,   -69,     0,     0,   478,   -69,   -69,     0,   -69,
       4,     0,     5,   -69,     6,   -69,   -69,     0,     7,   409,
       0,     0,     0,     0,     0,     8,     9,   -69,   -69,   -69,
       0,     0,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,     0,    10,     0,    11,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   248,   128,
     -69,   249,   250,   -69,   -69,   251,   252,   253,   -69,     0,
     -69,   -69,   254,   -69,   255,   256,   -69,   -69,   -69,   -69,
      85,     0,   257,   -69,   -69,    86,   -69,   -69,   258,     0,
     -69,     6,   -69,   -69,   259,     0,    87,    88,     0,     0,
       0,   260,   -69,   -69,   -69,   -69,   -69,    89,   261,   -69,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     0,     0,     0,   105,   106,   107,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   112,
       0,     0,  -195,     0,   113,     0,   150,  -162,   114,   364,
       0,   -69,   249,   250,   -69,   -69,   251,   252,   253,   -69,
       0,   -69,   -69,   254,   -69,   255,   256,   -69,   -69,   -69,
     -69,    85,     0,   257,   -69,   -69,    86,   -69,   -69,   258,
       0,   -69,     6,   -69,   -69,   259,     0,    87,    88,     0,
       0,     0,   260,   -69,   -69,   -69,   -69,   -69,    89,   261,
     -69,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,   105,   106,
     107,   108,   109,     0,   364,     0,     0,   249,   250,     0,
       0,   251,   252,   253,     0,     0,     0,     0,   254,   110,
     255,   256,     0,     0,     0,     0,    85,   111,   257,     0,
     112,    86,     0,  -195,   258,   113,     0,   150,  -163,   114,
     259,     0,    87,    88,     0,     0,     0,   260,     0,     0,
       0,     0,     0,    89,   261,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
       0,     0,     0,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,   112,     0,     0,  -195,     0,
     113,   225,   150,   -69,   114,     0,   -69,   -69,     0,     0,
       0,   -69,     0,   -69,   -69,     0,   -69,     0,     0,   -69,
     -69,   -69,   -69,     0,     0,     0,   -69,   -69,     0,   -69,
       4,     0,     0,   -69,     6,   -69,   -69,     0,     7,     0,
       0,   132,   133,   134,     0,     8,     9,   -69,   -69,   -69,
       0,    30,   -69,   225,     0,   -69,     0,     0,   -69,   -69,
       0,     0,     0,   -69,     0,   -69,   -69,     0,   -69,     0,
       0,   -69,   -69,   -69,   -69,     0,     0,     0,   -69,   -69,
       0,   -69,     4,     0,     0,   -69,     6,   -69,   -69,     0,
       7,     0,     0,   132,   133,   134,     0,     8,     9,   -69,
     -69,   -69,     0,    30,   -69,     0,   225,     0,   -69,     0,
     226,   -69,   -69,     0,     0,     0,   -69,     0,   -69,   -69,
       0,   -69,     0,     0,   -69,   -69,   -69,   -69,     0,     0,
       0,   -69,   -69,     0,   -69,     4,     0,     0,   -69,     6,
     -69,   -69,     0,     7,    85,     0,   132,   133,   134,    86,
       8,     9,   -69,   -69,   -69,     0,    30,   -69,     0,     0,
      87,    88,   241,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,     0,     0,
       0,   105,   106,   107,   108,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,   110,     0,    86,   346,     0,     0,     0,     0,
     111,     0,     0,   112,     0,    87,    88,     0,   113,  -152,
       0,     0,   114,     0,     0,     0,    89,    90,   408,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,     0,     0,     0,   105,   106,   107,   108,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,   110,    86,     0,
       0,     0,     0,     0,     0,   111,     0,     0,   112,    87,
      88,     0,     0,   113,     0,   245,     0,   114,     0,     0,
      89,    90,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,     0,     0,     0,
     105,   106,   107,   108,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,   110,    86,     0,     0,     0,     0,     0,     0,   111,
       0,     0,   112,    87,    88,  -185,     0,   113,     0,     0,
       0,   114,     0,     0,    89,    90,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,     0,     0,     0,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,   110,    86,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   112,    87,    88,     0,
       0,   113,     0,     0,     0,   114,     0,     0,    89,    90,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,     0,     0,     0,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,   110,
      86,     0,     0,     0,     0,     0,     0,   111,     0,     0,
     112,    87,    88,     0,     0,   169,     0,     0,     0,   114,
       0,     0,    89,    90,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,     0,
       0,     0,   105,   106,   107,   108,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,   110,    86,     0,     0,     0,     0,     0,
       0,   111,     0,     0,   112,    87,    88,     0,     0,   113,
       0,     0,     0,   173,     0,     0,    89,    90,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,     0,     0,     0,   105,   106,   107,   108,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,   112,     3,
       0,   -69,     0,   176,   -69,   -69,     0,   114,     0,   -69,
       0,   -69,   -69,     0,   -69,     0,     0,   -69,   -69,   -69,
     -69,     0,     0,     0,   -69,   -69,     0,   -69,     4,     0,
       5,   -69,     6,   -69,   -69,     0,     7,     0,     0,     0,
       0,     0,     0,     8,     9,   -69,   -69,   -69,     0,     0,
     -69,     0,     0,    51,     0,     0,    52,    53,     0,     0,
       0,    54,     0,    55,    56,    10,    57,    11,     0,    58,
      59,    60,    61,     0,     0,     0,    62,    63,     0,    64,
      65,     0,     0,    66,     0,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,    71,    72,    73,
       0,     0,    74
};

static const yytype_int16 yycheck[] =
{
       6,    48,     4,    27,    38,     7,     8,     9,    66,    33,
      40,     1,     1,   113,   257,   113,   168,   240,    45,    24,
       7,    44,    51,     1,   253,    15,    15,   250,    88,     1,
      82,     1,   106,    33,    51,    90,   105,    15,    38,   113,
       1,    43,    74,    15,     1,    15,    51,   107,   108,   109,
     110,   111,   112,    82,    15,    70,    71,   109,    15,   114,
     113,   149,    49,    65,    66,    82,    37,    69,    70,   169,
      99,   169,    68,    44,   106,   390,   108,   135,   176,    87,
     168,    87,    99,   112,   106,   400,    74,    74,   103,     7,
     112,   104,   107,   245,   104,   153,   111,   108,    51,   197,
     113,   116,   107,    21,    22,   106,   117,   113,    26,    27,
     105,   112,   114,    51,   137,   110,   107,    35,    99,   146,
     111,   219,   107,   109,    38,   104,   111,   109,   107,   109,
     218,    49,   109,   135,   363,    51,   138,    41,    42,    43,
     142,   105,   106,   167,   150,   105,   106,   376,    74,    75,
      76,   153,   212,   213,   214,    51,   106,   245,   108,    82,
     150,   150,    89,   169,    85,    86,    87,    88,   391,    51,
      52,   173,    86,   175,    88,   110,   204,   205,   206,   207,
      99,   106,   106,   108,   108,   100,   106,   416,   108,   191,
     413,   105,   106,   107,   108,   109,   110,   111,   112,   101,
     106,   299,   108,   106,    82,   108,   240,    51,    52,   452,
     298,   106,   106,   108,   302,   217,   250,   106,   220,   108,
      51,    52,   224,   104,   453,   454,   455,   456,   316,    83,
      84,    88,   475,    94,    95,    72,    73,   239,    51,    52,
     300,   208,   209,    88,   304,   210,   211,   476,   202,   203,
     108,   106,   112,   255,   483,   106,   280,   105,   105,   105,
     113,   267,   105,   415,    82,   105,   105,   108,   366,   107,
     368,   113,   370,   371,   372,   107,   110,   267,   267,   107,
     107,   283,   196,   107,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   105,   390,    72,    73,    74,    75,    76,   106,   108,
     113,   107,   106,    82,    83,   345,   404,   319,    87,    88,
     105,    82,   110,   106,   113,   105,   240,   415,   105,   105,
     108,   112,    12,   108,   108,   108,   250,   107,   107,   106,
     105,   107,   111,   103,   350,   108,   117,   105,   406,   108,
     112,   449,   450,   109,   106,   105,   105,   391,    15,   167,
     366,    77,    78,    79,    80,    81,    82,   108,   402,   345,
      28,   471,   420,   152,   171,   445,    92,    93,   146,   413,
      96,    97,    98,   267,   390,   409,   300,   196,   198,   200,
     304,   148,   199,   298,   400,   201,   390,   444,    -1,    -1,
       0,     1,   319,     3,   406,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,   472,    26,    27,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    -1,    38,   445,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   471,    -1,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   391,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   402,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   413,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,   102,
      -1,    -1,   105,    -1,   107,    -1,   109,   110,   111,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,     1,    -1,    -1,     4,     5,    -1,
      -1,     8,     9,    10,    -1,    -1,    -1,    -1,    15,    91,
      17,    18,    -1,    -1,    -1,    -1,    23,    99,    25,    -1,
     102,    28,    -1,   105,    31,   107,    -1,   109,   110,   111,
      37,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,   102,    -1,    -1,   105,    -1,
     107,     1,   109,     3,   111,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    -1,    29,
      30,    -1,    -1,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    -1,    16,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      -1,    29,    30,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,     1,    -1,     3,    -1,
     110,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      -1,    16,    -1,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    33,    34,
      35,    36,    -1,    38,    23,    -1,    41,    42,    43,    28,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    -1,
      39,    40,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    91,    -1,    28,   110,    -1,    -1,    -1,    -1,
      99,    -1,    -1,   102,    -1,    39,    40,    -1,   107,   108,
      -1,    -1,   111,    -1,    -1,    -1,    50,    51,   117,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    91,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,   102,    39,
      40,    -1,    -1,   107,    -1,   109,    -1,   111,    -1,    -1,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    91,    28,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,   102,    39,    40,   105,    -1,   107,    -1,    -1,
      -1,   111,    -1,    -1,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    91,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,   102,    39,    40,    -1,
      -1,   107,    -1,    -1,    -1,   111,    -1,    -1,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    91,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
     102,    39,    40,    -1,    -1,   107,    -1,    -1,    -1,   111,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,   102,     1,
      -1,     3,    -1,   107,     6,     7,    -1,   111,    -1,    11,
      -1,    13,    14,    -1,    16,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      52,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    67,    16,    69,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    -1,    29,
      30,    -1,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   122,     0,     1,    30,    32,    34,    38,    45,    46,
      67,    69,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   139,   140,   141,   144,   145,   146,   149,   150,   105,
      51,   216,    87,   149,   216,   216,   216,    68,    51,   123,
     113,   132,   109,   109,   109,    74,   158,   159,   163,   166,
     167,     3,     6,     7,    11,    13,    14,    16,    19,    20,
      21,    22,    26,    27,    29,    30,    33,    35,    36,    45,
      46,    47,    48,    49,    52,   151,   154,   155,   156,   157,
      33,    38,   147,   148,   163,    23,    28,    39,    40,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    70,    71,    72,    73,    74,
      91,    99,   102,   107,   111,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   205,   206,
     209,   210,    41,    42,    43,   133,   134,   109,   136,   142,
     143,   216,   136,   156,   167,   168,   169,   105,   106,    82,
     109,   176,    99,   164,   165,    52,   216,   215,   216,    52,
     216,    52,   216,   152,    51,    51,   105,   106,    82,   107,
     205,   149,   204,   111,   203,   104,   107,   205,   205,   203,
     203,   203,   203,   203,   203,   188,   189,   191,   204,   205,
      82,    99,   211,   212,   213,   216,    90,   114,    89,   100,
     101,    99,    83,    84,    85,    86,    87,    88,    94,    95,
      72,    73,    74,    75,    76,    70,    71,   103,   107,   111,
     116,    52,   135,   215,   136,     1,   110,   131,   134,   137,
     138,   139,   140,   141,   144,   145,   146,   215,   110,   106,
      82,   110,   168,   159,   163,   109,   160,   189,     1,     4,
       5,     8,     9,    10,    15,    17,    18,    25,    31,    37,
      44,    51,   145,   146,   149,   176,   177,   178,   179,   180,
     181,   182,   183,   185,   186,   187,   188,   216,   165,    24,
     107,   170,   215,   104,     7,    21,    22,    26,    27,    35,
      49,   153,    88,    88,   148,   160,   204,   166,   107,   111,
     112,   216,   106,   108,   108,    77,    78,    79,    80,    81,
      82,    92,    93,    96,    97,    98,   190,   216,   112,   106,
     194,   188,   195,   196,   197,   198,   199,   199,   200,   200,
     200,   200,   201,   201,   202,   202,   203,   203,   203,   216,
     189,   207,   208,   188,   216,   106,   110,   105,   105,   113,
     107,   105,   216,   192,   105,   160,   161,   162,   105,   110,
     105,   192,   105,   113,     1,   180,   107,   216,   107,   187,
     107,   107,   107,   110,   179,   105,   113,    72,    73,    74,
      75,    76,    82,    83,    87,    88,   107,   111,   171,   163,
     107,   111,   216,   108,   207,   188,   203,   189,   203,   189,
     107,   213,   113,   108,   106,   112,   133,   105,   117,   149,
     173,   174,   175,    82,   110,   106,   113,   180,    37,    44,
     149,   184,   188,   105,   188,   105,   188,   188,   188,   180,
     108,   112,   108,   173,   208,   172,   192,   108,   112,   173,
     191,   189,   215,   163,   108,   106,   192,   160,   180,   107,
     107,   158,   105,   108,   108,   108,   108,   108,   108,   112,
     108,   176,   117,   175,   188,   188,   187,   180,   180,   180,
     180,   103,   214,   108,   108,   105,    12,   204,   176,   105,
     105,   187,   180,   108,   180
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
        case 13:
#line 85 "src/parser.y"
    { yyerrok; ;}
    break;

  case 18:
#line 98 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 19:
#line 99 "src/parser.y"
    { registerTypeName((yyvsp[(4) - (5)].text)); ;}
    break;

  case 20:
#line 104 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 21:
#line 107 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 22:
#line 110 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 23:
#line 113 "src/parser.y"
    { registerTypeName((yyvsp[(2) - (2)].text)); (yyval.text) = (yyvsp[(2) - (2)].text); ;}
    break;

  case 47:
#line 150 "src/parser.y"
    { yyerrok; ;}
    break;

  case 66:
#line 193 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (1)].text)); ;}
    break;

  case 67:
#line 194 "src/parser.y"
    { registerTypeName((yyvsp[(1) - (3)].text)); ;}
    break;

  case 121:
#line 255 "src/parser.y"
    { (yyval.text) = (yyvsp[(3) - (3)].text); ;}
    break;

  case 133:
#line 280 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 134:
#line 281 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (2)].text); ;}
    break;

  case 135:
#line 282 "src/parser.y"
    { (yyval.text) = (yyvsp[(2) - (3)].text); ;}
    break;

  case 136:
#line 283 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 137:
#line 284 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 138:
#line 285 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (4)].text); ;}
    break;

  case 161:
#line 309 "src/parser.y"
    { yyerrok; ;}
    break;

  case 175:
#line 331 "src/parser.y"
    { yyerrok; ;}
    break;

  case 304:
#line 475 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 305:
#line 476 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (3)].text); ;}
    break;

  case 306:
#line 479 "src/parser.y"
    { (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2416 "src/parser.tab.cc"
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


#line 482 "src/parser.y"


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

