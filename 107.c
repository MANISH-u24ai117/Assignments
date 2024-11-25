#include <stdio.h>
#include <math.h>

// Function to flip the last N digits of a number
int flip(int num, int n) {
    // Calculate the divisor to isolate the last N digits
    int divisor = pow(10, n);

    // Extract the last N digits
    int lastNDigits = num % divisor;

    // Flip the last N digits
    int flipped = 0;
    while (lastNDigits > 0) {
        flipped = flipped * 10 + (lastNDigits % 10);
        lastNDigits /= 10;
    }

    // Remove the last N digits from the original number
    num /= divisor;

    // Add the flipped last N digits to the remaining number
    return num * divisor + flipped;
}

int main() {
    int num, n;

    // Input the number and number of digits to flip
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    // Call the flip function and print the result
    int result = flip(num, n);
    printf("Result after flipping the last %d digits: %d\n", n, result);

    return 0;
}
