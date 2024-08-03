#include<stdio.h>

int main()
{
    int A[3][3],B[3][3],C[3][3];
  printf("Enter 9 number of matrix 1:");
  for (int  i = 0; i <=2; i++)
  {  for(int j=0;j<=2;j++){
        scanf("%d",&A[i][j]);
       
     }
      
  }

   for (int  i = 0; i <=2; i++)
  {    for(int j=0;j<=2;j++){
        scanf("%d",&B[i][j]);
       
     }  
  }
  printf("Multiplication of 2 matrix is:\n");
  for (int  i = 0; i <=2; i++)
  {
    for(int j=0;j<=2;j++){
     int sum=0;
       for(int k=0;k<=2;k++){
         C[j][i]=A[i][k]*B[k][j];
         sum=sum+C[j][i];
       }
         C[i][j]=sum;
        
     }  
  }
    
   for (int  i = 0; i <=2; i++)
  {    for(int j=0;j<=2;j++){
        printf("%d \t",C[i][j]);
       
     }  
     printf("\n");
  }
  
  
return 0;
}