#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a[10], i, c,j, min;
  printf("Enter minimum range Eg:10,20,30,40.... :");
  scanf("%d", &min);
    srand(time(NULL));
  for (i = 0; i < 10; i++)
  { 
    c = rand() % 10 + min;
    for ( j = 0; j <i; j++)
    {
      if (a[j] == c)
      {
        i--;
        break;

      }
    }
    if (j==i)
    {
      a[i]=c;
    }
    
  }
 for (int j = 0; j < 10; j++)
    {
       printf("%d\n",a[j]);
    }
  return 0;
}