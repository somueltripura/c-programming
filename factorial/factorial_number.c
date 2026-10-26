#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long calculateFactorial(int n) {
    unsigned long long factorial = 1;
    
    // Handle factorial of 0
    if (n == 0) {
        return 1;
    }
    
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    
    unsigned long long result = calculateFactorial(n);
    printf("Factorial of %d = %llu\n", n, result);
    
    return 0;
}