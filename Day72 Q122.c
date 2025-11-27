// Q122: Write a C program that opens the info.txt file created in the previous program in read mode. The program should read the contents of the file and display them on the console using fgets().

// PROGRAM:

#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Read and display file content line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close file
    fclose(fp);

    return 0;
}
