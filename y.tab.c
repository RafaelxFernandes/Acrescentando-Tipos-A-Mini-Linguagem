/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini.y" /* yacc.c:339  */

    #include <string>
    #include <stdio.h>
    #include <stdlib.h>
    #include <iostream>
    #include <map>
    
    using namespace std;
    
    extern "C" int yylex();
    
    #define YYSTYPE Atributos

    typedef string Tipo;
    
    int linha = 1;
    int coluna = 1;
    
    struct Atributos {
        string v;
        string c;
        Tipo t;
        int linha;
    };

    map<string,Tipo> tsVar;

    map<string, Tipo> resOpr = {
        { "+II", "I" }, { "+ID", "D" }, { "+DI", "D" }, { "+DD", "D" },
        { "+CC", "S" }, { "+CS", "S" }, { "+SC", "S" }, { "+SS", "S" },
        { "+CI", "I" }, { "+IC", "I" },
        { "<II", "B" }, { "<ID", "B" }, { "<DI", "B" }, { "<DD", "B" },
        { "<CC", "B" }, { "<CS", "B" }, { "<SC", "B" }, { "<SS", "B" },
        { "<IC", "B" }, { "<CI", "B" },
        { "<BB", "B" },
        { "<=II", "B" }, { "<=ID", "B" }, { "<=DI", "B" }, { "<=DD", "B" },
        { "<=CC", "B" }, { "<=CS", "B" }, { "<=SC", "B" }, { "<=SS", "B" },
        { "<=IC", "B" }, { "<=CI", "B" },
        { "<=BB", "B" },
        { ">II", "B" }, { ">ID", "B" }, { ">DI", "B" }, { ">DD", "B" },
        { ">CC", "B" }, { ">CS", "B" }, { ">SC", "B" }, { ">SS", "B" },
        { ">IC", "B" }, { ">CI", "B" },
        { ">BB", "B" },
        { ">=II", "B" }, { ">=ID", "B" }, { ">=DI", "B" }, { ">=DD", "B" },
        { ">=CC", "B" }, { ">=CS", "B" }, { ">=SC", "B" }, { ">=SS", "B" },
        { ">=IC", "B" }, { ">=CI", "B" },
        { ">=BB", "B" },
        { "==II", "B" }, { "==ID", "B" }, { "==DI", "B" }, { "==DD", "B" },
        { "==CC", "B" }, { "==CS", "B" }, { "==SC", "B" }, { "==SS", "B" },
        { "==IC", "B" }, { "==CI", "B" },
        { "==BB", "B" },
        { "<>II", "B" }, { "<>ID", "B" }, { "<>DI", "B" }, { "<>DD", "B" },
        { "<>CC", "B" }, { "<>CS", "B" }, { "<>SC", "B" }, { "<>SS", "B" },
        { "<>IC", "B" }, { "<>CI", "B" },
        { "<>BB", "B" }
    };

    map<Tipo, int> nVar;

    int yylex();
    int yyparse();
    
    void yyerror(const char *);
    
    void geraPrograma(Atributos s1);
    
    string concatenaVars(Atributos s1, Atributos s3);
    string geraVarComArray(Atributos s1, Atributos s3);
    string geraTemp(Tipo t);
    string declaraVar();
    string geraEntrada(Atributos s2);
    string geraSaida(Atributos s2);
    string geraIf(Atributos s2, Atributos s4, Atributos s6);
    string geraIfSemElse(Atributos s2, Atributos s4);
    string geraFor(Atributos s2, Atributos s5, Atributos s7, Atributos s9);
    string toString(int n);

    Atributos declaraVariavelComTipo(Atributos s1, Atributos s2);
    Atributos geraAtribuicao(Atributos s1, Atributos s3);
    Atributos geraAtribuicaoComArray(Atributos s1, Atributos s3, Atributos s6);
    Atributos geraEntradaComArray(Atributos s2, Atributos s4);
    Atributos geraValorComArray(Atributos s1, Atributos s3); 
    Atributos gera_codigo_operacao(Atributos s1, Atributos s2, Atributos s3);
    Atributos gera_codigo_comparacao(Atributos s1, string s2, Atributos s3);
    Atributos geraCodigoOperador(Atributos a, string operador, Atributos b);

    Tipo buscaTipoOperacao(Tipo a, string operador, Tipo b);


