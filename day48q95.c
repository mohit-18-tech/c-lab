// Q95: Write a C program to check whether one string is a rotation of another string.

 // PROGRAM:

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concat[200];
    
   
    scanf("%s", str1);
    scanf("%s", str2);
    
   
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    
    strcpy(concat, str1);
    strcat(concat, str1);

    
    if (strstr(concat, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
