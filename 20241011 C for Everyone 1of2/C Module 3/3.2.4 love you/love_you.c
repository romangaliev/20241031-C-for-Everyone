/* the more I love you from 1 to 10, 
the more time "very" will be printed 
*/

#include <stdio.h> // this is to scan and print

int main(void)
{

	int repeat = 0;
	printf("How strong is your love 1-10? :\n");
	scanf("%d", &repeat);
	printf("\n I love you very");

	while (repeat > 0)
	{
	printf("\n very");
	repeat--;
	}
	
	printf("\n very much.\n\n");
return 0;

}