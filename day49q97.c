// Q97: Write a C program to print the initials of a given full name.



#include <stdio.h>

int main() {
    char str[100];
    
   
    scanf("%[^\n]", str);
    
    
    if (str[0] != ' ')
        printf("%c.", str[0]);

   
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
            printf("%c.", str[i + 1]);
    }

    return 0;
}
