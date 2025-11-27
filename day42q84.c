// Q84: Write a C program to convert a string to uppercase without using built-in functions.

// PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    
    
    scanf("%[^\n]", str);
    
 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
    }
    
    
    printf("%s", str);
    
    return 0;
}
