/* compute a better average */

#include <stdio.h>

int main(void)
{
	FILE *file;
	int i;
	double x;
	double avg = 0.0; // a better average
	double navg;	// a native average
	double sum = 0.0;

	printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
	"Count","Item","Average","Native avg",
	"______","______","______","______" );

	//+ Open the file +
	file = fopen("17data.txt", "r");
	if (file == NULL) 
	{
        fprintf(stderr, "Could not open file\n");
        return 1;
	}
	//- Open the file -
	
	for (i = 1; fscanf(file, "%lf", &x) == 1; ++i)
		//fscanf(...) ==1 means 1 successful reading!
		// reads one %lf per iteration. 

/*Whether the numbers are on separate lines or on a single line separated by spaces, 
fscanf would read each value correctly, one by one. 
It's built to handle whitespace, so spaces, tabs, and newlines all act as separators.
*/
	{
		avg += (x-avg)/i;
		sum += x;
		navg = sum / i;
		printf("%5d%17e%17e%17e\n", i, x, avg, navg);
	}

	// Close the file
	fclose(file);
return 0;

} //int main(void)