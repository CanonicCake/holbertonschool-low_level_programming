#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash tale
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		while (ht-> array[i] != NULL)
		{
			tmep = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
