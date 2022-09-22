#include "main.h"

/**
 * _strcat - concatenates given strings
 * @dest: destination for concatenated string
 * @src: source of string for cancatenation
 * Return: concatenated character
 */
char *_strcat(char *dest, char *src)
{
	char *rdest = dest;

	while (*dest)
		dest++;
	while ((*dest++ = *src++))
	{
		;
	}
	return (rdest);
}
