#include "main.h"

/**
 * positive_or_negative - checks if a number is positive or negative or zero
 *
 *
 * int i - is an integer that is given as a parameter
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
