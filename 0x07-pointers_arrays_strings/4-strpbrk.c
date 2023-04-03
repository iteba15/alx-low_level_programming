#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - test function
 * @accept: input
 * @s: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
