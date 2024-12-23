#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

double calculate_average(double weights[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += weights[i];
    }
    return sum / size;
}

int main() {
    FILE* file;
    double weights[MAX_SIZE];
    int count = 0;

    file = fopen("elephant_seal_data.txt", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while (fscanf(file, "%lf", &weights[count]) == 1) {
        count++;
        if (count >= MAX_SIZE) {
            printf("File too large, exceeding array limit.\n");
            break;
        }
    }

    fclose(file);

    if (count == 0) {
        printf("No data found in the file.\n");
        return 1;
    }

    double average = calculate_average(weights, count);
    printf("Average Weight of Elephant Seals: %.2f\n", average);

    return 0;
}