#ifndef HELPER_H
#define HELPER_H

#define NSYMS 100

typedef struct symtab
{
  char *name;
  char *type;
  char *initial_value;
  int size;
  int offset;
  char *nested;

} symboltable;

/* Support for Lazy TAC generation through Quad array */

typedef struct reg_temp_map
{
  char *temp;
  char *reg;
} rtm;

typedef struct quad_tag
{
  char *op;
  char *result, *arg1, *arg2;
  char *op_type;
} quad;

typedef struct function_block
{
  char *name;
  quad *local_quads[100];
  int local_quad_ptr;
  int param_count;
} func_block;

quad *qArray[NSYMS]; // Store of Quads
symboltable symtab[NSYMS];
rtm *rtmArr[100];
func_block *funcBlockArr[100];

char *symlook(char *);

union var_value
{
  /* data */
  int int_val;
  char *char_val;
};

char *convert_int_to_string(int);
int convert_string_to_int(char *);

symboltable *sym_update(char *name, char *attr, union var_value new_val);

void printSymbolTable();

// void print_quad(quad *q);

symboltable *symfind(char *);

char *gentemp(char *val, char *type);

quad *new_quad_binary(char *op1, char *s1, char *s2, char *s3);
quad *new_quad_unary(char *op1, char *s1, char *s2);

void print_quad(quad *q, char *mode);

void print_quad_array();

void register_allocation();

int starts_with(const char *pre, const char *str);

void check_quad(quad *q);

void target_code_translation();

void add_to_rtm_array();

void print_rtm_array();

void make_func_blocks();

void print_func_blocks();

char *gen_reg(char *temp);

int find_quad_index(char *quad_name);

void print_function_prologue(int funcPtr);

void print_function_epilogue();

void update_offset();
#endif