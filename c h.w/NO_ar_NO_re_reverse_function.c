//------------------No argument , No return function to do reverse of digit ----------------------

#include <stdio.h>
// ----------------function declaration---------------
void reverse();

int main()
{

    //-----------------call the function ----------------------
    reverse();
    return 0;
}

//-----------------function defintion-------------------------------------
void reverse()
{

    int n, num;
    //-----------------------Take input------------------------------------
    printf("\nEnter a number to do reverse of digit:- ");
    scanf("%d", &n);
    num = n;
    //--------------------While loop to do reverse ---------------------
    int ans = 0;
    while (n != 0)
    {
        ans = ans * 10 + (n % 10);
        n /= 10;
    }

    //------------------print factorial--------------------------------
    printf("\nNumber before reverse :-%d", num);
    printf("\nNumber after reverse :- %d", ans);
}