#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: interger count of arguments
 * @av: pointer to argument strings
 * Return: Pointer to new string; NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *s;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
		k++;
	}
	k++;
	s = (char *)malloc(sizeof(char) * k);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[l] = av[i][j];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	s[l] = '\0';
	return (s);
}
