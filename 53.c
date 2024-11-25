#include <stdio.h>

int main() {
    int i, j, space, rows;

    // Prompt user for the number of rows (half of the diamond)
    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &rows);

    // Upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    // Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
