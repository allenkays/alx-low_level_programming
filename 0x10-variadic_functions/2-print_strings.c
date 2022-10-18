#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - outputs given srings with given delimiter
 * @separator: delimiter between intergers
 * @n: number of intergers passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *s;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char *);
		if (!s)
			s = "nil";
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
