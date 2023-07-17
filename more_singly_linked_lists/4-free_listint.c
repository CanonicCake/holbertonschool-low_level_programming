#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees listint
 * @head: head pointer node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
