#include <stdio.h>
#include "lex.yy.c"
#include "y.tab.h"
#include "y.tab.c"
#include "helper.h"

int main()
{
  yyin = fopen("./A5_9.nc", "r");
  printf("\nGrammar Reductions:\n\n");
  yyparse();
  printf("\nParsing Complete. Goodnight!\n\n");
  printf("\nSymbol Table:\n");
  printSymbolTable();
  printf("\nQuads:\n");
  print_quad_array();
  // printf("\nTarget Code:\n");
  // print hello world in new file
  // FILE *fp = fopen("target_code.asm", "w");
  // fprintf(fp, "Hello World!\n");
  // target_code_translation();
  // print_rtm_array();
  make_func_blocks();
  update_offset();
  printf("\nUpdated Symbol Table:\n");
  printSymbolTable();

  printf("\nRegister Allocation:\n");
  register_allocation();
  print_quad_array();

  // make_func_blocks();
  print_func_blocks();
  printf("\nTarget Code:\n");
  print_target();
  return 0;
}