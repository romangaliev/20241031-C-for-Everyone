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

int main(void)
{
	int n = 10; // hard coded number of iterations
	printf("n    standard     recursive\n");
	printf("%d \t %d\t %d\t %d\n", 
		n, 
		factorial(n), 
		recursive_factorial_down(n),
		recursive_factorial_up(n, 1));
	
}//int main(void)



