#include "main.h"

/**
 * _strpbrk - searches string for any given set of bytes
 * @s: pointer to string to check
 * @accept: character set to check
 * Return: pointer to first occurence of given character or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; (*(s + i)); i++)
	{
		for (j = 0; (*(accept + j)); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (*(accept + j))
			return (s + i);
	}
	return (0);
}
