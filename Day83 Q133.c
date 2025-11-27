// Q133: Create an enum for months and print how many days each month has.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} Month;
int get_days_in_month(Month month) {
    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case FEBRUARY:
            return 28; // Not considering leap years for simplicity
        default:
            return 0; // Invalid month
    }
}
int main() {
    Month months[] = {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
    const char *month_names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int total_months = sizeof(months) / sizeof(months[0]);

    printf("Months and their number of days:\n");
    for (int i = 0; i < total_months; i++) {
        int days = get_days_in_month(months[i]);
        printf("%s: %d days\n", month_names[i], days);
    }

    return EXIT_SUCCESS;
}
