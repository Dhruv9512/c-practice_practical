#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i <= n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in reverse order:\n");
    int *ptr = &arr[n]; 

    for (int i = n ; i >= 0; i--) 
    {
        printf("%d ", *ptr);
        ptr--; 
    }

    printf("\n");

    return 0;
}
