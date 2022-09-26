#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to memory location
 * @b: byte to fill memory with
 * @n: number of bytes of memory to fill
 * Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
