// Q77: Write a C program to check whether the diagonal elements of a square matrix are distinct or not.



#include <stdio.h>

int main() {
    int rows, cols, i, j, k, distinct = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    
    if (rows != cols) {
        printf("Not a square matrix. Diagonal check not possible.\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < rows; i++) {
        for(j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }

    if(distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
