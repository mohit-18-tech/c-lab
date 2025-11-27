// Q39: Write a program to calculate the product of odd digits of a number.

 // PROGRAM:

#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
    
    printf("%d\n", product);

    return 0;
}
