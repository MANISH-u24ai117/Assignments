#include <stdio.h>

int main() {
    int n, max1, max2, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("At least 2 elements are required.\n");
        return 0;
    }
    
    printf("Enter the first number: ");
    scanf("%d", &num);
    max1 = num;
    max2 = -2147483648;  // Smallest int value
    
    for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num != max1) {
            max2 = num;
        }
    }
    
    printf("Maximum: %d\n", max1);
    printf("Second Maximum: %d\n", max2);
    return 0;
}