#line 156 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CINT = 258,
    CDOUBLE = 259,
    TK_ID = 260,
    TK_VAR = 261,
    TK_CONSOLE = 262,
    TK_SHIFTR = 263,
    TK_SHIFTL = 264,
    TK_ENDL = 265,
    TK_FOR = 266,
    TK_IN = 267,
    TK_2PT = 268,
    TK_IF = 269,
    TK_THEN = 270,
    TK_ELSE = 271,
    TK_BEGIN = 272,
    TK_END = 273,
    CSTRING = 274,
    TK_MAIG = 275,
    TK_MEIG = 276,
    TK_IG = 277,
    TK_DIF = 278,
    TK_AND = 279,
    TK_OR = 280,
    TK_INT = 281,
    TK_CHAR = 282,
    TK_STRING = 283,
    TK_BOOLEAN = 284,
    TK_REAL = 285
  };
#endif
/* Tokens.  */
#define CINT 258
#define CDOUBLE 259
#define TK_ID 260
#define TK_VAR 261
#define TK_CONSOLE 262
#define TK_SHIFTR 263
#define TK_SHIFTL 264
#define TK_ENDL 265
#define TK_FOR 266
#define TK_IN 267
#define TK_2PT 268
#define TK_IF 269
#define TK_THEN 270
#define TK_ELSE 271
#define TK_BEGIN 272
#define TK_END 273
#define CSTRING 274
#define TK_MAIG 275
#define TK_MEIG 276
#define TK_IG 277
#define TK_DIF 278
#define TK_AND 279
#define TK_OR 280
#define TK_INT 281
#define TK_CHAR 282
#define TK_STRING 283
#define TK_BOOLEAN 284
#define TK_REAL 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 264 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   196

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    43,     2,     2,
      50,    51,    41,    39,    46,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      33,    49,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    35,    36,
      37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   106,   106,   109,   110,   113,   114,   115,   116,   117,
     118,   121,   122,   123,   124,   125,   128,   131,   132,   133,
     134,   135,   138,   139,   142,   143,   146,   149,   150,   151,
     152,   155,   158,   159,   160,   165,   168,   169,   172,   173,
     174,   175,   178,   179,   182,   183,   184,   185,   186,   187,
     190,   191,   192,   195,   196,   197,   198,   199,   200,   203,
     204,   207,   208,   209,   210,   211,   212
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CINT", "CDOUBLE", "TK_ID", "TK_VAR",
  "TK_CONSOLE", "TK_SHIFTR", "TK_SHIFTL", "TK_ENDL", "TK_FOR", "TK_IN",
  "TK_2PT", "TK_IF", "TK_THEN", "TK_ELSE", "TK_BEGIN", "TK_END", "CSTRING",
  "TK_MAIG", "TK_MEIG", "TK_IG", "TK_DIF", "TK_AND", "TK_OR", "TK_INT",
  "TK_CHAR", "TK_STRING", "TK_BOOLEAN", "TK_REAL", "\"&&\"", "\"||\"",
  "'<'", "'>'", "\"<=\"", "\"=>\"", "\"==\"", "\"!=\"", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "';'", "','", "'['", "']'", "'='", "'('",
  "')'", "$accept", "S", "CMDS", "CMD", "CMDX", "BLOCO", "DECLVAR", "VARS",
  "VAR", "ENTRADA", "ENTRADAS", "SAIDA", "SAIDAS", "FOR", "IF", "ATR", "E",
  "R", "C", "L", "V", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    60,    62,   288,   289,   290,   291,    43,
      45,    42,    47,    37,    33,    59,    44,    91,    93,    61,
      40,    41
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,   -24,    28,     1,    16,    55,    55,    55,    55,    55,
      22,    93,   -96,    19,   -96,   -96,   -96,   -96,   -96,    16,
      16,    62,    16,   -96,   -96,    64,   -96,   -96,    27,   -96,
      16,   104,    76,    46,   -96,   -96,    47,    51,   -96,    51,
      51,    51,    51,   -96,   -96,   -96,    91,   139,    -6,     3,
      61,    16,    38,    16,    16,    16,    16,    16,    16,    16,
      16,    16,    16,    16,    58,    16,    16,    90,    55,    56,
     -96,   -96,    16,   -96,    65,   -96,   -96,    16,   109,   -96,
     153,   153,   153,   153,   153,   153,   -14,   -14,   -96,   -96,
     -96,    93,   -96,    -7,   104,   -96,   -96,    68,   -96,    16,
     119,   -96,    -9,   -96,    85,    58,   -96,   -96,   146,    -5,
      16,   -96,   -96,    72,   -96,   -96,   -96,   129,   -96,     0,
     -96,    73,   -96,   -96,   -96,   -96,   -96,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     4,     0,     6,     7,     9,    10,     8,     0,
       0,     0,     0,    26,    31,     0,    63,    64,    62,    65,
       0,    50,     0,    51,    52,    49,    25,    17,    23,    18,
      19,    20,    21,     1,     3,     5,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    27,     0,    28,     0,    32,    34,     0,     0,    66,
      55,    56,    57,    58,    53,    54,    44,    45,    46,    47,
      48,     0,    41,     0,     0,    59,    60,     0,    22,     0,
       0,    33,     0,    61,     0,     0,    40,    24,     0,     0,
       0,    16,    39,     0,    43,    29,    30,     0,    38,     0,
      37,     0,    11,    12,    14,    15,    13,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,    18,    -3,   -96,   -95,   -96,   147,    60,    10,
     -47,    21,    86,    23,    44,    45,    -4,   -96,    17,   -96,
     -96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,   120,    93,    13,    37,    38,    14,
      23,    15,    24,    16,    17,    18,    94,    32,    33,    34,
      35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      31,    73,    21,    21,   110,     1,    25,     2,    44,   105,
     113,     3,    22,    74,     4,    46,    47,    91,    49,    26,
      27,    28,    43,    19,   121,    20,    52,    61,    62,    63,
      59,    60,    61,    62,    63,    29,    21,    22,   106,    71,
     115,    72,    59,    60,    61,    62,    63,    78,    75,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      36,    92,   116,     1,    45,     2,    30,    48,   100,     3,
      65,    66,     4,   102,    51,    91,    50,    59,    60,    61,
      62,    63,    95,    96,     5,     6,     7,     8,     9,    79,
       1,    64,     2,    97,    67,   108,     3,    68,     1,     4,
       2,    44,   112,   111,     3,    99,   117,     4,    77,   104,
     101,     5,     6,     7,     8,     9,   107,   118,   127,     5,
       6,     7,     8,     9,    53,    54,    55,    56,    98,   122,
      59,    60,    61,    62,    63,    76,     0,    57,    58,    69,
     123,     0,   124,    59,    60,    61,    62,    63,    59,    60,
      61,    62,    63,    39,    40,    41,    42,   103,    59,    60,
      61,    62,    63,   125,   126,     0,     0,   109,    59,    60,
      61,    62,    63,     0,     0,     0,     0,   119,    59,    60,
      61,    62,    63,     0,    70,    59,    60,    61,    62,    63,
       0,   114,    59,    60,    61,    62,    63
};

