#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the String: \n");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
    	if(str[i]=='/'){
        if(str[i+1]=='/')
        {
            printf("It is a Single-Line comment\n");
            break;
        }
        else if(str[1]=='*'){
            for(int n=i+2;n<strlen(str);n++){
                if(str[n]=='*' && str[n+1]=='/'){
                	
                    printf("It is a Multi-Line comment\n");
                    break;
                }
                
            }
            
            }
        }
        else
        printf("It is not a comment\n");
        break;
       
    }
}
