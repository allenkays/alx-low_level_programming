#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints within given range
 * @min: starting int
 * @max: ending int
 * Return: pointer to allocated memory; or NULL
 */
int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	i = (max - min) + 1;
	a = malloc(sizeof(int) * i);
	if (a == NULL)
		return (NULL);
	j = min;
	while (j <= max)
	{
		if (j == min)
		{
			a[j] = min;
		}
		else
		{
			*(a + j) = min + 1;
		}
		j++;
		min++;
	}
	return (a);
}
