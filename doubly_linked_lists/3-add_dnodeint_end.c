#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of list
 * @n: number of nodes
 *
 * Return: The head of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head)
	{
		current = *head;
		while (!current->next)
		{
			current = current->next;
		}
		new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
