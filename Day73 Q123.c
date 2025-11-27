// Q123: Write a C program that opens a text file in read mode and counts the number of characters, words, and lines in the file. Display the counts on the console.

// PROGRAM:

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // flag to detect word boundaries

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        // Check if the current character is part of a word
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(fp);

    // If file is not empty and last line doesn't end with newline, count it
    if (characters > 0 && ch != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
