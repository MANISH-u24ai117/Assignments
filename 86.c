#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The length of the string is %ld\n", strlen(str));
    return 0;
}