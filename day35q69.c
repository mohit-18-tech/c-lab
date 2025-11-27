// Q69: Write a C program to find the second largest element in an array.

// PROGRAM:

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int first, second;
    first = second = -2147483648;

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -2147483648)
        printf("No second largest element (all elements are equal)\n");
    else
        printf("%d\n", second);

    return 0;
}
