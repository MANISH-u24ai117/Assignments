#include <stdio.h>

int main()
{
    float P; //Principle Amount
    float R; //Rate of Interest
    float T; //Time Period in Years


    printf("Enter Principle Amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time Period: ");
    scanf("%f", &T);

    float simple_interest = (P * R * T) / 100;
    printf("%.2f", simple_interest);
}
