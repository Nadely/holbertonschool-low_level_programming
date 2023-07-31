#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the element
 * @h: Pointer Struct list
 *
 * Description: print whith struct
 * Return: print all the element
 */

size_t print_list(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			size++;
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
			h = h->next;
			size++;
		}
	}
	return (size);
}
