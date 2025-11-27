// Q68: Write a C program to delete an element from a specific position in an array.


#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (0-based index): ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }

    
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
