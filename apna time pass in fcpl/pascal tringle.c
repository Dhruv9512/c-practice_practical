#include <stdio.h>
void pascal()
{      int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int pas1[n][n];
    int i,j, k,a=1;
    for (i = 0; i < n; i++)
    {  for (k = 0; k < n; k++)
        { 
             if(k==0||k==i){
              pas1[i][k]=a;
             }
             else{
                pas1[i][k]=pas1[i-1][k-1]+pas1[i-1][k];
             }
        }
    }
   
   for (i = 0; i < n; i++)
    {  for (j = 0; j < n-i; j++)
        { 
           printf("  ");
        }
        
        for (k = 0; k <= i; k++)
        { 
           printf("%d   ",pas1[i][k]);
        }
        printf("\n");
             
    }


}
int main()
{
   
     
    pascal();

    return 0;
}