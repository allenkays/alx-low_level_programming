#include "main.h"

/**
 * _abs - computes absolute value of given number
 * @n: number to check
 * Return: 0 exit code on success
 */
int _abs(int n)
{
	int x, y;

	x = n % 10
	if (n < 0)
		x = -x;
	y = '0' + x;
	_putchar(y);
	return (x);
}
