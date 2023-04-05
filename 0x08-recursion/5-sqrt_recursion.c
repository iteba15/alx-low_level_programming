#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - entry function
 * @n: input
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural
 * square root of a a number
 * @n: number to calculate sqrt of
 * @i: iterator
 *
 * Return: 0
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i ==  n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
	return (actual_sqrt_recursion(n, i + 1));
	}
}
