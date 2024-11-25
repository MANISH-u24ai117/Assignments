#include <stdio.h>

void generateFibonacci(int n) {
    int a = 0, b = 1, next,i;
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    generateFibonacci(5);  // Test with N = 5
    generateFibonacci(10); // Test with N = 10
    generateFibonacci(15); // Test with N = 15
    return 0;
}
