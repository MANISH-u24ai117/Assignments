#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;

    // Input matrix dimensions
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    // Allocate memory for matrices
    int *matrix1 = (int *)malloc(r1 * c1 * sizeof(int));
    int *matrix2 = (int *)malloc(r2 * c2 * sizeof(int));
    int *product = (int *)malloc(r1 * c2 * sizeof(int));

    // Input the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", (matrix1 + i * c1 + j));
        }
    }

    // Input the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", (matrix2 + i * c2 + j));
        }
    }

    // Initialize the product matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(product + i * c2 + j) = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                *(product + i * c2 + j) += *(matrix1 + i * c1 + k) * *(matrix2 + k * c2 + j);
            }
        }
    }

    // Print the product matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", *(product + i * c2 + j));
        }
        printf("\n");
    }

    // Free allocated memory
    free(matrix1);
    free(matrix2);
    free(product);

    return 0;
}
