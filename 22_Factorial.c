#include <stdio.h>

int num, i;
double factorial = 1;

int main() {
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %.0lf\n", num, factorial);
    }

    return 0;
}
