#include<stdio.h>
int main()
{   int i;
    printf("Enter your name:");
   char a[90];
   gets(a);
  
  for ( i = 0; i <a[i]; i++)
  {
       if(a[i]>='a'&&a[i]<='z'){
          a[i]=a[i]-32;
       }
  }
    printf("%s",a);
       
  



return 0;
}