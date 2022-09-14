#include "main.h"

/**
 * print_sign - checks if number is +ve, -ve or 0
 * @n: number to check
 * Return: 1 exit code if character is lowercase; 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
