// Q114: Write a C program to find the length of the longest substring without repeating characters in a given string.

 // PROGRAM:

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    
    int n = strlen(s);
    int lastIndex[256];  // To store the last index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    
    int maxLen = 0;   // Stores the maximum length
    int start = 0;    // Start index of current window
    
    for (int i = 0; i < n; i++) {
        // If character already seen, move start to right of previous index
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;
        
        // Update last seen index of current character
        lastIndex[(unsigned char)s[i]] = i;
        
        // Update maximum length
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }
    
    printf("%d", maxLen);
    
    return 0;
}
