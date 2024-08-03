#include<stdio.h>
#include<string.h>
int main()
{    int i,count=0;
    char a[100];
    gets(a);


     
    for ( i = 0; a[i]; i++)
    {
          if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
          {
             count++;
          }
          if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
          {
             count++;
          }
          
    }
     
     printf("The total vowels in string is:%d",count);
return 0;
}