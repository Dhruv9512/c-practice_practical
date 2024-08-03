#include<stdio.h>
int main()
{
  char n[2][15];
  for (int i = 0; i < 2; i++)
  {
       scanf("%s",n[i]);
  }
  for (int i = 0; i < 2; i++)
  {
       printf("%s",n[i]);
  }
  
  

return 0;
}