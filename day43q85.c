// Q85: Write a C program to print a string in reverse without using built-in functions.



#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

   
    scanf("%[^\n]", str);

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
