#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node to the end
 * @head: points to the head
 * @str: points to the string
 *
 * Return: node on success, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length])
		length++;
	new->len = length;
	new->str = strdup(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
