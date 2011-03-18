/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _RULE_ = 258,
     _PRIVATE_ = 259,
     _GLOBAL_ = 260,
     _STRINGS_ = 261,
     _CONDITION_ = 262,
     _END_ = 263,
     _IDENTIFIER_ = 264,
     _STRING_IDENTIFIER_ = 265,
     _STRING_COUNT_ = 266,
     _NUMBER_ = 267,
     _UNKNOWN_ = 268,
     _TEXTSTRING_ = 269,
     _HEXSTRING_ = 270,
     _WIDE_ = 271,
     _NOCASE_ = 272,
     _REGEXP_ = 273,
     _FULLWORD_ = 274,
     _AT_ = 275,
     _SIZE_ = 276,
     _ENTRYPOINT_ = 277,
     _RVA_ = 278,
     _OFFSET_ = 279,
     _FILE_ = 280,
     _IN_ = 281,
     _OF_ = 282,
     _SECTION_ = 283,
     _MZ_ = 284,
     _PE_ = 285,
     _DLL_ = 286,
     _TRUE_ = 287,
     _FALSE_ = 288,
     _OR_ = 289,
     _AND_ = 290,
     _NOT_ = 291,
     _IS_ = 292,
     _NEQ_ = 293,
     _EQ_ = 294,
     _GE_ = 295,
     _GT_ = 296,
     _LE_ = 297,
     _LT_ = 298
   };
#endif
#define _RULE_ 258
#define _PRIVATE_ 259
#define _GLOBAL_ 260
#define _STRINGS_ 261
#define _CONDITION_ 262
#define _END_ 263
#define _IDENTIFIER_ 264
#define _STRING_IDENTIFIER_ 265
#define _STRING_COUNT_ 266
#define _NUMBER_ 267
#define _UNKNOWN_ 268
#define _TEXTSTRING_ 269
#define _HEXSTRING_ 270
#define _WIDE_ 271
#define _NOCASE_ 272
#define _REGEXP_ 273
#define _FULLWORD_ 274
#define _AT_ 275
#define _SIZE_ 276
#define _ENTRYPOINT_ 277
#define _RVA_ 278
#define _OFFSET_ 279
#define _FILE_ 280
#define _IN_ 281
#define _OF_ 282
#define _SECTION_ 283
#define _MZ_ 284
#define _PE_ 285
#define _DLL_ 286
#define _TRUE_ 287
#define _FALSE_ 288
#define _OR_ 289
#define _AND_ 290
#define _NOT_ 291
#define _IS_ 292
#define _NEQ_ 293
#define _EQ_ 294
#define _GE_ 295
#define _GT_ 296
#define _LE_ 297
#define _LT_ 298




/* Copy the first part of user declarations.  */
#line 2 "grammar.y"
 
    
#include <stdio.h>
#include <string.h>

#include "ast.h"
#include "error.h"
#include "compile.h"

#define YYERROR_VERBOSE

/* Global variables */

STRING* current_rule_strings;

/* Function declarations */

void reduce_rule_declaration(char* identifier, int flags, TAG* tag_list_head, STRING* string_list_head, TERM* condition);
TAG* reduce_tags(TAG* tag_list_head, char* identifier);

STRING* reduce_string_declaration(char* identifier, char* str, int flags);
STRING* reduce_strings(STRING* string_list_head, STRING* string);

TERM* reduce_string(char* identifier);
TERM* reduce_string_at(char* identifier, TERM* offset);
TERM* reduce_string_in_range(char* identifier, TERM* lower_offset, TERM* upper_offset);
TERM* reduce_string_in_section_by_name(char* identifier, char* section_name);
TERM* reduce_string_count(char* identifier);

