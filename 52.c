#include <stdio.h>

int main() {
    int N, i, j;

    // Prompt user for the number of rows
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &N);

    // Outer loop for each row
    for (i = 1; i <= N; i++) {
        // Print leading spaces
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
