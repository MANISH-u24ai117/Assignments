#include <stdio.h>

int main() {
    int a = 10;  // Normal variable whose value we will modify
    int *ptr;    // Pointer to an integer

    // Initialize the pointer with the address of 'a'
    ptr = &a;

    printf("Value of a before modification: %d\n", a);

    // Modify the value of 'a' using the pointer
    *ptr = 20;  // Dereference the pointer and modify the value of 'a'

    printf("Value of a after modification: %d\n", a);

    return 0;
}
