#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - outputs a random interger sign
 * @i: interger to be tested
 * Return: exits with 0 on success
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
