#include <stdio.h>

int main() {
    char str[100];  // Array to store the input string
    char *ptr;      // Pointer to traverse the string
    int count = 0;  // Variable to count the words
    int in_word = 0;  // Flag to check if we are inside a word

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string

    // Initialize the pointer to the start of the string
    ptr = str;

    // Traverse the string using the pointer
    while (*ptr != '\0') {
        if (*ptr != ' ' && *ptr != '\t' && *ptr != '\n') {
            // If we encounter a non-space, non-tab, non-newline character
            if (in_word == 0) {
                count++;  // Increment the word count
                in_word = 1;  // Set flag to indicate we're inside a word
            }
        } else {
            in_word = 0;  // Reset the flag when a space is encountered
        }
        ptr++;  // Move the pointer to the next character
    }

    // Display the word count
    printf("The number of words in the string is: %d\n", count);

    return 0;
}
