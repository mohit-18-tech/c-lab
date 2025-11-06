// Q110: Write a C program to find the maximum in each subarray of size k in a given array of integers.

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
    
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d", max);
        if (i != n - k)
            printf(" ");
    }
    
    return 0;
}
