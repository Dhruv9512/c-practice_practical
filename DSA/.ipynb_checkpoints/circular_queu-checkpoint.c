#include <stdio.h>
int q[100], n, x, f = 0, r = 0;

void start();
void enqueuing();
void dequeuing();
void display();
int main()
{

    printf("\nEnter length of q:- ");
    scanf("%d", &n);

    printf("\n\nOperation to perform\n-------------------\n1. For enqueuing.\n2. For dequeuing.\n3.For display\n4.Exit.\n\n");
    start();

    return 0;
}

void start()
{

    int c;
    printf("\nEnter operation:- ");
    scanf("%d", &c);

    while (c != 4)
    {
        switch (c)
        {
        case 1:
            enqueuing();
            break;
        case 2:
            dequeuing();
            break;
        case 3:
            display();
            break;
        case 4:
            break;

        default:
            printf("\nEnter valid operation.");
            break;
        }
    }
}

void enqueuing()
{
    if (((r + 1) % n )== f)
    {
        printf("\nq is overflow.");
        start();
    }
    else if (r == f)
    {
        r = (r + 1) % n;
        printf("\nEnter a value to insert in q:- ");
        scanf("%d", &x);
        q[r] = x;
        f = (f + 1) % n;
        start();
    }
    else
    {
        printf("\nEnter a value to insert in q:- ");
        scanf("%d", &x);
        q[r] = x;
        r = (r + 1) % n;
        start();
    }
}

void dequeuing()
{
    if (f == (r + 1) % n)
    {
        printf("\n q is underflow.");
        start();
    }
    else
    {
        x = q[f];
        printf("\nDelete element:- %d", x);
        f = (f + 1) % n;
        start();
    }
}

void display()
{
    if (f == r)
    {
        printf("\nq is empty.");
        start();
    }
    else
    {
        if (f < r)
        {
            printf("\nThe q is:- ");
            for (int i = f; i <= r; i = (i + 1) % n)
            {
                printf("%d ", q[i]);
            }
        }
        else{
            printf("\nThe q is:- ");
            for (int i = r; i <= f; i = (i + 1) % n)
            {
                printf("%d ", q[i]);
            }
        }
    }
}