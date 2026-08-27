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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 34 "src/parser.y"
{ char* text; }
/* Line 1529 of yacc.c.  */
#line 291 "src/parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

