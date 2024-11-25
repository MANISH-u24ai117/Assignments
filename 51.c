#include<stdio.h>

int main() {
    int N, i, j;

    // Prompt user for the number of rows (assuming square matrix)
    printf("Enter the number of rows/columns for the pattern: ");
    scanf("%d", &N);

    // Outer loop for each row
    for (i = 0; i < N; i++) {
        // Inner loop for each column
        for (j = 0; j < N; j++) {
            if (i == j) {
                printf("1");  // Print 1 on the diagonal
            } else {
                printf("0");  // Print 0 elsewhere
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
