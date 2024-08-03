#include<stdio.h>
struct State
{
    char statename[50];
    int num;
    int population;
};
int main()
{
    struct State s1;
    printf("Enter the State Name:");
    scanf("%s",s1.statename);
    printf("Enter the numebr of district in %s State:",s1.statename);
    scanf("%d",&s1.num);
    printf("Enter the total population:");
    scanf("%d",&s1.population);
    printf("State Name: %s\n",s1.statename);
    printf("Number of Districts: %d\n",s1.num);
    printf("Number of population: %d\n",s1.population);
    return 0;
}