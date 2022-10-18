#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gives the sum of all the parameters of given func
 * @n: one of the named parameters
 * Return: sum of all the params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum;

	va_start(a, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
