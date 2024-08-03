#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    for (int i = 0; i < n; i++)
    {
        printf("%p\t",ptr);
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
    
}