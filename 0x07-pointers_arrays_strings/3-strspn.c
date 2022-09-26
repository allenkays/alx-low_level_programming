#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: pointer to string
 * @accept: required bytes
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				break;
			j++;
		}
		if (!*(accept + j))
			break;
		i++;
	}
	return (i);
}
