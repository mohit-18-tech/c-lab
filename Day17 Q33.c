// Q33: Write a program to check if a number is an Armstrong number.

// PROGRAM:

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, sum = 0, digits = 0, temp, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Count number of digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // Calculate sum of digits raised to the power of 'digits'
    while(temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if(sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
