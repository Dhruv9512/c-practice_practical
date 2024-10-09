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
    int temp;
    for (int i = 0; i < n-1; i++)
    {   
        for (int j = 0; j < (n-1)-i; j++)
        {
           if (arr[j] > arr[j+1])
           {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
           }
           
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