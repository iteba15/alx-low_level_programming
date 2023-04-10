#include "main.h"

/**
 * _isdigit - test function
 * @c: test character
 * Return: 1 when digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
