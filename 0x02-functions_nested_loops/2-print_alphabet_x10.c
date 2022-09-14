#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times using _putchar
 * Return: 0 exit code to show success of the program
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}
