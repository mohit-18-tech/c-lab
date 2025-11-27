// Q125: Write a C program that opens an existing text file in append mode. The program should take a line of text as input from the user and append it to the end of the file. After appending, display a message confirming that the text was successfully added.

 // PROGRAM:

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Get file name from user
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Clear input buffer before using fgets()
    getchar();

    // Take text input from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append new line to file
    fputs(text, fp);

    // Close file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
