#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: Pointer to pointer
 * @str: String
 *
 * Description: new node
 * Return: adds a new node at the end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = *head;
	list_t *new_add_node = (list_t *)malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	if (new_add_node == NULL)
		return (NULL);

	new_add_node->str = strdup(str);
	if (new_add_node->str == NULL)
	{
		free(new_add_node);
		return (NULL);
	}

	new_add_node->len = strlen(str);
	new_add_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_add_node;
		return (new_add_node);
	}

	while (end->next != NULL)
	end = end->next;
	end->next = new_add_node;

	return (new_add_node);
}
