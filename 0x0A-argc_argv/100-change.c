#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints minimum number of coins changed for a given amount of money
 * @argc: number of arguments passed to main
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int x, y, z, b = 0;
	int a[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (y = 0; y < 5; y++)
		{
			z = x / a[y];
			x -= z * a[y];
			b += z;
			if (x == 0)
				break;
		}
	}
	printf("%d\n", b);
	return (0);
}
