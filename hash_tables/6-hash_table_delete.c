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
	hash_node_t *head;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
