// Q81: Write a C program to count the number of characters in a string without using built-in functions.



#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    
    gets(str); 

   
    while (str[count] != '\0') {
        count++;
    }

    
    printf("%d", count);

    return 0;
}
