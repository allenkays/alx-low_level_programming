#include "main.h"

/**
 * _strstr - locates a given substring
 * @haystack: pointer to string to check
 * @needle: substring to check
 * Return: pointer to the beginning of  given substring or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (*(haystack + i))
	{
		j = 0;
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[j + i]  == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (*(needle + j))
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}
