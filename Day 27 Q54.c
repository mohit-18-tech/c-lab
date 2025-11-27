// Q54: Write a program to print the following pattern:
 //    *
 //   ***
 //  *****
 // *******
 //  *****
 //   ***
 //    *

 // PROGRAM:

#include <stdio.h>

int main() {
    int i, j, space;
    int n = 4; // Number of rows in the upper half (including the middle row)

    // Upper half including the middle row
    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = n - 1; i >= 1; i--) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}