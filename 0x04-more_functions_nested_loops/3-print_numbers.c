#include "main.h"

/**
 * print_numbers - prints numbers 0-9 using _putchar
 * Return: 0 exit code to show success of the program
 */
void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
