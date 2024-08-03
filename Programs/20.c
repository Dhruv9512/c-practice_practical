#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main()
{
    printf("Value of PI: %f\n", PI);
    int num = 5;
    printf("Square of %d: %d\n", num, SQUARE(num));
    return 0;
}
