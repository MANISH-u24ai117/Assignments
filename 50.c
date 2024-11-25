#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int N, i, j, dumb;
    
    // Prompt user for input
    printf("This program will printout like\nA\nBB\nCCC\nDDDD.......\n");
    printf("Enter the number of times you want to print this type of pattern: ");
    scanf("%d", &N);

    // Outer loop to control the rows
    for(i = 1; i <= N; i++)  // Fix the loop to go up to N
    {
        dumb = 64 + i;  // 'A' has ASCII value 65, so we add i to 64
        // Inner loop to print letters
        for(j = 0; j < i; j++)
        {
            printf("%c", dumb);  // Print the character
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
