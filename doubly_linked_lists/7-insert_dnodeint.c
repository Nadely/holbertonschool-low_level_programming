#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer
 * @idx: index position
 * @n: Value
 *
 * Description:inserts a new node at a given position
 * Return:inserts a new node at a given position
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	unsigned int i = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (node != NULL && i < idx - 1)
	{
	node = node->next;
	i++;
	}
	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = node->next;
	if (node->next != NULL)
		node->next->prev = new_node;
	node->next = new_node;
	new_node->prev = node;
	return (new_node);
}
