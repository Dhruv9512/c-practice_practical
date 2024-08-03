#include <stdio.h>
#include <string.h>
int main()
{
    int num, n, count1 = 0, d, count2 = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    n = num;
    while (n != 0)
    {
        n = n / 10;
        count1++;
    }

    n = num;
    for (int i = 0; i < count1; i++)
    {
        d = n % 10;
        d = d * d * d;
        count2 += d;
        n = n / 10;
    }

    if (count2 == num)
    {
        printf("The %d is armstrong", num);
    }
    else
    {
        printf("The %d is not armstrong", num);
    }

    return 0;
}