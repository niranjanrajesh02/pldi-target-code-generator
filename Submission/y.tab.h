/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,
    CHAR = 259,
    VOID = 260,
    IF = 261,
    ELSE = 262,
    FOR = 263,
    RETURN = 264,
    IDENTIFIER = 265,
    PUNCT = 266,
    OR = 267,
    AND = 268,
    LE = 269,
    GE = 270,
    EQ = 271,
    NE = 272,
    ARROW = 273,
    EQUAL = 274,
    SEMI = 275,
    LPAREN = 276,
    RPAREN = 277,
    LSBRACK = 278,
    RSBRACK = 279,
    COMMA = 280,
    LBRACE = 281,
    RBRACE = 282,
    AST = 283,
    AMP = 284,
    PLUS = 285,
    MINUS = 286,
    PERCENT = 287,
    EXC = 288,
    SLASH = 289,
    LT = 290,
    GT = 291,
    QUES = 292,
    COLON = 293,
    CHAR_C = 294,
    SL = 295,
    INT_C = 296,
    LOWER_THAN_ELSE = 297
  };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define VOID 260
#define IF 261
#define ELSE 262
#define FOR 263
#define RETURN 264
#define IDENTIFIER 265
#define PUNCT 266
#define OR 267
#define AND 268
#define LE 269
#define GE 270
#define EQ 271
#define NE 272
#define ARROW 273
#define EQUAL 274
#define SEMI 275
#define LPAREN 276
#define RPAREN 277
#define LSBRACK 278
#define RSBRACK 279
#define COMMA 280
#define LBRACE 281
#define RBRACE 282
#define AST 283
#define AMP 284
#define PLUS 285
#define MINUS 286
#define PERCENT 287
#define EXC 288
#define SLASH 289
#define LT 290
#define GT 291
#define QUES 292
#define COLON 293
#define CHAR_C 294
#define SL 295
#define INT_C 296
#define LOWER_THAN_ELSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "A5_9.y"
 // Placeholder for a value
	int intval;
  char * strval;
	struct symtab *symp;

#line 147 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
