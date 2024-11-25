#include <stdio.h>

void interchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before interchange: x = %d, y = %d\n", x, y);
    interchange(&x, &y);
    printf("After interchange: x = %d, y = %d\n", x, y);
    return 0;
}