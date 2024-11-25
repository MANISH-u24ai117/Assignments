#include <stdio.h>
int main()
{
    printf("Enter the number:- ");
    int n, x;
    scanf("%d", &n);
    if (n / 10 == 0)
    {
        printf("%d", n);
    }
    else
    {

        while (n / 10 != 0)
        {
            x = 0;
            while (n != 0)
            {
                x = x + (n % 10);
                n = n / 10;
            }
            n = x;
        }
        printf("The sum of digits is %d ", x);
    }
}