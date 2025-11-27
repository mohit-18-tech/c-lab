// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;
int main() {
    UserRole role = USER; // You can change this to ADMIN or GUEST to test other cases

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Unknown role.\n");
            break;
    }

    return EXIT_SUCCESS;
}
