#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>

// OLD NOT WORKING
double average(int row, int column, int* mat) // I CORRECTED to use pointer to an array
{

    int a;
    int b;
    double sum = 0.0;
    int t = 1000;

    for (a = 0; a < row; a++)
    {
        for (b = 0; b < column; b++)
        {
            // OLD NOT WORKING
            sum += mat[a * column + b]; //// I CORRECTED to use pointers calculation
        }
    }
    return(sum / t);

}

int main()

{

    int i;
    int j;
    int r = 50;
    int col = 20;
    FILE* file;

    int** mat = malloc(r * sizeof(int*)); // Allocates memory for r = 50 of row pointers.
                                            //Each pointer has size of  (sizeof(int*))  

    for (i = 0; i < r; ++i)
    {
        mat[i] = malloc(r * sizeof(int)); // Allocates memory for col = 20 of column pointers for each row
    }

    file = fopen("data.txt", "r");/*Text file consisting of raw data in 50 rows and 20 columns*/

    for (i = 0; i < 1000; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (!fscanf(file, "%d", &mat[i][j]))
                break;
            printf("%d\t", mat[i][j]);

            if (j == col - 1)
            {
                printf("\n\n");
            }

            //printf("Average of elephant seal is %.2f\n\n", average(r, col, mat)); // OLD NOT WORKING
            printf("Average of elephant seal is %.2f\n\n", average(r, col, (int*) mat)); // I CORRECTED
        }
    }

    fclose(file);
    return 0;

}
