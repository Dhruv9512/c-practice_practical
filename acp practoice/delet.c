#include <stdio.h>
int main()
{

    int a[4];

    for (int i = 0; i < 4; i++)
    {
        printf("\nEntre value of %d:- ", i + 1);
        scanf("%d", &a[i]);
    }

    int e;
    printf("\n location of element:- ");
    scanf("%d", &e);

    for (int i = e - 1; i < 4; i++)
    {
        a[i] = a[i + 1];
    }

    printf("Array after delet:- ");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}