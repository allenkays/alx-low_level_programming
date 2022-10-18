#include "main.h"

/**
 * sum_them_all - gives the sum of all the parameters of given func
 * @n: one of the named parameters
 * Return: sum of all the params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	int i, sum;

	va_start(a, count);

	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
