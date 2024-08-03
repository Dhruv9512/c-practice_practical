#include<stdio.h>
int main()
{
char ch[30];
printf("\n Enter string:-");
scanf("%s",ch);
char *p1;
char **p2;
p1=&ch[0];
p2=&p1;

for (int i = 0; ch[i]; i++)
{
    printf("\n value %d:- %c",i+1,**p2);
    *p2+=1;
}


return 0;
}