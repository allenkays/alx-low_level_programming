#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints its own name
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success, non-zero otherwise.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
