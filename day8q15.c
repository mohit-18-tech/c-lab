// Q15: Write a program to check whether a character is an alphabet, digit or special character.
 
 // PROGRAM:

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch=='A'){
        printf("Uppercase letter\n");
    }
    else if(ch=='a'){
        printf("Lowercase letter\n");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special character\n");
    }
  return 0;
 
}
