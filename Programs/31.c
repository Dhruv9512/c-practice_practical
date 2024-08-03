#include <stdio.h>

struct StateDetails
{
    char state[50];
    int population;
    int literacyRate;
    int perCapitaIncome;
};

int main()
{
    struct StateDetails states[3];

    for (int i = 0; i < 3; ++i)
    {
        printf("Enter details for state %d:\n", i + 1);
        printf("State Name: ");
        scanf("%s", states[i].state);
        printf("Population: ");
        scanf("%d", &states[i].population);
        printf("Literacy Rate: ");
        scanf("%d", &states[i].literacyRate);
        printf("Per Capita Income: ");
        scanf("%d", &states[i].perCapitaIncome);
        printf("\n");
    }

    int maxLiteracyRate = -1;
    int maxLiteracyRateIndex = -1;

    int maxPerCapitaIncome = -1;
    int maxPerCapitaIncomeIndex = -1;

    for (int i = 0; i < 3; ++i)
    {
        if (states[i].literacyRate > maxLiteracyRate)
        {
            maxLiteracyRate = states[i].literacyRate;
            maxLiteracyRateIndex = i;
        }

        if (states[i].perCapitaIncome > maxPerCapitaIncome)
        {
            maxPerCapitaIncome = states[i].perCapitaIncome;
            maxPerCapitaIncomeIndex = i;
        }
    }

    printf("State with the Highest Literacy Rate: %s\n", states[maxLiteracyRateIndex].state);
    printf("State with the Highest Per Capita Income: %s\n", states[maxPerCapitaIncomeIndex].state);

    return 0;
}
