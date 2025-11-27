// Q38: Write a program to calculate the sum of digits of a number.
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("%d\n", sum);

    return 0;
}