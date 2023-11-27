%{
	#include<stdio.h>
	int yylex();
	int yyerror();
	int tmp=0;
%}

%token num
%left '+' '-'

%%

arithmaticE:E {printf("Result:%d\n",$$);
				return 0;};
E:E'+'E {$$=$1+$3;}
 |E'-'E {$$=$1-$3;}
 |num   {$$=$1;};
 
%%

int yyerror()
{
	printf("Incorrect epression");
	tmp=1;
}
int main()
{
	printf("Enter an expression");
	yyparse();
	return 0;
}

