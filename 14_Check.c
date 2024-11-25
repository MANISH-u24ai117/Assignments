#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (isdigit(character))
    {
        printf("'%c' is a digit.\n", character);
    }
    else if (isupper(character))
    {
        printf("'%c' is an uppercase letter.\n", character);
    }
    else if (islower(character))
    {
        printf("'%c' is a lowercase letter.\n", character);
    }
    else
    {
        printf("'%c' is a special symbol.\n", character);
    }

    return 0;
}
