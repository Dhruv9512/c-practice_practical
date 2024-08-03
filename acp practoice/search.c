#include<stdio.h>
int main()
{
  

     int a[4];

    for (int i = 0; i < 4; i++)
    {
        printf("\nEntre value of %d:- ", i + 1);
        scanf("%d", &a[i]);
    }

    int p;
    printf("\nEnter the element that you want to search:- ");
    scanf("%d",&p);


    int ans=0,i;
    for (i = 0; i < 4; i++)
    {
        if (p==a[i])
        {   
            ans=1;
            break;
        }
        
    }

    if (ans)
    {
        printf("The element is found in %d position.",i+1);
    }
    else{
        printf("Not found");
    }
    
    
return 0;
}