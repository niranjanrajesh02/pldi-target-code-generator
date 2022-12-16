#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

extern void yyerror(char *s);

// initialise empty string array

char *regArr[NSYMS];

// check if string starts with char
int starts_with(const char *pre, const char *str)
{
  size_t lenpre = strlen(pre),
         lenstr = strlen(str);
  return lenstr < lenpre ? 0 : memcmp(pre, str, lenpre) == 0;
}

// function to replace first char of string

/* Look-up Symbol Table */
char *symlook(char *s)
{
  char *p;
  struct symtab *sp;
  for (sp = symtab; sp < &symtab[NSYMS]; sp++)
  {
    /* is it already here? */
    if (sp->name && !strcmp(sp->name, s))
      return s;
    if (!sp->name)
    {
      /* is it free */
      sp->name = strdup(s);
      return s;
    }
    /* otherwise continue to next */
  }
  // yerror("Too many symbols");
  return NULL;
  // exit(1); /* cannot continue */
} /* symlook */

// symfind returns sp if found, NULL otherwise
symboltable *symfind(char *s)
{
  symboltable *sp;
  for (sp = symtab; sp < &symtab[NSYMS]; sp++)
  {
    /* is it already here? */
    if (sp->name && !strcmp(sp->name, s))
      return sp;
    /* otherwise continue to next */
  }
  // yerror("Too many symbols");
  return NULL;
  // exit(1); /* cannot continue */
} /* symfind */

/* Update Symbol Table */
symboltable *sym_update(char *name, char *attr, union var_value new_val)
{
  symboltable *sp;
  for (sp = symtab; sp < &symtab[NSYMS]; sp++)
  {
    if (sp->name && !strcmp(sp->name, name))
    {
      if (!strcmp(attr, "type"))
      {
        sp->type = new_val.char_val;
        if (!strcmp(new_val.char_val, "INT"))
          sp->size = 4;
        else if (!strcmp(new_val.char_val, "CHAR"))
          sp->size = 1;
        else if (!strcmp(new_val.char_val, "VOID"))
          sp->size = 0;
        else if (starts_with("f", new_val.char_val))
        {
          sp->initial_value = "-";
          sp->size = 0;
        }
        else
          sp->size = 0;
      }
      else if (!strcmp(attr, "initial_value"))
      {
        // sp->value = new_val.int_val;
        sp->initial_value = new_val.char_val;
        // sp->value = new_val.char_val;
      }
      else if (!strcmp(attr, "offset"))
      {
        sp->offset = new_val.int_val;
      }
      else
      {
        yyerror("Invalid attribute");
        exit(1);
      }
      return sp;
    }
    if (!sp->name)
    {
      // printf("Symbol %s not found\n", name);
    }
    /* otherwise continue to next */
  }
  printf("Too many symbols\n");

} /* update */

char *gentemp(char *val, char *type)
{
  static int c = 0; /* Temp counter */
  char str[10];     /* Temp name */
  /* Generate temp name */
  sprintf(str, "t%02d", c++);
  /* Add temporary to symtab */
  union var_value new;
  new.char_val = val;
  symlook(str);
  sym_update(str, "initial_value", new);
  new.char_val = type;
  sym_update(str, "type", new);
  return strdup(str);
}

void printSymbolTable()
{
  printf("\nSymbol Table:\n");
  int i;
  for (i = 0; i < NSYMS; i++)
  {
    if (symtab[i].name)
    {
      printf("Entry %d:\t name = %s\t type = %s\t initial_value = %s\t size = %d\t offset = +%d\t nested table = %s\n", i, symtab[i].name, symtab[i].type, symtab[i].initial_value, symtab[i].size, symtab[i].offset, symtab[i].nested);
    }
  }
}

char *convert_int_to_string(int num)
{
  char *str = (char *)malloc(100 * sizeof(char));
  sprintf(str, "%d", num);
  return str;
}

int convert_string_to_int(char *str)
{
  int num = atoi(str);
  return num;
}

quad *new_quad_binary(char *op1, char *s1, char *s2, char *s3)
{
  quad *q = (quad *)malloc(sizeof(quad));
  q->op = op1;
  q->result = strdup(s1);
  q->arg1 = strdup(s2);
  q->arg2 = strdup(s3);
  q->op_type = "binary";
  return q;
}

quad *new_quad_unary(char *op1, char *s1, char *s2)
{
  quad *q = (quad *)malloc(sizeof(quad));

  q->op = op1;
  if (s1)
  {
    q->result = strdup(s1);
  }
  if (s2)
  {
    q->arg1 = strdup(s2);
  }
  q->arg2 = 0;
  q->op_type = "unary";

  return q;
}

void print_quad(quad *q, char *mode)
{
  if (mode == "quads")
  {
    if (q->op_type == "binary")
    {
      printf("%s = %s %s %s\n", q->result, q->arg1, q->op, q->arg2);
    }
    else if (q->op_type == "unary")
    {
      printf("%s %s %s\n", q->result, q->op, q->arg1);
    }
  }
}

void print_quad_array()
{
  extern int quadPtr;
  for (int i = 0; i < quadPtr; ++i)
  {
    print_quad(qArray[i], "quads");
  }
}

