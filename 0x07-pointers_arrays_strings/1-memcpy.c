#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: pointer to memory location to copy to.
 * @src: source to copy from.
 * @n: number of bytes of memory to fill.
 * Return: pointer to memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
