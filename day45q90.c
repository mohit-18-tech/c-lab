// Q90: Write a C program to toggle the case of each character in a string without using built-in functions.



#include <stdio.h>

int main() {
    char str[100];
    
   
    scanf("%[^\n]", str);
    
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   
    }
    
   
    printf("%s", str);
    
    return 0;
}
