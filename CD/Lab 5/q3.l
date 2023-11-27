%{
#include<stdio.h>
int i;
%}
%%
[0-9]+ {i=atoi(yytext);if(i%2==0)printf("evenno");else printf("odd");};
%%
int main()
{
yylex();
}
