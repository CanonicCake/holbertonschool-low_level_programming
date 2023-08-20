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
	hash_node_t temp;
	int check;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (check == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp-value);
			temp = temp->next;
			check = 1;
		}
		i++;
	}
	printf("}\n");
}
