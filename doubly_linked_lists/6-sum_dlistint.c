#include "lists.h"

/**
 * sum_dlistint - sum of list
 * @head: head of list
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
