/* Espression Eveluation operations Precedence 
Roman Galiev
20241102
*/

#include <stdio.h>

int main (void)
{
	int a = 5, b = 7, c = 0, d = 0; // initialize
	c = a - b;
	printf("a = %d, b = %d, c = %d, d = %d\n",
		a, b, c, d);

	c = b - a;
	printf("a = %d, b = %d, c = %d, d = %d\n",
		a, b, c, d);

	c = a / b; d = b / a;
	printf("a = %d, b = %d, c = %d, d = %d\n",
		a, b, c, d);

	c = a % b; d = b % a;
	printf("a = %d, b = %d, c = %d, d = %d\n",
		a, b, c, d);

	c = -a - b; d = -b - a;
	printf("a = %d, b = %d, c = %d, d = %d\n",
		a, b, c, d);

//=+ read comments below
	c = ++a + b++; d += 5;
	printf("a = %d, b = %d, c = %d, d = %d\n",
		a, b, c, d);
/*
Alright, let’s break it down!

Precedence determines the order in which operations are performed in expressions. Higher precedence operators are evaluated before lower precedence ones.

Postfix Increment (b++): This increases the value of b but after using its current value in the expression. It uses the old value first, then increments.

Prefix Increment (++a): This increases the value of a immediately before using it in the expression.

When you have c = ++a + b++:

Prefix ++a: a becomes 6, and that new value is used.

Postfix b++: b's current value 7 is used first, then it’s incremented to 8.

Addition: The evaluated values 6 and 7 are added, resulting in 13.

So even though the postfix operator has higher precedence, it still uses the value of b first and only increments after it’s used in the expression.

Clearer now? These nuances are what make C both fun and challenging!
*/
//=- read comments

return 0;

}