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
	list_t *end = *head; /*Pointer to track the end of the list */
	list_t *new_add_node = (list_t *)malloc(sizeof(list_t)); /*Allocate memory for new node*/

	if (head == NULL) /* Check if the head pointer is NULL*/
		return (NULL);

	if (new_add_node == NULL) /*Check if memory allocation failed*/
		return (NULL);

	new_add_node->str = strdup(str); /*Duplicate the string and assign it to the new node's str*/
	if (new_add_node->str == NULL) /*Check if strdup failed*/
	{
		free(new_add_node);
		return (NULL);
	}

	new_add_node->len = strlen(str); /*Determine the length of the string and assign it to the new node's len */
	new_add_node->next = NULL; /* Set the next pointer of the new node to NULL*/

	if (*head == NULL) /*If the list is empty, make the new node the head*/
	{
		*head = new_add_node;
		return (new_add_node);
	}

	while (end->next != NULL) /*Traverse the list to reach the end*/
	end = end->next;
	end->next = new_add_node; /*Assign the new node as the next node of the last node*/

	return (new_add_node); /* Return the address of the new node*/
}
