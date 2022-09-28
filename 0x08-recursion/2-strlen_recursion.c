#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to string to check length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
