#include <stdio.h>

int main() {
    // Declare variables to store the two numbers and results
    double num1, num2;
    double sum, difference, product, quotient;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Calculate addition, subtraction, and multiplication
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Display results for addition, subtraction, and multiplication
    printf("\n--- Results ---\n");
    printf("Addition (%.2lf + %.2lf) = %.2lf\n", num1, num2, sum);
    printf("Subtraction (%.2lf - %.2lf) = %.2lf\n", num1, num2, difference);
    printf("Multiplication (%.2lf * %.2lf) = %.2lf\n", num1, num2, product);

    // Check for division by zero before performing division
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Division (%.2lf / %.2lf) = %.2lf\n", num1, num2, quotient);
    } else {
        printf("Division: Error! Division by zero is not allowed.\n");
    }

    return 0;
}