#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print content of an array
 * @a: array to print
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
