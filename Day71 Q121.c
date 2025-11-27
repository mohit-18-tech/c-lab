// Q121: Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

// PROGRAM:

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    // Taking user input
    printf("Enter Name: ");
    scanf("%[^\n]", name); // to read full name including spaces

    printf("Enter Age: ");
    scanf("%d", &age);

    // Writing to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
