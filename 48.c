#include <stdio.h>

int main() {
    // Loop through rows from 1 to 5
    for (int i = 1; i <= 5; i++) {
        // Print leading spaces
        for (int j = 5; j > i; j--) {
            printf(" ");
        }
        // Print numbers from 1 to i
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // Print a newline after each row
        printf("\n");
    }

    return 0;
}