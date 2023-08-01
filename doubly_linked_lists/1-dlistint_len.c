#include "lists.h"

/**
 * dlistint_len - prints the length of a list
 * @h: variable of nodes
 *
 * Return: Length of list
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
