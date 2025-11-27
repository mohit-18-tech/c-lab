// Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;
int main() {
    Day days[] = {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    const char *day_names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    int total_days = sizeof(days) / sizeof(days[0]);

    printf("Days of the week with their integer values:\n");
    for (int i = 0; i < total_days; i++) {
        printf("%s: %d\n", day_names[i], days[i]);
    }

    return EXIT_SUCCESS;
}
