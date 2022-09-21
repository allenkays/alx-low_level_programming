#include <stdio.h>

/**
 * main - gives the largest prime factor of given number
 * Return - largest prime factor
 */
int main()
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);

}