static const yytype_int8 yycheck[] =
{
       4,    48,     8,     8,    13,     5,     5,     7,    11,    16,
     105,    11,     9,    10,    14,    19,    20,    17,    22,     3,
       4,     5,     0,    47,   119,    49,    30,    41,    42,    43,
      39,    40,    41,    42,    43,    19,     8,     9,    45,    45,
      45,    47,    39,    40,    41,    42,    43,    51,    45,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       5,    64,   109,     5,    45,     7,    50,     5,    72,    11,
      24,    25,    14,    77,    47,    17,    12,    39,    40,    41,
      42,    43,    65,    66,    26,    27,    28,    29,    30,    51,
       5,    15,     7,     3,    47,    99,    11,    46,     5,    14,
       7,   104,   105,    18,    11,    49,   110,    14,    47,    91,
      45,    26,    27,    28,    29,    30,    48,    45,    45,    26,
      27,    28,    29,    30,    20,    21,    22,    23,    68,   119,
      39,    40,    41,    42,    43,    49,    -1,    33,    34,    48,
     119,    -1,   119,    39,    40,    41,    42,    43,    39,    40,
      41,    42,    43,     6,     7,     8,     9,    48,    39,    40,
      41,    42,    43,   119,   119,    -1,    -1,    48,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    39,    40,
      41,    42,    43,    -1,    45,    39,    40,    41,    42,    43,
      -1,    45,    39,    40,    41,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     7,    11,    14,    26,    27,    28,    29,    30,
      53,    54,    55,    58,    61,    63,    65,    66,    67,    47,
      49,     8,     9,    62,    64,     5,     3,     4,     5,    19,
      50,    68,    69,    70,    71,    72,     5,    59,    60,    59,
      59,    59,    59,     0,    55,    45,    68,    68,     5,    68,
      12,    47,    68,    20,    21,    22,    23,    33,    34,    39,
      40,    41,    42,    43,    15,    24,    25,    47,    46,    48,
      45,    45,    47,    62,    10,    45,    64,    47,    68,    51,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    17,    55,    57,    68,    70,    70,     3,    60,    49,
      68,    45,    68,    48,    54,    16,    45,    48,    68,    48,
      13,    18,    55,    57,    45,    45,    62,    68,    45,    48,
      56,    57,    61,    63,    65,    66,    67,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    56,    57,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    62,    62,    62,
      62,    63,    64,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     2,
       2,     2,     3,     1,     4,     1,     2,     3,     3,     6,
       6,     2,     3,     4,     3,     0,    10,     9,     7,     6,
       5,     4,     4,     7,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     1,     1,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 106 "mini.y" /* yacc.c:1646  */
    { geraPrograma((yyvsp[0])); }
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "mini.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c + (yyvsp[0]).c; (yyval).v = (yyvsp[-1]).v; }
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "mini.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c; (yyval).v = (yyvsp[-1]).v; }
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "mini.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[-1]).c; }
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 138 "mini.y" /* yacc.c:1646  */
    { (yyval).c = concatenaVars((yyvsp[-2]), (yyvsp[0])); (yyval).v = (yyvsp[-2]).v; }
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraVarComArray((yyvsp[-3]), (yyvsp[-1])); }
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 143 "mini.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[0]).v; }
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 146 "mini.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[0]).c; }
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraEntrada((yyvsp[-1])); }
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 150 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraEntrada((yyvsp[-1])) + (yyvsp[0]).c; }
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 151 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraEntradaComArray((yyvsp[-4]), (yyvsp[-2])); }
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraEntradaComArray((yyvsp[-4]), (yyvsp[-2])); (yyval).c += (yyvsp[-1]).c; }
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 155 "mini.y" /* yacc.c:1646  */
    { (yyval).c = (yyvsp[0]).c; }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 158 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraSaida((yyvsp[-1])); }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 159 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraSaida((yyvsp[-2])); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 160 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraSaida((yyvsp[-1])) + (yyvsp[0]).c; }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 165 "mini.y" /* yacc.c:1646  */
    { (yyval).c = ""; (yyval).v = ""; }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 168 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraFor((yyvsp[-8]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 169 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraFor((yyvsp[-7]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 172 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraIf((yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1])); }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 173 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraIf((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 174 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraIfSemElse((yyvsp[-3]), (yyvsp[-1])); }
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 175 "mini.y" /* yacc.c:1646  */
    { (yyval).c = geraIfSemElse((yyvsp[-2]), (yyvsp[0])); }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 178 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraAtribuicao((yyvsp[-3]), (yyvsp[-1])) ; }
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 179 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraAtribuicaoComArray((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1])); }
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 182 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraCodigoOperador((yyvsp[-2]), (yyvsp[-1]).v, (yyvsp[0])); }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 183 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraCodigoOperador((yyvsp[-2]), (yyvsp[-1]).v, (yyvsp[0])); }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 184 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraCodigoOperador((yyvsp[-2]), (yyvsp[-1]).v, (yyvsp[0])); }
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 185 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraCodigoOperador((yyvsp[-2]), (yyvsp[-1]).v, (yyvsp[0])); }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 186 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraCodigoOperador((yyvsp[-2]), (yyvsp[-1]).v, (yyvsp[0])); }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 195 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_operacao((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 196 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_operacao((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 197 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_comparacao((yyvsp[-2]), ">=", (yyvsp[0])); }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 198 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_comparacao((yyvsp[-2]), "<=", (yyvsp[0])); }
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 199 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_comparacao((yyvsp[-2]), "==", (yyvsp[0])); }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 200 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_comparacao((yyvsp[-2]), "!=", (yyvsp[0])); }
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 203 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_comparacao((yyvsp[-2]), "&&", (yyvsp[0])); }
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 204 "mini.y" /* yacc.c:1646  */
    { (yyval) = gera_codigo_comparacao((yyvsp[-2]), "||", (yyvsp[0])); }
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 207 "mini.y" /* yacc.c:1646  */
    { (yyval) = geraValorComArray((yyvsp[-3]), (yyvsp[-1])); }
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 208 "mini.y" /* yacc.c:1646  */
    { (yyval).c = ""; (yyval).v = (yyvsp[0]).v; (yyval).t = "I"; }
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 209 "mini.y" /* yacc.c:1646  */
    { (yyval).c = ""; (yyval).v = (yyvsp[0]).v; (yyval).t = "I"; }
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 210 "mini.y" /* yacc.c:1646  */
    { (yyval).c = ""; (yyval).v = (yyvsp[0]).v; (yyval).t = "D"; }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 211 "mini.y" /* yacc.c:1646  */
    { (yyval).c = ""; (yyval).v = (yyvsp[0]).v; (yyval).t = "S"; }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 212 "mini.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1704 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 215 "mini.y" /* yacc.c:1906  */


