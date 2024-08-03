#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, m, l;
    char a[100], b[100];
    gets(a);

    j = 0;
    while (a[j] == ' ')
    {
        j++;
    }

    for (l = 0; a[l]; l++)
        ;

    m = l - 1;
    while (a[m] == ' ')
    {
        m--;
    }

    int co1 = 0;
    for (i = m; i >= j; i--)
    {
        if (a[i] == ' ')
        {
            for (k = i + 1; k <= m; k++)
            {
                if (a[k] == ' ')
                {
                    break;
                }

                b[co1] = a[k];
                co1++;
            }

            b[co1] = ' ';
            co1++;
        }

        if (i == j)
        {
            for (k = i; k <= m; k++)
            {
                if (a[k] == ' ')
                {
                    break;
                }
                b[co1] = a[k];
                co1++;
            }

            b[co1] = ' ';
            co1++;
            
            
        }
    }

    puts(b);

    return 0;
}