#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
	double interval;
	int i;
	
	for(i = 0; i <30; i++)
	{
		interval = i/10.0;
		printf("sin( %lf ) = %lf \n", interval, fabs(sin(interval)));
		// \t changed to \n for the result to look nicer
		// abs changed to fabs for floating numbers
	}

	printf("\n+++++++\n");

return 0;

}