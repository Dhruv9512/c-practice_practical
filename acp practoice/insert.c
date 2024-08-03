#include<stdio.h>
int main()
{

int a[10];
for (int i = 0; i < 4; i++)
{
    printf("\nEnter value of %d:-",i+1);
    scanf("%d",&a[i]);

}


int p,e;
printf("\nEnter position:- ");
scanf("%d",&p);

printf("\nEnter element:- ");
scanf("%d",&e);


for (int i = 3; i >=p-1; i--)
{
    a[i+1]=a[i];
}
a[p-1]=e;

printf("Array after insert:- ");

for (int i = 0; i < 5; i++)
{
    printf("%d\t",a[i]);
}

return 0;
}