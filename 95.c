#include <stdio.h>
#include<string.h>
#define MAX_EMPLOYEES 50

// Structure definition
struct Employee {
    int empNumber;
    char empName[100];
    float basicPay;
};

int main() {
    struct Employee employ[MAX_EMPLOYEES]; // Array of 50 employees
    struct Employee *ptr;                 // Structure pointer
    int n, i;

    printf("Enter the number of employees (max %d): ", MAX_EMPLOYEES);
    scanf("%d", &n);

    if (n > MAX_EMPLOYEES) {
        printf("The number of employees cannot exceed %d.\n", MAX_EMPLOYEES);
        return 1;
    }

    ptr = employ; // Pointing to the array of employees

    // Reading employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &(ptr + i)->empNumber);

        printf("Employee Name: ");
        getchar(); // To consume newline from previous input
        fgets((ptr + i)->empName, sizeof((ptr + i)->empName), stdin);

        // Remove the trailing newline character if present
        size_t len = strlen((ptr + i)->empName);
        if (len > 0 && (ptr + i)->empName[len - 1] == '\n') {
            (ptr + i)->empName[len - 1] = '\0';
        }

        printf("Basic Pay: ");
        scanf("%f", &(ptr + i)->basicPay);
    }

    // Displaying employee details
    printf("\nEmployee Details:\n");
    printf("-------------------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "Emp Number", "Emp Name", "Basic Pay");
    printf("-------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %.2f\n", (ptr + i)->empNumber, (ptr + i)->empName, (ptr + i)->basicPay);
    }

    return 0;
}


