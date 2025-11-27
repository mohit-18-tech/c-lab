// Q66: Write a C program to insert an element in a sorted array at the appropriate position.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // +1 for the new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the correct position for the new element
    pos = n; // assume last by default
    for(i = 0; i < n; i++) {
        if(key < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = key;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
