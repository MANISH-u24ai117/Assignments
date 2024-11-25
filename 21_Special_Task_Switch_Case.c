#include <stdio.h>

int main() {
    char choice;
    double num1, num2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Choose an operation: \n'a' for addition\n's' for subtraction\n'm' for multiplication\n'd' for division\n");
    scanf(" %c", &choice);

    switch (choice) {
        case 'a':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case 's':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case 'm':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case 'd':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
