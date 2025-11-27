// Q89: Write a C program to count the frequency of a character in a string without using built-in functions.



#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    
    scanf("%[^\n]", str);
    
    
    getchar();
    
  
    scanf("%c", &ch);

   
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d", count);

    return 0;
}
