#include "main.h"

/**
 * swap_int - swaps values of given int
 * @a: pointer to int
 * @b: pointer to another int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
