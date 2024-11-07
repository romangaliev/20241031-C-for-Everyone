/* 
Love you very much.
demonstrate loope with while
*/

#include <stdio.h>

void write_very(int count) 
{
	while (count > 0)
	{
		printf("\n very");
		count--;
	}//while (count > 0)
	printf("\n much!\n\n");
} //void write_very

int main()
{
	int repeat = 0; // numbers to repeat "very"
	printf("How strong is your love from 1-10? :");
	scanf("%d", &repeat);
	printf("\nI love you very");
	write_very(repeat);

	
return 0;
}//int main()
