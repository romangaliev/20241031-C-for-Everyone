//we use %d in the printf because the kilometers is int type
// I gues because we din't need super precise answear

#include <stdio.h>   
int main(void) {
    int  miles = 26, yards = 385;
    int kilometers;
    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nA marathon is %d kilometers.\n", kilometers);
    return 0;
 } 