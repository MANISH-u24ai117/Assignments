#include <stdio.h>

int num, reversedNum = 0, rem;

int main() {
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num /= 10;
    }

    printf("Reversed number is: %d\n", reversedNum);

    return 0;
}
