
//------------------No argument , No return function to find factorial----------------------


#include <stdio.h>
// ----------------function declaration---------------
void fact();

int main()
{

    //-----------------call function to find it's factorial----------------------
    fact();
    return 0;
}

//-----------------function defintion-------------------------------------
void fact()
{

    int n;
    //-----------------------Take input------------------------------------
    printf("\nEnter a number to find it's factorial:- ");
    scanf("%d", &n);

    //--------------------For loop to find factorial---------------------
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    //------------------print factorial--------------------------------
    printf("\nThe factorial of %d is:-  %d", n, f);
}
