//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    // Check for division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2;
    } else {
        quotient = 0; // or handle as needed
        printf("Warning: Division by zero is not allowed.\n");
    }

    // Display results
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("The difference of %d and %d is %d\n", num1, num2, difference);
    printf("The product of %d and %d is %d\n", num1, num2, product);
    
    if (num2 != 0) {
        printf("The quotient of %d and %d is %.2f\n", num1, num2, quotient);
    }

    return 0;
}
