#include "lists.h"

/**
 * print_distint - prints a doubly linked list
 * @h: variable of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_distint(const distint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->new);
		++len;
		h = h->next;
	}
	return (len);
}
