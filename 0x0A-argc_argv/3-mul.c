#include <stdlib.h>
#include <stdio.h>

/**
 * main - program multiplies two numbers passed to it from commandline
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success, non-zero otherwise.
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	c = a * b;
	printf("%d\n", c);
	return (0);
}
