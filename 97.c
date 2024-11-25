#include <stdio.h>
#include <ctype.h> // For tolower()
#include<string.h>

int countVowels(char *str) {
    char *ptr = str;
    int count = 0;

    while (*ptr != '\0') {
        char ch = tolower(*ptr); // Convert to lowercase to handle both cases
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        ptr++; // Move the pointer to the next character
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int vowelCount = countVowels(str);

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
