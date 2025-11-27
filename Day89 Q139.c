// Q139: Show that enums store integers by printing assigned values.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR
} Numbers;
int main() {
    printf("Enum Values:\n");
    printf("ZERO: %d\n", ZERO);
    printf("ONE: %d\n", ONE);
    printf("TWO: %d\n", TWO);
    printf("THREE: %d\n", THREE);
    printf("FOUR: %d\n", FOUR);

    return EXIT_SUCCESS;
}
