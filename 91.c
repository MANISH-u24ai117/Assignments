#include <stdio.h>

int main() {
    int num;          // Variable to store the entered number
    int *ptr = &num;  // Pointer to the entered number
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate the square and cube using the pointer
    int square = (*ptr) * (*ptr);
    int cube = (*ptr) * (*ptr) * (*ptr);
    
    // Display the results
    printf("The square of %d is: %d\n", *ptr, square);
    printf("The cube of %d is: %d\n", *ptr, cube);

    return 0;
}
