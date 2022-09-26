#include "main.h"

/**
 * _strchr - locates given character in string.
 * @s: pointer to string to check.
 * @c: character to check .
 * Return: pointer to first occurence of given character or NULL otherwise.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
