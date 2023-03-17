%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
string {printf("Keyword: String\n");return str;}
char {printf("Keyword: Char\n");return character;}
"+" {printf("Relational Operator : +\n");return OP;}
"-" {printf("Relational Operator : -\n");return OP;}
"<->" {printf("Relational Operator : <->\n");return OP;}
"?" {printf("Relational Operator : ?\n");return OP;}
"=" {printf("Assignment Operator : =\n");return assgn;}
[a-z][a-zA-Z]?[a-zA-Z]? {printf("ID : %s \n",yytext);return ID;}
[A-Z] {printf("Error at %s\n",yytext);return valchar;}
[a-zA-Z0-9]+ {printf("Error at %s\n",yytext);return valstr;}
\n {return NL;}
. {}
%%
int yywrap(void)
{
 return 1;
}