#include <stdio.h>

/**
 * main - prints the fizz buzz challenge
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i == 1)
		{
			printf("%d", 1);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
