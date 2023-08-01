#include "hash_tables.h"

/**
 * hash_table_get - retrieves key
 * @ht: hash table
 * @key: key
 *
 * Return: NULL, or something else
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	if (ht == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *) key, ht->size);
	head = ht->array[index];

	if (head == NULL)
		return (NULL);

	while (strcmp(key, head->key) != 0)
	{
		head = head->next;
	}

	return (head->value);
}
