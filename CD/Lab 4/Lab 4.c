#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int keyword_library(char temp[]);

int main()
{
	char ch,temp[40],arithmetic_operator[] = "=+%*/-";
	FILE *file_pointer;
	int count,x=0;
	file_pointer=fopen("demo.txt","r");
	if(file_pointer == NULL)
	{
		printf("The file could't be opened.\n");
		exit(0);
	}
	
	while((ch = fgetc(file_pointer))!=EOF)
	{
		count =0;
		while(count <=5)
		{
			if(ch == arithmetic_operator[count])
			{
				printf("\n Operator:\t%c",ch);
			}
			count += 1;
		}
		
		if(isalnum(ch))
		{
			temp[x++] = ch;
		}
		else if((ch == '\n' || ch == ' ') && (x!=0))
		{
			temp[x] = '\0';
			x=0;
			if(keyword_library(temp) == 1)
			{
				printf("\n Keyword:\t%s",temp);
			}
			else
			{
				printf("\n Identifier:\t%s",temp);
			}
		}
	}
	
	fclose(file_pointer);
	return 0;
}
int keyword_library(char temp[])
{
	int count=0,flag=0;
	char keywords[32][12]=
		{"return","int","void","char","float","continue","static","signed","if","else","long",
"extern","unsigned","struct","union","goto","while","enum","sizeof","double","volatile",
"const","case","register","do","default","typedef","auto","break","for","switch","short"};
	while(count<=31)
	{
		if(strcmp(keywords[count],temp)==0)
		{
			flag=1;
			break;
		}
		count+=1;
	}
	return flag;
}
