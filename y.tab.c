/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "A5_9.y"
 /* C Declarations and Definitions */
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

#line 88 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 230 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

#define YYUNDEFTOK  2
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    63,    65,    66,    69,    79,    80,    84,
      85,    89,    90,    91,    92,    97,   100,   101,   104,   111,
     114,   115,   116,   117,   120,   121,   123,   124,   127,   128,
     131,   131,   131,   131,   131,   134,   135,   153,   172,   173,
     191,   211,   212,   213,   214,   215,   218,   219,   220,   223,
     224,   227,   228,   231,   232,   235,   236,   243,   247,   255,
     256,   266,   267,   268,   271,   274,   275,   278,   279,   280,
     283,   284,   287,   288,   291,   295,   296,   299,   301,   305,
     306,   307,   308,   309,   312,   315,   316,   319,   320,   323,
     324,   327,   330,   331,   334,   337,   343,   344
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "VOID", "IF", "ELSE",
  "FOR", "RETURN", "IDENTIFIER", "PUNCT", "OR", "AND", "LE", "GE", "EQ",
  "NE", "ARROW", "EQUAL", "SEMI", "LPAREN", "RPAREN", "LSBRACK", "RSBRACK",
  "COMMA", "LBRACE", "RBRACE", "AST", "AMP", "PLUS", "MINUS", "PERCENT",
  "EXC", "SLASH", "LT", "GT", "QUES", "COLON", "CHAR_C", "SL", "INT_C",
  "LOWER_THAN_ELSE", "$accept", "prog", "translation_unit",
  "function_definition", "declaration_list_opt", "declaration_list",
  "primary_expression", "STRING_LITERAL", "constants", "INT_CONSTANT",
  "CHAR_CONSTANT", "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "expression", "declaration", "init_declarator",
  "type_specifier", "declarator", "pointer_opt", "direct_declarator",
  "parameter_list_opt", "parameter_list", "parameter_declaration",
  "ID_opt", "ID", "initialiser", "statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "expression_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      96,  -103,  -103,  -103,    69,  -103,  -103,  -103,   -21,  -103,
    -103,  -103,   -10,    10,     7,  -103,    -5,     1,    96,  -103,
     -21,  -103,  -103,    47,    -5,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,    70,    12,
      -5,   -16,    -9,     5,    60,    24,    -4,  -103,  -103,  -103,
    -103,    77,  -103,  -103,    65,    96,     2,  -103,    57,     7,
      -5,    -5,    -5,  -103,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,    -5,    71,    81,    -5,
    -103,  -103,  -103,  -103,    82,    77,  -103,  -103,  -103,  -103,
    -103,    84,   -21,    89,    87,  -103,    91,  -103,  -103,    97,
      95,  -103,    98,  -103,  -103,  -103,  -103,   -16,   -16,    -9,
      -9,    -9,    -9,     5,     5,    60,    24,    83,    -5,    -5,
     104,  -103,  -103,  -103,     7,  -103,    96,  -103,  -103,    -5,
    -103,    -5,   108,   111,  -103,  -103,  -103,  -103,  -103,  -103,
     119,    -5,   125,   113,   119,    -5,  -103,   112,   119,  -103
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    61,    62,    63,     0,     2,     4,     5,    66,     1,
       3,    65,     0,     8,     0,    58,     0,     0,     7,     9,
      66,    77,    64,    67,     0,    31,    30,    32,    33,    34,
      19,    15,    18,    20,    13,    12,    16,    17,    28,    35,
       0,    38,    41,    46,    49,    51,    53,    55,    78,    11,
      60,    86,     6,    10,    59,    71,     0,    57,     0,     0,
      25,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
      96,    89,    90,    79,     0,    85,    87,    80,    81,    82,
      83,     0,    66,     0,    70,    72,     0,    14,    23,     0,
      24,    26,     0,    56,    36,    37,    35,    39,    40,    44,
      45,    42,    43,    47,    48,    50,    52,     0,     0,    97,
       0,    84,    88,    91,    76,    69,     0,    68,    22,     0,
      21,     0,     0,     0,    95,    74,    75,    73,    27,    54,
      97,    97,    92,     0,    97,    97,    93,     0,    97,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,   131,  -103,  -103,  -103,  -103,  -103,  -103,    80,
    -103,  -103,  -103,  -103,    -8,  -103,    23,   -18,    22,    63,
      64,  -103,    11,   -15,   -22,    -7,  -103,     0,   118,    49,
    -103,  -103,  -103,    17,  -103,   -11,  -103,  -102,   127,  -103,
    -103,    61,  -103,  -103,  -103,  -103,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    17,    18,    33,    34,    35,    36,
      37,    38,    99,   100,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    57,    80,     7,    12,    20,    13,    14,
      22,    93,    94,    95,   135,    49,    50,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    48,    58,    23,     8,    21,    19,    11,    75,   120,
      15,    53,    64,     1,     2,     3,    24,    21,    65,    68,
      69,    66,    67,    25,    26,    27,    28,    51,    29,    16,
     -59,    62,    63,    76,    30,    31,    32,    74,   142,   102,
      70,    71,   146,    32,    81,   101,   149,   103,    98,   133,
     109,   110,   111,   112,   117,    92,   104,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,    55,     9,
      56,   143,     1,     2,     3,   147,    72,    73,    81,    97,
       1,     2,     3,    77,    16,    78,    79,    21,    59,   107,
     108,    60,   118,    61,   113,   114,   132,   -97,    24,     1,
       2,     3,   119,    51,   123,    25,    26,    27,    28,   121,
      29,   125,   126,   136,   138,   127,    30,    31,    32,   128,
     129,   131,   130,   106,   134,    77,    92,    78,    79,    21,
     140,   141,   144,   145,   148,    10,    96,   115,    54,   116,
      24,   124,   139,   137,    52,    51,   122,    25,    26,    27,
      28,     0,    29,     0,     0,     0,     0,     0,    30,    31,
      32
};

