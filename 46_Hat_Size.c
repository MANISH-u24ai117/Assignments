#include <stdio.h>
#include <stdbool.h>

// Function to determine the hat size
float determineHatSize(float headCircumference) {
    // US Hat Sizes array corresponding to circumferences
    float hatSizesUS[] = {6.5, 6.625, 6.75, 6.875, 7.0, 7.125, 7.25, 7.375, 7.5, 7.625, 7.75, 7.875};
    float circumferenceUS[] = {20.5, 20.875, 21.25, 21.625, 22.0, 22.375, 22.75, 23.125, 23.5, 23.875, 24.25, 24.625};

    // UK Hat Sizes array corresponding to circumferences
    float hatSizesUK[] = {6.5, 6.625, 6.75, 6.875, 7.0, 7.125, 7.25, 7.375, 7.5, 7.625, 7.75, 7.875};
    float circumferenceUK[] = {20.5, 20.875, 21.25, 21.625, 22.0, 22.375, 22.75, 23.125, 23.5, 23.875, 24.25, 24.625};

    // Check which size fits the given head circumference
    for (int i = 0; i < 12; i++) {
        if (headCircumference >= circumferenceUS[i] && headCircumference < circumferenceUS[i + 1]) {
            printf("Your US hat size is: %.3f\n", hatSizesUS[i]);
            return hatSizesUS[i];  // or return UK size if you prefer
        }
    }

    // If head circumference is out of range
    printf("Sorry, we don't have a hat size for this head circumference.\n");
    return -1;
}

int main() {
    float headCircumference;

    // Prompt user for head circumference
    printf("Enter the circumference of your head in inches: ");
    scanf("%f", &headCircumference);

    // Call the function to determine the hat size
    determineHatSize(headCircumference);

    return 0;
}
