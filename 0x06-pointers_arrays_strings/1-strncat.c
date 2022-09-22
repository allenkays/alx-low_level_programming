#include "main.h"

/**
 * _strncat - concatenates given strings
 * @dest: destination for concatenated string
 * @src: source of string for cancatenation
 * @n: size of string to concatenate
 * Return: concatenated character
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, dest_len;
	int i;

	j = 0;
	while (*(dest + j))
		j++;
	dest_len = j;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
