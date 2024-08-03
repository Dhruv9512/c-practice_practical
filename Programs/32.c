#include <stdio.h>

struct Employee {
    char employeeName[50];
    float basicPay;
    float dearnessAllowance;
    float houseRent;
    float netSalary;
};

void calculateNetSalary(struct Employee employees[], int size) {
    for (int i = 0; i < size; ++i) {
        employees[i].dearnessAllowance = 0.1 * employees[i].basicPay;
        employees[i].houseRent = 0.05 * employees[i].basicPay;
        employees[i].netSalary = employees[i].basicPay + employees[i].dearnessAllowance - employees[i].houseRent;
    }
}

void sortEmployeesByNetSalary(struct Employee employees[], int size) {
    struct Employee temp;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (employees[j].netSalary < employees[j + 1].netSalary) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

void displayEmployees(struct Employee employees[], int size) {
    printf("Employee Details in Descending Order of Net Salary:\n");
    for (int i = 0; i < size; ++i) {
        printf("Employee Name: %s\n", employees[i].employeeName);
        printf("Basic Pay: %.2f\n", employees[i].basicPay);
        printf("Dearness Allowance: %.2f\n", employees[i].dearnessAllowance);
        printf("House Rent: %.2f\n", employees[i].houseRent);
        printf("Net Salary: %.2f\n", employees[i].netSalary);
        printf("\n");
    }
}

int main() {
    struct Employee employees[5];

    for (int i = 0; i < 5; ++i) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Name: ");
        scanf("%s", employees[i].employeeName);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay);
        printf("\n");
    }

    calculateNetSalary(employees, 5);
    sortEmployeesByNetSalary(employees, 5);
    displayEmployees(employees, 5);

    return 0;
}
