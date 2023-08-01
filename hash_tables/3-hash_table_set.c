#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - sets the hash tables
 * @ht: hash table
 * @key: key
 * @value: value of the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head = NULL, *node = NULL;

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head && strcmp(key, head->key) == 0)
	{
		free(head->value);
		head->value = strdup(value);
		return (1);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
