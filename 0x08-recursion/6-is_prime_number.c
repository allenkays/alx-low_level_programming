#include "main.h"

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 * Return: 1 if number is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int i, flag;

	if (n == 0 || n == 1)
		flag = 0;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	return (flag);
}
