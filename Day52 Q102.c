// Q102: Write a C program to find the ceil index of a target number in an array.
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int n, x, i, ceilIndex = -1;
    int arr[100];

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target x
    scanf("%d", &x);

    // Find ceil index
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;
        }
    }

    printf("%d", ceilIndex);

    return 0;
}