#include "lex.yy.c"

string cabecalho = 
"#include <iostream>\n\n" 
"using namespace std;\n\n"
"int main() {\n";

string fim_programa = 
"  return 0;\n"
"}\n";

void yyerror( const char* st ){
    puts( st ); 
    
    printf( "Linha %d, coluna %d, proximo a: %s\n", linha, coluna, yytext );
    
    exit( 0 );
}

void geraPrograma(Atributos s1){
  cout << cabecalho
       << declaraVar()
       << s1.c 
       << fim_programa;
}

string concatenaVars(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.c = s1.c + ", " + s3.c;
    
    return gerado.c;
}

string geraVarComArray(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.c = s1.v + "[" + s3.v + "]";
    
    return gerado.c;
}

string geraTemp(Tipo t){    
    string nome = "temp-" + t + toString( nVar[t]++ );

    return nome;
}

string declaraVar(){
    string saida;
    
    for(auto p: nVar){
        for(int i = 0; i < p.second; i++ ){
            string nomeTipo;
            if(p.first == "I"){
                nomeTipo = "int";
            } else if(p.first == "D"){
                nomeTipo = "double";
            }
        saida += nomeTipo + "temp-" + p.first + toString(i) + ";\n";
        }
    }
    
    return saida;
}

string geraEntrada(Atributos s2){
    Atributos gerado;
    
    gerado.c = "cin >> " + s2.v + ";\n";
    
    return gerado.c;
}

