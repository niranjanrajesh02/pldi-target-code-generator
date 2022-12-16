%{ /* C Declarations and Definitions */
int yylex();
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "helper.h"

// extern int yylineno;
char * yytext;
extern int yylex();
void yyerror(char *s);
int quadPtr = 0; // Index of next quad
int regPtr = 0; // Index of next register
int rtmPtr = 0; // Index of rtm array
int funcBlockPtr = 0; // Index of funcBlock array
%}

%union { // Placeholder for a value
	int intval;
  char * strval;
	struct symtab *symp;
}


%token <strval> INT CHAR VOID IF ELSE FOR RETURN 
%token <strval> IDENTIFIER
%token <strval> PUNCT
%token <strval> OR AND LE GE EQ NE ARROW EQUAL SEMI
%token <strval> LPAREN RPAREN LSBRACK RSBRACK COMMA LBRACE 
%token <strval> RBRACE AST AMP PLUS MINUS PERCENT EXC SLASH LT GT QUES COLON
%token <strval> CHAR_C SL
%token <strval> INT_C

%type <strval> ID STRING_LITERAL CHAR_CONSTANT INT_CONSTANT primary_expression postfix_expression unary_expression argument_expression_list_opt argument_expression_list
%type <strval> multiplicative_expression additive_expression relational_expression equality_expression
%type <strval> logical_and_expression logical_or_expression conditional_expression assignment_expression expression
%type <strval> declaration init_declarator type_specifier declarator direct_declarator parameter_list_opt parameter_list parameter_declaration
%type <strval> ID_opt initialiser constants
%type <strval> statement compound_statement block_item_list_opt block_item_list block_item expression_statement selection_statement iteration_statement jump_statement expression_opt
%type <strval> prog translation_unit function_definition declaration_list_opt declaration_list


%start prog

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE


%right EQUAL
%right QUES COLON
%left OR AND
%left EQ NE
%left GT LT GE LE
%left PLUS MINUS
%left AMP SLASH


%%
// Translational Unit Rules!

prog: translation_unit {printf("prog: translation_unit\n");}
| prog translation_unit {printf("prog: prog translation_unit\n");}
;
translation_unit: function_definition {printf("translation_unit: function_definition \n");}
| declaration {printf("translation_unit: declaration \n");}
;

function_definition: type_specifier declarator declaration_list_opt compound_statement {
  union var_value val;
  char *fs = strdup("f_");
  strcat(fs, $1);
  val.char_val = strdup(fs);
  sym_update($2, "type", val);
  printf("function_definition: type_specifier declarator '(' declaration_list_opt ')' compound_statement \n");
  }
;

declaration_list_opt: declaration_list {printf("declaration_list_opt: declaration_list \n");}
| /*epsilon*/ {printf("declaration_list_opt: /*epsilon*/ \n");}
;


declaration_list: declaration {printf("declaration_list: declaration \n");}
| declaration_list declaration {printf("declaration_list: declaration_list declaration \n");}
;

// Expression Rules!
primary_expression: ID {$$ = $1; printf("primary_expression: ID\n");}
| constants { $$=$1; printf("primary_expression: constants\n");}
| STRING_LITERAL  { $$ = $1; printf("primary_expression: STRING_LITERAL\n");}
| LPAREN expression RPAREN {$$ = $2; printf("primary_expression: '(' expression ')'\n");}
;



STRING_LITERAL: SL { $$=strdup(yytext); printf("STRING_LITERAL: SL\n");}
;

constants: INT_CONSTANT  { $$=$1; printf("constants: INT_CONSTANT\n");}
| CHAR_CONSTANT { $$=$1; printf("constants: CHAR_CONSTANT\n");}
;

INT_CONSTANT: INT_C {
  char *s1 = strdup(yytext);
  char *temp = gentemp(s1, "INT");
  qArray[quadPtr++] = new_quad_unary("=", symfind(temp)->name, s1);
  $$ = temp;
  printf("INT_CONSTANT: INT_C\n");}
;
CHAR_CONSTANT: CHAR_C { $$ = strdup(yytext); printf("CHAR_CONSTANT: CHAR_C\n");}
;

postfix_expression: primary_expression { $$ = $1; printf("postfix_expression: primary_expression\n");}
| postfix_expression LSBRACK expression RSBRACK { printf("postfix_expression: postfix_expression '[' expression ']'\n");}
| postfix_expression LPAREN argument_expression_list_opt RPAREN {printf("postfix_expression: postfix_expression '(' argument_expression_list_opt ')'\n");}
| postfix_expression ARROW ID {printf("postfix_expression: postfix_expression ARROW ID\n");}
;

argument_expression_list_opt: argument_expression_list {printf("argument_expression_list_opt: argument_expression_list\n");}
| /* epsilon */ {printf("argument_expression_list_opt: /* epsilon */\n");}

