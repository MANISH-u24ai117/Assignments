#include <stdio.h>

int findPivot(int arr[], int low, int high) {
    if (high < low)
        return -1;
    if (high == low)
        return low;
    
    int mid = (low + high) / 2;
    
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
    if (mid > low && arr[mid] < arr[mid - 1])
        return mid - 1;
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
    return findPivot(arr, mid + 1, high);
}

int main() {
    int arr[10], n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the rotated sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pivot = findPivot(arr, 0, n - 1);
    
    if (pivot == -1) {
        printf("No pivot found, array is not rotated.\n");
    } else {
        printf("Pivot element is at index %d, value: %d\n", pivot, arr[pivot]);
    }
    
    return 0;
}