#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20110908

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "example.y"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct exprType{

	char *addr;
	char *code;
	
};

int n=1;
int nl = 1;
char *var;
char num_to_concatinate[10];
char num_to_concatinate_l[10];
char *ret;
char *temp;

char *label;
char *label2;
char *check;

char *begin;

char *b1;
char *b2;

char *s1;
char *s2;

struct exprType *to_return_expr;

char * newTemp(){
	
	char *newTemp = (char *)malloc(20);
	strcpy(newTemp,"t");
	snprintf(num_to_concatinate, 10,"%d",n);
	strcat(newTemp,num_to_concatinate);
		
	n++;
	return newTemp;
}

char * newLabel(){
	
	char *newLabel = (char *)malloc(20);
	strcpy(newLabel,"L");
	snprintf(num_to_concatinate_l, 10,"%d",nl);
	strcat(newLabel,num_to_concatinate_l);
		
	nl++;
	return newLabel;
}
#line 61 "example.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int ival;
	float fval;
	char *sval;
	struct exprType *EXPRTYPE;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 90 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();

#define DIGIT 257
#define FLOAT 258
#define ID 259
#define IF 260
#define ELSE 261
#define WHILE 262
#define TYPES 263
#define REL_OPT 264
#define OR 265
#define AND 266
#define NOT 267
#define TRUE 268
#define FALSE 269
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    8,    8,    8,    4,    4,    4,    4,    5,    5,
    1,    1,    1,   10,   10,   10,   10,   10,    6,    7,
    7,    7,    7,    7,    7,    7,    9,    9,    9,    9,
    9,    9,    9,    9,    9,    2,    3,    3,
};
static const short yylen[] = {                            2,
    1,    2,    1,    1,    1,    5,    5,    7,    3,    3,
    1,    2,    3,    1,    2,    2,    4,    4,    2,    3,
    3,    3,    4,    3,    1,    1,    3,    3,    3,    3,
    3,    3,    3,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
   37,   38,   36,    0,    0,    0,   14,    0,    0,    0,
    0,    0,   35,    3,    5,    0,    0,    0,   11,    0,
    0,   19,   34,    0,    0,    0,    0,   12,    0,    0,
   16,    2,    0,    0,    0,    0,    0,    0,   15,    0,
   25,   26,    0,    0,    0,    0,   27,    9,   10,   13,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   17,   18,    0,   24,
    0,   22,    0,    0,    6,   23,    0,    8,
};
static const short yydgoto[] = {                         10,
   11,   23,   13,   14,   15,   16,   44,   17,   45,   19,
};
static const short yysindex[] = {                        35,
    0,    0,    0,  -22,  -21, -220,    0,   11,   35,    0,
   51,  -18,    0,    0,    0,  -23, -120,   37,    0,  -26,
  -26,    0,    0,   91,   43,  -84,   50,    0,   11,   11,
    0,    0,   11,   11,   11,   11,   11,   11,    0,   27,
    0,    0,  -26,  -20,   10,   -7,    0,    0,    0,    0,
  102,  117,   58,   58,   -9,   -9,   -9,   -9,  -26,   21,
    3,  -26,  -26,  -54,   11,  -54,    0,    0,   23,    0,
 -195,    0, -185,  156,    0,    0,  -54,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    2,  128,    0,    0,    0,    0,   88,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   13,   18,  -37,  -30,  -17,  -10,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -25,    0,    1,   25,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
   81,  180,    0,   56,    4,    0,  120,    0,   78,   -2,
};
#define YYTABLESIZE 314
static const short yytable[] = {                         29,
    7,    4,    9,   29,   29,   29,   30,   29,   28,   29,
   30,   30,   30,   43,   30,   21,   30,   20,   21,   28,
   64,   29,   28,   28,   28,   28,   31,   28,   30,   28,
   31,   31,   31,   66,   31,   31,   31,   30,    3,   38,
   49,   28,   29,   47,   35,   33,   38,   34,   31,   36,
    8,   35,   33,   32,   34,   32,   36,   32,   33,   50,
   33,   70,   33,   76,   26,   20,   59,   73,    9,   75,
   63,   32,   32,   38,    8,   77,   33,   18,   35,   33,
   78,   34,    8,   36,   37,   24,   18,    1,   18,   25,
    8,    0,    0,    7,   38,   39,   37,    0,    0,   35,
    0,    7,   18,   37,   36,    0,   51,   52,    0,    7,
   53,   54,   55,   56,   57,   58,    0,    0,    0,    0,
   61,    0,    0,    7,    4,    7,    0,   38,    0,    0,
   37,   47,   35,   33,    0,   34,    0,   36,   38,    4,
   46,    5,   74,   35,   33,    0,   34,    0,   36,    0,
    0,   37,    0,   38,    0,    0,    0,    9,   35,   33,
   67,   34,   60,   36,   34,    0,    0,   48,    0,   34,
   34,    0,   34,    0,   34,   68,    0,    0,   69,   12,
    0,   71,   72,    0,   37,   22,   34,    0,   12,    0,
   12,    0,   38,    0,    0,   37,    0,   35,   33,    0,
   34,    0,   36,    0,   12,    0,    0,    0,    0,    0,
   37,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   34,    0,    0,    0,    0,   29,   29,   29,    0,
    1,    2,    3,   30,   30,   30,    0,    0,    0,   21,
   40,   41,   42,    0,   62,   63,   28,   28,   28,   37,
    0,    0,    0,   31,   31,   31,    0,   62,   63,    0,
    7,    4,    7,    4,    0,    0,   65,    1,    2,    3,
    0,    0,    0,   65,    0,    0,   32,   32,   32,    0,
    0,   33,   33,   33,    0,   62,   63,   62,   63,   20,
   20,    1,    2,    3,    4,    0,    5,    6,   27,    1,
    2,    3,    0,    0,    0,    6,   27,    1,    2,    3,
    0,    0,    0,    6,
};
static const short yycheck[] = {                         37,
    0,    0,  123,   41,   42,   43,   37,   45,   11,   47,
   41,   42,   43,   40,   45,   41,   47,   40,   40,   37,
   41,   59,   25,   41,   42,   43,   37,   45,   59,   47,
   41,   42,   43,   41,   45,   59,   47,   61,  259,   37,
  125,   59,   61,   41,   42,   43,   37,   45,   59,   47,
   40,   42,   43,   41,   45,   43,   47,   45,   41,   10,
   43,   41,   45,   41,    9,   41,   40,   64,  123,   66,
  266,   59,   17,   37,   40,  261,   59,    0,   42,   43,
   77,   45,   40,   47,   94,    8,    9,    0,   11,    9,
   40,   -1,   -1,   59,   37,   59,   94,   -1,   -1,   42,
   -1,   59,   25,   94,   47,   -1,   29,   30,   -1,   59,
   33,   34,   35,   36,   37,   38,   -1,   -1,   -1,   -1,
   43,   -1,   -1,  123,  123,  125,   -1,   37,   -1,   -1,
   94,   41,   42,   43,   -1,   45,   -1,   47,   37,  260,
   21,  262,   65,   42,   43,   -1,   45,   -1,   47,   -1,
   -1,   94,   -1,   37,   -1,   -1,   -1,  123,   42,   43,
   59,   45,   43,   47,   37,   -1,   -1,  125,   -1,   42,
   43,   -1,   45,   -1,   47,   59,   -1,   -1,   59,    0,
   -1,   62,   63,   -1,   94,    6,   59,   -1,    9,   -1,
   11,   -1,   37,   -1,   -1,   94,   -1,   42,   43,   -1,
   45,   -1,   47,   -1,   25,   -1,   -1,   -1,   -1,   -1,
   94,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   94,   -1,   -1,   -1,   -1,  264,  265,  266,   -1,
  257,  258,  259,  264,  265,  266,   -1,   -1,   -1,  265,
  267,  268,  269,   -1,  265,  266,  264,  265,  266,   94,
   -1,   -1,   -1,  264,  265,  266,   -1,  265,  266,   -1,
  260,  260,  262,  262,   -1,   -1,  264,  257,  258,  259,
   -1,   -1,   -1,  264,   -1,   -1,  264,  265,  266,   -1,
   -1,  264,  265,  266,   -1,  265,  266,  265,  266,  265,
  266,  257,  258,  259,  260,   -1,  262,  263,  256,  257,
  258,  259,   -1,   -1,   -1,  263,  256,  257,  258,  259,
   -1,   -1,   -1,  263,
};
#define YYFINAL 10
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 269
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,"'\\n'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'%'",0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,
0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"DIGIT","FLOAT","ID","IF","ELSE","WHILE","TYPES","REL_OPT",
"OR","AND","NOT","TRUE","FALSE",
};
static const char *yyrule[] = {
"$accept : startSym",
"startSym : program",
"program : program construct",
"program : construct",
"program : list",
"construct : block",
"construct : WHILE '(' bool ')' block",
"construct : IF '(' bool ')' block",
"construct : IF '(' bool ')' block ELSE block",
"block : '{' list '}'",
"block : '{' construct '}'",
"list : stat",
"list : list stat",
"list : list error '\\n'",
"stat : ';'",
"stat : expr ';'",
"stat : dec ';'",
"stat : text '=' expr ';'",
"stat : dec '=' expr ';'",
"dec : TYPES text",
"bool : expr REL_OPT expr",
"bool : bool OR bool",
"bool : bool AND bool",
"bool : NOT '(' bool ')'",
"bool : '(' bool ')'",
"bool : TRUE",
"bool : FALSE",
"expr : '(' expr ')'",
"expr : expr '^' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : expr '%' expr",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : text",
"expr : number",
"text : ID",
"number : DIGIT",
"number : FLOAT",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 922 "example.y"


extern int yylex();
extern int yyparse();
extern FILE *yyin;

main() {
	// open a file handle to a particular file:
	FILE *myfile = fopen("input.txt", "r");
	// make sure it is valid:
	if (!myfile) {
		printf("I can't open a.snazzle.file!");
		return -1;
	}
	// set lex to read from it instead of defaulting to STDIN:
	yyin = myfile;
	
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	
}

void yyerror(const char *s) {
	printf("EEK, parse error!  Message: ");
	puts(s);
	//printf("\n");
	// might as well halt now:
	exit(-1);
}
#line 377 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 87 "example.y"
	{
			s1 = yystack.l_mark[0].sval;
			label = newLabel();

			check = strstr (s1,"NEXT");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				strncpy (check+strlen(label),"    ",(4-strlen(label)));
				check = strstr (s1,"NEXT");
				}

			ret = (char *)malloc(strlen(s1)+10);
			ret[0] = 0;

			strcat(ret,s1);
			strcat(ret,"\n");
			strcat(ret,label);
			strcat(ret," : END OF THREE ADDRESS CODE !!!!!\n");
			
			printf("\n----------  FINAL THREE ADDRESS CODE ----------\n");
			puts(ret);

			yyval.sval = ret;
		}
