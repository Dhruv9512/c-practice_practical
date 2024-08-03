#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int (*operation)(int, int);

    operation = add;
    printf("Addition: %d\n", operation(5, 3));

    operation = multiply;
    printf("Multiplication: %d\n", operation(5, 3));

    operation = subtract;
    printf("Subtraction: %d\n", operation(5, 3));

    return 0;
}
