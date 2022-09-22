#include "main.h"

/**
 * _strcmp - compares given strings
 * @s1: string to compare
 * @s2: string to compare with
 * Return: 0 if equal, -ve if s1 < s2, +ve if s2 > s1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((*(s1 + i) && *(s2 + i)) && (*(s1 + i) == (*(s2 + i))))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
