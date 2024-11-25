#include <stdio.h>

int main() {
    int mat[3][3], max, min;
    
    printf("Enter 9 elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    max = mat[0][0];
    min = mat[0][0];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }
    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}