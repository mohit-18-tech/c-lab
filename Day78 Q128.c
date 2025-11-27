// Q128: Write a C program that opens a text file in read mode and counts the number of vowels and consonants in the file. The program should read the file character by character using fgetc() and display the counts on the console. Ensure proper error handling for file operations.

// PROGRAM:

#include <stdio.h>
#include <ctype.h>   // for isalpha(), tolower()

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int vowels = 0, consonants = 0;

    // Get file name from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Read characters one by one
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // convert to lowercase for easier comparison

        if (isalpha(ch)) {  // check if character is alphabet
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
