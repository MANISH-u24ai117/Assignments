#include <stdio.h>

int main()
{
    int total_seconds = 31558150;

    int seconds_in_minute = 60;
    int seconds_in_hour = 60 * 60;
    int seconds_in_day = 24 * 60 * 60;

    int days = total_seconds / seconds_in_day;
    int remaining_seconds = total_seconds % seconds_in_day;

    int hours = remaining_seconds / seconds_in_hour;
    remaining_seconds = remaining_seconds % seconds_in_hour;

    int minutes = remaining_seconds / seconds_in_minute;

    printf("Earth's period of revolution is equivalent to:\n");
    printf("%d days, %d hours, and %d minutes.\n", days, hours, minutes);

    return 0;
}