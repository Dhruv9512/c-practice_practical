//-----------------------No argument , With return , to do reverse of digit---------------------------------
#include <stdio.h>

// ---------------------Function declaration -----------------------------------
int reverse();
int main()
{
    //---------------------call function-----------------
    int ans = reverse();

    // ---------------------print number after reverse------------------
    printf("\nNumber after reverse:- %d", ans);
    return 0;
}

//--------------Function defintion---------------
int reverse()
{

    //----------------Take input------------------
    int n;
    printf("\nEnter a number to do reverse:- ");
    scanf("%d", &n);

    //------------print number before reverse---------
    printf("\nNumber before reverse:- %d", n);

    //-----------loop-------------------------
    int ans = 0;
    while (n != 0)
    {
        ans = 10 * ans + (n % 10);
        n /= 10;
    }

    return ans;
}