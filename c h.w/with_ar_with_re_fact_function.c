//----------------------With argument , with return , to find factorial------------

#include <stdio.h>

//------function declaration-----------
long fact(int);
int main()
{
    //-----------Take input ------------------
    int n;
    printf("\nEnter number to find it's factorial :- ");
    scanf("%d", &n);

    //------------Function call----------
    long ans = fact(n);

    // -------print factorial----------
    printf("The factorial of %d is:- %ld", n, ans);
    return 0;
}

//------function defintion---------------
long fact(int n)
{

    //------------    loop------------
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}