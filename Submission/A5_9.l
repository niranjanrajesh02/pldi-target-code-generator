%option noyywrap
%option yylineno
%{
/* C Declarations and Definitions */
#include "y.tab.h"
#include "helper.h"
// void yyerror (char *s);
int yylex();

%}

/* Regular Expression Definitions */
INT "int" 
CHAR "char"
VOID "void"
IF "if"
ELSE "else"
FOR "for"
RET "return"

DIGIT [0-9]
LETTER [a-zA-Z]
ID ({LETTER}|"_")({LETTER}|{DIGIT}|"_")*

NZDIGIT [1-9]
SIGN [+|-]
ICONST ({SIGN}?{NZDIGIT}{DIGIT}*) 
LEADINGZERO 0+({DIGIT}+)
ZERO 0

CCHARSOURCE [^'\\]
ESCAPE [\\][abfv?nrt'\\]
CCHAR {CCHARSOURCE}|{ESCAPE}
CCHARSEQ {CCHAR}+
CHARCONST '{CCHARSEQ}+'

SCHARSOURCE [^"\\]
SCHAR {SCHARSOURCE}|{ESCAPE}
SCHARSEQ {SCHAR}+
STRLIT \"{SCHARSEQ}+\"
MULTICOMMENT \/\*([^*]|\*+[^/])*\*+\/
SINGLECOMMENT \/\/.*\n
COMMENT {MULTICOMMENT}|{SINGLECOMMENT}

PUNCT (\[|\]|\(|\)|\{|\}|(<=)|(>=)|(->)|(!=)|&&?|\*|\+|-|\/|%|!|\?|<|>|==?|\|\|?|:|;|,)
WS [ \t\n]
NEWLINE \n
NOMATCH .


/* Definitions of Rules \& Actions */
%%
\|\|      { return OR; }
\=         { return EQUAL; }
>=        { return GE; }
&&        { return AND; }
\<\=      { return LE; }
==        { return EQ; }
!=        { return NE; }
->        { return ARROW; }
;         { return SEMI; }
\(        { return LPAREN; }
\)        { return RPAREN; }
\[        { return LSBRACK; }
\]        { return RSBRACK; }
,         { return COMMA; }
\{        { return LBRACE; }
\}        { return RBRACE; }
\*        { return AST; }
\&        { return AMP; }
\+        { return PLUS; }
\-        { return MINUS; }
\%        { return PERCENT; }
\!        { return EXC; }
\/        { return SLASH; }
\<        { return LT; }
\>        { return GT; }
\?        { return QUES; }
\:        { return COLON; }

{INT}     { return INT; /* Keyword Int Rule */ }
{CHAR}    { return CHAR; /* Keyword Char Rule */ }
{VOID}    { return VOID; /* Keyword Void Rule */ }
{IF}      { return IF; /* Keyword If Rule */ }
{ELSE}    { return ELSE; /* Keyword Else Rule */ }
{FOR}     { return FOR; /* Keyword For Rule */ }
{RET}     { return RETURN; /* Keyword Return Rule */ }


{COMMENT} /* Comment Rule */ 

{ID} { yylval.strval = symlook(yytext); return IDENTIFIER; /* Identifier Rule */ }
{PUNCT} { return PUNCT; /* Punctuation Rule */ }
{LEADINGZERO} { printf(" !!ERROR: Leading 0!! "); /* Leading 0 Error Rule */ }
{STRLIT} {  return SL; /* String Literal Rule (needs yytext for semantic)*/  }
{ICONST} {  return INT_C; /* Integer Constant Rule */ }
{CHARCONST} {  return CHAR_C; /* Character Constant Rule */ }

{NOMATCH}  /* No Match Rule */ 
%%
/* C functions */
// yywrap() {

// }
// main() {yylex();} /* Flex Engine */ 