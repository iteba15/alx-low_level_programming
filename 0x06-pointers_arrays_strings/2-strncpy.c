#include "main.h"

/**
 * _strncpy - this is the test function
 * @dest: this is the destinantion
 * @src: this is the string source
 * @n: this is the max no. of bits from src
 * Return: return pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
