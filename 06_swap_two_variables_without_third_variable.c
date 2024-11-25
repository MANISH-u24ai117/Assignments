#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter First Variable: ");
    scanf("%d", &a);

    printf("Enter Second Variable: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
}