#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints number of arguments passed to it
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success, non-zero otherwise.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
