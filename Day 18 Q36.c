// Q36: Write a program to find HCF (GCD) of two numbers.
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;

    for(i = 1; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}