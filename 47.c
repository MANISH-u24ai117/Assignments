#include <stdio.h>

int main() {
    // Loop through rows from 1 to 5
    for (int i = 1; i <= 5; i++) {
        // Loop to print letters from A to the ith letter
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }
        // Print a newline after each row
        printf("\n");
    }

    return 0;
}