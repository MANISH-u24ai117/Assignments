#include <stdio.h>

int main() {
    int mat[3][3], rowSum;
    
    printf("Enter 9 elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, rowSum);
    }
    
    return 0;
}