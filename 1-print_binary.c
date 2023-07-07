#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int I, count = 0;
	unsigned long int current;

	for (I = 63; i >= 0; I--)
	{
		current = n >> I;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
