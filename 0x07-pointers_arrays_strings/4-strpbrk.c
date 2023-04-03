#include "main.h"

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
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}
	return (NULL);
}