string geraSaida(Atributos s2){
    Atributos gerado;
    
    gerado.c = s2.c + "cout << " + s2.v + ";\n";
    
    return gerado.c;
}

string geraIf(Atributos s2, Atributos s4, Atributos s6){
    Atributos gerado;
    
    gerado.c = s2.c
                + "if (" + s2.v + ") goto meio;" + ";\n"
                + s6.c + "goto fim;\n"
                + "meio:\n" + s4.c
                + "fim:\n";
    
    return gerado.c;
}

string geraIfSemElse(Atributos s2, Atributos s4){
    Atributos gerado;
    
    gerado.c =  s2.c
                + "if (" + s2.v + ") goto meio;\n"
                + "goto fim;\n"
                + "meio:\n" + s4.c
                + "fim:\n";
    
    return gerado.c;
}

string geraFor(Atributos s2, Atributos s5, Atributos s7, Atributos s9){
    Atributos gerado;
    
    static int nVarCont = 0;
    
    string cond = geraTemp("I");
    
    gerado.c = s5.c + s7.c + s2.v + " = " + s5.v + ";\n"
                + "meio" + to_string(nVarCont++) + ": \n" + cond + " = " + s2.v + " > " + s7.v + ";\n"
                + "if( " + cond + " ) goto fim" + to_string(nVarCont) + ";\n"
                + s9.c + s2.v + " = " + s2.v + " + 1;\n"
                + "goto meio" + to_string(nVarCont) + ";\n"
                + "fim" + to_string(nVarCont) + ": \n";
    
    return gerado.c;
}

