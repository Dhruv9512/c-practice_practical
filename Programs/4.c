#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the size of Array 1:");
    scanf("%d",&m);
    printf("Enter the size of Array 2:");
    scanf("%d",&n);
    int Arr1[m],Arr2[n];
    printf("Elements of Array 1:\n");
    for (int i = 0; i < m; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr1[i]);
    }
    printf("Elements of Array 2:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&Arr2[i]);
    }
    int l=m+n;
    int Arr3[l];
    for (int i = 0; i < n; i++)
    {
        Arr3[i]=Arr1[i];
    }
    for (int i = 0,j=m; i<n; i++,j++)
    {
        Arr3[j]=Arr2[i];
    }
    for (int i = 0; i < l; i++)
    {
        printf("   %d   ",Arr3[i]);
    }
    
}