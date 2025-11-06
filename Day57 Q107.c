// Q107: Write a C program to find the previous greater element for each element in an array. The previous greater element for an element x is the first greater element on the left side of x in the array. If no such element exists, print -1 for that element.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i != n - 1)
            printf(", ");
    }
    
    return 0;
}
