#include <stdio.h>

// Function declaration (prototype)
int factorial(int n);

int main() {
    int num, result;

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Input validation
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Function call
        result = factorial(num);

        // Display the result
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}

// Function definition
int factorial(int n) {
    int fact = 1, i;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}
