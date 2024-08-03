//-----------------------No argument , With return , to do factorial---------------------------------
#include <stdio.h>

// ---------------------Function declaration -----------------------------------
long fact();
int main()
{
    //---------------------call function-----------------
    long ans = fact();

    // ---------------------print Factorial------------------
    printf("The factorial is:- %ld", ans);
    return 0;
}

//--------------Function defintion---------------
long fact()
{

    //----------------Take input------------------
    int n;
    printf("Enter a number to find it's factorial :- ");
    scanf("%d", &n);

    //-----------loop-------------------------
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}