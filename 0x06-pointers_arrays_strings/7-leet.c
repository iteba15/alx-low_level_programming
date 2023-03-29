#include "main.h"

/**
 * leet - test function
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "44337071";
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		j = 0;

		while (letters[j])
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
			j++;
		}
	}

	return (s);
}
