#include <stdio.h>
void swap(int *x, int *y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
}
int main()
{
    int a = 20, b = 10;
    int *p = &a, *q = &b;
    swap(p, q);

    printf("%d %d", a, b);
    return 0;
}