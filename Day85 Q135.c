// Q135: Assign explicit values starting from 10 and print them.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
} CustomEnum;
int main() {
    printf("CustomEnum Values:\n");
    printf("FIRST: %d\n", FIRST);
    printf("SECOND: %d\n", SECOND);
    printf("THIRD: %d\n", THIRD);
    printf("FOURTH: %d\n", FOURTH);
    printf("FIFTH: %d\n", FIFTH);

    return EXIT_SUCCESS;
}
