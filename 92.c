#include <stdio.h>

int main() {
    int n;  // Number of integers
    int largest;  // Variable to store the largest number

    // Prompt the user to enter the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];  // Array to store the integers

    // Prompt the user to enter the integers
    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer to traverse the array
    int *ptr = arr;
    largest = *ptr;  // Assume the first element is the largest

    // Traverse the array to find the largest number
    for (int i = 1; i < n; i++) {
        ptr++;  // Move the pointer to the next element
        if (*ptr > largest) {
            largest = *ptr;  // Update largest if a larger number is found
        }
    }

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
