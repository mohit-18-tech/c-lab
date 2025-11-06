// Q109: Write a C program to find the maximum sum of a subarray of size k in a given array of integers.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &k);
    
    if (k > n || k <= 0) {
        printf("Invalid input");
        return 0;
    }
    
    int max_sum = 0;
    
    // Compute sum of first window of size k
    for (int i = 0; i < k; i++)
        max_sum += arr[i];
    
    int window_sum = max_sum;
    
    // Slide the window through the array
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }
    
    printf("%d", max_sum);
    
    return 0;
}
