// Q101: Write a C program to find the first and last occurrence of a target number in an array.
 
 // PROGRAM:

#include <stdio.h>

int main() {
    int n, target, i, first = -1, last = -1;
    int nums[100];

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Find first and last occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    // Print results
    printf("%d,%d", first, last);

    return 0;
}
