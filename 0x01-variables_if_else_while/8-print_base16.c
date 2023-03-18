#include <stdio.h>

/**
 * main - this the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int i = 0;
	char j = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
