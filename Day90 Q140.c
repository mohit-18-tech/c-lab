// Q140: Define a struct with enum Gender and print person's gender.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;
typedef struct {
    char name[50];
    int age;

    Gender gender;
} Person;   
int main() {
    Person person = {"Alice", 30, FEMALE};
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Gender: ");
    switch (person.gender) {
        case MALE:
            printf("Male\n");
            break;  
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    return EXIT_SUCCESS;    
}
