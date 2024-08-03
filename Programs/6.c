#include <stdio.h>
int main()
{
    int arr[10];
    printf("\nEnter Elements Of An Array :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {

            if (arr[i] > arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The Elements in Array are:\n");
    for (int j = 0; j < 10; j++)
    {
        printf("Element %d: %d\n", j + 1, arr[j]);
    }
}