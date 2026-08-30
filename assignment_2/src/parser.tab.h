/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 37 "src/parser.y"
{ char* text; }
/* Line 1529 of yacc.c.  */
#line 295 "src/parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

