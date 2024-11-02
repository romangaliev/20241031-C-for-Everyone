// the distance of the marathone in kilometers

#include <stdio.h>


int main()
{
	int miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.609*(miles + yards / 1760.0);

	printf("\nA marathon in %lf kilometers. \n\n", kilometers);
	
//scanf("%lf", &radius); // lf stans for loag float
//	area = PI*radius*radius;
	
//	printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
return 0;
}