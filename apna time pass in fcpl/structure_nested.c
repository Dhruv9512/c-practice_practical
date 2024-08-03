#include <stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} date;

typedef struct employee
{
    int rollno;
    char name[30];
    int per;
    date doj;

} emp;

int main()
{
    emp e1[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\n Enter roll number of employee:- ");
        scanf("%d", &e1[i].rollno);
        fflush(stdin);
        printf("\n Enter Name of employee:- ");
        gets(e1[i].name);
        printf("\n Enter percentage of employee:- ");
        scanf("%d", &e1[i].per);
        printf("\n Enter Date of employee. Eg:- (dd-mm-yyy):- ");
        scanf("%d - %d - %d", &e1[i].doj.dd, &e1[i].doj.mm, &e1[i].doj.yyyy);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Employee %d Name is %s , Roll number is %d , Percentage is %d and Daate is %d-%d-%d \n", i + 1, e1[i].name, e1[i].rollno, e1[i].per, e1[i].doj.dd, e1[i].doj.mm, e1[i].doj.yyyy);
    }

    return 0;
}