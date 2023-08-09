#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - that prints a hash table.
 * @ht: the hash table
 * Return: If ht is NULL, don’t print anything else hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		printf("%p\n", (void *) ht->array[i]);
	}
}
