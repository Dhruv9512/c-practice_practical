#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Maximum of %d and %d is: %d\n", a, b, MAX(a, b));
    float c, d;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &c, &d);
    printf("Maximum of %.2f and %.2f is: %.2f\n", c, d, MAX(c, d));
    return 0;
}
