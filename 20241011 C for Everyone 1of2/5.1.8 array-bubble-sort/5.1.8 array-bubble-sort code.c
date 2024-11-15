/*
use of simple arrays as parameters
array-bobble-sort
easy but inefficient

to increase efficiency I can make a flag 
whether there was any swappings during last inner loop.
If no movements, then array is already sorted 
and we can avoid looping the remaining cicles
*/
#include <stdio.h>

void swap(int* a, int* b) // call by reference
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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

void bubble(int data[], int how_many)
{
    int i, j;
    int go_on; // any number just to continue sorting after printing

    for (i = 0; i < how_many; i++) // outer cicle
    {
        print_array(how_many, data, "\ninside the outer sorting cicle\n");
        printf("i = %d, input any int to continue", i);
        scanf_s("%d", &go_on);

        for (j = how_many - 1; j > i; j--) // inner cicle starting from the last item
        {
            if (data[j - 1] > data[j]) swap(&data[j - 1], &data[j]);
        }

    } //for (i = 0;
}

int main()
{
    enum { SIZE = 5 }; // enum used to make sure it is constant

    int grades[SIZE] = { 78, 67, 92, 83, 88 };

    print_array(SIZE, grades, "my unsorted grades\n");

    printf("\n\n");

    bubble(grades, SIZE);

    print_array(SIZE, grades, "my sorted grades\n");

    printf("\n\n");

    return 0;

}