break;
case 2:
#line 115 "example.y"
	{

			s1 = yystack.l_mark[-1].sval;
			s2 = yystack.l_mark[0].sval;

			label = newLabel();

			check = strstr (s1,"NEXT");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				strncpy (check+strlen(label),"    ",(4-strlen(label)));
				check = strstr (s1,"NEXT");
				}

			ret = (char *)malloc(strlen(yystack.l_mark[-1].sval)+strlen(yystack.l_mark[0].sval)+4);
			ret[0] = 0;
			strcat(ret,yystack.l_mark[-1].sval);
			strcat(ret,"\n");
			strcat(ret,label);
			strcat(ret," : ");
			strcat(ret,yystack.l_mark[0].sval);

			printf("program construct\n");

			puts(ret);
			yyval.sval = ret;
		}
break;
case 3:
#line 145 "example.y"
	{
			printf("Final Construct \n");
			puts(yystack.l_mark[0].sval);
			yyval.sval = yystack.l_mark[0].sval;
		}
break;
case 4:
#line 152 "example.y"
	{	
			printf("Final list \n");
			puts(yystack.l_mark[0].sval);
			yyval.sval = yystack.l_mark[0].sval;
		}
break;
case 5:
#line 160 "example.y"
	{
			yyval.sval = yystack.l_mark[0].sval;
		}
