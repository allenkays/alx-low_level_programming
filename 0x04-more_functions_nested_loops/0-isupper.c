#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 exit code if character is uppercase; 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
