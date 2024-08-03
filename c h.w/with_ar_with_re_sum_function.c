//----------------------With argument , with return , to do sum of 2 square root------------

#include <stdio.h>
#include <math.h>

//------function declaration-----------
float sum(int, int);
int main()
{
    //-----------Take input ------------------
    int a, b;
    printf("\nEnter first number :- ");
    scanf("%d", &a);

    printf("\nEnter second number :- ");
    scanf("%d", &b);

    //------------Function call----------
    float ans = sum(a, b);

    // -------print factorial----------
    printf("The sum of square %d and square %d is:- %0.1f", a, b, ans);
    return 0;
}

//------function defintion---------------
float sum(int a, int b)
{
    return sqrt(a) + sqrt(b);
}