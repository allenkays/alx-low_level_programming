#include <stdio.h>

/**
 * main - outputs the alphabet in lowercase
 * Return: 0 on success, non-zero on error
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
