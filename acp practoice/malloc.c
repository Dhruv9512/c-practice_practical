#include<stdio.h>
#include<stdlib.h>
int main()
{

int *ptr[4];

for (int i = 0; i < 4; i++)
{
    ptr[i]=(int*)malloc(sizeof(int));
    printf("\nEnter value %d:-",i+1);
    scanf("%d",ptr[i]);
}

for (int i = 0; i < 4 ; i++)
{
    printf("%d\t",*ptr[i]);
    free(ptr[i]);
}

return 0;
}