#include "search_algos.h"

/**
 * binary_search - Searches a value in an array using binaary search
 * @array: pointer to first value of array to search
 * @size: number of elements contained in array
 * @value: value to search for in given array
 *
 * Return: index of value; -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, i;

	low = 0;
	high = size - 1;


	if (!array)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);

}
