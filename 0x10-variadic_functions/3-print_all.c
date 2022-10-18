#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *delimiter = "";

	va_list a;

	va_start(a, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", delimiter, va_arg(a, int));
					break;
				case 'i':
					printf("%s%d", delimiter, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", delimiter, va_arg(a, double));
					break;
				case 's':
					str = va_arg(a, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", delimiter, str);
					break;
				default:
					i++;
					continue;
			}
			delimiter = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(a);
}
