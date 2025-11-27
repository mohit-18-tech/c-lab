// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;
int main() {
    Status current_status = SUCCESS; // You can change this to FAILURE or TIMEOUT to test other cases

    switch (current_status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }

    return EXIT_SUCCESS;
}
