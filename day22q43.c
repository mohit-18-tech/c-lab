// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num, sum = 0, originalNum, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
