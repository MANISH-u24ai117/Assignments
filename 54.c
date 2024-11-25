#include <stdio.h>

int main() {
    int numbers[10]; // Array to hold 10 integers
    int sum = 0;     // Variable to store the sum

    // Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Add each number to the sum
    }

    // Print the sum
    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;
}
