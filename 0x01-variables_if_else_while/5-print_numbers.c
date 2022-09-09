#include <stdio.h>

/**
 * main - outputs the alphabet in lowercase
 * Return: 0 on success, non-zero on error
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
