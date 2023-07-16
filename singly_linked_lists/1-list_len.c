#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - prints a lists length
 * @h: variable for list
 *
 * Return: nodes
 */

size_t list_len(const list_t *h)
{
	size_t first = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (first);
}
