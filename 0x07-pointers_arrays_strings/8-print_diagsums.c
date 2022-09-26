#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum of the diagonals in a square matrix
 * @a: square array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum, sum1;
	int i, pos, pos1;

	for (i = 0; i < size; i++)
	{	
		pos = (size * i) + i;
		sum += *(a + pos); 
		pos1 = (size * i) + (size - 1 - i);
		sum1 += *(a + pos1);
	}
	printf("%i, %i\n", sum, sum1);
}
