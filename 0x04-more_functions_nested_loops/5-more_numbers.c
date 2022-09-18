#include "main.h"

/**
 * more_numbers - prints numbers 1 to 14 10 times using _putchar
 * Return: 0 exit code to show success of the program
 */
void more_numbers(void)
{
	char a, b, c, d;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b < 10)
			{
				c = b;
			}
			else
			{
				d = b / 10;
				c = b % 10;
				_putchar('0' + d);
			}
			_putchar('0' + c);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
