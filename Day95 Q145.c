// Q145: Return a structure containing top student's details from a function.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;
Student getTopStudent(Student students[], int count) {
    Student top_student = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }
    return top_student;
}
int main() {
    Student students[5];

    // Reading data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        // Clear the input buffer before the next fgets
        while (getchar() != '\n');
    }

    // Getting the top student using the function
    Student top_student = getTopStudent(students, 5);

    // Printing the top student's details
    printf("\nTop Student Details:\n");
    printf("Name: %s", top_student.name); // fgets includes newline
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return EXIT_SUCCESS;    
}
