// Q76: Write a C program to check whether a given square matrix is symmetric or not.


#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric)
            break;
    }

    if(symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
