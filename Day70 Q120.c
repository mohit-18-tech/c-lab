// Q120: Write a C program to convert the first letter of each word in a string to uppercase.

 // PROGRAM:

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // If it's the first character or the previous character is a space
        if (i == 0 || str[i - 1] == ' ') {
            // Convert to uppercase if it's a lowercase letter
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        } 
        else {
            // Convert to lowercase if it's an uppercase letter (to keep consistent)
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }

    printf("%s", str);
    return 0;
}
