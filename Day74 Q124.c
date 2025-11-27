// Q124: Write a C program that copies the contents of one text file to another. The program should take the source file name and destination file name as input from the user, read the content from the source file, and write it to the destination file.

 // PROGRAM:

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    int ch;

    // Taking filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error! Could not open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error! Could not create destination file.\n");
        fclose(src);
        return 1;
    }

    // Copying content character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Closing both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}