static const yytype_int16 yycheck[] =
{
       0,    16,    24,    14,     4,    10,    13,    28,    12,    79,
      20,    18,    28,     3,     4,     5,    21,    10,    34,    14,
      15,    30,    31,    28,    29,    30,    31,    26,    33,    19,
      20,    19,    40,    37,    39,    40,    41,    13,   140,    61,
      35,    36,   144,    41,    51,    60,   148,    62,    59,   119,
      68,    69,    70,    71,    76,    55,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    21,     0,
      23,   141,     3,     4,     5,   145,    16,    17,    85,    22,
       3,     4,     5,     6,    19,     8,     9,    10,    18,    66,
      67,    21,    21,    23,    72,    73,   118,    20,    21,     3,
       4,     5,    21,    26,    20,    28,    29,    30,    31,    27,
      33,    22,    25,   124,   129,    24,    39,    40,    41,    22,
      25,    38,    24,   131,    20,     6,   126,     8,     9,    10,
      22,    20,     7,    20,    22,     4,    56,    74,    20,    75,
      21,    92,   131,   126,    17,    26,    85,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    44,    45,    46,    68,    70,     0,
      45,    28,    69,    71,    72,    20,    19,    47,    48,    68,
      70,    10,    73,    78,    21,    28,    29,    30,    31,    33,
      39,    40,    41,    49,    50,    51,    52,    53,    54,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    78,
      79,    26,    81,    68,    71,    21,    23,    66,    67,    18,
      21,    23,    19,    57,    28,    34,    30,    31,    14,    15,
      35,    36,    16,    17,    13,    12,    37,     6,     8,     9,
      67,    68,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    70,    74,    75,    76,    52,    22,    78,    55,
      56,    66,    67,    66,    57,    57,    57,    59,    59,    60,
      60,    60,    60,    61,    61,    62,    63,    67,    21,    21,
      89,    27,    84,    20,    72,    22,    25,    24,    22,    25,
      24,    38,    67,    89,    20,    77,    78,    76,    66,    65,
      22,    20,    80,    89,     7,    20,    80,    89,    22,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    47,    47,    48,
      48,    49,    49,    49,    49,    50,    51,    51,    52,    53,
      54,    54,    54,    54,    55,    55,    56,    56,    57,    57,
      58,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    68,    69,
      69,    70,    70,    70,    71,    72,    72,    73,    73,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    79,    80,
      80,    80,    80,    80,    81,    82,    82,    83,    83,    84,
      84,    85,    86,    86,    87,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     1,     0,     1,
       2,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     1,     0,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     2,     1,     0,     1,     4,     4,
       1,     0,     1,     3,     3,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     1,     2,     1,
       1,     2,     5,     7,     9,     3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 62 "A5_9.y"
                       {printf("prog: translation_unit\n");}
#line 1527 "y.tab.c"
    break;

  case 3:
#line 63 "A5_9.y"
                        {printf("prog: prog translation_unit\n");}
#line 1533 "y.tab.c"
    break;

  case 4:
#line 65 "A5_9.y"
                                      {printf("translation_unit: function_definition \n");}
#line 1539 "y.tab.c"
    break;

  case 5:
#line 66 "A5_9.y"
              {printf("translation_unit: declaration \n");}
#line 1545 "y.tab.c"
    break;

  case 6:
#line 69 "A5_9.y"
                                                                                       {
  union var_value val;
  char *fs = strdup("f_");
  strcat(fs, (yyvsp[-3].strval));
  val.char_val = strdup(fs);
  sym_update((yyvsp[-2].strval), "type", val);
  printf("function_definition: type_specifier declarator '(' declaration_list_opt ')' compound_statement \n");
  }
#line 1558 "y.tab.c"
    break;

  case 7:
#line 79 "A5_9.y"
                                       {printf("declaration_list_opt: declaration_list \n");}
#line 1564 "y.tab.c"
    break;

  case 8:
#line 80 "A5_9.y"
              {printf("declaration_list_opt: /*epsilon*/ \n");}
#line 1570 "y.tab.c"
    break;

  case 9:
#line 84 "A5_9.y"
                              {printf("declaration_list: declaration \n");}
#line 1576 "y.tab.c"
    break;

  case 10:
#line 85 "A5_9.y"
                               {printf("declaration_list: declaration_list declaration \n");}
#line 1582 "y.tab.c"
    break;

  case 11:
#line 89 "A5_9.y"
                       {(yyval.strval) = (yyvsp[0].strval); printf("primary_expression: ID\n");}
#line 1588 "y.tab.c"
    break;

  case 12:
#line 90 "A5_9.y"
            { (yyval.strval)=(yyvsp[0].strval); printf("primary_expression: constants\n");}
#line 1594 "y.tab.c"
    break;

  case 13:
#line 91 "A5_9.y"
                  { (yyval.strval) = (yyvsp[0].strval); printf("primary_expression: STRING_LITERAL\n");}
#line 1600 "y.tab.c"
    break;

  case 14:
#line 92 "A5_9.y"
                           {(yyval.strval) = (yyvsp[-1].strval); printf("primary_expression: '(' expression ')'\n");}
#line 1606 "y.tab.c"
    break;

  case 15:
#line 97 "A5_9.y"
                   { (yyval.strval)=strdup(yytext); printf("STRING_LITERAL: SL\n");}
#line 1612 "y.tab.c"
    break;

  case 16:
#line 100 "A5_9.y"
                         { (yyval.strval)=(yyvsp[0].strval); printf("constants: INT_CONSTANT\n");}
#line 1618 "y.tab.c"
    break;

  case 17:
#line 101 "A5_9.y"
                { (yyval.strval)=(yyvsp[0].strval); printf("constants: CHAR_CONSTANT\n");}
#line 1624 "y.tab.c"
    break;

  case 18:
#line 104 "A5_9.y"
                    {
  char *s1 = strdup(yytext);
  char *temp = gentemp(s1, "INT");
  qArray[quadPtr++] = new_quad_unary("=", symfind(temp)->name, s1);
  (yyval.strval) = temp;
  printf("INT_CONSTANT: INT_C\n");}
#line 1635 "y.tab.c"
    break;

  case 19:
#line 111 "A5_9.y"
                      { (yyval.strval) = strdup(yytext); printf("CHAR_CONSTANT: CHAR_C\n");}
#line 1641 "y.tab.c"
    break;

  case 20:
#line 114 "A5_9.y"
                                       { (yyval.strval) = (yyvsp[0].strval); printf("postfix_expression: primary_expression\n");}
#line 1647 "y.tab.c"
    break;

  case 21:
#line 115 "A5_9.y"
                                                { printf("postfix_expression: postfix_expression '[' expression ']'\n");}
#line 1653 "y.tab.c"
    break;

  case 22:
#line 116 "A5_9.y"
                                                                {printf("postfix_expression: postfix_expression '(' argument_expression_list_opt ')'\n");}
#line 1659 "y.tab.c"
    break;

  case 23:
#line 117 "A5_9.y"
                              {printf("postfix_expression: postfix_expression ARROW ID\n");}
#line 1665 "y.tab.c"
    break;

  case 24:
#line 120 "A5_9.y"
                                                       {printf("argument_expression_list_opt: argument_expression_list\n");}
#line 1671 "y.tab.c"
    break;

  case 25:
#line 121 "A5_9.y"
                {printf("argument_expression_list_opt: /* epsilon */\n");}
#line 1677 "y.tab.c"
    break;

  case 26:
#line 123 "A5_9.y"
                                                {printf("argument_expression_list: assignment_expression\n");}
#line 1683 "y.tab.c"
    break;

  case 27:
#line 124 "A5_9.y"
                                                        {printf("argument_expression_list: argument_expression_list ',' assignment_expression\n");}
#line 1689 "y.tab.c"
    break;

  case 28:
#line 127 "A5_9.y"
                                     {(yyval.strval)=(yyvsp[0].strval); printf("unary_expression: postfix_expression\n");}
#line 1695 "y.tab.c"
    break;

  case 29:
#line 128 "A5_9.y"
                                  {(yyval.strval)=(yyvsp[0].strval); printf("unary_expression: unary_operator unary_expression\n");}
#line 1701 "y.tab.c"
    break;

  case 34:
#line 131 "A5_9.y"
                                               {printf("unary_operator: '&' | '*' | '+' | '-' | '!' \n");}
#line 1707 "y.tab.c"
    break;

  case 35:
#line 134 "A5_9.y"
                                            {(yyval.strval)=(yyvsp[0].strval); printf("multiplicative_expression: unary_expression\n");}
#line 1713 "y.tab.c"
    break;

  case 36:
#line 135 "A5_9.y"
                                                 {
  char *s1 = (yyvsp[-2].strval);
  char *s3 = (yyvsp[0].strval);
  char *s1_name = (yyvsp[-2].strval);
  char *s3_name = (yyvsp[0].strval);
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook((yyvsp[-2].strval));
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook((yyvsp[0].strval));
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) * convert_string_to_int(s3)), "INT");
  (yyval.strval) = temp;
  qArray[quadPtr++] = new_quad_binary("*", symfind(temp)->name, s1_name, s3_name);
  printf("multiplicative_expression: multiplicative_expression '*' unary_expression\n");
  }
