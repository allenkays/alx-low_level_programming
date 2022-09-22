#include "main.h"

/**
 * reverse_array - outputs the elements of an array in reverse
 * @a: array to reverse
 * @n: numbers of elements in an array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, k;

	k = n - 1;
	while (i < k)
	{
		j  = (*(a + i));
		(*(a + i)) = (*(a + k));
		(*(a + k)) = j;
		k--;
		i++;
	}
}