argument_expression_list: assignment_expression {printf("argument_expression_list: assignment_expression\n");}
| argument_expression_list COMMA assignment_expression  {printf("argument_expression_list: argument_expression_list ',' assignment_expression\n");}
;

unary_expression: postfix_expression {$$=$1; printf("unary_expression: postfix_expression\n");}
| unary_operator unary_expression {$$=$2; printf("unary_expression: unary_operator unary_expression\n");}
;

unary_operator: AMP | AST | PLUS | MINUS | EXC {printf("unary_operator: '&' | '*' | '+' | '-' | '!' \n");}
; 

multiplicative_expression: unary_expression {$$=$1; printf("multiplicative_expression: unary_expression\n");}
| multiplicative_expression AST unary_expression {
  char *s1 = $1;
  char *s3 = $3;
  char *s1_name = $1;
  char *s3_name = $3;
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook($1);
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook($3);
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) * convert_string_to_int(s3)), "INT");
  $$ = temp;
  qArray[quadPtr++] = new_quad_binary("*", symfind(temp)->name, s1_name, s3_name);
  printf("multiplicative_expression: multiplicative_expression '*' unary_expression\n");
  }
| multiplicative_expression SLASH unary_expression {
  char *s1 = $1;
  char *s3 = $3;
  char *s1_name = $1;
  char *s3_name = $3;
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook($1);
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook($3);
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) / convert_string_to_int(s3)), "INT");
  $$ = temp;
  qArray[quadPtr++] = new_quad_binary("/", symfind(temp)->name, s1_name, s3_name);
  printf("multiplicative_expression: multiplicative_expression perc unary_expression\n");}
; 

additive_expression: multiplicative_expression {$$ = $1; printf("additive_expression: multiplicative_expression\n");}    
| additive_expression PLUS multiplicative_expression {
  char *s1 = $1;
  char *s3 = $3;
  char *s1_name = $1;
  char *s3_name = $3;
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook($1);
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook($3);
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) + convert_string_to_int(s3)), "INT");
  $$ = temp;
  qArray[quadPtr++] = new_quad_binary("+", symfind(temp)->name, s1_name, s3_name);
  printf("additive_expression: additive_expression '+' multiplicative_expression\n");
  }
| additive_expression MINUS multiplicative_expression { 
  char *s1 = $1;
  char *s3 = $3;
  char *s1_name = $1;
  char *s3_name = $3;
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook($1);
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook($3);
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) - convert_string_to_int(s3)), "INT"); 
  $$ = temp;
  qArray[quadPtr++] = new_quad_binary("-", symfind(temp)->name, s1_name, s3_name);
  printf("multiplicative_expression: multiplicative_expression '-' unary_expression\n");
;
}

relational_expression: additive_expression { $$ = $1; printf("relational_expression: additive_expression\n");}
| relational_expression LT additive_expression {printf("relational_expression: relational_expression '<' additive_expression\n");}
| relational_expression GT additive_expression {printf("relational_expression: relational_expression '>' additive_expression\n");}
| relational_expression LE additive_expression {printf("relational_expression: relational_expression LE additive_expression\n");}
| relational_expression GE additive_expression {printf("relational_expression: relational_expression GE additive_expression\n");}
;

equality_expression: relational_expression { $$ = $1; printf("equality_expression: relational_expression\n");}
| equality_expression EQ relational_expression { printf("equality_expression: equality_expression EQ relational_expression\n");}
| equality_expression NE relational_expression {printf("equality_expression: equality_expression NE relational_expression\n");}
;

logical_and_expression: equality_expression {$$ = $1; printf("logical_and_expression: equality_expression\n");}
| logical_and_expression AND equality_expression {printf("logical_and_expression: logical_and_expression AND equality_expression\n");}
;

logical_or_expression: logical_and_expression {$$ = $1; printf("logical_or_expression: logical_and_expression\n");}
| logical_or_expression OR logical_and_expression {printf("logical_or_expression: logical_or_expression  logical_and_expression\n");}
;

conditional_expression: logical_or_expression {$$ = $1; printf("conditional_expression: logical_or_expression\n");}
| logical_or_expression QUES expression COLON conditional_expression {printf("conditional_expression: logical_or_expression '?' expression ':' conditional_expression\n");}
;

assignment_expression: conditional_expression {$$ = $1; printf("assignment_expression: conditional_expression\n");}
| unary_expression EQUAL assignment_expression {

  qArray[quadPtr++] = new_quad_unary("=", $1, $3);
  
  printf("assignment_expression: unary_expression assignment_operator assignment_expression\n");}
;

expression: assignment_expression {$$ = $1; printf("expression: assignment_expression \n");}
;

