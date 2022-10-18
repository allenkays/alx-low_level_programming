#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - outputs given numbers with given delimiter
 * @separator: delimiter between intergers
 * @n: number of intergers passed to function
 * Return: sum of all the params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i, num;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(a, int);
		printf("%i", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
