// Q115: Write a C program to check if two strings are anagrams of each other. Two strings are anagrams if they contain the same characters in a different order.

 // PROGRAM:

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);
    
    int count[26] = {0};  // For lowercase English letters only
    
    // If lengths differ, cannot be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }
    
    // Count frequency of each character
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    
    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }
    
    printf("Anagram");
    return 0;
}
