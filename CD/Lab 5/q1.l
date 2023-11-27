%{
#include<stdio.h>
%}


%%
"int"|"float" {printf("%s is a keyword",yytext);}
"+"|"-"|"/"|"*"|"%" {printf("%s is an operator",yytext);}
[a-zA-Z]+ {printf("%s is an Identifier",yytext);}
[0-9]+ {printf("%s is an Integer",yytext);}
. {printf("Enter a valid input");}
%%

int main(){
printf("Enter  a string\n");
yylex();
return 0;
}
