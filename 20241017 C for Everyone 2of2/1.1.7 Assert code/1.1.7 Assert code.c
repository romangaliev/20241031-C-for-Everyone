// use assert in a simple programm

#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{

    assert(0);
    printf("My programm runs\n"); // whe shall not see this printed because assert expression == 0
                                  //and it will abort
    return 0;
    /*printf("hellow C world!");
    int n;
    scanf_s("%d", &n);*/
    //std::cout << "Hello World!\n";
}