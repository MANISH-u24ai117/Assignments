#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, original = num, digits = 0;
    
    // Find the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}