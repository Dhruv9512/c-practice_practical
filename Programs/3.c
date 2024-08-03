#include<stdio.h>
int main()
{
    int n,num;
    printf("Enter The Size of an Array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Elements Of An Array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Elements in Array are:\n");
    for (int j = 0; j < n; j++)
    {
        printf("Element %d: %d\n",j+1,arr[j]);
    }
    printf("Enther the element you want to search:\n");
    scanf("%d",&num);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            printf("The %d is in %d position\n",num,i+1); //You can use i only for array index
        }
    }
    
    
}