#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free again
 * @head: head node
 *
 * Return: void
 */

void free_listint2(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	temp = *head;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL
}
