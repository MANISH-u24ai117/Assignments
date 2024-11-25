#include <stdio.h>

int num, sum = 0, rem;

int main() {
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of the digits
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("Sum of the individual digits is: %d\n", sum);

    return 0;
}