#line 1736 "y.tab.c"
    break;

  case 37:
#line 153 "A5_9.y"
                                                   {
  char *s1 = (yyvsp[-2].strval);
  char *s3 = (yyvsp[0].strval);
  char *s1_name = (yyvsp[-2].strval);
  char *s3_name = (yyvsp[0].strval);
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook((yyvsp[-2].strval));
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook((yyvsp[0].strval));
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) / convert_string_to_int(s3)), "INT");
  (yyval.strval) = temp;
  qArray[quadPtr++] = new_quad_binary("/", symfind(temp)->name, s1_name, s3_name);
  printf("multiplicative_expression: multiplicative_expression perc unary_expression\n");}
#line 1758 "y.tab.c"
    break;

  case 38:
#line 172 "A5_9.y"
                                               {(yyval.strval) = (yyvsp[0].strval); printf("additive_expression: multiplicative_expression\n");}
#line 1764 "y.tab.c"
    break;

  case 39:
#line 173 "A5_9.y"
                                                     {
  char *s1 = (yyvsp[-2].strval);
  char *s3 = (yyvsp[0].strval);
  char *s1_name = (yyvsp[-2].strval);
  char *s3_name = (yyvsp[0].strval);
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook((yyvsp[-2].strval));
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook((yyvsp[0].strval));
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) + convert_string_to_int(s3)), "INT");
  (yyval.strval) = temp;
  qArray[quadPtr++] = new_quad_binary("+", symfind(temp)->name, s1_name, s3_name);
  printf("additive_expression: additive_expression '+' multiplicative_expression\n");
  }
