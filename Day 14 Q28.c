// Q28: Write a program to calculate the product of all even numbers from 1 to n.

 // PROGRAM:

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int found = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    if(found)
        printf("Product of even numbers from 1 to %d: %lld\n", n, product);
    else
        printf("No even numbers in the range.\n");

    return 0;
}
