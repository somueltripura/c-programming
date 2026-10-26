#include <stdio.h>

int main() {
    double num1, num2;

    // Prompt the user for input
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Compare the numbers
    if (num1 > num2) {
        printf("The largest number is: %.2lf\n", num1);
    } else if (num2 > num1) {
        printf("The largest number is: %.2lf\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}