void check_quad(quad *q)
{
  extern int quadPtr;

  extern int rtmPtr;

  if (q->op_type == "binary")
  {
    char *res = malloc(100); // allocate memory for 'res'
    strcpy(res, q->result);

    char *arg1 = malloc(100); // allocate memory for 'arg1'
    strcpy(arg1, q->arg1);

    char *arg2 = malloc(100); // allocate memory for 'arg2'
    strcpy(arg2, q->arg2);

    if (starts_with("t", q->result))
    {
      res = gen_reg(q->result);
      rtmArr[rtmPtr] = (rtm *)malloc(sizeof(rtm));
      rtmArr[rtmPtr]->reg = res;
      rtmArr[rtmPtr]->temp = q->result;
      rtmPtr++;
    }
    if (starts_with("t", q->arg1))
    {
      arg1 = gen_reg(q->arg1);
      rtmArr[rtmPtr] = (rtm *)malloc(sizeof(rtm));
      rtmArr[rtmPtr]->reg = arg1;
      rtmArr[rtmPtr]->temp = q->arg1;
      rtmPtr++;
    }
    if (starts_with("t", q->arg2))
    {
      arg2 = gen_reg(q->arg2);
      rtmArr[rtmPtr] = (rtm *)malloc(sizeof(rtm));
      rtmArr[rtmPtr]->reg = arg2;
      rtmArr[rtmPtr]->temp = q->arg2;
      rtmPtr++;
    }
    printf("%s = %s %s %s\n", res, arg1, q->op, arg2);
  }
  else if (q->op_type == "unary")
  {
    char *ures = malloc(100); // allocate memory for 'res'
    strcpy(ures, q->result);

    char *uarg1 = malloc(100); // allocate memory for 'arg1'
    strcpy(uarg1, q->arg1);

    if (starts_with("t", q->result))
    {
      ures = gen_reg(q->result);
      rtmArr[rtmPtr] = (rtm *)malloc(sizeof(rtm));
      rtmArr[rtmPtr]->reg = ures;
      rtmArr[rtmPtr]->temp = q->result;
      rtmPtr++;
    }
    if (starts_with("t", q->arg1))
    {
      uarg1 = gen_reg(q->arg1);
      rtmArr[rtmPtr] = (rtm *)malloc(sizeof(rtm));
      rtmArr[rtmPtr]->reg = uarg1;
      rtmArr[rtmPtr]->temp = q->arg1;
      rtmPtr++;
    }
    printf("%s %s %s\n", ures, q->op, uarg1);
  }
}

void register_allocation()
{
  extern int quadPtr;
  int counter = 0;
  for (int i = 0; i < quadPtr; ++i)
  {
    check_quad(qArray[i]);
    counter++;
  }
}

void code_mapping()
{
}
void target_code_translation()
{
  code_mapping();
}

// function to add elements to rtm array in a loop
extern int rtmPtr;
// diagnostic function to print all elements in rtm array
void print_rtm_array()
{
  printf("\n");
  for (int i = 0; i < rtmPtr; ++i)
  {
    printf("rtmP = %d\t reg = %s\t temp = %s\n", i, rtmArr[i]->reg, rtmArr[i]->temp);
  }
}

// check if temp value exists in rtm array
char *gen_reg(char *temp)
{
  extern int regPtr;
  for (int i = 0; i < rtmPtr; ++i)
  {
    if (strcmp(temp, rtmArr[i]->temp) == 0)
    {
      return rtmArr[i]->reg;
    }
  }
  char *res = malloc(100); // allocate memory for 'res'
  sprintf(res, "r%02d", regPtr++);
  return res;
}

void make_func_blocks()
{
  extern int funcBlockPtr;
  // traverse through symtab till you find a function
  int i;
  for (i = 0; i < NSYMS; i++)
  {
    if (symtab[i].name)
    {
      if (starts_with("f", symtab[i].type))
      {
        char *first_func_var = malloc(100);
        strcpy(first_func_var, symtab[i + 1].name);
        // make new func block in funcBlockArr
        funcBlockArr[funcBlockPtr] = (func_block *)malloc(sizeof(func_block));
        funcBlockArr[funcBlockPtr]->name = symtab[i].name;

        // traverse through quad array from first_func_var till you find return
        int j = find_quad_index(first_func_var);
        extern int quadPtr;
        for (j; j < quadPtr; ++j)
        {
          funcBlockArr[funcBlockPtr]->local_quads[funcBlockArr[funcBlockPtr]->quad_ptr] = qArray[j];
          funcBlockArr[funcBlockPtr]->quad_ptr++;
          if (strcmp(qArray[j]->result, "return") == 0)
          {
            break;
          }
        }
        funcBlockPtr++;
      }
    }
  }

  // scan quads till you find return and add to function block
}

// find quad array index given quad name
int find_quad_index(char *quad_name)
{
  extern int quadPtr;
  for (int i = 0; i < quadPtr; ++i)
  {
    if (strcmp(qArray[i]->result, quad_name) == 0)
    {
      return i;
    }
  }
  return -1;
}

// print function blocks
void print_func_blocks()
{
  printf("\n");
  extern int funcBlockPtr;
  for (int i = 0; i < funcBlockPtr; ++i)
  {
    printf("\n");
    printf("function name = %s\n", funcBlockArr[i]->name);
    for (int j = 0; j < funcBlockArr[i]->quad_ptr; ++j)
    {
      print_quad(funcBlockArr[i]->local_quads[j], "quads");
    }
  }
  update_offset();
}

void update_offset()
{
  printf("\n");
  extern int funcBlockPtr;
  for (int i = 0; i < funcBlockPtr; ++i)
  {
    int offset = 0;
    printf("\n");
    union var_value off;
    off.int_val = offset;
    sym_update(funcBlockArr[i]->local_quads[0]->arg1, "offset", off);
    for (int j = 0; j < funcBlockArr[i]->quad_ptr; ++j)
    {
      offset = offset + 4;
      union var_value off;
      off.int_val = offset;
      printf("results = %s\t", funcBlockArr[i]->local_quads[j]->result);
      if (strcmp(funcBlockArr[i]->local_quads[j]->result, "return") != 0)
      {
        sym_update(funcBlockArr[i]->local_quads[j]->result, "offset", off);
      }
    }
  }
}