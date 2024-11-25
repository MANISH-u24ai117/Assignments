#include <stdio.h>

// A. Function to copy one string into another
void copyString(char *source, char *destination) {
    while (*source) {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Null-terminate the destination string
}

// B. Function to compare two strings
int compareStrings(char *str1, char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;  // Returns 0 if strings are equal, non-zero if different
}

// C. Function to concatenate two strings
void concatenateStrings(char *str1, char *str2) {
    while (*str1) {
        str1++;  // Move to the end of the first string
    }
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';  // Null-terminate the concatenated string
}

// D. Function to reverse a string
void reverseString(char *str) {
    int length = 0;
    char *start = str, *end;
    while (str[length]) {
        length++;
    }
    end = str + length - 1;  // Point to the last character

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str1[100], str2[100];

    // A. Copy one string into another
    printf("Enter a string: ");
    scanf("%s", str1);
    copyString(str1, str2);
    printf("Copied string: %s\n", str2);

    // B. Compare two strings
    printf("Enter another string to compare: ");
    scanf("%s", str1);
    int result = compareStrings(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // C. Concatenate two strings
    printf("Enter another string to concatenate: ");
    scanf("%s", str2);
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // D. Reverse the string
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}
