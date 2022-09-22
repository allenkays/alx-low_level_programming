#include "main.h"

/**
 * _strncpy - copies given strings
 * @dest: destination to copy to
 * @src: source of string for to copy
 * @n: size of string to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
