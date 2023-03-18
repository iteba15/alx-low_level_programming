#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main(void)
{
	int digit1 = 0;

	while (digit1 < 8)
	{
		int digit2 = digit1 + 1;

		while (digit2 < 9)
		{
			int digit3 = digit2 + 1;

			while (digit3 < 10)
			{
				putchar(48 + digit1);
				putchar(48 + digit2);
				putchar(48 + digit3);
				if (digit1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
