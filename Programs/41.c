#include <stdio.h>
#include <string.h>
struct Person
{
    char name[50];
    char surname[50];
    char city[50];
    int phoneNumber;
};

int main()
{
    FILE *file;
    struct Person person;
    char cityName[50];
    file = fopen("dictionary.dat", "wb");
    if (file == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    struct Person persons[] = {
        {"Mansi","Patel","Ahmedabad",87961313},
        {"Tanay", "Vyas", "Ahmedabad", 1234567890},
        {"Jay", "Patel", "Mumbai", 987653210},
        {"Rutvik", "Chauhan", "Pune", 551234567}};
    fwrite(persons, sizeof(struct Person), sizeof(persons) / sizeof(struct Person), file);
    fclose(file);
    printf("Enter the city to search: ");
    scanf("%s", cityName);

    file = fopen("dictionary.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("\nDetails of persons in %s:\n", cityName);
    while (fread(&person, sizeof(struct Person), 1, file) == 1)
    {
        if (strcmp(person.city, cityName) == 0)
        {
            printf("Name: %s %s\n", person.name, person.surname);
            printf("City: %s\n", person.city);
            printf("Phone Number: %d\n", person.phoneNumber);
            printf("\n");
        }
    }
    fclose(file);
    return 0;
}
