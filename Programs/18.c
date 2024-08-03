#include <stdio.h>

int main() {
    int number;
    int *ptr = &number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Square: %d\n", (*ptr) * (*ptr));
    printf("Cube: %d\n", (*ptr) * (*ptr) * (*ptr));
    return 0; 
}
