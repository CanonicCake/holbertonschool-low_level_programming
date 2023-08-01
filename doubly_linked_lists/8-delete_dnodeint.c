#include "lists.h"


int delete_first_dnode(dlistint_t **head);
size_t dlistint_len(const dlistint_t *h);

/**
 * delete_dnodeint_at_index - delete node
 * @head: head of list
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *temp = NULL;
	unsigned int len = 0;

	if (head && *head)
	{
		len = dlistint_len(*head);
		if (index > len)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		current = get_dnodeint_at_index(*head, index);
		if (current)
		{
			temp = current;
			if (len -1 == index)
				current->prev->next = current->next;
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}

			free(temp);
			return (1);
		}
	}
	return (-1);
}

/**
 * delete_first_dnode - Remove node
 * @head: the head of the list
 *
 * Return: 1 on success of function
 */

int delete_first_dnode(dlistint_t **head)
{

	dlistint_t *current = *head, *temp = NULL;

	temp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = temp->prev;
		*head = current;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
 * get_dnodeint_at_index - grabs node
 * @head: head of list
 * @index: index
 *
 * Return: node grabbed
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
