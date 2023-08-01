#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint_end -adds a new node at the end
 * @head: double pointer
 * @n: numbers
 *
 * Description:adds a new node at the end
 * Return:adds a new node at the end
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = *head;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;

	return (new_node);
}
