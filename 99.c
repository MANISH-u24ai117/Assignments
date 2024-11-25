#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int vowelCount = 0;

    // Prompt user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert character to lowercase for case-insensitive comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Close the file
    fclose(file);

    // Display the number of vowels
    printf("The number of vowels in the file is: %d\n", vowelCount);

    return 0;
}
