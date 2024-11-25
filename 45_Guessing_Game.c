#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lucky_number, guess;
    int attempts = 5;

    // Seed the random number generator
    srand(time(0));
    lucky_number = rand() % 100 + 1; // Lucky number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a lucky number between 1 and 100.\n");

    for (int attempt = 1; attempt <= attempts; attempt++) {
        printf("Attempt %d: Make your guess: ", attempt);
        scanf("%d", &guess);

        if (guess < 1 || guess > 100) {
            printf("Please guess a number between 1 and 100.\n");
        } else if (guess == lucky_number) {
            printf("Congratulations! You've guessed the lucky number %d in %d attempts!\n", lucky_number, attempt);
            break;
        } else {
            // Use a conditional operator for hint
            printf("Wrong guess! The lucky number is %s than %d.\n", 
                   (guess < lucky_number) ? "higher" : "lower", guess);
        }
    }

    // If the user didn't guess the number
    if (guess != lucky_number) {
        printf("Sorry, you've used all your attempts! The lucky number was %d.\n", lucky_number);
    }

    return 0;
}
