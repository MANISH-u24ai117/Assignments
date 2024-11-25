#include <stdio.h>

int main()
{
    float F; //Temperature in Fahrenheit
    printf("Enter Fahrenheit: ");
    scanf("%f", &F);

    float C = (5.0/9.0 * (F - 32));
    printf("%.2f", C);
}