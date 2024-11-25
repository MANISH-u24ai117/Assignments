#include <stdio.h>

int main()
{

    int M, P, C, E;
    float CM;

    // Prompt user for input
    printf("Enter marks in Mathematics (out of 200): ");
    scanf("%d", &M);

    printf("Enter marks in Physics (out of 200): ");
    scanf("%d", &P);

    printf("Enter marks in Chemistry (out of 200): ");
    scanf("%d", &C);

    printf("Enter marks in entrance examination (out of 100): ");
    scanf("%d", &E);

    CM = (M / 2.0) + (P / 2.0) + (C / 2.0) + E;

    printf("The cutoff mark (CM) is: %.2f\n", CM);

    return 0;
}
