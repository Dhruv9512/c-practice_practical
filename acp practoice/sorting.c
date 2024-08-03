#include<stdio.h>
int main()
{
  
   
    int a[4];

    for (int i = 0; i < 4; i++)
    {
        printf("\nEntre value of %d:- ", i + 1);
        scanf("%d", &a[i]);
    }


    int temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("Array after sorting:- ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", a[i]);
    }
return 0;
}