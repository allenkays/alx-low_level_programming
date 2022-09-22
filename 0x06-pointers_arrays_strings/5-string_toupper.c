#include "main.h"

/**
 * string_toupper - conversts lower case characters to uppercase in a string
 * @s: string to check
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			(*(s + i) -= 'a' - 'A'
			 i++;
		}
	return (s);
}
