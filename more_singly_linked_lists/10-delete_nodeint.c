#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - will delete the node from index
 * @head: head node
 * @index: the index to remove node from 
 *
 * Return: 1 when deleted, -1 if node is not deleted
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int i = 1;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				return (-1);
			}
			i++;
		}
		del = temp;
		del = del->next;
		temp->next = del->next;
		free(del);
	}
	return (1);
}
