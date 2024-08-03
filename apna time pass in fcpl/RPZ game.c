#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void result(char p, char c)
{
    if (((p == 'P' || p == 'p') && c == 'R') || ((p == 'R' || p == 'r') && c == 'Z') || ((p == 'Z' || p == 'z') && c == 'P'))
    {

        printf("You win\n");
        printf("You choss:- %c and computer choss %c.\n", p, c);
    }

    else if (((p == 'P' || p == 'p') && c == 'Z') || ((p == 'R' || p == 'r') && c == 'P') || ((p == 'Z' || p == 'z') && c == 'R'))
    {
        printf("You loss\n");
        printf("You choss:- %c and computer choss %c.\n", p, c);
    }

    else if (((p == 'r' || p == 'R') && c == 'R') || ((p == 'p' || p == 'P') && c == 'P') || ((p == 'z' || p == 'Z') && c == 'Z'))
    {
        printf("It's draw\n");
        printf("You choss:- %c and computer choss %c.\n", p, c);
    }
    printf("\n\n");
    printf("Click enter to 'Reload the game':-");
    getch();
    system("cls");
}

int userinput()
{
    char a;
    printf("Enter:-\nR for rock\nP for paper\nZ for scissor:-\n");
    scanf(" %c", &a);
    system("cls");
    if (a == 'e' || a == 'E')
    {
        printf("\t\tThank you for plying.");
        exit(a);
    }
    return a;
}

int computerinput()
{
    char a;
    int temp;
    srand(time(NULL));
    temp = rand() % 10;
    if (temp >= 0 && temp <= 3)
    {
        a = 'R';
    }

    else if (temp >= 4 && temp <= 6)
    {
        a = 'P';
    }

    else if (temp >= 7 && temp <= 9)
    {
        a = 'Z';
    }
    printf("\n\n");
    return a;
}
void startgame()
{
    char player = userinput();
    char computer = computerinput();
    result(player, computer);

    printf("\n\n");
}

int main()
{
    char temp;
    printf("\n\n\n\t* Enter 's' to start the game.\n");
    printf("\t* Enter 'e' to exit the game.\n");
    scanf(" %c", &temp);
    system("cls");
    while (temp == 's' || temp == 's')
    {
        //--------- start game--------------
        startgame();
    }
    return 0;
}