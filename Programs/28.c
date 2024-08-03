#include <stdio.h>
struct Hotel
{
    char name[100];
    char address[100];
    int grade;
    float roomCharges;
    int numberOfRooms;
};
void AffordableHotels(struct Hotel hotels[], int size, float maxRoomCharges)
{
    printf("Affordable Hotels with Room Charges Less Than %.2f:\n", maxRoomCharges);
    for (int i = 0; i < size; i++)
    {
        if (hotels[i].roomCharges < maxRoomCharges)
        {
            printf("Hotel Name: %s\n", hotels[i].name);
            printf("Address: %s\n", hotels[i].address);
            printf("Grade: %d\n", hotels[i].grade);
            printf("Room Charges: %.2f\n", hotels[i].roomCharges);
            printf("Number of Rooms: %d\n", hotels[i].numberOfRooms);
            printf("\n");
        }
    }
}

int main()
{
    struct Hotel hotels[3] = {
        {"Hotel 1", "Mumbai", 3, 800.50, 50},
        {"Hotel 2", "Goa", 4, 1200.75, 80},
        {"Hotel 3", "Ahmedabad", 5, 600.25, 40}};
    printf("All Hotel Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Hotel %d:\n", i + 1);
        printf("Hotel Name: %s\n", hotels[i].name);
        printf("Address: %s\n", hotels[i].address);
        printf("Grade: %d\n", hotels[i].grade);
        printf("Room Charges: %.2f\n", hotels[i].roomCharges);
        printf("Number of Rooms: %d\n", hotels[i].numberOfRooms);
        printf("\n");
    }
    float maxCharges;
    printf("Enter the maximum room charges: ");
    scanf("%f", &maxCharges);
    AffordableHotels(hotels, 3, maxCharges);
    return 0;
}
