// Q149: Use malloc() to allocate structure memory dynamically and print details.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;
int main() {
    // Dynamically allocating memory for a Student structure
    Student *student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        perror("Failed to allocate memory");
        return EXIT_FAILURE;
    }

    // Reading student data
    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &student->roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &student->marks);

    // Printing student data
    printf("\nStudent Details:\n");
    printf("Name: %s", student->name); // fgets includes newline
    printf("Roll Number: %d\n", student->roll_no);
    printf("Marks: %.2f\n", student->marks);

    // Freeing the allocated memory
    free(student);

    return EXIT_SUCCESS;    
}
