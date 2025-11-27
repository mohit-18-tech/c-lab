// Q29: Write a program to calculate the factorial of a number.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    int n,factorial=1,i;
    printf("Enter n: ");    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("Factorial of %d is %d\n",n,factorial);
    return 0;

}
