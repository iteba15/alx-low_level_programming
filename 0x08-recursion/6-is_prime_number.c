#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_helper - entry point(recursor function)
 * @n: input
 * @i: input
 * Return: 0
 */

int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number -entry point
 * @n: input
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}
