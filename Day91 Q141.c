// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

// PROGRAM: 

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;
int main() {
    Student student;

    // Reading student data
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Printing student data
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name); // fgets includes newline
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);

    return EXIT_SUCCESS;    
}

