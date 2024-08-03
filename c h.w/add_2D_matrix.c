// -----------Addition of 2D array-----------------

#include <stdio.h>
int main()
{
    //-------------Type of matrix------------------
    int n, m;
    printf("\n Enter which type of matrix you want to build. Eg:- 2*2  3*3 :- ");
    scanf("%d %d", &n, &m);

    //----------------------Take input of array 'a'--------------------
    int a[n][m], b[n][m], c[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ans = 0;

            printf("Enter value of array of 'a' row %d and col %d :-\n", i + 1, j + 1);
            scanf("%d", &ans);
            a[i][j] = ans;
        }
        printf("\n");
    }

    printf("\n\n\n");

    //----------------------Take input of array 'b'--------------------

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ans = 0;

            printf("Enter value of array 'b' of row %d and col %d :-\n", i + 1, j + 1);
            scanf("%d", &ans);
            b[i][j] = ans;
        }
        printf("\n");
    }

    printf("\n\n\n");

    //----------------------Print addition of 2 array--------------------

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n\n");
    }

    printf("\n\n\n");
    return 0;
}