/* Read in Three Floats and Print Sum
Roman Galiev
20241031
*/

#include <stdio.h>

int main() 
{
	float a, b, c, sum;
printf("Input three floats: ");
scanf("%f%f%f", &a, &b, &c);
printf("a = %f, b = %f, c = %f\n", a, b, c);
sum = a + b + c;
printf("sum = %f\n\n", sum);
printf("Hello, World!\n");

printf("Press 0 to exit ");
scanf("%f", &a);
return 0;
}
