// Q142: Store details of 5 students in an array of structures and print all.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;
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

    // Printing data for all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s", students[i].name); // fgets includes newline
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return EXIT_SUCCESS;    
}
