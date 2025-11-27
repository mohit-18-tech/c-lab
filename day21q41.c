// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum, firstDigit, lastDigit, digits;
    printf("Enter a number: ");
    scanf("%d", &num);

   
    lastDigit = num % 10;

   
    digits = (int)log10(num);

    
    firstDigit = (int)(num / pow(10, digits));

    
    num = num % (int)pow(10, digits); 
    num = num / 10; 

    
    swappedNum = lastDigit * (int)pow(10, digits) + num * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNum);
    return 0;
}

