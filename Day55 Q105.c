// Q105: Write a C program to find the majority element in an array of size n. A majority element is an element that appears more than n/2 times in the array. If no such element exists, return -1.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    // Boyer-Moore Voting Algorithm
    int count = 0, candidate = -1;
    
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        if (nums[i] == candidate)
            count++;
        else
            count--;
    }
    
    // Verify if candidate is actually the majority
    count = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            count++;
    
    if (count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");
    
    return 0;
}
