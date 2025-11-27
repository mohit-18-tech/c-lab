// Q100: Write a C program to print all substrings of a given string.
 
 // PROGRAM:

#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;

    // Input the string
    scanf("%s", str);

    // Generate and print all substrings
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (str[j + 1] != '\0' || i != j)  // To add commas between substrings
                printf(",");
        }
    }

    return 0;
}
