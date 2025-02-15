#include "count_char.h"
#include <stdio.h>

// Function to count the number of characters in a string
int count_char(char *a) {
    int count = 0;
    while (a[count] != '\0') {
        count++;  // Increment by 1 instead of 2
    }
    return count;
}

// Example usage
int main() {
    char str[] = "Hello, World!";
    printf("Character count: %d\n", count_char(str)); // Output: 13
    return 0;
}
