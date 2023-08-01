#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = NULL;
	hash_node_t **array = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (; i < size; ++i)
	{
		array[i] = NULL;
	}
	table->size = size;
	table->array = array;

	return (table);
}
