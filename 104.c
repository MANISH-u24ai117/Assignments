#include <stdio.h>

// Enumeration for color names
typedef enum {
    RED,
    GREEN,
    BLUE,
    WHITE,
    BLACK,
    YELLOW
} Color;

int main() {
    Color chosenColor;
    int input;

    // Display menu for selecting a color
    printf("Choose a color:\n");
    printf("0 - RED\n");
    printf("1 - GREEN\n");
    printf("2 - BLUE\n");
    printf("3 - WHITE\n");
    printf("4 - BLACK\n");
    printf("5 - YELLOW\n");
    printf("Enter your choice: ");
    scanf("%d", &input);

    chosenColor = (Color)input;

    // Display the hexadecimal code using a switch statement
    switch (chosenColor) {
        case RED:
            printf("The hexadecimal code for RED is: #FF0000\n");
            break;
        case GREEN:
            printf("The hexadecimal code for GREEN is: #00FF00\n");
            break;
        case BLUE:
            printf("The hexadecimal code for BLUE is: #0000FF\n");
            break;
        case WHITE:
            printf("The hexadecimal code for WHITE is: #FFFFFF\n");
            break;
        case BLACK:
            printf("The hexadecimal code for BLACK is: #000000\n");
            break;
        case YELLOW:
            printf("The hexadecimal code for YELLOW is: #FFFF00\n");
            break;
        default:
            printf("Invalid choice! Please select a valid color.\n");
    }

    return 0;
}
