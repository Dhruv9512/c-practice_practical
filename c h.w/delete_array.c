#include<stdio.h>
int main()
{
 int arr[]={10,20,30};
 int d;
 printf("Enter elemant that you want to delete:- ");
 scanf("%d",&d);

int i;
 for ( i = 0; i < 3; i++)
 {
    if (d==arr[i])
    {
        break;
    }
    
 }
 
 if (i==3)
 {
   printf("Element not found.....");

 }
 else{
    for (int j = i; j < 2; j++)
    {
       arr[j]=arr[j+1];
    }
    
 }
 
 for ( i = 0; i < 2; i++)
 {
    printf("%d\t",arr[i]);
 }
 
return 0;
}