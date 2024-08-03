//-----------------------No argument , With return , to do dum of 2 number---------------------------------
#include <stdio.h>

// ---------------------Function declaration -----------------------------------
long fact();
int main()
{
    //---------------------call function-----------------
    long ans = fact();

    // ---------------------print sum of 2 number ------------------
    printf("The sum is:- %ld", ans);
    return 0;
}

//--------------Function defintion---------------
long fact()
{

    //----------------Take input------------------
    long a, b;
    printf("Enter first number:- ");
    scanf("%ld", &a);

    printf("Enter first number:- ");
    scanf("%ld", &b);

    return a + b;
}