#line 1787 "y.tab.c"
    break;

  case 40:
#line 191 "A5_9.y"
                                                      { 
  char *s1 = (yyvsp[-2].strval);
  char *s3 = (yyvsp[0].strval);
  char *s1_name = (yyvsp[-2].strval);
  char *s3_name = (yyvsp[0].strval);
  if (symfind(s1)) {
    s1 = symfind(s1)->initial_value;
    s1_name = symlook((yyvsp[-2].strval));
  };
  if (symfind(s3)) {
    s3 = symfind(s3)->initial_value;
    s3_name = symlook((yyvsp[0].strval));
  };
  char *temp = gentemp(convert_int_to_string(convert_string_to_int(s1) - convert_string_to_int(s3)), "INT"); 
  (yyval.strval) = temp;
  qArray[quadPtr++] = new_quad_binary("-", symfind(temp)->name, s1_name, s3_name);
  printf("multiplicative_expression: multiplicative_expression '-' unary_expression\n");
;
}
#line 1811 "y.tab.c"
    break;

  case 41:
#line 211 "A5_9.y"
                                           { (yyval.strval) = (yyvsp[0].strval); printf("relational_expression: additive_expression\n");}
#line 1817 "y.tab.c"
    break;

  case 42:
#line 212 "A5_9.y"
                                               {printf("relational_expression: relational_expression '<' additive_expression\n");}
