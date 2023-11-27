#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[50],c;
	int state=0,i=0;
	printf("Enter a string using a & b:");
	gets(s);
	while(s[i]!='\0')
	{
		switch(state)
		{
			case 0:c=s[i++];
					if(c=='a'){state=1;}
					else if(c=='b'){state=2;}
					else{state=6;}
			break;
			case 1:c=s[i++];
					if(c=='a'){state=4;}
					else if(c=='b'){state=3;}
					else{state=6;}
			break;
			case 2:c=s[i++];
					if(c=='a'){state=6;}
					else{state=2;}
			break;
			case 3:c=s[i++];
					if(c=='a'){state=6;}
					else{state=5;}
			break;
			case 4:c=s[i++];
					if(c=='a'){state=4;}
					else{state=2;}
			break;
			case 5:c=s[i++];
					if(c=='b'){state=2;}
					else{state=6;}
			break;
			case 6:printf("Enter a valid string");
				exit(0);
		}
	}
	if(state==1 || state==4)
	printf("String is accepted under a+\n");
	else if(state==2 || state==3)
	printf("String is accepted under a*b+\n");
	else if(state==5)
	printf("String is accepted under abb\n");
	else
	printf("String is not accepted\n");
}
