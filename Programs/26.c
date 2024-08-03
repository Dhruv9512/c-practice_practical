#include <stdio.h>

struct Item
{
    int Item_code;
    char Item_name[50];
    float Price;
};

void increasePrice(struct Item items[], int size)
{
    for (int i = 0; i < size; i++)
    {
        items[i].Price *= 1.10;
    }
}

void displayItemDetails(struct Item item)
{
    printf("Item Code: %d\n", item.Item_code);
    printf("Item Name: %s\n", item.Item_name);
    printf("Price: %.2f\n", item.Price);
    printf("\n");
}

int main()
{
    struct Item items[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details for item %d:\n", i + 1);
        printf("Item Code: ");
        scanf("%d", &items[i].Item_code);
        printf("Item Name: ");
        scanf("%s", items[i].Item_name);
        printf("Price: ");
        scanf("%f", &items[i].Price);
        printf("\n");
    }

    printf("Original Item Details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Item %d:\n", i + 1);
        displayItemDetails(items[i]);
    }

    increasePrice(items, 5);

    printf("Updated Item Details (10%% increase in price):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Item %d:\n", i + 1);
        displayItemDetails(items[i]);
    }

    return 0;
}
