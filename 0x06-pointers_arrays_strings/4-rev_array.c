#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array to reverse
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
