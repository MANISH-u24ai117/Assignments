#include <stdio.h>

int main() {
    int arr[10], key, count = 0;
    
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to count occurrences: ");
    scanf("%d", &key);
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    
    printf("The element %d occurred %d times\n", key, count);
    
    return 0;
}