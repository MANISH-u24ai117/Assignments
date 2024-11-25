#include <stdio.h>

int n, i;
int sumOdd = 0, sumEven = 0;

int main() {
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    printf("Sum of even numbers between 1 and %d is: %d\n", n, sumEven);
    printf("Sum of odd numbers between 1 and %d is: %d\n", n, sumOdd);

    return 0;
}
