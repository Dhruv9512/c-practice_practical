#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < size; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }
    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
