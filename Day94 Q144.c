// Q144: Write a function that accepts a structure as parameter and prints its members.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;
void printStudent(Student student) {
    printf("Name: %s", student.name); // fgets includes newline
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
}
int main() {
    Student student;

    // Reading student data
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Printing student data using the function
    printf("\nStudent Details:\n");
    printStudent(student);

    return EXIT_SUCCESS;    
}
