#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter First Variable: ");
    scanf("%d", &a);

    printf("Enter Second Variable: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
}