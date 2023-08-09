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
	int print = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (print == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			print = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
