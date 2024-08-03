#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter length of columns in array:- \n");
    scanf("%d", &n);
    printf("Enter length of rows in array:- \n");
    scanf("%d", &m);
    int a[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d row and %d column value of array:- ", i + 1, j + 1);
            scanf("%d", &a[j][i]);
        }
    }

    printf("\n\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}