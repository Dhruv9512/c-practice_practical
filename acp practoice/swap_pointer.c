#include<stdio.h>
int main()
{
int a=10,b=20,*ptr1,*ptr2;
ptr1=&a;
ptr2=&b;

int temp;

temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

printf("%d %d ",*ptr1,*ptr2);
return 0;
}