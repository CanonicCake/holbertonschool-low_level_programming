#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the list
 * @head: pointer to the head
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp->head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
