#include <stdio.h>

int main() {
    char str[100];   // Input string (assume maximum length 100)
    char *ptr = str; // Pointer to the string
    int length_incl_spaces = 0, length_excl_spaces = 0;

    // Get the input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to safely read the string

    // Loop through the string using the pointer and calculate lengths
    while (*ptr != '\0') { // Loop until the null-terminator
        length_incl_spaces++; // Increment length including spaces
        if (*ptr != ' ') {
            length_excl_spaces++; // Increment length excluding spaces
        }
        ptr++; // Move to the next character
    }

    // Output the results
    printf("Length of the string including spaces: %d\n", length_incl_spaces);
    printf("Length of the string excluding spaces: %d\n", length_excl_spaces);

    return 0;
}
