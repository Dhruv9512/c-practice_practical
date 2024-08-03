#include <stdio.h>
int main()
{    int i,j,k,m;
    char a[90];
    gets(a);

    j=0;
    while (a[j]==' ')
    {
        j++;
    }
    int count = 1;

    for (i = j; a[i]; i++)
    {
        if (a[i]==' ')
        {
            count++;
        }
    }
    
   m=i-1;
   int v=0;
   while (a[m]==' ')
   {
    m--;
    v++;
   }
   count-=v;

    int b=0;
    for (k= j; k<=m-1; k++)
    {    
        if (a[k]==' '&&a[k+1]==' ')
        {
            b++;
        }
       
        
    }
    
     count-=b;
    
    

   
   
    
    
    
    printf("The number of words in this string is:%d", count);

    return 0;
}