// Declaration Rules!
declaration: type_specifier init_declarator SEMI {
  $$ = $1;
  union var_value val;
  val.char_val = $1;
  sym_update($2, "type", val);
  printf("declaration: type_specifier init_declarator \n");}
;

init_declarator: declarator {$$ = $1; printf("init_declarator: declarator \n");}
| declarator EQUAL initialiser {
  // update symbol table for declarator value with initialiser value
  union var_value val;
  val.char_val = $3;
  
  sym_update($1, "initial_value", val);
  qArray[quadPtr++] = new_quad_unary("=", $1, $3);
  printf("initialiser = %s\n", $3);  printf("init_declarator: declarator = initialiser \n");}
;

type_specifier: INT {$$="INT"; printf("type_specifier: INT \n");}
| CHAR {$$="CHAR"; printf("type_specifier: CHAR \n");}
| VOID {$$="VOID"; printf("type_specifier: VOID \n");}
;

declarator: pointer_opt direct_declarator {$$=$2; printf("declarator: pointer_opt direct_declarator \n");}
; 

pointer_opt: AST {printf("pointer_opt: '*'' \n");}
| /*epsilon*/ {printf("pointer_opt: /*epsilon*/ \n");}
;

direct_declarator: ID { $$=$1; printf("SA ID: %s\n", $1); printf("direct_declarator: ID \n");}
| ID LSBRACK INT_CONSTANT RSBRACK {printf("direct_declarator: ID '[' INT_CONSTANT ']' \n");}
| ID LPAREN parameter_list_opt RPAREN {printf("direct_declarator: ID '(' parameter_list_opt ')' \n");}
;

parameter_list_opt: parameter_list {printf("parameter_list_opt: parameter_list \n");} 
| /*epsilon*/  {printf("parameter_list_opt: /*epsilon*/ \n");}
;

parameter_list: parameter_declaration {printf("parameter_list: parameter_declaration \n");}
| parameter_list COMMA parameter_declaration {printf("parameter_list: parameter_list ',' parameter_declaration \n");}
;

parameter_declaration: type_specifier pointer_opt ID_opt {printf("parameter_declaration: type_specifier pointer_opt ID_opt \n");}
; 


ID_opt: ID {$$=$1; printf("ID_opt: ID \n");} 
| /*epsilon*/ {printf("ID_opt: /*epsilon*/ \n");}
;

ID: IDENTIFIER {$$ = strdup($1);}

initialiser: assignment_expression {$$=$1;printf("CHAR: %s\n", $1); printf("initialiser: assignment_expression \n");}
;

// Statement Rules!
statement: compound_statement {printf("statement: compound_statement \n");}
| expression_statement {printf("statement: expression_statement \n");}
| selection_statement {printf("statement: selection_statement \n");}
| iteration_statement {printf("statement: iteration_statement \n");}
| jump_statement {printf("statement: jump_statement \n");}
;

compound_statement: LBRACE block_item_list_opt RBRACE {printf("compound_statement: '{' block_item_list_opt '}' \n");}
;

block_item_list_opt: block_item_list {printf("block_item_list_opt: block_item_list \n");}
| /*epsilon*/ {printf("block_item_list_opt: /*epsilon*/ \n");}
;

block_item_list: block_item {printf("block_item_list: block_item \n");}
| block_item_list block_item {printf("block_item_list: block_item_list block_item \n");}
;

block_item: declaration  {printf("block_item: declaration \n");}
| statement {printf("block_item: statement \n");}
;

expression_statement: expression_opt SEMI {printf("expression_statement: expression_opt ';' \n");}
;

selection_statement: IF LPAREN expression RPAREN statement %prec LOWER_THAN_ELSE /*Shifting else into stack given higher precedence*/ {printf("selection_statement: IF LPAREN expression ')' statement \n");}
| IF LPAREN expression RPAREN statement ELSE statement {printf("selection_statement: IF '(' expression ')' statement ELSE statement \n");}
;

iteration_statement: FOR LPAREN expression_opt SEMI expression_opt SEMI expression_opt RPAREN statement {printf("iteration_statement: FOR'(' expression_opt ';' expression_opt ';' expression_opt ')' statement \n");}
;

jump_statement: RETURN expression_opt SEMI {
  qArray[quadPtr++] = new_quad_unary("", "return", $2);
  printf("jump_statement: RETURN expression_opt ';' \n");
  }
;

expression_opt: expression {printf("expression_opt: expression \n");}
| /*epsilon*/ {printf("expression_opt: /*epsilon*/ \n");} 
;

%%

void yyerror(char *str)
{
    extern int yylineno;
    fprintf(stderr,"%s at Line: %d on Token: '%s'\n",str, yylineno, yytext);
}


// main() {yyparse();}
