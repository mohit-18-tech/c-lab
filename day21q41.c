// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum, firstDigit, lastDigit, digits;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Find the number of digits
    digits = (int)log10(num);

    // Find the first digit
    firstDigit = (int)(num / pow(10, digits));

    // Remove the first and last digits from the number
    num = num % (int)pow(10, digits); // Remove first digit
    num = num / 10; // Remove last digit

    // Reconstruct the number with swapped digits
    swappedNum = lastDigit * (int)pow(10, digits) + num * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);
    return 0;
}
