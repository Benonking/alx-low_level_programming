#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	/*no table*/
	if (size == 0)
		return (NULL);

	hash_table_t *table;
	table = malloc(sizeof(hash_table_t));
	hash_node_t **array;
	array = malloc(sizeof(hash_node_t) * size);

	/*fail*/
	if (table == NULL)
		return (NULL);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = array;

	return (table);
}
