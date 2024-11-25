#include <stdio.h>

int main()
{
    float basic_salary;
    float hra_percentage, da_percentage, other_allowances;
    float deductions;
    float hra, da, gross_salary;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter the HRA percentage: ");
    scanf("%f", &hra_percentage);

    printf("Enter the DA percentage: ");
    scanf("%f", &da_percentage);

    printf("Enter other allowances: ");
    scanf("%f", &other_allowances);

    printf("Enter total deductions: ");
    scanf("%f", &deductions);

    hra = (hra_percentage / 100) * basic_salary;
    da = (da_percentage / 100) * basic_salary;

    gross_salary = basic_salary + hra + da + other_allowances - deductions;

    printf("The gross salary is: %.2f\n", gross_salary);

    return 0;
}