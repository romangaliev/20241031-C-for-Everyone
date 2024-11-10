/* !!! recursive makes a computer stuck when there are too many, 
because all of them are stuck in the memory intill the last one is done.
Iterative and recursive Fibonaci

F(n) = F(n-1) * F(n-2);
where F(0) = 0; and F(1) = 1;
*/

#include <stdio.h>

//+ iterative fibo function +
long fibonacci(int n)
{

	long f2 = 0, f1 = 1, f_old;
	int i;

	for (i = 0; i < n; i++)
	{
		f_old = f2;
		f2 = f1 + f2;
		f1 = f_old;
		
	}

 
return f2;
}

//- iterative fibo function -

//////////////////////////////////

//+ recursive fibo function +
long recursive_fibonacci(int n)
{
	
	
	if (n <= 1) return n;
		
	long f;

	f = recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
	
return f;
}

//- recursive fibo function -

////////////////////////////////////

int main(void)
{

int n = 0, i;

printf("I want table of fibonacci up to n:");

scanf("%d", &n);
printf("\n fibonacci\n ");

for (i = 0; i <= n; i++)
printf("n = %d, iterative fibo is %d, recursive fibo is %d\n", 
	i, fibonacci(i), recursive_fibonacci(i));

return 0;
} 