#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%lld ", t2);
            continue;
        }
        // Calculate the next term
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        printf("%lld ", nextTerm);
    }
    printf("\n");

    return 0;
}