break;
case 6:
#line 165 "example.y"
	{
			printf("Inside WHILE\n");
			puts(yystack.l_mark[0].sval);
			
			b1 = yystack.l_mark[-2].sval;
			s1 = yystack.l_mark[0].sval;

			begin = newLabel();
			label = newLabel();

			check = strstr (b1,"TRUE");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				strncpy (check+strlen(label),"    ",(4-strlen(label)));
				check = strstr (b1,"TRUE");
				}

			check = strstr (b1,"FAIL");
			
			while(check!=NULL){
				strncpy (check,"NEXT",4);
				/*strncpy (check+strlen(label),"    ",(4-strlen(label)));*/
				check = strstr (b1,"FAIL");
				}

			check = strstr (s1,"NEXT");
			
			while(check!=NULL){
				strncpy (check,begin,strlen(begin));
				strncpy (check+strlen(begin),"    ",(4-strlen(begin)));
				check = strstr (s1,"NEXT");
				}

			ret = (char *)malloc(strlen(b1)+strlen(s1)+20);
			ret[0] = 0;
			strcat(ret,begin);
			strcat(ret," : ");
			strcat(ret,b1);
			strcat(ret,"\n");
			strcat(ret,label);
			strcat(ret," : ");
			strcat(ret,s1);

			strcat(ret,"\n");
			strcat(ret,"goto ");
			strcat(ret,begin);
			
			printf("Final return from while\n");
			puts(ret);

			yyval.sval = ret;
	
		}
