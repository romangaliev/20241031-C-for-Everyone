/*
merge sort code 1
here we assume a and b are same size

here we also assume that a and b are ordered by themselves!!!

in fact this merge funcrion is a helper function
to the merge_sort function from next lesson

here is a full algo example
#IT Learn Merge Sort in 13 minutes (code in java)
https://www.youtube.com/watch?v=3j0SWDX4AtU
*/
#include <stdio.h>

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

void merge(int a[], int b[], int c[], int how_many) // we assume a and b are same size
{
    int i = 0, j = 0, k =0;

    while (i < how_many && j < how_many)
    {
        if (a[i] < b[j])
            c[k++] = a[i++]; // first we assign c[k] = a[i] and AFTER increment k++ and i++;
        else
            c[k++] = b[j++]; // first we assign c[k] = b[j] and AFTER increment k++ and i++;
    } // while

    // if some of a or b arrays was longer than another, we append it to the c?
    // I didn't undestand this for sure. Need to test it.
    // But most likelly it is to append the last remaining uncompared element
    while (i < how_many)
    {
        c[k++] = a[i++];
    }
    while (j < how_many)
    {
        c[k++] = b[j++];
    }
}


int main()
{
    enum { SIZE = 5 }; // enum used to make sure it is constant

    //here we also assume that a and b are ordered by themselves!!!
    // so the below will not work (83 is grater than 82 in a). I testes and commented it
    /*int a[SIZE] = { 67, 83, 82, 88, 99 };
    int b[SIZE] = { 58, 69, 72, 81, 88 };*/

    int a[SIZE] = { 67, 82, 83, 88, 99 };
    int b[SIZE] = { 58, 69, 72, 81, 88 };

    int c[2 * SIZE]; // sorted resulting array

    print_array(SIZE, a, "my unsorted grades array a\n");

    printf("\n\n");

    print_array(SIZE, b, "my unsorted grades array b\n");

    printf("\n\n");

    merge(a, b, c, SIZE);
    
    print_array(2*SIZE, c, "my sorted grades array c\n");
    
    
    printf("\n\n");

    return 0;
}