#include<stdio.h>

int g(int gret[],int n){
    int num;
   for (int i = 0; i <n-1; i++)
   {
      if (gret[i]>gret[i+1])
      {
        num=gret[i+1];
        gret[i+1]=gret[i];
        gret[i]=num;
      }
   }
      return gret[n-1];
   
}
int main()
{  int gretest[5],ans;
printf("Enter 5  number:\n");
 for (int i = 0; i <=4; i++)
 {
    printf("Number %d:",i+1);
     scanf("%d",&gretest[i]);
 }   
 ans=g(gretest,5);
   printf("%d",ans);
return 0;
}