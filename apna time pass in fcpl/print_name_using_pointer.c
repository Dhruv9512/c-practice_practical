#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("\nEnter number of name that you want to write:- ");
    scanf("%d", &n);

    char a[40][100];

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter %d name:-", i + 1);
        scanf(" %s", a[i]);
    }
    

    
    char *ptr; 
    for (int i = 0; i < n; i++)
    {
       ptr=
       a[i];
       puts(ptr);
    }
    return 0;
}