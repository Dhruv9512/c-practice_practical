#include <stdio.h>

struct Population {
    int Men;
    int Women;
};

struct State {
    char stateName[50];
    struct Population population;
};

int main() {
    struct State state;

    printf("Enter details for a state:\n");
    printf("State Name: ");
    scanf("%s", state.stateName);
    printf("Population of Men: ");
    scanf("%d", &state.population.Men);
    printf("Population of Women: ");
    scanf("%d", &state.population.Women);

    printf("\nState Details:\n");
    printf("State Name: %s\n", state.stateName);
    printf("Population of Men: %d\n", state.population.Men);
    printf("Population of Women: %d\n", state.population.Women);

    return 0;
}