#include "main.h"

/**
 * puts_half - outputs to string in revers to std out
 * @s: pointer to string to print
 */
void puts_half(char *s)
{
	int j, n;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		n = (i-1)/2;	
	}
	else
	{
		n = i/2;
	}
	for (j = n; j <= i; j++)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
