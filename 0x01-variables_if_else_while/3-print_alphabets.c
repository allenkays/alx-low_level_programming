#include <stdio.h>
#include <ctype.h>

/**
 * main - outputs the alphabet in lowercase and uppercase
 * Return: 0 on success, non-zero on error
 */
int main(void)
{
	int i, x;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
