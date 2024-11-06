/*Program prints a table of values for sine and cosine between (0, 1).
The given (0, 1) interval in radians the interval will be divided 
into 11 segments, which will have 12 points, 
including 0 and 1 at the edges of the interval.
Thus, the resulting table will have 10 rows with values, which do not include
the 2 edges of the interval. 
*/

#include<stdio.h>
#include<math.h> /* has  sin(), cos() */

int main(void)
{ 
	double x; // input parameter in radians
	int i; // increment
	double delta = 1.0/11; // step of input increment
	
	//pringing table header
	printf("%17s%17s%17s", "           x[rad]  ", "  sin(x)  ", "  cos(x)\n  "); 
	printf("%17s%17s%17s", "__________", "__________", "__________\n");
		
	//pringing table content
	for(i = 1; i <= 10; i++)
	{
		x = delta*i; // incrementing input on each cicle;

		printf("%17f%17f%17f\n", x, sin(x), cos(x));
		
		// \t changed to \n for the result to look nicer
		// abs changed to fabs for floating numbers
	}
	//pringing table footer
	printf("%17s%17s%17s", "         __________", "__________", "__________\n");
	

return 0;

}