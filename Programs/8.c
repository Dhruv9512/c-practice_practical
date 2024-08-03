#include <stdio.h>
int main()
{
    int Matrix[3][3];
    printf("Enter the elements of matrix 1 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }
    int Matrix2[3][3];
    printf("Enter the elements of matrix 2 : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &Matrix2[i][j]);
        }
    }
    int Add[3][3];
    printf("Addition of Matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Add[i][j] = Matrix[i][j] + Matrix2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Add[i][j]);
        }
        printf("\n");
    }
    return 0;
}
