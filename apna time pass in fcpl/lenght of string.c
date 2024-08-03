#include <stdio.h>
#include <string.h>
int main()
{
  int l1, i,j;
  char a[90],b;

  printf("Enter your name :");
 fgets(a,90,stdin);
  l1 = strlen(a);
  printf("Lenght of your name is %d\n:", l1);
 
  for (i = 0;i< l1/2; i++)
  {
    b=a[i];
    a[i]=a[l1-i-1];
    a[l1-i-1]=b;
  }
  printf("%s\n", a);
  return 0;
}