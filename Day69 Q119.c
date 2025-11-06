// Q119: Write a C program to find the repeated number in an array of size n containing numbers from 0 to n-2, where one number is repeated.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    int xor_all = 0, xor_n = 0;
    
    // XOR of all elements in the array
    for (int i = 0; i < n; i++)
        xor_all ^= nums[i];
    
    // XOR of numbers from 0 to n-2 (since one number is repeated)
    for (int i = 0; i < n - 1; i++)
        xor_n ^= i;
    
    int repeated = xor_all ^ xor_n;
    printf("%d", repeated);
    
    return 0;
}
