#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

//   ----------picture function------------
void picture(int count)
{
    if (count == 6)
    {

        printf("|-----------------------------\n|                            |\n|                            |\n|                            |\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n\n\n\n");
        printf(" ()\n");
        printf("/|\\ \n |\n/ \\ \n\n");
        printf("Please help me.");
    }
    else if (count == 5)
    {

        printf("|-----------------------------\n|                            |\n|                            |\n|                            |\n|                            ()\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n\n\n\n");
        printf(" ()\n");
        printf("/|\\ \n |\n/ \\ \n\n");
        printf("Please help me.");
    }
    else if (count == 4)
    {

        printf("|-----------------------------\n|                            |\n|                            |\n|                            |\n|                           ()\n|                          /\n| \n|\n|\n|\n|\n|\n|\n|\n|\n\n\n\n");
        printf(" ()\n");
        printf("/|\\ \n |\n/ \\ \n\n");
        printf("Please help me.");
    }
    else if (count == 3)
    {

        printf("|-----------------------------\n|                            |\n|                            |\n|                            |\n|                           ()\n|                          /|\n|                           |\n|\n|\n|\n|\n|\n|\n|\n|\n\n\n\n");
        printf(" ()\n");
        printf("/|\\ \n |\n/ \\ \n\n");
        printf("Please help me.");
    }
    else if (count == 2)
    {

        printf("|-----------------------------\n|                            |\n|                            |\n|                            |\n|                           ()\n|                          /|\\\n|                           |\n|\n|\n|\n|\n|\n|\n|\n|\n\n\n\n");
        printf(" ()\n");
        printf("/|\\ \n |\n/ \\ \n\n");
        printf("Please help me.");
    }

    else if (count == 1)
    {

        printf("|-----------------------------\n|                            |\n|                            |\n|                            |\n|                           ()\n|                          /|\\\n|                           |\n|                          / \n|\n|\n|\n|\n|\n|\n|\n\n\n\n");
        printf(" ()\n");
        printf("/|\\ \n |\n/ \\ \n\n");
        printf("Please help me.");
    }
}
//   ----------to generate words------------
char *words()
{
    int t;
    static char w[10][6] = {"butter", "almond", "potato", "tomato", "burger", "cookie", "grapes", "noodle", "orsnge", "walnut"};
    srand(time(NULL));
    t = rand() % 10;

    return w[t];
}
//    ------start option------
int enter()
{
    int temp;
    printf("Enter:- \n");
    printf("1.  To start game\n2. Get instruction\n3. exit\n");
    scanf("%d", &temp);
    system("cls");
    return temp;
}

// ------------start game------------
void enter1()
{
    
    int c[6];
    //                     -------store the word--------
    char *input = words();
    char inputwords[6];
    for (int q = 0; q <= 5; q++)
    {
        inputwords[q] = *input;
        input = input + 1;
    }
    puts(inputwords);

    //    ----------userinput/ loop part-----------
    int count = 6, loop = 0, i;
    char in;
    char newworld[6];
    //  ----------Give hint ----------
    int k;
    for (k = 0; k < 2; k++)
    {
        if (k == 0)
        {
            newworld[k] = inputwords[k];
            c[k] = k;
        }
        else
        {
            newworld[k + 4] = inputwords[k + 4];
            c[k] = k + 5;
        }
    }

    
    while (count != 0 || loop != 4)
    {
        if (count == 0 || loop == 4)
        {
            break;
        }
        printf("\n\n\n\n\n");
        system("cls");

        //   ----------picture of hangman-----------
        picture(count);

        //    ------------game logic---------

        printf("\n\n\n  You have '%d' chance.\n\n", count);
        printf("Word:-\t");
        for (int j = 0; j < 6; j++)
        {
            if (newworld[j] >= 'a' && newworld[j] <= 'z')
            {
                printf("%c", newworld[j]);
            }
        }

        for (int i = 0; i <= (3 - loop); i++)
        {
            printf("-");
        }

        printf("\n\n");
        printf("Enter a your pridicted charecter:-");
        scanf(" %c", &in);
        if (in >= 'A' && in <= 'Z')
        {
            in = in - 32;
        }
        int j;
        for (i = 1; i < 5; i++)
        {
            for (j = 0; j < 6; j++)
            {
                if (c[j] >= 0 && c[j] <= 5)
                {

                    if (c[j] == i)
                    {

                        break;
                    }
                }
            }
            if (j == 6)
            {
                if (in == inputwords[i])
                {
                    newworld[i] = inputwords[i];
                    loop++;
                    if (i>=1&&i<=4)
                    {
                        c[i]=i;
                    }
                    
                    break;
                }
            }
        }

        if (i == 5)
        {
            count--;
        }
    }
    if (count == 0)
    {     printf("\n\n\n\n\n");
         system("cls");
        printf("|-----------------------------\n|                            |\n|                            |\n|                            |\n|                           ()\n|                          /|\\\n|                           |\n|                          / \\\n|\n|\n|\n|\n|\n|\n|\n\n\n\n");
        printf("\t\t\t\t*****  You loss the game.  \n\n\n");
        printf("\t\t\t\tThank you for playing.");
    }
    else if (loop == 4)
    {   printf("\n\n\n\n\n");
         system("cls");
        printf("\t\t\t\t*****  You Win  the game.  *****\n\n\n");
        printf("\t\t\t\tThank you for playing.");
    }
     getch();
}
                  // ---------- instruction---------
void enter3(int temp)
{
    if (temp == 3)
    {
        system("cls");
        printf("\t\t\t\tThank you for playing.");
        exit(temp);
    }
}
void enter2()
{
    int a;
    printf("\t1. You get 6 chance.\n\t2.You can chose both upper and lower case.\n\n");
    printf("The Rules of the game are as follows:\n\ni. There is given a word with omitted characters and you need to guess the characters to win the game.\n\nii. Only 3 chances are available and if you win the Man survives or Man gets hanged.\n\n");
    printf("\nEnter '1' TO start the game:-\n Enter '3' to exit:-");
    scanf("%d", &a);
    if (a == 1 || a == 1)
    {
        system("cls");
        enter1();
    }
    if (a == 3 || a == 3)
    {
        system("cls");
        enter3(a);
    }
}

int main()
{
    int temp = enter();
    if (temp == 1)
    {
        enter1();
    }
    if (temp == 2)
    {
        enter2();
    }
    if (temp == 3)
    {
        enter3(temp);
    }
    return 0;
}