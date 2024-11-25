#include <stdio.h>

int main()
{
    int n, i, num;
    int max, min;

    // Input the total number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("There should be at least 1 number.\n");
        return 1; // Exit the program if there are no numbers
    }

    // Input the first number to initialize max and min
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num; // Set the first number as both max and min initially

    // Process remaining numbers to find max and min
    for (i = 1; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > max)
        {
            max = num; // Update max
        }
        if (num < min)
        {
            min = num; // Update min
        }
    }

    // Output the results
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}