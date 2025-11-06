// Q112: Write a C program to find the maximum sum of a contiguous subarray using Kadane's Algorithm.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int max_sum = arr[0];
    int current_sum = arr[0];
    
    for (int i = 1; i < n; i++) {
        // Either extend the current subarray or start a new one
        if (current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];
        
        // Update max_sum if needed
        if (current_sum > max_sum)
            max_sum = current_sum;
    }
    
    printf("%d", max_sum);
    
    return 0;
}
