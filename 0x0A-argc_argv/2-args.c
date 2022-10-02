#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all arguments passed to it
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 on success, non-zero otherwise.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
