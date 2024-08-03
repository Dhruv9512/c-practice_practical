#include<stdio.h>
int main()
{   int sum1=0,sum2=0,ans;
 int oe[5];
 printf("Enter 5  number:\n");
 for (int i = 0; i <=4; i++)
 {
    printf("Number %d:",i+1);
     scanf("%d",&oe[i]);
 }   
   
   for (int i = 0; i <=4; i++)
 {
    if (oe[i]%2==0)
    {
      sum1=sum1+oe[i];
    }
    else{
      sum2=sum2+oe[i];
    }
 }   
   printf("The sum of even number is:%d\n",sum1);
   printf("The sum of odd number is:%d\n1",sum2);
   ans=sum1+sum2;
   printf("The sum of odd and even number is:%d",ans);


    
return 0;
}