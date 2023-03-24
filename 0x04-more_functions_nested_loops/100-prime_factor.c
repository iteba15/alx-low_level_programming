#include <stdio.h>
#include <math.h>

/**
 * main - this is the main function
 * Return: 0 when successfull
 */

int main(void)
{
	long x, max;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}
	printf("%ld\n", max);

	return (0);
}
