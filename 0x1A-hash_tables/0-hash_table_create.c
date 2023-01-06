#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of hash table
 * Return: hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table;
	hash_node_t **array;
	/*no table*/
        if (size == 0)
		return (NULL);

	
	table = malloc(sizeof(hash_table_t));
	/*fail*/
        if (table == NULL)
                return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	/*fail*/
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	/*initialize array elements to NULL*/
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	table->size = size;
	table->array = array;

	return (table);
}
