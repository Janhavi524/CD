#include <stdio.h>
#include <string.h>
int state=0;
void state0(char c)
{
if(c=='0')
state=0;
else if(c=='1')
state=1;
else
state=-1;
}
void state1(char c)
{
if(c=='0')
state=1;
else if(c=='1')
state=0;
else
state=-1;
}
int isaccepted(char s[])
{
  int i,n=strlen(s);
  for(i=0;i<n;i++)
  {
  if (state ==0)
  state0(s[i]);
  else if (state ==1)
  state1(s[i]);
  else
  return 0;
  }
  if(state ==0)
  return 1;
  else
  return 0;
}
int main()
{
    char s[50];
    printf("Enter a string : ");
    gets(s);
    if(isaccepted(s))
    printf("%s string is accepted",s);
    else
    printf("%s string is not accepted",s);
    return 0;
}
