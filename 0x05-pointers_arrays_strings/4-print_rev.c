#include "main.h"

/**
 * print_rev - outputs to string in revers to std out
 * @s: pointer to string to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
