#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to allocated space in memory with copy of str
 * @str: string to copy to allocated space
 * Return: pointer or NULL otherwise
 */
char *_strdup(char *str)
{
	int i;
	char *s = (char *)malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(str + i))
	{
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			(*(s + i)) = (*(str + i));
		}
		i++;
	}
	return (s);
	free(s);
}
