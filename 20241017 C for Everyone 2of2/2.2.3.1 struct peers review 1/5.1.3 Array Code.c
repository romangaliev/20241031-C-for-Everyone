//My comments:
//Dosn't run,
//No comments,
//I think there is some issue with printdate function
//
/*
 * structDate.c
 *
 *  Created on: Nov 19, 2024
 *      Author: E5251914
 */

#include<stdio.h>
#define MONTH_END -1
typedef enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec } month;
typedef struct date { month m; int d; } date;
unsigned char* monthNames[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
void nextDay(date* today)
{
	if (today->d == MONTH_END)
	{
		today->d = 1;
		if ((today->m % 11) == 0)
		{
			today->m = jan;
		}
		else { today->m++; }
	}
	else
	{
		today->d++;
	}

}
void printdate(date* today)
{
	printf("%s %d", *monthNames[today->m], today->d);
}
void main(void)
{
	date feb28 = { feb,28 };
	date mar14 = { mar,14 };
	date oct31 = { oct,31 };
	date dec31 = { dec,31 };
	nextDay(&feb28);
	printdate(&feb28);
	nextDay(&mar14);
	printdate(&mar14);
	nextDay(&oct31);
	printdate(&oct31);
	nextDay(&dec31);
	printdate(&dec31);
}
