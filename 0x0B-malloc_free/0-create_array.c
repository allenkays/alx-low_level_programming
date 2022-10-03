#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a given char.
 * @size: array size
 * @c: char initilizer
 * Return: pointer to array or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		if (A == NULL)
		{
			return (NULL);
		}
		else
		{
			*(A + i) = c;
		}
		i++;
	}
	return (A);
}
