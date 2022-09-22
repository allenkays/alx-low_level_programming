#include "main.h"

/**
 * _strlen - returns len of given string
 * @s: pointer to char
 * Return: len of string
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
