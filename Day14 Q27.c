// Q27: Write a program to calculate the sum of the first n odd numbers.

 // PROGRAM:

#include <stdio.h>
int main() {
    int n, sum = 0, i, odd;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        odd = 2 * i - 1;
        sum += odd;
    }

    printf("Sum of first %d odd numbers: %d\n", n, sum);

    return 0;
}
