#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint -adds a new node at the beginning
 * @head: double pointer
 * @n: numbers
 *
 * Description:adds a new node at the beginning
 * Return:adds a new node at the beginning
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_add = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_add == NULL)
		return (NULL);

	new_add->n = n;

	new_add->next = *head;
	*head = new_add;

	return (new_add);
}
