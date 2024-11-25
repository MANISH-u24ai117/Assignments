#include <stdio.h>

int main() {
    int numbers[10];
    int odd_count = 0;
    int even_count = 0;

    // Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Check if the number is odd or even and update the counts
        if (numbers[i] % 2 == 0) {
            even_count++; // Increment even count
        } else {
            odd_count++; // Increment odd count
        }
    }

    // Output results
    printf("Total number of even integers: %d\n", even_count);
    printf("Total number of odd integers: %d\n", odd_count);

    return 0;
}
