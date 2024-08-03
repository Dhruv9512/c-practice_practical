#include <stdio.h>
#include <string.h>

struct StateDetails
{
    char state[50];
    int engineeringColleges;
    int medicalColleges;
    int managementColleges;
    int universities;
};

int main()
{
    struct StateDetails states[3];

    for (int i = 0; i < 3; ++i)
    {
        printf("Enter details for state %d:\n", i + 1);
        scanf("%s %d %d %d %d", states[i].state,
              &states[i].engineeringColleges,
              &states[i].medicalColleges,
              &states[i].managementColleges,
              &states[i].universities);
        printf("\n");
    }

    int maxColleges = 0;
    char maxState[50];

    for (int i = 0; i < 3; ++i)
    {
        int totalColleges = states[i].engineeringColleges +
                            states[i].medicalColleges +
                            states[i].managementColleges +
                            states[i].universities;

        printf("\nState: %s\n", states[i].state);
        printf("Total Colleges: %d\n", totalColleges);

        if (totalColleges > maxColleges)
        {
            maxColleges = totalColleges;
            strcpy(maxState, states[i].state);
        }
    }

    printf("\nState with the Highest Number of Colleges: %s\n", maxState);

    return 0;
}
