// Q118: Write a C program to find the missing number in an array containing n distinct numbers taken from 0 to n. The array has a length of n-1, meaning one number from the range is missing.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    int total = n * (n + 1) / 2;  // Sum of numbers from 0 to n
    int sum = 0;
    
    for (int i = 0; i < n; i++)
        sum += nums[i];
    
    int missing = total - sum;
    printf("%d", missing);
    
    return 0;
}
