#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    FILE* file;
    int weights[1000]; // Assuming the file has up to 1000 weights
    int i = 0;
    int total_weights = 0;
    double sum = 0.0, average = 0.0;

    // Open the file containing the elephant seal data
    file = fopen("elephant_seal_data.txt", "r");
    //file = fopen_s("elephant_seal_data.txt", "r",);
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read weights from the file and store them in the array
    //while (fscanf(file, "%d", &weights[i]) != EOF) {
    while (fscanf_s(file, "%d", &weights[i]) != EOF) {
        sum += weights[i];
        i++;
    }
    total_weights = i; // The number of weights read

    // Calculate the average
    if (total_weights > 0) {
        average = sum / total_weights;
        printf("The average weight of the elephant seals is: %.2f\n", average);
    }
    else {
        printf("No weights found in the file.\n");
    }

    // Close the file
    fclose(file);

    return 0;
}
