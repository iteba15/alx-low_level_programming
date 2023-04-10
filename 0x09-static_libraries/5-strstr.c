#include "main.h"
#include <stddef.h>

/**
 * _strstr - test function locates a substring
 * @haystack: input(string)
 * @needle: input(substring)
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}
	for (; *haystack; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
	}
	return (NULL);
}
