#include "main.h"

/**
 * rev_string - test functon
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	char *start;
	char *end;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	start = s;
	end = s + len - 1;

	while (start < end)
	{
	temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
	}
}
