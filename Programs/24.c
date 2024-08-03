#include <stdio.h>
struct Cricket
{
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

int main()
{
    struct Cricket player;
    printf("Enter player name: ");
    scanf("%s", player.playerName);
    printf("Enter team name: ");
    scanf("%s", player.teamName);
    printf("Enter batting average: ");
    scanf("%f", &player.battingAverage);
    printf("\nCricket Player Information:\n");
    printf("Player Name: %s\n", player.playerName);
    printf("Team Name: %s\n", player.teamName);
    printf("Batting Average: %.2f\n", player.battingAverage);
    return 0;
}
