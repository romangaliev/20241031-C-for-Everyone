
#include <stdio.h>
#include <stdlib.h>

// reading the file and storint the data into an array
int* readFileAndStoreWeights(const char* filename, int* count) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return NULL;
    }

    int capacity = 10; // Initial capacity to be increased later if needed
    
    int* weights = (int*)malloc(capacity * sizeof(int)); // initial mamory allocation
    if (weights == NULL) {
        printf("Memory allocation failed\n");
        fclose(file);
        return NULL;
    }

    int number;
    *count = 0; // Initialize count
    while (fscanf_s(file, "%d", &number) != EOF) {
        
        // if initial capacity needs to be increased
        if (*count >= capacity) {
            capacity *= 2; // Double the capacity
            int* temp = (int*)realloc(weights, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed\n");
                free(weights); // Free the original memory block to prevent a memory leak
                fclose(file);
                return NULL;
            }
            weights = temp; // if memory reallocated successfully to the temp pointer
        }


        weights[*count] = number;
        (*count)++;
    }

    fclose(file);
    return weights; //arrray of data is returned
}

// I chosed to use running average instead of simple average
double calculateRunningAverage(int* weights, int count) {
    if (count == 0) {
        printf("No data to process\n");
        return 0.0;
    }

    double sum = 0.0;
    double runningAverage = 0.0;
    for (int i = 0; i < count; i++) {
        sum += weights[i];
        runningAverage = sum / (i + 1);
        printf("Running average after %d elements: %.2f\n", i + 1, runningAverage);
    }

    return runningAverage;
}


int main() 
{
    const char* filename = "elephant_seal_data.txt";
    int count;
    double average_weight;

    // "count" is passed by reference to be modified within the function
    int* weights = readFileAndStoreWeights(filename, &count);

    
    // by this time we know the data and the count so we can calculate the average
    if (weights != NULL) {
        average_weight = calculateRunningAverage(weights, count);
        free(weights); // Free the allocated memory
    }

    return 0;
}
