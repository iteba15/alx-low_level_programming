#include "main.h"

/**
 * _strlen - test function
 * @s: string to find length
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
