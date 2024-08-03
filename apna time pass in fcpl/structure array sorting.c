#include <stdio.h>

struct date
{
    int d, m, y;
};

// void sortingDOB(struct date *d1[4])
// {
//     struct date temp;
//     for (int i = 0; i <= 3; i++)

//     {
//         if (*d1[i] > *d1[i + 1])
//         {
//             temp = *d1[i];
//             *d1[i] = *d1[i + 1];
//             *d1[i + 1] = temp;
//         }
//     }
// }
int main()
{
    int i;
    struct date DOB[4];
    //  Input date of birth from user
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the birth date of %d student:\n", i + 1);
        printf("Eg:-  28/11/1999\n");
        scanf("%d/%d/%d", &DOB[i].d, &DOB[i].m, &DOB[i].y);
    }

    // sorting the date of birth function
    // for (int j = 0; j <= 4; j++)
    // {
    //     sortingDOB(&DOB[j]);
    // }

    // sorting the date of birth function

    struct date temp;
    for (int i = 0; i < 3; i++)

    {
        if ( DOB[i].y > DOB[i + 1].y)
        {
            temp = DOB[i];
            DOB[i] = DOB[i + 1];
            DOB[i + 1] = temp;
        }
        
            if(DOB[i].y==DOB[i+1].y){
                if (DOB[i].m>DOB[i+1].m)
                {
                temp = DOB[i];
                DOB[i] = DOB[i + 1];
                DOB[i + 1] = temp;
                    
                }
                
            }
            
            if ((DOB[i].y&&DOB[i+1].y)||(DOB[i].m&&DOB[i+1].m))
            {
                if (DOB[i].d>DOB[i+1].d)
                {
                    temp = DOB[i];
                    DOB[i] = DOB[i + 1];
                    DOB[i + 1] = temp;
                }
                
            }
            
        
    }

    // print the date stracture array
    printf("Date of birth of 5 student is: ");
    for (int j = 0; j <= 4; j++)
    {
        printf("%d-%d-%d", DOB[j].d, DOB[j].m, DOB[j].y);
    }

    return 0;
}