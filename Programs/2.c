#include <stdio.h>
int main() {
    int arr1[50], i, pos, n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    printf("Enter the elements of Array\n");
    for (i = 0; i < n; i++) {
        printf("element  %d : ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("\nInput the position where to delete: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n ; i++) {
        arr1[i] = arr1[i + 1];
    }
    printf("\nNew Array is : ");
    for (i = 0; i < n-1 ; i++) {
        printf("  %d", arr1[i]);
    }
    printf("\n\n");
}