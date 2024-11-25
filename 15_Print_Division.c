#include <stdio.h>

int main()
{
    float marks[5];
    float total = 0;
    float average;
    int i;

    printf("Enter the marks of five subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / 5;

    printf("Average marks: %.2f\n", average);

    if (average >= 60)
    {
        printf("Division: First Division\n");
    }
    else if (average >= 50)
    {
        printf("Division: Second Division\n");
    }
    else if (average >= 40)
    {
        printf("Division: Third Division\n");
    }
    else
    {
        printf("Division: Fail\n");
    }

    return 0;
}
