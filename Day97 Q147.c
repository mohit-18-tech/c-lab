// Q147: Store employee data in a binary file using fwrite() and read using fread().

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int id;
    float salary;
} Employee;
void writeEmployeeToFile(const char *filename, Employee emp) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }
    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);
}
Employee readEmployeeFromFile(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }
    Employee emp;
    fread(&emp, sizeof(Employee), 1, file);
    fclose(file);
    return emp;
}
int main() {
    Employee emp = {"John Doe", 101, 55000.50f};
    const char *filename = "employee.dat";

    // Writing employee data to binary file
    writeEmployeeToFile(filename, emp);

    // Reading employee data from binary file
    Employee read_emp = readEmployeeFromFile(filename);

    // Printing the read employee data
    printf("Employee Details from File:\n");
    printf("Name: %s", read_emp.name); // fgets includes newline
    printf("ID: %d\n", read_emp.id);
    printf("Salary: %.2f\n", read_emp.salary);

    return EXIT_SUCCESS;    
}
