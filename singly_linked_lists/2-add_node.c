#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the list
 * @head: pointer to a pointer to the head
 * @str: point to a sting of characters
 *
 * Return: new if successful, NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}
	new->len = length;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
