#include<stdio.h>

typedef struct DOB
{
    int dd;
    int mm;
    int yyyy;

}date;

typedef struct student
{
    int id;
    char name[50];
    date doj;
} s;


int main()
{
    s s1[2];

    for (int i = 0; i < 2; i++)
    {
       printf("\nEnter id:-");
       scanf("%d",&s1[i].id);
       printf("\nEnter name:-");
       scanf(" %s",s1[i].name);
       printf("\nEnter doj in form (dd-mm-yyyy):-");
       scanf("%d-%d-%d",&s1[i].doj.dd,&s1[i].doj.mm,&s1[i].doj.yyyy);
    }
    

    for (int i = 0; i < 2; i++)
    {
        printf("\n\nStudent %d ID is %d , Name is %s , and doj is %d-%d-%d :- ",i+1,s1[i].id,s1[i].name,s1[i].doj.dd,s1[i].doj.mm,s1[i].doj.yyyy);
    }
    

return 0;
}