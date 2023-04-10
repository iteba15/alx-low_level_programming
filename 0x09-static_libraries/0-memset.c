#include "main.h"

/**
 * _memset - test function
 * fills memorywith constant byte
 * @s: pointed destination
 * @b:constant byte
 * @n: byte
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
