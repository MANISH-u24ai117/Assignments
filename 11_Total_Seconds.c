#include <stdio.h>

int main()
{
    long int total_seconds;
    int hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%ld", &total_seconds);

    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("Time is: %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

    return 0;
}
