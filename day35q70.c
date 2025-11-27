// Q70: Write a C program to rotate an array to the right by k positions.



#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n; 

    
    int temp[n];

    
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

   
    for(i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

   
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
