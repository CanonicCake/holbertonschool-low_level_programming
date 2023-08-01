#include "lists.h"

/**
 * insert_dnode_at_index - insert at certain files
 * @h: the head of multiple lists
 * @idx: indexs to pull from
 * @n: nodes
 *
 * Return: The address of nodes, NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new = NULL;
	unsigned int counter = 0, len = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	len = sum_dlistint(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (len == idx)
		return (add_dnodeint_end(h, n));

	current = *h;
	while (current != NULL)
	{
		if (counter == idx)
		{
			new = create_node(n, current, current->prev);
			current->prev = new;
			current = new;
			current->prev->next = new;
			return (new);
		}

		current = current->next;
		++counter;
	}
	return (current);
}

/**
 * dlistint_len - counts length of list
 * @h: head of lists
 *
 * Return: number
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}

/**
 * create_node - create a node
 * @n: variable
 * @next: next variable
 * @prev: previous node
 *
 * Return: address
 */

dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = next;
	new->prev = prev;
	return (new);
}