Atributos declaraVariavelComTipo(Atributos s1, Atributos s2){
    Atributos gerado;
    
    gerado.v = s2.v;

    gerado.c = s1.v + s2.c + ";\n";
    
    gerado.t = s1.v;

    return gerado;
}

Atributos geraAtribuicao(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.v = s1.v;
    
    gerado.c = s1.c + s3.c + " " + gerado.v + " = " + s3.v + ";";
    
    return gerado;
}

Atributos geraAtribuicaoComArray(Atributos s1, Atributos s3, Atributos s6){
    Atributos gerado;
    
    gerado.v = s6.v;

    gerado.c = s3.c + s6.c + s1.v + "[" + s3.v + "] = " + s6.v  + ";";
    
    return gerado;
}

Atributos geraEntradaComArray(Atributos s2, Atributos s4){
    Atributos gerado;
    
    gerado.v = geraTemp("I");
    
    gerado.c = s4.c + "cin >> " + gerado.v + ";\n" + s2.v + "[" + s4.v + "] = " + gerado.v + ";\n";
    
    return gerado;
}

Atributos geraValorComArray(Atributos s1, Atributos s3){
    Atributos gerado;
    
    gerado.v = geraTemp("I");
    
    gerado.c = s3.c + gerado.v + " = " + s1.v + "[" + s3.v + "];\n";
    
    return gerado;
}

Atributos gera_codigo_operacao(Atributos param1, Atributos opr, Atributos param2){
    Atributos gerado;
    
    gerado.v = geraTemp("I");
    
    gerado.c = param1.c + param2.c + " " + gerado.v + " = " + param1.v + " " + opr.v + " " + param2.v + ";\n";
    
    return gerado;
}

Atributos gera_codigo_comparacao(Atributos param1, string opr, Atributos param2){
    Atributos gerado;

    gerado.v = geraTemp("I");
    
    gerado.c = param1.c + param2.c + gerado.v + " = " + param1.v + " " + opr + " " + param2.v + ";\n";
    
    return gerado;
}

//Funcoes acrescentadas para o 'Acrescentando tipos a mini linguagem'
string toString(int n){
    char buf[20] = "";

    sprintf(buf, "%d", n);

    return buf;
}

Atributos geraCodigoOperador(Atributos a, string operador, Atributos b){
    Atributos r;

    r.t = buscaTipoOperacao(a.t, operador, b.t);

    if(r.t == ""){
        string temp = "Operacao '" + operador + "' invalida entre " + a.t + " e " + b.t;    
        yyerror(temp.c_str());
    }

    r.v = geraTemp(r.t);

    r.c = a.c + b.c + " " + r.v + " = " + a.v + operador + b.v + ";\n";

    return r;
}

Tipo buscaTipoOperacao(Tipo a, string operador, Tipo b){
    return resOpr[operador + a + b];
    //TODO: usar o find
}

int main(int argc, char* st[]){ 
    yyparse();
    return 0;
}
