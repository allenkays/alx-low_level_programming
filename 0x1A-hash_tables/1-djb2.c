# include "hash_tables.h"

/**
 * hash_djb2 - hash function for hash table
 * @str: pointer to string used to generate hash val
 *
 * Return: hash val
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	size_t i = 0;

	while (str[i] != '\0')
	{
		if (isupper(i))
		{
			i = i + 32;
		}
		/**
		 * hash * 33 + c
		 * hash << 5 = hash * 2^5
		 */
		hash = ((hash << 5) + hash) + str[i];
		i++;
	}
	return (hash);
}
