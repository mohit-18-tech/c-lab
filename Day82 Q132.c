// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;
int main() {
    TrafficLight light = RED; // You can change this to YELLOW or GREEN to test other cases

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light color\n");
            break;
    }

    return EXIT_SUCCESS;
}
