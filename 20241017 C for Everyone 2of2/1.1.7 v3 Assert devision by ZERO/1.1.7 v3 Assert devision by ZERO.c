// use assert in a simple programm

//#define NDEBUG // NDEBUD switches off all assert s in the programm
//as soon as the programm is debuged with asserts, it is convenient
//to switch off the asserts by one commend. And it is  #define NDEBUG

// gcc -DNDEBUG filename.c will turn off the accerts at on building the programm
// so the following .exe file will be launched without asserts
// with gcc compiler of course

#include <assert.h>
#include <stdio.h>
//#include <ctype.h>

int main()
{

    double x, y;

  

    while (1)
    {
        printf("input double x and y. If y is ZERO programm will abort\n");
        scanf_s("%lf %lf", &x, &y); // interestion option to read two inputs using 1 scanf line

        assert(y != 0); // if y == 0 the programm will abort

        printf("x / y is = %lf\n\n", x/y);
    }

    

    return 0;
    /*printf("hellow C world!");
    int n;
    scanf_s("%d", &n);*/
    //std::cout << "Hello World!\n";
}
