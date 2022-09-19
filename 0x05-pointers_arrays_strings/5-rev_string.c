#include "main.h"

/**
 * rev_string - reverses string to std out
 * @s: pointer to string to print
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
