// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} Operation;
int main() {
    int choice;
    double num1, num2, result;

    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return EXIT_SUCCESS;
}
