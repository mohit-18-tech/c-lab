// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
#define MAX_STUDENTS 100
#define NAME_LENGTH 50
typedef struct {
    char name[NAME_LENGTH];
    int roll_number;
    float marks;
} Student;
int main() {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    Student students[MAX_STUDENTS] = {
        {"Alice", 1, 85.5},
        {"Bob", 2, 90.0},
        {"Charlie", 3, 78.5}
    };
    int student_count = 3;

    for (int i = 0; i < student_count; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    Student read_students[MAX_STUDENTS];
    int count = 0;
    while (fscanf(file, "%s %d %f", read_students[count].name, &read_students[count].roll_number, &read_students[count].marks) == 3) {
        count++;
        if (count >= MAX_STUDENTS) {
            break;
        }
    }
    fclose(file);

    printf("Student Records:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", read_students[i].name, read_students[i].roll_number, read_students[i].marks);
    }

    return EXIT_SUCCESS;
}
