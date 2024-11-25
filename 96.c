#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
    char *strings[MAX_STRINGS];
    char buffer[MAX_STRINGS][MAX_LENGTH];
    int n;

    printf("Enter the number of strings (max %d): ", MAX_STRINGS);
    scanf("%d", &n);
    getchar(); // To consume the newline from previous input

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        fgets(buffer[i], MAX_LENGTH, stdin);

        // Remove the trailing newline character if present
        size_t len = strlen(buffer[i]);
        if (len > 0 && buffer[i][len - 1] == '\n') {
            buffer[i][len - 1] = '\0';
        }

        strings[i] = buffer[i]; // Assign pointer to the string
    }

    // Sort strings in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                // Swap pointers
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }

    printf("\nSorted Strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
