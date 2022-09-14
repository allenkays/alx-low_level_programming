#include "main.h"

/**
 * times_table - prints the 9 multiplication table
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int x, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			x = i * j;
			if (j == 0)
			{
				_putchar(x + '0');
			}
			if (x < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