#line 1823 "y.tab.c"
    break;

  case 43:
#line 213 "A5_9.y"
                                               {printf("relational_expression: relational_expression '>' additive_expression\n");}
#line 1829 "y.tab.c"
    break;

  case 44:
#line 214 "A5_9.y"
                                               {printf("relational_expression: relational_expression LE additive_expression\n");}
#line 1835 "y.tab.c"
    break;

  case 45:
#line 215 "A5_9.y"
                                               {printf("relational_expression: relational_expression GE additive_expression\n");}
#line 1841 "y.tab.c"
    break;

  case 46:
#line 218 "A5_9.y"
                                           { (yyval.strval) = (yyvsp[0].strval); printf("equality_expression: relational_expression\n");}
#line 1847 "y.tab.c"
    break;

  case 47:
#line 219 "A5_9.y"
                                               { printf("equality_expression: equality_expression EQ relational_expression\n");}
#line 1853 "y.tab.c"
    break;

  case 48:
#line 220 "A5_9.y"
                                               {printf("equality_expression: equality_expression NE relational_expression\n");}
#line 1859 "y.tab.c"
    break;

  case 49:
#line 223 "A5_9.y"
                                            {(yyval.strval) = (yyvsp[0].strval); printf("logical_and_expression: equality_expression\n");}
#line 1865 "y.tab.c"
    break;

  case 50:
#line 224 "A5_9.y"
                                                 {printf("logical_and_expression: logical_and_expression AND equality_expression\n");}
#line 1871 "y.tab.c"
    break;

  case 51:
#line 227 "A5_9.y"
                                              {(yyval.strval) = (yyvsp[0].strval); printf("logical_or_expression: logical_and_expression\n");}
#line 1877 "y.tab.c"
    break;

  case 52:
#line 228 "A5_9.y"
                                                  {printf("logical_or_expression: logical_or_expression  logical_and_expression\n");}
#line 1883 "y.tab.c"
    break;

  case 53:
#line 231 "A5_9.y"
                                              {(yyval.strval) = (yyvsp[0].strval); printf("conditional_expression: logical_or_expression\n");}
#line 1889 "y.tab.c"
    break;

  case 54:
#line 232 "A5_9.y"
                                                                     {printf("conditional_expression: logical_or_expression '?' expression ':' conditional_expression\n");}
#line 1895 "y.tab.c"
    break;

  case 55:
#line 235 "A5_9.y"
                                              {(yyval.strval) = (yyvsp[0].strval); printf("assignment_expression: conditional_expression\n");}
#line 1901 "y.tab.c"
    break;

  case 56:
