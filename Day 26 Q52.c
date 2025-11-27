// Q52: Write a program to print the following pattern:
 // *
 //
 // *
 // *
 // *
 //
 // *
 // *
 // *
 // *
 // *
 //
 // *
 // *
 // *   

 // *
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int i;
    // First star
    printf("*\n\n");
    // Three stars
    for(i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    // Five stars
    for(i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n");
    // Three stars
    for(i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n");
    // Last star
    printf("*\n");
    return 0;
}