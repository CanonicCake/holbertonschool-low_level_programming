#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *head;
	int check;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			if (check == 1)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
			check = 1;
		}
		++i;
	}
	printf("}\n");
}
