#include <stdio.h>
struct Date
{
    int month;
    int day;
};
void displayMonthNames(struct Date date)
{
    switch (date.month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Invalid Month");
    }
}

int main()
{
    struct Date date1, date2;
    printf("Enter the first date (format: mm dd): ");
    scanf("%d %d", &date1.month, &date1.day);
    printf("Enter the second date (format: mm dd): ");
    scanf("%d %d", &date2.month, &date2.day);
    printf("\nMonth Name for the first date: ");
    displayMonthNames(date1);
    printf("\nMonth Name for the second date: ");
    displayMonthNames(date2);
    return 0;
}
