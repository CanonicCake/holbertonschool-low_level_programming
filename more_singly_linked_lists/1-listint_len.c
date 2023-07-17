#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - prints the length of a list int
 * @h: head variable
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
