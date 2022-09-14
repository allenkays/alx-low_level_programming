#include "main.h"

/**
 * main - entry point of the program.
 * Return: 0 exit code on success
 */
int main(void)
{
	int i;
	char c;
	char s[] = "_putchar\n";

	for (i = 0; i < 10 ; i++)
	{
		c = s[i];
		_putchar(c);
	}
	return (0);
}
