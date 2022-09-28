#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse followed by a new line
 * @s: pointer to string to output
 */
void _print_rev_recursion(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i = i - 1;
	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
