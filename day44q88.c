// Q88: Write a C program to replace all spaces in a string with hyphens.



#include <stdio.h>

int main() {
    char str[100];
    
    
    scanf("%[^\n]", str);
    
  
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }
    
   
    printf("%s", str);
    
    return 0;
}
