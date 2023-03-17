%{
#include<stdio.h>
#include "y.tab.h"
int yyerror(char *s);
int yyparse(void);
%}
%token NL ID str character OP assgn valstr valchar
%%
E : S NL { return 0;}
S : T ID {printf("\nGiven String is Valid\n");}
 | EXPR
EXPR : ID assgn RHS
RHS : ID OP ID {printf("\nGiven String is Valid\n\n");}
T : str 
 | character 
%%
int main()
{
 while(1)
 {
 printf("Enter:");
 yyparse();
 }
}
int yyerror(char *s)
{
 fprintf(stderr,"%s\n",s);
 exit(0);
}