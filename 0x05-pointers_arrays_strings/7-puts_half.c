#include "main.h"

/**
 * puts_half - test function
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	n = (len - 1) / 2;
	n += 1;

	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
