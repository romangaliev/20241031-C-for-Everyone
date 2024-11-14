/*
use of simple arrays as parameters
*/
#include <stdio.h>

double avirage_grades(int how_many, int grades[])
{
    int i;
    double sum = 0.0;
    for (i = 0; i < how_many; i++)
    {
        sum  += grades[i];
    }
    return sum/how_many;
}

void print_grades(int how_many, int grades[])
{
    int i;
    printf("I have %d number of grades:\n", how_many);
    for (i = 0; i < how_many; i++)
    {
        
        printf("grade number = %d,\t grade value = %d\n", i, grades[i]);
    }
    return 0;
}





int main()
{
    enum { SIZE = 5 }; // enum used to make sure it is constant
    
    int grades[SIZE] = { 78, 67, 92, 83, 88 };

    print_grades(SIZE, grades);

    printf("\n\n");
    
    printf("my average grade is %.2f\n\n", avirage_grades(SIZE, grades));

    return 0;
    
}