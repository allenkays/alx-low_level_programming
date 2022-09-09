#include <stdio.h>

/**
 * main - outputs the alphabet in lowercase
 * Return: 0 on success, non-zero on error
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
