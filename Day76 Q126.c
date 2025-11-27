// Q126: Write a C program that opens a text file in read mode. The program should read the contents of the file character by character using fgetc() and display them on the console. If the file does not exist, display an appropriate error message.

 // PROGRAM:

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;

    // Get filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n\n");
    printf("---- File Content ----\n");

    // Read and display file content
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close file
    fclose(fp);

    return 0;
}
