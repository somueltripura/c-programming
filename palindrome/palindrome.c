#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;
    
    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original = n;
    
    // Negative numbers are generally not considered palindromes
    if (n < 0) {
        printf("%d is not a palindrome.\n", original);
        return 0;
    }
    
    // Reverse the digits of the number
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    // Check if the original number matches the reversed number
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}