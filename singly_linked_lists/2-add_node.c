#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * @head: Pointer to pointer
 * @str: String
 *
 * Description: new node
 * Return: adds a new node at the beginning
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_add_node = (list_t *)malloc(sizeof(list_t));

	if (new_add_node == NULL)
		return (NULL);

	new_add_node->len = strlen(str);
	new_add_node->str = strdup(str);

	new_add_node->next = *head;
	*head = new_add_node;

	return (new_add_node);
}
