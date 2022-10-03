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
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	l = i + j;

	s = (char *)malloc(l * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < i; k++)
			(*(s + k)) = (*(s1 + k));
		for (k = 0; k < j; k++)
			s[i + k] = (*(s2 + k));
	}
	return (s);
	free(s);
}
