// Q79: Write a C program to perform diagonal traversal of a matrix of size m x n.



#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    /
    for(int k = 0; k < n; k++) {
        i = k;
        j = 0;
        while(i >= 0 && j < m) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

  
    for(int k = 1; k < m; k++) {
        i = n - 1;
        j = k;
        while(i >= 0 && j < m) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    printf("\n");
    return 0;
}
