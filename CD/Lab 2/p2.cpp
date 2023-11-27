#include <stdio.h>
#include <string.h>
int state=0;
void state0(char c)
{
if(c=='a')
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
