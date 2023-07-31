#include "lists.h"
#include <stdio.h>


/**
 * list_len - prints number of the element
 * @h: Pointer Struct list
 *
 * Description: prints number of the element
 * Return: print number of the element
 */

size_t list_len(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
