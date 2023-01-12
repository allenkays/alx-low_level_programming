#include "hash_tables.h"

/**
 * key_index - gives the index of a given key
 * @key: key to check index of
 * @size: size of array of the hash table
 *
 * Return: index to store key value pairs
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key % size));
}
