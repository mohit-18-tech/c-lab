// Q26: Write a program to print all natural numbers from 1 to n.
 
 // PROGRAM:

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}