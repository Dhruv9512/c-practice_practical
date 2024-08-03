#include<stdio.h>
int main()
{
    
     
    int a[4],b[4];

    for (int i = 0; i < 4; i++)
    {
        printf("\nEntre value of %d of first array:- ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("\nEntre value of %d of second array:- ", i + 1);
        scanf("%d", &b[i]);
    }

    int c[8];

    for (int i = 0; i < 8; i++)
    {
        if (i<4)
        {
            c[i]=a[i];
        }
        else{
            c[i]=b[i-4];
        }
        
    }

    printf("Array after marge:- ");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\t", c[i]);
    }
    
return 0;
}