break;
case 7:
#line 221 "example.y"
	{
			printf("Inside IF\n");
			
			label = newLabel();
			b1 = yystack.l_mark[-2].sval;

			check = strstr (b1,"TRUE");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				strncpy (check+strlen(label),"    ",(4-strlen(label)));
				check = strstr (b1,"TRUE");
				}
			
			check = strstr (b1,"FAIL");
			
			while(check!=NULL){
				strncpy (check,"NEXT",4);
				/*strncpy (check+strlen(label),"    ",(4-strlen(label)));*/
				check = strstr (b1,"FAIL");
				}

			ret = (char *)malloc(strlen(b1)+strlen(yystack.l_mark[0].sval)+4);
			ret[0] = 0;
			strcat(ret,b1);
			strcat(ret,"\n");
			strcat(ret,label);
			strcat(ret," : ");
			strcat(ret,yystack.l_mark[0].sval);
			
			puts(ret);
			yyval.sval = ret;
		}
break;
case 8:
#line 256 "example.y"
	{
			printf("Inside if then else\n");

			b1 = yystack.l_mark[-4].sval;
			label = newLabel();

			check = strstr (b1,"TRUE");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				strncpy (check+strlen(label),"    ",(4-strlen(label)));
				check = strstr (b1,"TRUE");
				}
			

			label2 = newLabel();
			check = strstr (b1,"FAIL");

			while(check!=NULL){
				strncpy (check,label2,strlen(label2));
				strncpy (check+strlen(label2),"    ",(4-strlen(label2)));
				check = strstr (b1,"FAIL");
				}

			ret = (char *)malloc(strlen(b1)+strlen(yystack.l_mark[-2].sval)+strlen(yystack.l_mark[0].sval)+20);
			ret[0] = 0;
			strcat(ret,b1);
			strcat(ret,"\n");
			strcat(ret,label);
			strcat(ret," : ");
			strcat(ret,yystack.l_mark[-2].sval);
			strcat(ret,"\n");
			strcat(ret,"goto NEXT");
			strcat(ret,"\n");
			strcat(ret,label2);
			strcat(ret," : ");
			strcat(ret,yystack.l_mark[0].sval);
			
			puts(ret);

			yyval.sval = ret;
	
		}
break;
case 9:
#line 302 "example.y"
	{
			printf("Inside block\n");
			yyval.sval = yystack.l_mark[-1].sval;
		}
