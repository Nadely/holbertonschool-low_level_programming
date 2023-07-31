#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Print all the elements
 * @h: Pointer
 *
 * Description: Print all the elements
 * Return: Print all the elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *present = h;
	size_t node = 0;

	while (present != NULL)
	{
		printf("%d\n", present->n);
		present = present->next;
		node++;
	}
	return (node);
}
