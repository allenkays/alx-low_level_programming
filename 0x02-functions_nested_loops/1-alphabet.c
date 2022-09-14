#include "main.h"

/**
 * print_alphabet - prints the alphabet using _putchar
 * Return: 0 exit code to show success of the program
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
