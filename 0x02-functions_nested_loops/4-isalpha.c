#include "main.h"

/**
 * _isalpha- checks if character is alphabetic
 * @c: character to check
 * Return: 1 exit code if character is lowercase; 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