break;
case 10:
#line 308 "example.y"
	{
			yyval.sval = yystack.l_mark[-1].sval;
		}
break;
case 11:
#line 315 "example.y"
	{
			yyval.sval = yystack.l_mark[0].EXPRTYPE->code;
		}
break;
case 12:
#line 320 "example.y"
	{
			ret = (char *)malloc(strlen(yystack.l_mark[-1].sval)+strlen(yystack.l_mark[0].EXPRTYPE->code)+4);
			ret[0] = 0;

			strcat(ret,yystack.l_mark[-1].sval);
			strcat(ret,"\n");
			strcat(ret,yystack.l_mark[0].EXPRTYPE->code);
		
			printf("Inside list stat \n");
			puts(ret);
			yyval.sval = ret;
		}
break;
case 13:
#line 334 "example.y"
	{
           yyerrok;
         }
break;
case 14:
#line 341 "example.y"
	{
		to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = yystack.l_mark[0].sval;
		
		to_return_expr->code = (char *)malloc(2);
		to_return_expr->code[0] = 0;
		
		yyval.EXPRTYPE = to_return_expr;
	 }
break;
case 15:
#line 353 "example.y"
	{
		yyval.EXPRTYPE = yystack.l_mark[-1].EXPRTYPE;
           
         }
break;
case 16:
#line 359 "example.y"
	{
		to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = yystack.l_mark[-1].sval;
		
		to_return_expr->code = (char *)malloc(2);
		to_return_expr->code[0] = 0;
		
		yyval.EXPRTYPE = to_return_expr;
           
         }
break;
case 17:
#line 372 "example.y"
	{
	    printf("Assignment statement \n");

		to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();
		
		ret = (char *)malloc(20);
		ret[0] = 0;

		strcat(ret,yystack.l_mark[-3].sval);

		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-1].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-1].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-1].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-1].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);

		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
	    
			
		/*printf(" %s = %s \n",$1,$3->addr);*/
          
	    
         }
break;
case 18:
#line 413 "example.y"
	{
	    printf("Dec and Assignment statement \n");
	    
		to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();
		
		ret = (char *)malloc(20);
		ret[0] = 0;

		/*strcat(ret,to_return_expr->addr);*/
		
		strcat(ret,yystack.l_mark[-3].sval);
		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-1].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-3].sval)+strlen(yystack.l_mark[-1].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-1].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-1].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);

		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
			
		/*printf(" %s = %s \n",$1,$3->addr);*/
          
	    
         }
break;
case 19:
#line 456 "example.y"
	{	
			yyval.sval = yystack.l_mark[0].sval;
		}
break;
case 20:
#line 462 "example.y"
	{
			printf("Inside rel opt\n");

			temp = (char *)malloc(strlen(yystack.l_mark[-2].EXPRTYPE->code)+strlen(yystack.l_mark[0].EXPRTYPE->code)+50);
			temp[0] = 0;
	
			if(yystack.l_mark[-2].EXPRTYPE->code[0]!=0){
				strcat(temp,yystack.l_mark[-2].EXPRTYPE->code);
				strcat(temp,"\n");
				}
			if(yystack.l_mark[0].EXPRTYPE->code[0]!=0){
				strcat(temp,yystack.l_mark[0].EXPRTYPE->code);
				strcat(temp,"\n");
				}

			ret = (char *)malloc(50);
			ret[0] = 0;
			strcat(ret,"if(");
			strcat(ret,yystack.l_mark[-2].EXPRTYPE->addr);
			strcat(ret,yystack.l_mark[-1].sval);
			strcat(ret,yystack.l_mark[0].EXPRTYPE->addr);
			strcat(ret,") goto TRUE \n goto FAIL");

			strcat(temp,ret);

			yyval.sval = temp;
		}
