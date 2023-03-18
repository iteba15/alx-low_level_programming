#include <stdlib.h>
#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			putchar(' ');
			if (i == 8 && j == 9)
			{
				exit(0);
			} else
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
