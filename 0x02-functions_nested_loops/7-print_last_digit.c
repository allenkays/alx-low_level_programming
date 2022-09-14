#include "main.h"

/**
 * print_last_digit - prints the last digit of given number
 * @n: number to check
 * Return: 0 exit code on success
 */
int print_last_digit(int n)
{
	int x, y;

	x = n % 10;
	if (n < 0)
	{
		x = -x;
	}
	y = '0' + x;
	_putchar(y);
	return (x);
}
