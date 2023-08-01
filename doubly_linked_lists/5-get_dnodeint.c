#include "lists.h"

/**
 * get_dnodeint_at_index - grabs node at index
 * @head: head of list
 * @index - index to go to
 *
 * Return: node
 */

dlistint_t *get_dnode_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (counter = index)
				return (current);

			current = current->next;
			++counter;
		}
	}
	return (NULL);
}
