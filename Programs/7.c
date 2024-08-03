#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Size of an Array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter Elements Of An Array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            if (arr[i] < arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The Elements in Array are:\n");
    for (int j = 0; j < n; j++)
    {
        printf("Element %d: %d\n", j + 1, arr[j]);
    }
}