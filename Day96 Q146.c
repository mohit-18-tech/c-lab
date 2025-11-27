// Q146: Create Employee structure with nested Date structure for joining date and print details.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;
typedef struct {
    char name[50];
    int id;
    Date joining_date;
} Employee;
void printEmployee(Employee emp) {
    printf("Name: %s", emp.name); // fgets includes newline
    printf("ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);
}
int main() {
    Employee emp;

    // Reading employee data
    printf("Enter name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    // Printing employee data
    printf("\nEmployee Details:\n");
    printEmployee(emp);

    return EXIT_SUCCESS;    
}
