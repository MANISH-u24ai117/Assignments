#include <stdio.h>

int n, num, max, secondMax;

int main()
{
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least two numbers are required.\n");
        return 1;
    } 

    printf("Enter the first number: ");
    scanf("%d", &num);
    max = secondMax = num;

    int count = 1; // To keep track of the number of inputs processed

    while (count < n)
    {
        printf("Enter the next number: ");
        scanf(" %d", &num);

        if (num > max)
        {
            secondMax = max;
            max = num;
        }
        else if (num > secondMax && num < max)
        {
            secondMax = num;
        }

        ++count;
    }

    printf("Maximum value: %d\n", max);
    printf("Second maximum value: %d\n", secondMax);

    return 0;
}