#include <stdio.h>

/**
 * main - outputs the alphabet in lowercase exluding q and e
 * Return: 0 on success, non-zero on error
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ((x != 'q') && (x != 'e'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
