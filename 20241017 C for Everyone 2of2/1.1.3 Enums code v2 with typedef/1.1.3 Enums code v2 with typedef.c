//Enumerated types

#include <stdio.h>

enum day { mon, tue, wed, thu, fri, sat, sun }; // declare new type
typedef enum day day; // now we can use "day" instead of "enum day"

// void print_day(enum day d)
void print_day(day d) // using "typedef enum day day;" from line 6
{
    switch (d)
    {
    case mon:
        printf("Monday"); break;
    case tue:
        printf("Tuesday"); break;
    case wed:
        printf("Wednesday"); break;
    case thu:
        printf("Thursday"); break;
    case fri:
        printf("Friday"); break;
    case sat:
        printf("Saturday"); break;
    case sun:
        printf("Sunday"); break;
    default:
        printf("%d is an error ", d); break;
    }
}

//enum day next_day(enum day d) // function that returns next day to the imputed day
enum day next_day(day d) // using "typedef enum day day;" from line 6
{
    return (d + 1) % 7; // this is brilliant!
    /* % 7 ensures that when d + 1 exceeds Sunday(6),
    it wraps around to Monday(0), effectively cycling through the week.*/
}


int main()
{
    //enum day today = sun;
    day today = sun; // using "typedef enum day day;" from line 6

    printf("Today is: "); print_day(today); // just invented an automatic cancotination :)))
    printf("\n\n");

    printf("Day 6: "); print_day(6); // in the C lang with weak type checking it is allowed
    // in other lang it will cause an error
    // but in C the compiler alows it to start
    // buy injecting an int type into enum type

    printf("\n\n");

    printf("Next day is: "); print_day(next_day(today));
    printf("\n\n");
    /*int n;
    scanf_s("%d", &n);
    *///std::cout << "Hello World!\n";
}