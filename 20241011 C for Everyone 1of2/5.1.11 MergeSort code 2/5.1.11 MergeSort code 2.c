/*
Merge sort size is power of 2 ( for simplicity)

here is a full algo
#IT Learn Merge Sort in 13 minutes (code in java)
https://www.youtube.com/watch?v=3j0SWDX4AtU
*/
#include <stdio.h>
#include <stdlib.h> // used for malloc function to allocate memory 
                    //an array w[] with a size determined at runtime


void print_array(int how_many, int data[], char* str)
{
    int i;
    printf("%s", str); // title of the array
    printf("I have %d number of grades:\n", how_many);
    for (i = 0; i < how_many; i++)
    {

        printf("%d\t", data[i]);
    }
}

// helper function
void merge(int a[], int b[], int c[], int N) // we assume a and b are same size
{
    //N = 8;
    printf("N = %d\n", N);

    int i = 0, j = 0, k = 0;
    ///////////
    // Example implementation of merge 
    printf("Array a: "); 
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); } 
    
    printf("\n"); 
    printf("Array b: "); 
    for (int i = 0; i < N; i++) { printf("%d ", b[i]); } 
    
    printf("\n");
    ////////////
    while (i < N && j < N)
    {
        if (a[i] < b[j])
            c[k++] = a[i++]; // first we assign c[k] = a[i] and AFTER increment k++ and i++;
        else
            c[k++] = b[j++]; // first we assign c[k] = b[j] and AFTER increment k++ and i++;
    } // while

    //+ the second (remaining) of 2 compared arrays 
    // is placed after the first one was placed above +
    while (i < N)
    {
        c[k++] = a[i++];
    }
    while (j < N)
    {
        c[k++] = b[j++];
    }
    //- the second (remaining) of 2 compared arrays 
    // is placed after the first one was placed above -

}

//=+ create an array with needed size. DONT FORGET to free the memory +
int* createArray(int size) {
// Allocate memory for the array
int* array = (int*)malloc(size * sizeof(int));

// Check if memory allocation was successful
if (array == NULL) {
    printf("Memory allocation failed\n");
    return;
}

// Initialize the array (optional)
for (int i = 0; i < size; i++) {
    array[i] = i * 10; // Example initialization
    //printf("created array array[i] = %d\n", array[i]);
}

//// Use the array (example)
//for (int i = 0; i < size; i++) {
//    printf("%d ", array[i]);
//}
//printf("\n");

//// Free the allocated memory
//free(array);

// Return the pointer to the array return array;
return array;

} //=- creatin an array with needed size. DONT FORGET to free the memory -



// actual sorting function
void mergesort(int key[], int how_many) // key size is power of 2 for simplicity
// key[] is usually data to be sorted
{
    int j, k;
// when k starts at 1 means only to elements will be compared
// then k = 2 so 2*2 =  4 elements will be compared etc
    
    
    
   //int w[how_many]; //this from video didn't work because how_many is not a constant
    // so I decided to use dinamic memory array creation isung createArray function
    int* w = createArray(how_many); // temporary array
    
    //// checking the array (optional)
    //for (int i = 0; i < how_many; i++) {
    //    //w[i] = i * 10; // Example initialization
    //    printf("received array w[i] = %d\n", w[i]);
    //}
    printf("received array w[how_many-1] = %d\n", w[how_many - 1]);

    for (k = 1; k < how_many; k*=2) // first we compare 1 and 1 element, then 2 and 2 etc
    {
        for (j = 0; j < how_many - k; j += 2 * k)
                 merge(key + j, key + j + k, w + j, k);
            /*
            here we using address arithmetics

            at the first iteration k=1 and j=0 we compare first two elements of key
            and the smaller of them will be placed at array w[0] on 0th position
            and the last k means we compare only 1 element to 1 element of key array
            */

        for (j = 0; j < how_many; j++)
            key[j] = w[j]; // the resulting array is updated each cicle
    }


    free(w); // releasing the memory of temporary used dinamic array
} //void mergesort


int main()
{

    enum { SIZE = 8 };

    int a[SIZE] = { 99, 82, 74, 85, 92, 67, 76, 49 };

    print_array(SIZE, a, "my unsorted grades array a\n");

    printf("\n\n");

    mergesort(a, SIZE);

    print_array(SIZE, a, "my sorted grades array a\n");

    printf("\n\n");

    return 0;
}
