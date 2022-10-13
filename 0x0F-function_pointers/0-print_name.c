#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to string name
 * @f: function pointed to that prints
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

