//use of macros

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ELEPHANT_SEAL_WT_MALE 8800
#define MIN_ELEPHANT_SEAL_WT_MALE 4400

// Note femail weght range is 880-2000 lbs

// Produce a macro that randomly generates male weght

#define RANGE           4400
#define POPULATION      1000
#define WEIGHT_OVER     rand() % RANGE // this % makes the output to be within the RANGE
#define WEIGHT          WEIGHT_OVER + MIN_ELEPHANT_SEAL_WT_MALE // generating randome numbers within 4400-8800 range


#define FILL            for(i = 0; i < POPULATION; i++) \
                        data[i] = WEIGHT;
                        // symbol "\" here extends the #define to another line and could be more
                        // there shall be no blank lines aftet the "\" !!!                  
                        



void print_data(int data[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", data[i]);
        if ( (i +1) % 10 == 0) printf("\n");
        //printf("i = %d, data[i] = %d", i, data[i]);
    }
}//void print_data

int main()
{
    int i;
    int data[POPULATION];
    srand(time(0));
    FILL;
    print_data(data, POPULATION);
    printf("\n\n");

    return 0;

    /*printf("hellow C world!");
    int n;
    scanf_s("%d", &n);*/
    //std::cout << "Hello World!\n";
}