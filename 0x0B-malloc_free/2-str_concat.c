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
	int i, j, k, l;
	char *s = (char *)malloc(sizeof(char));


	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; (*(s1 + i)); i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; (*(s2 + j)); j++)
			;
	}
	l = i + j + 1;

	s = (char *)malloc(l * sizeof(char));
	for (k = 0; (*(s1 + k)); k++)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			(*(s + k)) = (*(s1 + k));
		}
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
