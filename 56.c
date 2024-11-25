#include <stdio.h>

int main() {
    int numbers[10];
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    // Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Check if the number is positive, negative, or zero and update the counts
        if (numbers[i] > 0) {
            positive_count++; // Increment positive count
        } else if (numbers[i] < 0) {
            negative_count++; // Increment negative count
        } else {
            zero_count++; // Increment zero count
        }
    }

    // Output results
    printf("Total number of positive integers: %d\n", positive_count);
    printf("Total number of negative integers: %d\n", negative_count);
    printf("Total number of zeros: %d\n", zero_count);

    return 0;
}
