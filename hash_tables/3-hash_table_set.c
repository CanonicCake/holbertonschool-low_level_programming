#include "hash_tables.c"
#include <string.h>

/**
 * hash_table_set  sets the hash tables
 * @ht: hash table
 * @key: key
 * @value: value of the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = NULL, *node = NULL;

	if (ht == NULL)
		retrun (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node>next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		head = ht->array[index]
		if (strdup(key, head->key) == 0)
		{
			head->value = strdup(value);
		}
		else
		{
			node->next = head;
			ht->array[index] = node;
		}
	}
	return (1);
}
