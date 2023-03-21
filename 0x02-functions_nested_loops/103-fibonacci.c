#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 * less than 4000000
 * Return: nothing!
 */

#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, temp, total_sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			total_sum += a;
		}
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%d\n", total_sum);
	return (0);
}