break;
case 21:
#line 491 "example.y"
	{
			printf("Inside OR\n");
			
			b1 = yystack.l_mark[-2].sval;
			b2 = yystack.l_mark[0].sval;

			label = newLabel();

			check = strstr (b1,"FAIL");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				strncpy (check+strlen(label),"    ",(4-strlen(label)));
				check = strstr (b1,"FAIL");
				}
			
			temp = (char *)malloc(strlen(b1)+strlen(b2)+10);
			temp[0] = 0;

			strcat(temp,b1);
			strcat(temp,"\n");
			strcat(temp,label);
			strcat(temp," : ");
			strcat(temp,b2);

			yyval.sval = temp;
		}
break;
case 22:
#line 520 "example.y"
	{
			printf("Inside AND\n");

			b1 = yystack.l_mark[-2].sval;
			b2 = yystack.l_mark[0].sval;

			label = newLabel();

			check = strstr (b1,"TRUE");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				strncpy (check+strlen(label),"    ",(4-strlen(label)));
				check = strstr (b1,"TRUE");
				}
			
			temp = (char *)malloc(strlen(b1)+strlen(b2)+10);
			temp[0] = 0;

			strcat(temp,b1);
			strcat(temp,"\n");
			strcat(temp,label);
			strcat(temp," : ");
			strcat(temp,b2);

			yyval.sval = temp;
		}
break;
case 23:
#line 549 "example.y"
	{
			printf("Inside NOT\n");
			puts(yystack.l_mark[-1].sval);

			b1 = yystack.l_mark[-1].sval;

			label = "TEFS";

			check = strstr (b1,"TRUE");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				/*strncpy (check+strlen(label),"    ",(4-strlen(label)));*/
				check = strstr (b1,"TRUE");
				}
			
			label = "TRUE";
			check = strstr (b1,"FAIL");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				/*strncpy (check+strlen(label),"    ",(4-strlen(label)));*/
				check = strstr (b1,"FAIL");
				}

			label = "FAIL";
			check = strstr (b1,"TEFS");
			
			while(check!=NULL){
				strncpy (check,label,strlen(label));
				/*strncpy (check+strlen(label),"    ",(4-strlen(label)));*/
				check = strstr (b1,"TEFS");
				}
			
			yyval.sval = b1;
		}
break;
case 24:
#line 587 "example.y"
	{
			yyval.sval = yystack.l_mark[-1].sval;
		}
break;
case 25:
#line 592 "example.y"
	{
			printf("Inside TRUE\n");

			ret = (char *)malloc(20);
			ret[0] = 0;
			strcat(ret,"\ngoto TRUE");
			
			yyval.sval = ret;
		}
break;
case 26:
#line 603 "example.y"
	{
			printf("Inside FALSE\n");
			
			printf("Inside TRUE\n");

			ret = (char *)malloc(20);
			ret[0] = 0;
			strcat(ret,"\ngoto FAIL");
			
			yyval.sval = ret;
		}
break;
case 27:
#line 617 "example.y"
	{
           yyval.EXPRTYPE = yystack.l_mark[-1].EXPRTYPE;
         }
break;
case 28:
#line 622 "example.y"
	{
		printf("Exponential : ");
		
		to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();
		
		ret = (char *)malloc(20);
		ret[0] = 0;

		strcat(ret,to_return_expr->addr);

		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-2].EXPRTYPE->addr);
		strcat(ret,"^");
		strcat(ret,yystack.l_mark[0].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-2].EXPRTYPE->code)+strlen(yystack.l_mark[0].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-2].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-2].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		if (yystack.l_mark[0].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[0].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);

		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
	
         }
break;
case 29:
#line 665 "example.y"
	{

           printf("Multiplication : ");
	   	to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();
		
		ret = (char *)malloc(20);
		ret[0] = 0;

		strcat(ret,to_return_expr->addr);

		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-2].EXPRTYPE->addr);
		strcat(ret,"*");
		strcat(ret,yystack.l_mark[0].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-2].EXPRTYPE->code)+strlen(yystack.l_mark[0].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-2].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-2].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		if (yystack.l_mark[0].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[0].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);

		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
           
         }
