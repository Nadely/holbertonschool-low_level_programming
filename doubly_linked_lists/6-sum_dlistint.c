#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data
 * @head: pointer
 *
 * Description:returns the sum of all the data
 * Return:returns the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	int sum = 0;

	if (list == NULL)
		return (0);

	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
