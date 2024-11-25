#include <stdio.h>

int main() {
    int arr1[10], arr2[10], arr3[10];
    
    printf("Enter 10 elements of the first array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter 10 elements of the second array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
    
    printf("Resulting array after addition:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}