break;
case 30:
#line 708 "example.y"
	{
           printf("Division : ");
	  	to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();
		
		ret = (char *)malloc(20);
		ret[0] = 0;

		strcat(ret,to_return_expr->addr);

		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-2].EXPRTYPE->addr);
		strcat(ret,"/");
		strcat(ret,yystack.l_mark[0].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-2].EXPRTYPE->code)+strlen(yystack.l_mark[0].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-2].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-2].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		if (yystack.l_mark[0].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[0].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);

		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
	   
         }
break;
case 31:
#line 750 "example.y"
	{
           printf("Modulo Division : ");
	   	to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();
		
		ret = (char *)malloc(20);
		ret[0] = 0;

		strcat(ret,to_return_expr->addr);

		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-2].EXPRTYPE->addr);
		strcat(ret,"%");
		strcat(ret,yystack.l_mark[0].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-2].EXPRTYPE->code)+strlen(yystack.l_mark[0].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-2].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-2].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		if (yystack.l_mark[0].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[0].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);

		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
         }
break;
case 32:
#line 791 "example.y"
	{
           printf("Addition : ");
	   	to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();

		ret = (char *)malloc(20);
		ret[0] = 0;

		strcat(ret,to_return_expr->addr);

		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-2].EXPRTYPE->addr);
		strcat(ret,"+");
		strcat(ret,yystack.l_mark[0].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-2].EXPRTYPE->code)+strlen(yystack.l_mark[0].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-2].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-2].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		if (yystack.l_mark[0].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[0].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);

		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
         }
break;
case 33:
#line 832 "example.y"
	{
	   printf("Subtraction : ");
           	to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = newTemp();

		ret = (char *)malloc(20);
		ret[0] = 0;

		strcat(ret,to_return_expr->addr);

		strcat(ret,"=");
		strcat(ret,yystack.l_mark[-2].EXPRTYPE->addr);
		strcat(ret,"-");
		strcat(ret,yystack.l_mark[0].EXPRTYPE->addr);
		printf("RET  = \n");
		puts(ret);

		temp = (char *)malloc(strlen(yystack.l_mark[-2].EXPRTYPE->code)+strlen(yystack.l_mark[0].EXPRTYPE->code)+strlen(ret)+6);

		temp[0] = 0;
		
		if (yystack.l_mark[-2].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[-2].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		if (yystack.l_mark[0].EXPRTYPE->code[0]!=0){
			strcat(temp,yystack.l_mark[0].EXPRTYPE->code);
			strcat(temp,"\n");
			}
		strcat(temp,ret);
		printf("TEMP = \n");

		puts(temp);
		
		to_return_expr->code = temp;

           	yyval.EXPRTYPE = to_return_expr;
		
         }
break;
case 34:
#line 873 "example.y"
	{
		printf("Inside text\n");
		to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = yystack.l_mark[0].sval;

		to_return_expr->code = (char *)malloc(2);
		to_return_expr->code[0] = 0;

		yyval.EXPRTYPE = to_return_expr;}
break;
case 35:
#line 884 "example.y"
	{
		printf("Inside Number\n");
		to_return_expr = (struct exprType *)malloc(sizeof(struct exprType));
		to_return_expr->addr = (char *)malloc(20);
		to_return_expr->addr = yystack.l_mark[0].sval;
		
		to_return_expr->code = (char *)malloc(2);
		to_return_expr->code[0] = 0;
		
		yyval.EXPRTYPE = to_return_expr;}
break;
case 36:
#line 897 "example.y"
	{
		printf("Inside Identifier : %s\n",yystack.l_mark[0].sval);
           	yyval.sval = yystack.l_mark[0].sval;
         }
break;
case 37:
#line 904 "example.y"
	{
		printf("Inside DIGIT : %d\n",yystack.l_mark[0].ival);
		var = (char *)malloc(20);
           	snprintf(var, 10,"%d",yystack.l_mark[0].ival);
		yyval.sval = var;
           
         }
break;
case 38:
#line 913 "example.y"
	{
		printf("Inside FLOAT : %f\n",yystack.l_mark[0].fval);
		var = (char *)malloc(20);
           	snprintf(var, 10,"%f",yystack.l_mark[0].fval);
		yyval.sval = var;
           
         }
break;
#line 1445 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
