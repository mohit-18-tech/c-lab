// Q113: Write a C program to find the k-th smallest element in an array of n integers. If k is less than 1 or greater than n, print "Invalid input".

// PROGRAM:

#include <stdio.h>

// Function to sort the array using simple Bubble Sort
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    scanf("%d", &k);
    
    if (k < 1 || k > n) {
        printf("Invalid input");
        return 0;
    }
    
    sortArray(arr, n);
    
    printf("%d", arr[k - 1]);
    
    return 0;
}
