#include "main.h"

/**
 * _strcmp - this is the test fucntion
 * @s1: first string
 * @s2: second string
 * Return: 0 when same, -15 less, 15 more
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
