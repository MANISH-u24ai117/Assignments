#include <stdio.h>
#include <ctype.h> // For isspace()

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;

    // Prompt the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        return 1;
    }

    int inWord = 0; // Flag to track if inside a word
    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        // Check for word boundaries
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    // If the file isn't empty, add the last line
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    // Close the file
    fclose(file);

    // Print the counts
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
