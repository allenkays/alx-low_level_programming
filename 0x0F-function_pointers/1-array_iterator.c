#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each array element
 * @array: elements to execute function on
 * @size: size of given array
 * @action: function to be executed on elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