#line 236 "A5_9.y"
                                               {

  qArray[quadPtr++] = new_quad_unary("=", (yyvsp[-2].strval), (yyvsp[0].strval));
  
  printf("assignment_expression: unary_expression assignment_operator assignment_expression\n");}
#line 1911 "y.tab.c"
    break;

  case 57:
#line 243 "A5_9.y"
                                  {(yyval.strval) = (yyvsp[0].strval); printf("expression: assignment_expression \n");}
#line 1917 "y.tab.c"
    break;

  case 58:
#line 247 "A5_9.y"
                                                 {
  (yyval.strval) = (yyvsp[-2].strval);
  union var_value val;
  val.char_val = (yyvsp[-2].strval);
  sym_update((yyvsp[-1].strval), "type", val);
  printf("declaration: type_specifier init_declarator \n");}
#line 1928 "y.tab.c"
    break;

  case 59:
#line 255 "A5_9.y"
                            {(yyval.strval) = (yyvsp[0].strval); printf("init_declarator: declarator \n");}
#line 1934 "y.tab.c"
    break;

  case 60:
#line 256 "A5_9.y"
                               {
  // update symbol table for declarator value with initialiser value
  union var_value val;
  val.char_val = (yyvsp[0].strval);
  
  sym_update((yyvsp[-2].strval), "initial_value", val);
  qArray[quadPtr++] = new_quad_unary("=", (yyvsp[-2].strval), (yyvsp[0].strval));
  printf("initialiser = %s\n", (yyvsp[0].strval));  printf("init_declarator: declarator = initialiser \n");}
#line 1947 "y.tab.c"
    break;

  case 61:
#line 266 "A5_9.y"
                    {(yyval.strval)="INT"; printf("type_specifier: INT \n");}
#line 1953 "y.tab.c"
    break;

  case 62:
#line 267 "A5_9.y"
       {(yyval.strval)="CHAR"; printf("type_specifier: CHAR \n");}
#line 1959 "y.tab.c"
    break;

  case 63:
#line 268 "A5_9.y"
       {(yyval.strval)="VOID"; printf("type_specifier: VOID \n");}
#line 1965 "y.tab.c"
    break;

  case 64:
#line 271 "A5_9.y"
                                          {(yyval.strval)=(yyvsp[0].strval); printf("declarator: pointer_opt direct_declarator \n");}
#line 1971 "y.tab.c"
    break;

  case 65:
#line 274 "A5_9.y"
                 {printf("pointer_opt: '*'' \n");}
#line 1977 "y.tab.c"
    break;

  case 66:
#line 275 "A5_9.y"
              {printf("pointer_opt: /*epsilon*/ \n");}
#line 1983 "y.tab.c"
    break;

  case 67:
#line 278 "A5_9.y"
                      { (yyval.strval)=(yyvsp[0].strval); printf("SA ID: %s\n", (yyvsp[0].strval)); printf("direct_declarator: ID \n");}
#line 1989 "y.tab.c"
    break;

  case 68:
#line 279 "A5_9.y"
                                  {printf("direct_declarator: ID '[' INT_CONSTANT ']' \n");}
#line 1995 "y.tab.c"
    break;

  case 69:
#line 280 "A5_9.y"
                                      {printf("direct_declarator: ID '(' parameter_list_opt ')' \n");}
#line 2001 "y.tab.c"
    break;

  case 70:
#line 283 "A5_9.y"
                                   {printf("parameter_list_opt: parameter_list \n");}
#line 2007 "y.tab.c"
    break;

  case 71:
#line 284 "A5_9.y"
               {printf("parameter_list_opt: /*epsilon*/ \n");}
#line 2013 "y.tab.c"
    break;

  case 72:
#line 287 "A5_9.y"
                                      {printf("parameter_list: parameter_declaration \n");}
#line 2019 "y.tab.c"
    break;

  case 73:
#line 288 "A5_9.y"
                                             {printf("parameter_list: parameter_list ',' parameter_declaration \n");}
#line 2025 "y.tab.c"
    break;

  case 74:
#line 291 "A5_9.y"
                                                         {printf("parameter_declaration: type_specifier pointer_opt ID_opt \n");}
#line 2031 "y.tab.c"
    break;

  case 75:
