#include <stdbool.h>
#include <stdio.h>
#include "prime.h"

// Function to check if a number is prime
bool prime(int num) {
    if (num <= 1) {
        return false; // Numbers <= 1 are not prime
    }

    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible, it's not a prime number
        }
    }

    return true; // If no factors found, it's prime
}

// Example usage
int main() {
    int num = 29;
    if (prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
