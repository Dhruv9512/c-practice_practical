#include<stdio.h>
int main()
{
 int A[3][3],B[3][3],C[3][3];
 printf("Enter 9 number for first matric:");
 for (int i = 0; i <=2; i++)
 {
     for (int j = 0; j <=2; j++)
     {
        scanf("%d",&A[i][j]);
     }
     
 }
 printf("Enter 9 number for second matric:");
 for (int i = 0; i <=2; i++)
 {
     for (int j = 0; j <=2; j++)
     {
        scanf("%d",&B[i][j]);
     }
     
 }
 
 
 for (int i = 0; i <=2; i++)
 {
     for (int j = 0; j <=2; j++)
     {
        C[i][j]=A[i][j]+B[i][j];
        printf("%d ",C[i][j]);
     }
     printf("\n");
 }
 
 
return 0;
}