#line 295 "A5_9.y"
           {(yyval.strval)=(yyvsp[0].strval); printf("ID_opt: ID \n");}
#line 2037 "y.tab.c"
    break;

  case 76:
#line 296 "A5_9.y"
              {printf("ID_opt: /*epsilon*/ \n");}
#line 2043 "y.tab.c"
    break;

  case 77:
#line 299 "A5_9.y"
               {(yyval.strval) = strdup((yyvsp[0].strval));}
#line 2049 "y.tab.c"
    break;

  case 78:
#line 301 "A5_9.y"
                                   {(yyval.strval)=(yyvsp[0].strval);printf("CHAR: %s\n", (yyvsp[0].strval)); printf("initialiser: assignment_expression \n");}
#line 2055 "y.tab.c"
    break;

  case 79:
#line 305 "A5_9.y"
                              {printf("statement: compound_statement \n");}
#line 2061 "y.tab.c"
    break;

  case 80:
#line 306 "A5_9.y"
                       {printf("statement: expression_statement \n");}
#line 2067 "y.tab.c"
    break;

  case 81:
#line 307 "A5_9.y"
                      {printf("statement: selection_statement \n");}
#line 2073 "y.tab.c"
    break;

  case 82:
#line 308 "A5_9.y"
                      {printf("statement: iteration_statement \n");}
#line 2079 "y.tab.c"
    break;

  case 83:
#line 309 "A5_9.y"
                 {printf("statement: jump_statement \n");}
#line 2085 "y.tab.c"
    break;

  case 84:
#line 312 "A5_9.y"
                                                      {printf("compound_statement: '{' block_item_list_opt '}' \n");}
#line 2091 "y.tab.c"
    break;

  case 85:
#line 315 "A5_9.y"
                                     {printf("block_item_list_opt: block_item_list \n");}
#line 2097 "y.tab.c"
    break;

  case 86:
#line 316 "A5_9.y"
              {printf("block_item_list_opt: /*epsilon*/ \n");}
#line 2103 "y.tab.c"
    break;

  case 87:
#line 319 "A5_9.y"
                            {printf("block_item_list: block_item \n");}
#line 2109 "y.tab.c"
    break;

  case 88:
#line 320 "A5_9.y"
                             {printf("block_item_list: block_item_list block_item \n");}
#line 2115 "y.tab.c"
    break;

  case 89:
#line 323 "A5_9.y"
                         {printf("block_item: declaration \n");}
#line 2121 "y.tab.c"
    break;

  case 90:
#line 324 "A5_9.y"
            {printf("block_item: statement \n");}
#line 2127 "y.tab.c"
    break;

  case 91:
#line 327 "A5_9.y"
                                          {printf("expression_statement: expression_opt ';' \n");}
#line 2133 "y.tab.c"
    break;

  case 92:
#line 330 "A5_9.y"
                                                                                                                                      {printf("selection_statement: IF LPAREN expression ')' statement \n");}
#line 2139 "y.tab.c"
    break;

  case 93:
#line 331 "A5_9.y"
                                                       {printf("selection_statement: IF '(' expression ')' statement ELSE statement \n");}
#line 2145 "y.tab.c"
    break;

  case 94:
#line 334 "A5_9.y"
                                                                                                        {printf("iteration_statement: FOR'(' expression_opt ';' expression_opt ';' expression_opt ')' statement \n");}
#line 2151 "y.tab.c"
    break;

  case 95:
#line 337 "A5_9.y"
                                           {
  qArray[quadPtr++] = new_quad_unary("", "return", (yyvsp[-1].strval));
  printf("jump_statement: RETURN expression_opt ';' \n");
  }
#line 2160 "y.tab.c"
    break;

  case 96:
#line 343 "A5_9.y"
                           {printf("expression_opt: expression \n");}
#line 2166 "y.tab.c"
    break;

  case 97:
#line 344 "A5_9.y"
              {printf("expression_opt: /*epsilon*/ \n");}
#line 2172 "y.tab.c"
    break;


#line 2176 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 347 "A5_9.y"


void yyerror(char *str)
{
    extern int yylineno;
    fprintf(stderr,"%s at Line: %d on Token: '%s'\n",str, yylineno, yytext);
}


// main() {yyparse();}
