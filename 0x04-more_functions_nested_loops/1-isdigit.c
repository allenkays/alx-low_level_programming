#include "main.h"

/**
 * _isdigit - checks for digit 0 to 9
 * @c: character to check
 * Return: 1 exit code if its a digit; 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
