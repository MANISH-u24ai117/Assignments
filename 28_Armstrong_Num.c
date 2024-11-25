#include <stdio.h>

int num, originalNum, r, n = 0;
int result = 0;

int main() {
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    while (originalNum != 0) {
        r = originalNum % 10;
        int power = 1;
        for (int i = 0; i < n; ++i) {
            power *= r;
        }
        result += power;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
