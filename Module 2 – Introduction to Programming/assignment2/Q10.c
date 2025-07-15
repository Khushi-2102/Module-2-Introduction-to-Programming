#include <stdio.h>

int main() {
    int num = 10;            // Declare an integer variable
    int *ptr;                // Declare a pointer to int

    ptr = &num;              // Store address of num in pointer

    printf("Original value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);

    *ptr = 25;               // Modify the value of num using the pointer

    printf("Modified value of num using pointer: %d\n", num);

    return 0;
}

