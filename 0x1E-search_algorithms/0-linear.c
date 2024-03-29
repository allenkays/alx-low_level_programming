#include "search_algos.h"

/**
 * linear_search - Searches a value in array of ints linearly
 * @array: pointer to 1st value of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value position; -1 if null or value is absent
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
