#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - Free
 * @head: Pointer to pointer
 *
 * Description: free node
 * Return: Free
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	if (node->str == NULL)
		return;

	if (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
