#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
