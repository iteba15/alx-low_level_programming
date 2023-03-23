#include "main.h"

/**
 * print_numbers - test function
 *
 * Return: print numbers followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
