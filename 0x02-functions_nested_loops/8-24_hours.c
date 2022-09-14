#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, m, i, j, k, l;

	h = 0;
	while (h < 24)
	{
		i = h / 10;
		j = h % 10;
		m = 0;
		while (m < 60)
		{
			k = m / 10;
			l = m % 10;
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
			m++;
		}
		h++
	}
}
