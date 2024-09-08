
#include <stdio.h>

// Function to modify the value of an integer using a pointer
void modifyValue(int *p) {
    *p = 20;  // Dereference the pointer and modify the value it points to
}

int main() {
    int a = 10;
    printf("Before: a = %d\n", a);

    modifyValue(&a);  // Pass the address of 'a' to the function
    printf("After: a = %d\n", a);

    return 0;
}