#include <stdio.h>

int q[100], n, x, f = -1, r = -1;

void start();
void enqueuing();
void dequeuing();
void display();
int main()
{
    printf("Enter length of queue: ");
    scanf("%d", &n);

    printf("\nOperations to perform\n-------------------\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    start();

    return 0;
}

void start()
{
    int c;
    while (1)
    {
        printf("\nEnter operation: ");
        scanf("%d", &c);

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
            return;
        default:
            printf("Enter a valid operation.");
            break;
        }
    }
}

void enqueuing()
{

    if (((r + 1) % n) == f)
    {
        printf("\nq is overflow.");
        start();
    }
    else
    {
        printf("Enter value to insert in q:- ");
        scanf("%d", &x);

        r = (r + 1) % n;
        if (f == -1)
        {
            f = 0;
        }
        q[r] = x;
        start();
    }
}

void dequeuing()
{
    if (f == -1)
    {
        printf("Queue is empty.\n");
        start();
    }
    else
    {
        x = q[f];
        printf("The deleted element is:- %d", x);
        f = (f + 1) % n;
        if ((r == (f - 1 + n) % n))
        {
            f = r = -1;
            start();
        }
    }
}

void display()
{
    if (f == -1)
    {
        printf("Queue is empty.\n");
        start();
    }
    else
    {
        printf("The queue is: ");
        if (r >= f)
        {
            for (int i = f; i <= r; i++)
            {
                printf("%d ", q[i]);
            }
        }
        else
        {
            for (int i = f; i < n; i++)
            {
                printf("%d ", q[i]);
            }
            for (int i = 0; i <= r; i++)
            {
                printf("%d ", q[i]);
            }
        }
        printf("\n");
    }
}
