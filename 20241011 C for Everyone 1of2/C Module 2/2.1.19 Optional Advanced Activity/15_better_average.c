/* compute a better average */

#include <stdio.h>

int main(void)
{
	int i;
	double x;
	double avg = 0.0; // a better average
	double navg;	// a native average
	double sum = 0.0;

	printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
	"Count","Item","Average","Native avg",
	"______","______","______","______" );
	
	for (i = 1; scanf("%lf", &x) ==1; ++i  ) //scanf(...) ==1 means 1 successful reading !
	{
		avg += (x-avg)/i;
		sum += x;
		navg = sum / i;
		printf("%5d%17e%17e%17e\n", i, x, avg, navg);
	}
return 0;

} //int main(void)