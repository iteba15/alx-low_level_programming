#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successfull
 */

int main(void)
{
	int i = 0;
	int total = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total += i;
		}
		i++;
	}
	printf("%d\n", total);
	return (0);
}
