#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 using _putchar
 */
void print_most_numbers(void)
{
	char i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
