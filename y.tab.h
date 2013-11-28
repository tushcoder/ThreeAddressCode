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
extern YYSTYPE yylval;
