#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns a pointer to allocated space in memory with copy of str
 * @s1: string to concatenate to allocated space
 * @s2: next string to concatenate
 * Return: pointer or NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int j, k;
	char *s = (char *)malloc(sizeof(char));

	k = 0;
	while (*(s1 + k))
	{
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			(*(s + k)) = (*(s1 + k));
		}
		k++;
	}
	j = 0;
	while (*(s2 + j))
	{
		s[k + j] = (*(s2 + j));
		j++;
	}
	return (s);
	free(s);
}
