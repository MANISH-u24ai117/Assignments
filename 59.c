#include <stdio.h>

int main() {
    int arr1[10], arr2[10], temp;
    
    printf("Enter 10 elements of the first array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter 10 elements of the second array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    
    printf("First array after swapping:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nSecond array after swapping:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}