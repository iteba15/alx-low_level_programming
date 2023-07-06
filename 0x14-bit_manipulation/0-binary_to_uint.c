#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int I;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (I = 0; b[I]; I++)
	{
		if (b[I] < '0' || b[I] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[I] - '0');
	}

	return (dec_val);
}
