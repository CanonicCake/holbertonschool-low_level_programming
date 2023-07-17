#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - delete head
 * @head: head node to be deleted
 *
 * Return: head data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