TERM* reduce_filesize();
TERM* reduce_entrypoint();
TERM* reduce_term(int type, TERM* op1, TERM* op2);
TERM* reduce_constant(unsigned int constant);
TERM* reduce_rule(char* identifier);
TERM* reduce_boolean_expression_list(TERM* boolean_expression_list_head, TERM* boolean_expression);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 97 "grammar.y"
typedef union YYSTYPE { 
    unsigned int integer;
    char* pchar;
    void* string;
    void* term;
    void* tag;
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 208 "grammar.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 220 "grammar.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  16
/* YYNRULES -- Number of rules. */
#define YYNRULES  61
/* YYNRULES -- Number of states. */
#define YYNSTATES  117

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      55,    56,    46,    44,    57,    45,    53,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,     2,
       2,    51,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    48,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    21,    34,    35,    37,
      39,    40,    43,    45,    48,    50,    53,    58,    62,    63,
      66,    68,    70,    72,    74,    76,    78,    80,    82,    86,
      91,   100,   107,   111,   115,   118,   122,   126,   130,   134,
     138,   142,   146,   150,   154,   158,   162,   166,   168,   172,
     174,   176,   178,   182,   186,   190,   194,   198,   200,   202,
     204,   206
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      59,     0,    -1,    -1,    59,    60,    -1,    59,     1,    48,
      -1,    61,     3,     9,    62,    49,     7,    50,    68,    48,
      -1,    61,     3,     9,    62,    49,     6,    50,    64,     7,
      50,    68,    48,    -1,    -1,     4,    -1,     5,    -1,    -1,
      50,    63,    -1,     9,    -1,    63,     9,    -1,    65,    -1,
      64,    65,    -1,    10,    51,    14,    66,    -1,    10,    51,
      15,    -1,    -1,    66,    67,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    32,    -1,    33,    -1,     9,    -1,
      10,    -1,    10,    20,    71,    -1,    10,    20,    23,    71,
      -1,    10,    26,    52,    71,    53,    53,    71,    54,    -1,
      10,    26,    28,    52,    14,    54,    -1,    25,    37,    73,
      -1,    55,    68,    56,    -1,    36,    68,    -1,    68,    35,
      68,    -1,    68,    34,    68,    -1,    68,    37,    68,    -1,
      71,    43,    71,    -1,    71,    41,    71,    -1,    71,    42,
      71,    -1,    71,    40,    71,    -1,    71,    39,    71,    -1,
      71,    37,    71,    -1,    71,    38,    71,    -1,    72,    27,
      69,    -1,    55,    70,    56,    -1,    68,    -1,    70,    57,
      68,    -1,    21,    -1,    22,    -1,    11,    -1,    55,    71,
      56,    -1,    71,    44,    71,    -1,    71,    45,    71,    -1,
      71,    46,    71,    -1,    71,    47,    71,    -1,    72,    -1,
      12,    -1,    29,    -1,    30,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   108,   108,   109,   118,   121,   122,   125,   126,   127,
     130,   131,   134,   144,   156,   166,   178,   189,   202,   203,
     206,   207,   208,   209,   212,   213,   214,   225,   236,   246,
     250,   261,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   290,   293,   297,   303,
     304,   305,   316,   317,   318,   319,   320,   321,   324,   327,
     328,   329
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_RULE_", "_PRIVATE_", "_GLOBAL_",
  "_STRINGS_", "_CONDITION_", "_END_", "_IDENTIFIER_",
  "_STRING_IDENTIFIER_", "_STRING_COUNT_", "_NUMBER_", "_UNKNOWN_",
  "_TEXTSTRING_", "_HEXSTRING_", "_WIDE_", "_NOCASE_", "_REGEXP_",
  "_FULLWORD_", "_AT_", "_SIZE_", "_ENTRYPOINT_", "_RVA_", "_OFFSET_",
  "_FILE_", "_IN_", "_OF_", "_SECTION_", "_MZ_", "_PE_", "_DLL_", "_TRUE_",
  "_FALSE_", "_OR_", "_AND_", "_NOT_", "_IS_", "_NEQ_", "_EQ_", "_GE_",
  "_GT_", "_LE_", "_LT_", "'+'", "'-'", "'*'", "'/'", "'}'", "'{'", "':'",
  "'='", "'['", "'.'", "']'", "'('", "')'", "','", "$accept", "rules",
  "rule", "rule_modifier", "tags", "tag_list", "strings",
  "string_declaration", "string_modifiers", "string_modifier",
  "boolean_expression", "boolean_expression_list", "boolean_expressions",
  "expression", "number", "type", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    43,    45,    42,    47,   125,   123,
      58,    61,    91,    46,    93,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    58,    59,    59,    59,    60,    60,    61,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    73,
      73,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     3,     9,    12,     0,     1,     1,
       0,     2,     1,     2,     1,     2,     4,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       8,     6,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,     0,     1,     0,     8,     9,     3,     0,     4,     0,
      10,     0,     0,    12,    11,     0,    13,     0,     0,     0,
       0,     0,     0,    14,    26,    27,    51,    58,    49,    50,
       0,    24,    25,     0,     0,     0,     0,    57,     0,     0,
      15,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    17,     0,     0,     0,    28,    57,
       0,     0,    59,    60,    61,    32,    33,    52,    36,    35,
      37,    43,    44,    42,    41,    39,    40,    38,    53,    54,
      55,    56,     0,    45,    16,     0,    29,     0,     0,     0,
      47,     0,    20,    21,    22,    23,    19,     6,     0,     0,
      46,     0,    31,     0,    48,     0,    30
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     1,     6,     7,    12,    14,    22,    23,    94,   106,
      35,    93,   101,    36,    69,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const short int yypact[] =
{
     -45,   114,   -45,   -44,   -45,   -45,   -45,    16,   -45,    17,
      -4,    40,     2,   -45,    58,    72,   -45,    70,   100,    82,
      44,    65,     1,   -45,   -45,    42,   -45,   -45,   -45,   -45,
     105,   -45,   -45,    44,    44,   -25,    86,   124,    75,   102,
     -45,    -5,   -27,    67,   116,   -32,    66,    44,    44,    44,
     -45,     9,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,    99,   -45,   -45,    44,     9,     9,    94,   -45,
     103,     9,   -45,   -45,   -45,   -45,   -45,   -45,   116,   116,
     -45,    94,    94,    94,    94,    94,    94,    94,    54,    54,
     -45,   -45,    44,   -45,   128,    26,    94,    37,   142,    90,
      36,    92,   -45,   -45,   -45,   -45,   -45,   -45,   104,   106,
     -45,    44,   -45,     9,    36,    41,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   135,   -45,   -45,
      10,   -45,   -45,   -19,   -20,   -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -8
static const yysigned_char yytable[] =
{
      37,    70,    47,    48,     8,    49,    26,    27,    39,    47,
      48,    21,    49,    37,    37,    46,    28,    29,    66,     9,
      26,    27,    68,    50,    76,    71,    10,    37,    37,    37,
      28,    29,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    44,    45,    37,    11,    96,    97,    13,
      67,    15,    99,    24,    25,    26,    27,    78,    79,    80,
      47,    48,    41,    49,    67,    28,    29,    16,    42,    30,
      47,    48,    37,    49,   107,    95,    31,    32,    17,    18,
      33,    58,    59,    60,    61,    58,    59,    60,    61,    63,
      64,    37,    21,    77,   115,   116,    72,    73,    74,    34,
      60,    61,   100,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     2,     3,    38,    -7,     4,     5,
      19,   114,    77,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    58,    59,    60,    61,    58,    59,
      60,    61,    43,   109,   102,   103,   104,   105,   110,   111,
      20,    62,    65,    49,    92,    98,   108,    40,   112,   113
};

static const unsigned char yycheck[] =
{
      20,    28,    34,    35,    48,    37,    11,    12,     7,    34,
      35,    10,    37,    33,    34,    34,    21,    22,    23,     3,
      11,    12,    41,    48,    56,    52,     9,    47,    48,    49,
      21,    22,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    33,    34,    65,    50,    66,    67,     9,
      55,    49,    71,     9,    10,    11,    12,    47,    48,    49,
      34,    35,    20,    37,    55,    21,    22,     9,    26,    25,
      34,    35,    92,    37,    48,    65,    32,    33,     6,     7,
      36,    44,    45,    46,    47,    44,    45,    46,    47,    14,
      15,   111,    10,    56,   113,    54,    29,    30,    31,    55,
      46,    47,    92,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     1,    51,     3,     4,     5,
      50,   111,    56,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    44,    45,    46,    47,    44,    45,
      46,    47,    37,    53,    16,    17,    18,    19,    56,    57,
      50,    27,    50,    37,    55,    52,    14,    22,    54,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    59,     0,     1,     4,     5,    60,    61,    48,     3,
       9,    50,    62,     9,    63,    49,     9,     6,     7,    50,
      50,    10,    64,    65,     9,    10,    11,    12,    21,    22,
      25,    32,    33,    36,    55,    68,    71,    72,    51,     7,
      65,    20,    26,    37,    68,    68,    71,    34,    35,    37,
      48,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    27,    14,    15,    50,    23,    55,    71,    72,
      28,    52,    29,    30,    31,    73,    56,    56,    68,    68,
      68,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    55,    69,    66,    68,    71,    71,    52,    71,
      68,    70,    16,    17,    18,    19,    67,    48,    14,    53,
      56,    57,    54,    53,    68,    71,    54
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;


  yyvsp[0] = yylval;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 110 "grammar.y"
    {
            if (last_error != ERROR_SUCCESS)
            {
                show_last_error();
                yynerrs++;
                YYERROR;
            }
      }
    break;

  case 5:
#line 121 "grammar.y"
    { reduce_rule_declaration((yyvsp[-6].pchar),(yyvsp[-8].integer),(yyvsp[-5].tag),0,(yyvsp[-1].term));    }
    break;

  case 6:
#line 122 "grammar.y"
    { reduce_rule_declaration((yyvsp[-9].pchar),(yyvsp[-11].integer),(yyvsp[-8].tag),(yyvsp[-4].string),(yyvsp[-1].term));  }
    break;

  case 7:
#line 125 "grammar.y"
    { (yyval.integer) = 0; }
    break;

  case 8:
#line 126 "grammar.y"
    { (yyval.integer) = RULE_FLAGS_PRIVATE; }
    break;

  case 9:
#line 127 "grammar.y"
    { (yyval.integer) = RULE_FLAGS_GLOBAL; }
    break;

  case 10:
#line 130 "grammar.y"
    { (yyval.tag) = NULL; }
    break;

  case 11:
#line 131 "grammar.y"
    { (yyval.tag) = (yyvsp[0].tag);   }
    break;

  case 12:
#line 134 "grammar.y"
    { 
                                                (yyval.tag) = reduce_tags(NULL,(yyvsp[0].pchar)); 
                                                
                                                if ((yyval.tag) == NULL)
                                                {
                                                    show_last_error();
                                                    yynerrs++;
                                                    YYERROR;
                                                }
                                            }
    break;

  case 13:
#line 144 "grammar.y"
    {   
                                                (yyval.tag) = reduce_tags((yyvsp[-1].tag),(yyvsp[0].pchar)); 
                                                
                                                if ((yyval.tag) == NULL)
                                                {
                                                    show_last_error();
                                                    yynerrs++;
                                                    YYERROR;
                                                }  
                                            }
    break;

  case 14:
#line 156 "grammar.y"
    { 
                                                (yyval.string) = reduce_strings(NULL,(yyvsp[0].string)); 
                                                
                                                if ((yyval.string) == NULL)
                                                {
                                                    show_last_error();
                                                    yynerrs++;
                                                    YYERROR;
                                                }
                                            }
    break;

  case 15:
#line 166 "grammar.y"
    { 
                                                (yyval.string) = reduce_strings((yyvsp[-1].string),(yyvsp[0].string));
                                                
                                                if ((yyval.string) == NULL)
                                                {
                                                    show_last_error();
                                                    yynerrs++;
                                                    YYERROR;
                                                }   
                                            }
    break;

  case 16:
#line 179 "grammar.y"
    { 
                            (yyval.string) = reduce_string_declaration((yyvsp[-3].term), (yyvsp[-1].pchar), (yyvsp[0].integer)); 
                
                            if ((yyval.string) == NULL)
                            {
                                show_last_error();
                                yynerrs++;
                                YYERROR;
                            } 
                        }
    break;

  case 17:
#line 190 "grammar.y"
    {
                            (yyval.string) = reduce_string_declaration((yyvsp[-2].term), (yyvsp[0].pchar), STRING_FLAGS_HEXADECIMAL);
            
                            if ((yyval.string) == NULL)
                            {
                                show_last_error();
                                yynerrs++;
                                YYERROR;
                            }
                        }
    break;

  case 18:
#line 202 "grammar.y"
    { (yyval.integer) = 0;  }
    break;

  case 19:
#line 203 "grammar.y"
    { (yyval.integer) = (yyvsp[-1].integer) | (yyvsp[0].integer); }
    break;

  case 20:
#line 206 "grammar.y"
    { (yyval.integer) = STRING_FLAGS_WIDE; }
    break;

  case 21:
#line 207 "grammar.y"
    { (yyval.integer) = STRING_FLAGS_NO_CASE; }
    break;

  case 22:
#line 208 "grammar.y"
    { (yyval.integer) = STRING_FLAGS_REGEXP; }
    break;

  case 23:
#line 209 "grammar.y"
    { (yyval.integer) = STRING_FLAGS_FULL_WORD; }
    break;

  case 24:
#line 212 "grammar.y"
    { (yyval.term) = reduce_constant(1); }
    break;

  case 25:
#line 213 "grammar.y"
    { (yyval.term) = reduce_constant(0); }
    break;

  case 26:
#line 215 "grammar.y"
    { 
                        (yyval.term) = reduce_rule((yyvsp[0].pchar));
                        
                        if ((yyval.term) == NULL)
                        {
                            show_last_error();
                            yynerrs++;
                            YYERROR;
                        }
                     }
    break;

  case 27:
#line 226 "grammar.y"
    {  
                        (yyval.term) = reduce_string((yyvsp[0].term));
                        
                        if ((yyval.term) == NULL)
                        {
                            show_last_error();
                            yynerrs++;
                            YYERROR;
                        }
                     }
    break;

  case 28:
#line 237 "grammar.y"
    {          
                        (yyval.term) = reduce_string_at((yyvsp[-2].term), (yyvsp[0].term));
                        
                        if ((yyval.term) == NULL)
                        {
                            show_last_error();
                            YYERROR;
                        }
                     }
    break;

  case 29:
#line 247 "grammar.y"
    { 
                        (yyval.term) = NULL; 
                     }
    break;

  case 30:
#line 251 "grammar.y"
    {          
                        (yyval.term) = reduce_string_in_range((yyvsp[-7].term), (yyvsp[-4].term), (yyvsp[-1].term));
                        
                        if ((yyval.term) == NULL)
                        {
                            show_last_error();
                            yynerrs++;
                            YYERROR;
                        }
                     }
    break;

  case 31:
#line 262 "grammar.y"
    {          
                        (yyval.term) = reduce_string_in_section_by_name((yyvsp[-5].term), (yyvsp[-1].pchar));

                        if ((yyval.term) == NULL)
                        {
                            show_last_error();
                            yynerrs++;
                            YYERROR;
                        }
                     }
    break;

  case 32:
#line 272 "grammar.y"
    { (yyval.term) = NULL; }
    break;

  case 33:
#line 273 "grammar.y"
    { (yyval.term) = (yyvsp[-1].term); }
    break;

  case 34:
#line 274 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_NOT, (yyvsp[0].term), NULL); }
    break;

  case 35:
#line 275 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_AND, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 36:
#line 276 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_OR, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 37:
#line 277 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_EQ, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 38:
#line 278 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_LT, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 39:
#line 279 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_GT, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 40:
#line 280 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_LE, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 41:
#line 281 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_GE, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 42:
#line 282 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_EQ, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 43:
#line 283 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_EQ, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 44:
#line 284 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_NOT_EQ, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 45:
#line 285 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_OF, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 46:
#line 290 "grammar.y"
    { (yyval.term) = (yyvsp[-1].term); }
    break;

  case 47:
#line 294 "grammar.y"
    {
                         (yyval.term) = reduce_boolean_expression_list(NULL,(yyvsp[0].term));
                      }
    break;

  case 48:
#line 298 "grammar.y"
    {
                         (yyval.term) = reduce_boolean_expression_list((yyvsp[-2].term),(yyvsp[0].term));
                      }
    break;

  case 49:
#line 303 "grammar.y"
    { (yyval.term) = reduce_filesize(); }
    break;

  case 50:
#line 304 "grammar.y"
    { (yyval.term) = reduce_entrypoint(); }
    break;

  case 51:
#line 306 "grammar.y"
    { 
                    (yyval.term) = reduce_string_count((yyvsp[0].term)); 
                    
                    if ((yyval.term) == NULL)
                    {
                        show_last_error();
                        yynerrs++;
                        YYERROR;
                    }
             }
    break;

  case 52:
#line 316 "grammar.y"
    { (yyval.term) = (yyvsp[-1].term); }
    break;

  case 53:
#line 317 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_ADD, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 54:
#line 318 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_SUB, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 55:
#line 319 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_MUL, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 56:
#line 320 "grammar.y"
    { (yyval.term) = reduce_term(TERM_TYPE_DIV, (yyvsp[-2].term), (yyvsp[0].term)); }
    break;

  case 58:
#line 324 "grammar.y"
    { (yyval.term) = reduce_constant((yyvsp[0].integer)); }
    break;


    }

/* Line 1037 of yacc.c.  */
#line 1633 "grammar.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {

		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 yydestruct ("Error: popping",
                             yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  yydestruct ("Error: discarding lookahead",
              yytoken, &yylval);
  yychar = YYEMPTY;
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 332 "grammar.y"



void reduce_rule_declaration(char* identifier, int flags, TAG* tag_list_head, STRING* string_list_head, TERM* condition)
{
    STRING* string;
    
    last_error = new_rule(rule_list, identifier, flags, tag_list_head, string_list_head, condition);
    
    if (last_error != ERROR_SUCCESS)
    {
        strcpy(last_error_extra_info, identifier);
    }
    else
    {
        string = string_list_head;
        
        while (string != NULL)
        {
            if (! (string->flags & STRING_FLAGS_REFERENCED))
            {
                strcpy(last_error_extra_info, string->identifier);
                last_error = ERROR_UNREFERENCED_STRING;
                break;
            }
            
            string = string->next;
        }
    }
}

STRING* reduce_string_declaration(char* identifier, char* str, int flags)
{
    char tmp[200];
    STRING* string = NULL;

    last_error = new_string(identifier, str, flags, &string);
    
    if (last_error == ERROR_INVALID_REGULAR_EXPRESSION) 
    {
        sprintf(tmp, "invalid regular expression in string \"%s\": %s", identifier, last_error_extra_info);
        strcpy(last_error_extra_info, tmp);
    }
    else if (last_error != ERROR_SUCCESS)
    {
        strcpy(last_error_extra_info, identifier);
    }
    
    free(str);
            
    return string;
}

STRING* reduce_strings(STRING* string_list_head, STRING* string)
{
    if (lookup_string(string_list_head,string->identifier) == NULL) /* no strings with the same identifier */
    {
        string->next = string_list_head;    
        current_rule_strings = string;
        last_error = ERROR_SUCCESS;
        return string;
    }
    else
    {
        strcpy(last_error_extra_info, string->identifier);
        last_error = ERROR_DUPLICATE_STRING_IDENTIFIER;
        return NULL;
    }   
}

TAG* reduce_tags(TAG* tag_list_head, char* identifier)
{
    TAG* tag;

    if (lookup_tag(tag_list_head, identifier) == NULL) /* no tags with the same identifier */
    {
        tag = malloc(sizeof(TAG));
        
        if (tag != NULL)
        {
            tag->identifier = identifier;
            tag->next = tag_list_head;  
            last_error = ERROR_SUCCESS;
        }
        else
        {
            last_error = ERROR_INSUFICIENT_MEMORY;
        }
        
        return tag;
    }
    else
    {
        strcpy(last_error_extra_info, identifier);
        last_error = ERROR_DUPLICATE_TAG_IDENTIFIER;
        return NULL;
    }
}

TERM* reduce_filesize()
{
    TERM* term = NULL;
    
    last_error = new_simple_term(TERM_TYPE_FILESIZE, &term); 
    return (TERM*) term;    
}

TERM* reduce_entrypoint()
{
    TERM* term = NULL;
    
    last_error = new_simple_term(TERM_TYPE_ENTRYPOINT, &term); 
    return (TERM*) term;    
}

TERM* reduce_term(int type, TERM* op1, TERM* op2)
{
    TERM_BINARY_OPERATION* term = NULL;
    
    last_error = new_binary_operation(type, op1, op2, &term);
    return (TERM*) term;
}

TERM* reduce_constant(unsigned int constant)
{
    TERM_CONST* term = NULL;
    
    last_error = new_constant(constant, &term); 
    return (TERM*) term;
}

TERM* reduce_string(char* identifier)
{
    TERM_STRING* term = NULL;
    
    last_error = new_string_identifier(TERM_TYPE_STRING, current_rule_strings, identifier, &term);
    
    if (last_error != ERROR_SUCCESS)
    {
        strcpy(last_error_extra_info, identifier);
    }
    
    free(identifier);   
    return (TERM*) term;
}

TERM* reduce_string_at(char* identifier, TERM* offset)
{
    TERM_STRING* term = NULL;
    
    last_error = new_string_identifier(TERM_TYPE_STRING_AT, current_rule_strings, identifier, &term);
    
    if (last_error != ERROR_SUCCESS)
    {
        strcpy(last_error_extra_info, identifier);
    }
    else
    {
        term->offset = offset;
    }
    
    free(identifier);   
    return (TERM*) term;
}

TERM* reduce_string_in_range(char* identifier, TERM* lower_offset, TERM* upper_offset)
{
    TERM_STRING* term = NULL;
    
    last_error = new_string_identifier(TERM_TYPE_STRING_IN_RANGE, current_rule_strings, identifier, &term);
    
    if (last_error != ERROR_SUCCESS)
    {
        strcpy(last_error_extra_info, identifier);
    }
    else
    {
        term->lower_offset = lower_offset;
        term->upper_offset = upper_offset;
    }
    
    free(identifier);   
    return (TERM*) term;
}

TERM* reduce_string_in_section_by_name(char* identifier, char* section_name)
{
    TERM_STRING* term = NULL;
    
    last_error = new_string_identifier(TERM_TYPE_STRING_IN_SECTION_BY_NAME, current_rule_strings, identifier, &term);
    
    if (last_error != ERROR_SUCCESS)
    {
        strcpy(last_error_extra_info, identifier);
    }
    else
    {
        term->section_name = section_name;
    }
    
    free(identifier);   
    return (TERM*) term;
}

TERM* reduce_string_count(char* identifier)
{
    TERM_STRING* term = NULL;

    last_error = new_string_identifier(TERM_TYPE_STRING_COUNT, current_rule_strings, identifier, &term);
    
    if (last_error != ERROR_SUCCESS)
    {
        strcpy(last_error_extra_info, identifier);
    }
    
    free(identifier);           
    return (TERM*) term;
}

TERM* reduce_rule(char* identifier)
{
    TERM_BINARY_OPERATION* term;
    RULE* rule;
    
    rule = lookup_rule(rule_list, identifier);
    
    if (rule != NULL)
    {
        last_error = new_binary_operation(TERM_TYPE_RULE, rule->condition, NULL, &term);        
    }
    else
    {
        strcpy(last_error_extra_info, identifier);
        last_error = ERROR_UNDEFINED_RULE;
        term = NULL;
    }
    
    free(identifier);
    return (TERM*) term;
}

TERM* reduce_boolean_expression_list(TERM* boolean_expression_list_head, TERM* boolean_expression)
{
    boolean_expression->next = boolean_expression_list_head;
    return boolean_expression;
}



    
    
    