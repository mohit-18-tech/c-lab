// Q96: Write a C program to reverse each word in a given sentence without changing the word order.



#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    
    scanf("%[^\n]", str);

    
    while (1) {
       
        if (str[end] != ' ' && str[end] != '\0') {
            end++;
        } else {
            
            int i = start, j = end - 1;
            while (i < j) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }

            if (str[end] == '\0')
                break; 

            
            end++;
            start = end;
        }
    }

    printf("%s", str);
    return 0;
}]
