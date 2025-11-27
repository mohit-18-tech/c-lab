// Q82: Write a C program to print each character of a string on a new line.



#include <stdio.h>

int main() {
    char str[100];
    
    
    scanf("%[^\n]", str);
    
    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    
    return 0;
}
