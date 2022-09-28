#include "main.h"

int sqrt_checker(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to find natural square root of
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt_checker(n, 0));
}
/**
 * sqrt_checker - checks exact square root of given number
 * @n: number to check square root of
 * @i: iterator to number n
 * Return: squareroot or -1
 */
int sqrt_checker(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	return (sqrt_checker(n, i + 1));
}
