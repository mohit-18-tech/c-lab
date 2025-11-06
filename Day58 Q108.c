// Q108: Write a C program to construct an array from a given array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];

    for (int i = 0; i < n; i++) {
        int product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }
        answer[i] = product;
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(",");
    }
    printf("]");

    return 0;
}
