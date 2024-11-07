/*
Table of squares and cubes
Number of lines is taken from scanf from user
*/

#include <stdio.h>

double square(double);
double cube(double);

int main(void)
{
	int how_many = 0, i, j;
	printf("I want square and cube for 1 to n where n is :");
	scanf("%d", &how_many);

	printf("\n squares and cubes by interval of 0.1\n");
	//for(i = 1; i <= how_many; i++) //this was original with mistake
	for(i = 1; i < how_many; i++)
	{
		//for(j = 0; j < 10; j++) //this was original with mistake
		for(j = 0; j <= 10; j++)
		{
			printf("\n%lf \t%lf \t%lf",
				i+j/10.0, square(i+j/10.0), cube(i+j/10.0));

		}//for(j = 0; j < 10; j++)
	
	}//for(i = 1; i <= how_many; i++)
	printf("\n\n");



}//int main(void)

double square(double value)
{
	//printf("\nvalue for square: %lf", value);
	return(value*value);
}//double square(double)

double cube(double value)
{
	return(value*value*value);
}//double cube(double)
