#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - Frees
 * @head: double pointer
 *
 * Description:Frees
 * Return:Frees
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *next;

	if (head == NULL)
		return;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
