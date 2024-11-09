/*
n! = 1 * 2 * 3 * ...* n
long type allowa it to work for up to 20
*/

#include <stdio.h>

////////////////////////////////////////////////////
// standard factorial function
long int factorial(int n)
{
	long f = 1;
	int i;
	for (i = 1; i <= n; i++)
		f = f*(i);

	return f;
	
}//long int factorial(int n)

/////////////////////////////////////////////////////
// recursive factorial function
long int recursive_factorial_down(int n)
{
	long f;
	
	printf("entered down recursion. n = %d\n", n);
	if (n == 1) return 1;
		
		f = n*recursive_factorial_down(n-1);
return f;
	
}//long int recursive_factorial_down(int n)


//////////////////////////////////////////////////
// recursive factorial function upwards
long int recursive_factorial_up(int n, int current_number)
	// second parameter is required to stop iterations
{ 
	long f;
	
	printf("entered up recursion. n = %d current number = %d\n", n, current_number);
	if (current_number == n) return n;

	f = current_number*recursive_factorial_up(n, (current_number+1));
	//return current_number*recursive_factorial_up(n, (current_number+1));
return f;
}//long int recursive_factorial_up(int n)
//////////////////////////////////////////////////

//////////////////////////////////////////////////
// recursive factorial function upwards using static
long int recursive_factorial_up_static(int n)
	// second parameter is required to stop iterations
{ 
	long f=0;
	static int limit = 0;

	if (n == 1 ) return 1; // in case initial n == 1

	

	if ((n > 1)&&(limit == 0)) // only first entry to remember the limit
	{
	limit = n; // limit fixed at first entry
	n = 1; // dropping the initial value to start normal recursion
	}

	if (n == limit) // all other entries
	{
		printf("n == limit. Last Return = n = %d\n", n);
		return n; 
	}


	printf("entered static recursion: n = %d, limit = %d\n", n, limit);
	
	printf("f1 = %d\n", f);
	f = n*recursive_factorial_up_static((n+1)); //the "f" will get calculated after limit is reached
	
	printf("f2 = %d\n", f);

return f;
}//long int recursive_factorial_up_static(int n)
//////////////////////////////////////////////////


int main(void)
{
	int n = 5; // hard coded number of iterations
	printf("n    standard     recursive\n");
	printf("%d \t %d\t %d\t %d\t %d\n", 
		n, 
		factorial(n), 
		recursive_factorial_down(n),
		recursive_factorial_up(n, 1),
		recursive_factorial_up_static(n));
	
}//int main(void)



