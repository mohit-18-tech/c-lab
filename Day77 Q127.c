// Q127: Write a C program that opens a text file in read mode, reads its contents character by character using fgetc(), converts all lowercase letters to uppercase, and writes the modified content to a new text file in write mode. Ensure proper error handling for file operations.

 // PROGRAM:

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error! Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error! Could not create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read character by character and convert to uppercase
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    // Close both files
    fclose(fin);
    fclose(fout);

    printf("File converted successfully! Check output.txt\n");

    return 0;
}
