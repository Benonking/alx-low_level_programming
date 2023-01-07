#include "hash_tables.h"
/**
 * key_index - return index of key
 * @key: key to be searched
 * @size: size of table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	i = hash_djb2(key);
	return (i % size);
}
