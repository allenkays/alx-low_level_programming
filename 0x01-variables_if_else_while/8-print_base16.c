#include <stdio.h>

/**
 * main - outputs the  in lowercase
 * Return: 0 on success, non-zero on error
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
