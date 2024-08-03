#include <stdio.h>
int main()
{

    int i = 1, num, temp1, temp2, n = 0, a, b, k;
    printf("Enter a number:");
    scanf(" %d", &num);
    a = num;
    while (a != 0)
    {
        n++;
        a = a / 10;
    }
    b = n;
    for (k = 1; k <= n / 2; k++)
    {
        temp1 = num % 10;

        a = num;
        for (int j = b; j >= i; j--)
        {
            temp2 = a % 10;
            a = a / 10;
        }

        if (temp1 != temp2)
        {
            break;
        }

        num = num / 10;
        b--;
        i++;
    }

    if (k - 1 == n / 2)
    {
        printf("Number is palintrome");
    }
    else
    {
        printf("Number is not palintrome");
    }

    return 0;
}