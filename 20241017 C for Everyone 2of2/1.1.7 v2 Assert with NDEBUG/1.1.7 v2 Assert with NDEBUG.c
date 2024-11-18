// use assert in a simple programm

#define NDEBUG // NDEBUD switches off all assert s in the programm
//as soon as the programm is debuged with asserts, it is convenient
//to switch off the asserts by one commend. And it is  #define NDEBUG

#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{

    assert(0);

    /*whe shall not see this printed because assert expression == 0
    and it will abort
    but NDEBUD switches off all assert s in the programm*/
    //so it will not abort after adding #define NDEBUG
    printf("My programm runs\n"); 


    return 0;
    /*printf("hellow C world!");
    int n;
    scanf_s("%d", &n);*/
    //std::cout << "Hello World!\n";
}
