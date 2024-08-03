#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter a length of first array:- ");
    scanf("%d", &m);
    printf("Enter a length of second array:- ");
    scanf("%d", &n);
    printf("\n\n");

    int l = m + n;
    int a[m], b[n], c[l];

    //----------------  Input first array --------------------
    for (int i = 0; i < m; i++)
    {
        printf("Enter %d value of first array:- ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\n");

    //-----------------  Input second array --------------------
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d value of second array:- ", i + 1);
        scanf("%d", &b[i]);
    }

    //------------------- Marge array ------------------------
    for (int i = 0; i < l; i++)
    {
        if (i < m)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - m];
        }
    }
    printf("\n\n");

    //----------------------- Print array -------------------------
    for (int i = 0; i < l; i++)
    {
        printf("Array %d :- %d \n", i + 1, c[i]);
    }

    return 0;
}