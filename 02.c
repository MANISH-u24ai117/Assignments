#include <stdio.h>

int main()
{
    int Physics, Chemistry, Maths, English, Computer;

    printf("Enter Physics Marks: ");
    scanf("%d", &Physics);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &Chemistry);

    printf("Enter Maths Marks: ");
    scanf("%d", &Maths);

    printf("Enter English Marks: ");
    scanf("%d", &English);

    printf("Enter Computer Marks: ");
    scanf("%d", &Computer);

    int Total_Marks = Physics + Chemistry + Maths + English + Computer;

    float Total_Percentage = ((Total_Marks / 500.0) * 100);

    printf("Your Total Marks are %d and your Total Percentage is %.2f", Total_Marks, Total_Percentage);
}