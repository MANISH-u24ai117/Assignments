#include <stdio.h>

int num, originalNum, reversedNum = 0, rem;

int main() {
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum)
        printf("%d is a palindrom.\n", originalNum);
    else
        printf("%d is not a palindrom.\n", originalNum);

    return 0;
}
