#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the string:");
    char a[30];
    gets(a);
    int i, j, count = 0;
    printf("%d\n", strlen(a));
    for (j = 0; a[j]; j++)
        if (a[j] == ' ')
        {
            break;
        }

    printf("%d\n", j);
    for (i = 0; i<j/2; i++)
    {
        if (a[i] == ' ')
        {
            break;
        }

        else if (a[i] == a[j - i - 1])
        {
            count++;
        }
    }
      printf("The string has");
    if (count == i)
    {
        printf(" palindron word");
    }
    else
    {
        printf(" no palindron word");
    }

    return 0;
}