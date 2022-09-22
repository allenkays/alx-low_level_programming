#include "main.h"

/**
 * puts_half - outputs to string in revers to std out
 * @s: pointer to string to print
 */
void puts_half(char *s)
{
	int n;
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	n = i/2;
	if (i % 2)
	{
		n += 1;
	}
	while (n < i)
		_putchar(*(s + n));
		n++;
	}
	_putchar('\n');
}
