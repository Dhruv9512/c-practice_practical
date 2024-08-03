//------------------No argument , No return function To find sum of 2 number----------------------

#include <stdio.h>
// ----------------function declaration---------------
void sum();

int main()
{

    //-----------------call the function ----------------------
    sum();
    return 0;
}

//-----------------function defintion-------------------------------------
void sum()
{

    int a, b;
    //-----------------------Take input------------------------------------
    printf("\nEnter the first number:- ");
    scanf("%d", &a);

    printf("\nEnter the second number:- ");
    scanf("%d", &b);

    //------------------print sum of 2 number --------------------------------
    int ans = a + b;
    printf("\nThe sum of %d and %d is:- %d", a, b, ans);
}
