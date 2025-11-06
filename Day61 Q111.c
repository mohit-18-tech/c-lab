// Q111: Write a C program to find the first negative integer in each subarray of size k in a given array of integers. If a subarray does not contain a negative integer, print 0 for that subarray.

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
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("0");
        if (i != n - k)
            printf(" ");
    }
    
    return 0;
}
