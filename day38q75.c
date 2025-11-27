// Q75: Write a C program to add two matrices of size m x n.



#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j;

   
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int a[rows1][cols1];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible. Dimensions must be equal.\n");
        return 0;
    }

    int b[rows2][cols2], sum[rows1][cols1];

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

   
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    
    printf("Sum of matrices:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
