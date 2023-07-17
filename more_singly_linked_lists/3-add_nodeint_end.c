#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end
 * @head: head node
 * @n: numner of nodes
 *
 * Return: NULL, or new adress of node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
			return (NULL);
	}

	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}	
