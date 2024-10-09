#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int arr[n];


    //  --------- input array -------
    printf("\n\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d value of array:- ",i+1);
        scanf("%d",&arr[i]);
    }
    

// ---------------  main logic-----------
    int temp,min;

    for (int i = 0; i < n-1; i++)
    {   
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min]>arr[j])
            {
                min = j;
            }
            
        }
        if (min!=i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        
        
    }


    // --------- Display-----------

    printf("\n\nThe array is:- ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}