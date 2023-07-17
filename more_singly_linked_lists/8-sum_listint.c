#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - the sum of listint
 * @head: head node
 *
 * Return: total sum of listint
 */

int sum_listint(listint *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum =+ head->n;
		head = head->next;
	}
	return (sum);
}
