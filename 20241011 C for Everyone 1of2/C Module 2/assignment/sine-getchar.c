//a program that prints the sine function
//for an input x between (0, 1)

#include <stdio.h> // this is to scan and print

#include <math.h> // this is to have a sine function and M_PI

/* the below ifndef and endif are to define M_PI
if it is not defined in <math.h> */
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{

	float x;
	float result;
	printf("Hi!\n"); 
	printf("This program prints the sine function\n"); 
	printf("for an input x between (0, 1)\n\n" );
	printf("Please provide the input x between (0, 1)\n"); 

	scanf("%f", &x); // scaning into memory the provided input

	printf("You provided the input x =  %f \n\n", x); 

	result = sin(x*M_PI); // M_PI is to convert to radians
	
	printf("The sine of x is equal to %f\n", result);

	printf("Press any key and then ""Enter"" key to quit...\n");
	getchar();
    
	return 0;
}