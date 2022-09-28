#include "main.h"

/**
 * prime_number_check - checks to see if number is prime
 * @f: factor check
 * @p: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_number_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_number_check(f + 1, p));
}
/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 * Return: 1 if number is prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_number_check(2, n));
}
