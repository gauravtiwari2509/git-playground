#include "reverse_num.h"

// Function to reverse an integer
int reverse_num(int num) {
    int reversedNum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;                 // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append it to reversedNum
        num /= 10;                            // Remove the last digit
    }

    return reversedNum;
}

// Example usage
#include <stdio.h>
int main() {
    int num = 12345;
    printf("Reversed number: %d\n", reverse_num(num));  // Output: 54321
    return 0;
}
