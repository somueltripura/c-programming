#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Prompt user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Compare numbers using if-else statements
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2lf is the largest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%.2lf is the largest number.\n", num2);
    } else {
        printf("%.2lf is the largest number.\n", num3);
    }

    return 0;
}