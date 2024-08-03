#include<stdio.h>
int main()
{

int a,b;
printf("\nEnter value a:- ");
scanf("%d",&a);
printf("\nEnter value b:- ");
scanf("%d",&b);

int *ptr1=&a,*ptr2=&b;

printf("%d\n",*ptr1 + *ptr2);
printf("%d\n",*ptr1 - *ptr2);
printf("%d\n",*ptr1 * *ptr2);
printf("%d\n",*ptr1 / *ptr2);
printf("%d\n",*ptr1 % *ptr2);

return 0;
}