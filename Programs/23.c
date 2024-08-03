#include <stdio.h>
struct Personal
{
    char personName[50];
    char dateOfJoining[20];
    float salary;
};

int main()
{
    struct Personal employee;
    printf("Enter person name: ");
    scanf("%s", employee.personName);
    printf("Enter date of joining: ");
    scanf("%s", employee.dateOfJoining);
    printf("Enter salary: ");
    scanf("%f", &employee.salary);
    printf("\nPerson Information:\n");
    printf("Person Name: %s\n", employee.personName);
    printf("Date of Joining: %s\n", employee.dateOfJoining);
    printf("Salary: %.2f\n", employee.salary);
    return 0;
}
