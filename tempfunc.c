/*
	print Fahrenheit Celsius table
	
	Author: @buoyantair
*/

#include <stdio.h>

#define UPPER 300 /* upper limit */
#define LOWER 0 /* lower limit */
#define STEP 20

void printtable(int lower, int upper, int step);

void main()
{
  printtable(LOWER, UPPER, STEP);
}

void printtable(int lower, int upper, int step)
{
  int fahr;
  for (fahr = lower; fahr <= upper; fahr += step)
		printf("%3d %6.1f \n", fahr, (5.0/9.0) * (fahr - 32));
}