#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to string to output
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
