#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer
 * @index: index
 *
 * Description:returns the nth node
 * Return:returns the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (node != NULL && count < index)
	{
		node = node->next;
		count++;
	}

	if (count != index)
		return (NULL);

	return (node);
}
