#include <stdio.h>
int *input_arr(int *a, int n);
void print_arr(int *a, int n);
void insert(int p, int e, int *a, int n);
int main()
{
    int a[40], n;
    printf("Enter No. of element in array :- ");
    scanf("%d", &n);

    //-------- input_arr function----------
    input_arr(a, n);

    int p, e;
    printf("Enter position:- ");
    scanf("%d", &p);
    printf("Enter element:- ");
    scanf("%d", &e);
    //------------ insert function -----------
    insert(p, e, a, n);

    //----------- print array -------------
    print_arr(a, n);
    return 0;
}

//--------------- input array from user function -----------------
int *input_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d value of array:- ", i + 1);
        scanf("%d", &a[i]);
    }

    return a;
}

//---------------- inserting function ---------------------
void insert(int p, int e, int *a, int n)
{
    for (int i = n - 1; i < p - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[p - 1] = e;
}

//----------- print array function -------------------------
void print_arr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}