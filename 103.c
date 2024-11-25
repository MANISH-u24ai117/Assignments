#include <stdio.h>

// Macro to find the biggest number between two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Use the MAX macro to find the biggest number
    int largest = MAX(num1, num2);

    // Print the result
    printf("The biggest number is: %d\n", largest);

    return 0;
}
