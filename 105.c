#include <stdio.h>
#include <string.h>

// Function to swap two characters using pointers
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to generate permutations using recursion
void generatePermutations(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++) {
        // Swap characters
        swap((str + start), (str + i));
        
        // Recur with the next character
        generatePermutations(str, start + 1, end);
        
        // Backtrack to restore the original string
        swap((str + start), (str + i));
    }
}

int main() {
    char str[50];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    printf("Permutations of the string are:\n");
    generatePermutations(str, 0, length - 1);

    return 0;
}
