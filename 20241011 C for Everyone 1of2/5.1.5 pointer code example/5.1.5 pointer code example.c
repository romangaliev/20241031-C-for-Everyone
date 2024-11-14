/* use of pointers */
#include <stdio.h>
//#define SIZE 5 // I can use define insteas of "const" to guaranty the constand value
int main()
{

    //printf("hellow C world!");
    //int n;
    //scanf_s("%d", &n);

    //const int SIZE = 5; //in some C compilers, the const keyword does not guarantee that the value
    /*If you prefer not to use #define, you can use an enum to achieve a similar result.
    An enum in C is treated as a constant expression, so you can use it for array sizes.*/
    enum { SIZE = 5 }; //

    int grades[SIZE] = { 78, 67, 92, 83, 88 };

    double sum = 0.0;
    double* ptr_of_sum = &sum;
    int i;

    printf("\n My grades are: \n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", grades[i]);
    }

    printf("\n\n");

    for (i = 0; i < SIZE; i++)
    {
        sum = sum + grades[i];
    }

    printf("my average grade is %.2f\n\n", sum / SIZE);

    printf("The ""sum"" is located at memory address \n"
            "accessible by this hexodecimal pointer: %p\n\n", ptr_of_sum);

    printf("The same pointer to the ""sum"" \n"
            "shown in long unsigned format: %lu\n\n", ptr_of_sum);

    printf("The value of the same pointer to the ""sum"" \n"
        "after been dereferenced using ""*"" looks like this double: %lf\n\n", *ptr_of_sum);

    printf("grades are located at memory addresses betwen this address %lu\n"
            "and this address %lu\n\n", grades, grades + SIZE);

    printf("Notice that first and last points of the grades array\n"
        "are having addresses that differ to\n"
        "exactly 4 bytes * number of items in the array\n\n");

    return 0;
};