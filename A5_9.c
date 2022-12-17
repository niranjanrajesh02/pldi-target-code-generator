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
  print_quad_array("terminal", NULL);

  FILE *fp = fopen("A5_group_quads.output", "w");
  print_quad_array("file", fp);
  fclose(fp);
  printf("\nA5_9_group_quads.output generated\n\n");

  // Makes a function block for each function to handle offset and TAC later on
  make_func_blocks();
  update_offset();
  printf("\nUpdated Symbol Table:\n");
  printSymbolTable();

  // updates the quad temps with respective registers
  printf("\nRegister Allocation:\n");
  register_allocation();
  print_quad_array("terminal", NULL);

  // // make_func_blocks();
  print_func_blocks("terminal", NULL);
  FILE *fp2 = fopen("A5_9_quads.asm", "w");
  print_func_blocks("file", fp2);
  fclose(fp2);

  // printf("\nTarget Code:\n");
  // print_target();
  return 0;
}