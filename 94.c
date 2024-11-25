#include <stdio.h>
#include <string.h>

void reverseCopy(char *source, char *destination) {
    char *start = source;
    char *end = source + strlen(source) - 1;

    // Copy characters in reverse order
    while (end >= start) {
        *destination = *end;
        destination++;
        end--;
    }

    *destination = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Remove the trailing newline character if present
    size_t len = strlen(source);
    if (len > 0 && source[len - 1] == '\n') {
        source[len - 1] = '\0';
    }

    reverseCopy(source, destination);

    printf("Original string: %s\n", source);
    printf("Reversed string: %s\n", destination);

    return 0;
}
