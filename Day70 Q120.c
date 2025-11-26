// Q120: Write a C program to convert the first letter of each word in a string to uppercase.

 // PROGRAM:

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        
        if (i == 0 || str[i - 1] == ' ') {
           
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        } 
        else {
           
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }

    printf("%s", str);
    return 0;
}
