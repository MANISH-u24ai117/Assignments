#include <stdio.h>

void rotate(int arr[], int n, int k) {
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }
    
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[10], n, k;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    
    rotate(arr, n, k);
    
    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}