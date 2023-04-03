#include "main.h"
#include <stddef.h>

/**
 * _strchr - test function that locates a character in a string
 * @s: input
 * @c: input
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
