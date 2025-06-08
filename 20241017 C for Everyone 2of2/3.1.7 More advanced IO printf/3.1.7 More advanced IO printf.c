/* 

test modifiers 
Peter Printer
Sept 19, 2019
*/
#include <stdio.h>


int main()
{
    double x = 0.123456789;
    printf("General Printing Ideas\n\n");
    printf(" x is %-20.5e and %e and %10.5f and %10d\n\n", x, x, x, x);
    //the %10.5f neans space is 10, precision is 5
    //the %-20.5e neans negative 20 spaces, precision is 5
    return 0;
    

  //  int n;
    //scanf_s("%d", &n);
    //std::cout << "Hello World!\n";
}