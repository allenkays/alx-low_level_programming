#include "main.h"

/**
*get_bit - get the value of a bit at the given index
*@n: the n
*@index: index starting from 0 of the bit wanted.
*
*Return: value of bit at index or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
