#include "lists.h"

/**
 * dlistint_len - find len
 * @h: head
 *
 * Return: nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

/**
 * delete_dnodeint_at_index - deletes at index
 * @head: the head of the list
 * index: index to delete at
 *
 * Return: 1 on success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	size_t len;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	len = dlistint_len(*head);
	if (index >= len)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	if (index == (len - 1))
	{
		while (curent->next)
		{
			current = current->next;
		}
		free(current);
	}
	while (current)
	{
		if (i == index)
		{
			current->next->prev = current->prev;
			current->prev->next = curent->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
