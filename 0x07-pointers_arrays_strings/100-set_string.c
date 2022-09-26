#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer 
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{
	int i = 0;

	while (*(to + i))
	{
		(*(*(s + i))) = (*(to + i))
	}
}
