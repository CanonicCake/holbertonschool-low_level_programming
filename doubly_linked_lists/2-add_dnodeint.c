#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * @head: head of the linkned list
 * @n: variable
 *
 * Return: the new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (*head)
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}

	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
