#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a linked
 * @h: Pointer
 *
 * Description: returns the number of elements in a linked
 * Return: returns the number of elements in a linked
 */

size_t dlistint_len(const dlistint_t *h)
{
	int element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
