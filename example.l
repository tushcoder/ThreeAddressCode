/*
Author : Tushark Bansal
Email : tusharkbansal@gmail.com
*/


%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

char c;

%}

DIGIT  [0-9]+
ID [a-zA-Z_][0-9a-zA-Z_]*
FLOAT [0-9]+[.][0-9]*

ARITHMETIC_OPERATORS ['+' '\-' '*' '/' '^' '%']
OTHER_CHARACTERS ['=' ';' '(' ')' '{' '}']
TYPES ["int" "float" "long" "char" "double"]

%%
[ \t] ;
[\n] ;


"if" 	{ return (IF); }
"else" 	{ return (ELSE); }
"while"	{ return (WHILE); }

"int"	{ return (TYPES); }
"float"	{ return (TYPES); }
"long"	{ return (TYPES); }
"char"	{ return (TYPES); }
"double"	{ return (TYPES); }

">"	{yylval.sval = strdup(yytext);
		return (REL_OPT);}
"<"	{yylval.sval = strdup(yytext);
		return (REL_OPT);}
">="	{yylval.sval = strdup(yytext);
		return (REL_OPT);}
"<="	{yylval.sval = strdup(yytext);
		return (REL_OPT);}
"!="	{yylval.sval = strdup(yytext);
		return (REL_OPT);}
"=="	{yylval.sval = strdup(yytext);
		return (REL_OPT);}

"||"	{yylval.sval = strdup(yytext);
		return (OR);}
"&&"	{yylval.sval = strdup(yytext);
		return (AND);}
"!"	{yylval.sval = strdup(yytext);
		return (NOT);}
"true"	{yylval.sval = strdup(yytext);
		return (TRUE);}
"false"	{yylval.sval = strdup(yytext);
		return (FALSE);}

{DIGIT}  { yylval.ival = atoi(yytext);
	   return DIGIT; }

{FLOAT}  { yylval.fval = atof(yytext);
	   return FLOAT; }

{ID} {
	    yylval.sval = strdup(yytext);
	    return ID; 
}
{ARITHMETIC_OPERATORS}   {
            	c = yytext[0];
                 return(c);
              }

{OTHER_CHARACTERS}   {
                 c = yytext[0];
                 return(c);
              }

%%
