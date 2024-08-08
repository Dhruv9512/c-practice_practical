#include <stdio.h>
int q[100], n, x, f = -1, r = -1, c;

// ------------------------------------ Function defination ------------------------
void enqueuing()
{
    if (((r + 1) % n) == f)
    {
        printf("q is overflow.");
    }
    else
    {
        r = (r + 1) % n;
        printf("Enter value to insert in q:- ");
        scanf("%d", &q[r]);
        printf("%d is Inserted.", q[r]);
        if (f == -1)
        {
            f = 0;
        }
    }
}
void dequeuing()
{
    if (f == -1)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("The deleted element is:- %d", q[f]);
        f = (f + 1) % n;
        if ((r == (f - 1 + n) % n))
        {
            f = r = -1;
        }
    }
}
void display()
{
    if (f == -1)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("The queue is:- ");
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
    }
}
int main()
{
    printf("Enter length of queue:- ");
    scanf("%d", &n);

    printf("\nOperations to perform\n------------------------\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");

    while (1)
    {
        printf("\n\nEnter operation:- ");
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
            return 0;
        default:
            printf("Enter a valid operation.");
            break;
        }
    }
}