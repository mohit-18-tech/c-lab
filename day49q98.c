// Q98: Write a C program to print the initials of a given full name except the surname.



#include <stdio.h>

int main() {
    char str[100];
    int i, lastSpace = -1;


    scanf("%[^\n]", str);

   
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    
    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && i < lastSpace && str[i + 1] != '\0' && str[i + 1] != ' ')
            printf("%c.", str[i + 1]);
    }

    
    if (lastSpace != -1)
        printf(" %s", &str[lastSpace + 1]);

    return 0;
}
