// Q138: Print all enum names and integer values using a loop.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    ALPHA,
    BETA,
    GAMMA,
    DELTA,
    EPSILON
} GreekLetters;
int main() {
    GreekLetters letters[] = {ALPHA, BETA, GAMMA, DELTA, EPSILON};
    const char *letter_names[] = {"ALPHA", "BETA", "GAMMA", "DELTA", "EPSILON"};
    int total_letters = sizeof(letters) / sizeof(letters[0]);

    printf("Greek Letters and their integer values:\n");
    for (int i = 0; i < total_letters; i++) {
        printf("%s: %d\n", letter_names[i], letters[i]);
    }

    return EXIT_SUCCESS;
}
