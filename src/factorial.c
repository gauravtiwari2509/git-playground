#include "factorial.h"

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1) return 1;  // Base case: factorial of 0 or 1 is 1
    return n * factorial(n - 1);  // Multiply instead of adding
}

// Example usage
#include <stdio.h>
int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));  // Output: 120
    return 0;
}
