// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

// PROGRAM:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUMBERS 1000
#define MAX_LINE_LENGTH 10000
int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char line[MAX_LINE_LENGTH];
    if (fgets(line, sizeof(line), file) == NULL) {
        perror("Error reading line from file");
        fclose(file);
        return EXIT_FAILURE;
    }
    fclose(file);

    int numbers[MAX_NUMBERS];
    int count = 0;
    char *token = strtok(line, " ");
    while (token != NULL && count < MAX_NUMBERS) {
        numbers[count++] = atoi(token);
        token = strtok(NULL, " ");
    }

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return EXIT_SUCCESS;
    }

    long long sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    double average = (double)sum / count;

    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", average);

    return EXIT_SUCCESS;
}
