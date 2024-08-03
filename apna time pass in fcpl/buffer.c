#include<stdio.h>
int main()
{


int a,b;
char n,m;
scanf("%d",&a);
scanf(" %d",&b);
printf("%d %d %c\n",a,b,n);

scanf("%c",&n);

printf("%d %d %c %c \n",a,b,n,m);


switch (n)
{
case '+':
    printf("%d",a+b);
    break;

default:
  printf("you choose wrong thing");
    break;
}
return 0;
}