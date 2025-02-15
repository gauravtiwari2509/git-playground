#include <stdio.h>

// Function to calculate the average of an array of integers
int average(int numbers[], int n) {
    int sum = 0;

    // Accumulate sum of elements
    for (int i = 0; i < n; i++) {
        sum += numbers[i];  // Corrected: use += to accumulate sum
    }

    // Calculate and return the integer average
    return sum / n;
}

// Example usage
int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    printf("Average: %d\n", average(arr, size));  // Output the result
    return 0;
}

