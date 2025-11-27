// Q86: Write a C program to check whether a given string is a palindrome or not without using built-in functions.



#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    
    scanf("%[^\n]", str);

    
    while (str[length] != '\0') {
        length++;
    }

   
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
