#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, left, right;

	if (array == NULL || size == 0)
		return (-1);
	jump = 0;
	while (jump * jump < size)
		jump++;

	left = 0;
	right = jump;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
