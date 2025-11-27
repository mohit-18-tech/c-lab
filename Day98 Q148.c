// Q148: Take two structs as input and check if they are identical.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int id;
    float salary;
} Employee;
int areEmployeesIdentical(Employee emp1, Employee emp2) {
    if (emp1.id != emp2.id) {
        return 0; // Not identical
    }
    if (emp1.salary != emp2.salary) {
        return 0; // Not identical
    }
    // Compare names
    for (int i = 0; i < 50; i++) {
        if (emp1.name[i] != emp2.name[i]) {
            return 0; // Not identical
        }
        if (emp1.name[i] == '\0') {
            break; // End of string
        }
    }
    return 1; // Identical
}
int main() {
    Employee emp1, emp2;

    // Reading first employee data
    printf("Enter details for Employee 1:\n");
    printf("Name: ");
    fgets(emp1.name, sizeof(emp1.name), stdin);
    
    printf("ID: ");
    scanf("%d", &emp1.id);
    
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    
    // Clear the input buffer before the next fgets
    while (getchar() != '\n');

    // Reading second employee data
    printf("\nEnter details for Employee 2:\n");
    printf("Name: ");
    fgets(emp2.name, sizeof(emp2.name), stdin);
    
    printf("ID: ");
    scanf("%d", &emp2.id);
    
    printf("Salary: ");
    scanf("%f", &emp2.salary);

    // Checking if the two employees are identical
    if (areEmployeesIdentical(emp1, emp2)) {
        printf("\nThe two employees are identical.\n");
    } else {
        printf("\nThe two employees are not identical.\n");
    }

    return EXIT_SUCCESS;    
}
