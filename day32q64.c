// Q64: Write a C program to find the most frequent digit in an integer number.

// PROGRAM:

#include <stdio.h>

int main(){
    long long num;
    int freq[10] = {0};  
    int digit, maxFreq = 0, mostFrequentDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    
    if(num < 0)
        num = -num;

   
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

   
    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}
