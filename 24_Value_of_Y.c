#include <stdio.h>

int x, n;
float y;

int main() {
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1 + (float)x / n;
    } else if (n == 3) {
        int power = x; // Initialize power with x
        for (int i = 1; i < n; ++i) {
            power *= x; // Compute x^n
        }
        y = 1 + power;
    } else {
        y = 1 + n * x;
    }

    printf("The value of Y is: %.2f\n", y);

    return 0;
}
