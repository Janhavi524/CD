%{
#include<stdio.h>
int c=0;
%}

%%
[a-zA-Z0-9]+ {
printf("%s is an Identifier\n",yytext);
c++;
printf("Count%d\n",c);
}
. ECHO;
%%

int main(){
printf("Enter  a string\n");
yylex();
return 0;
}

int yywrap(){
return 1;
}



