#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of array elements.
 * Return: pointer to allocated memory; or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
