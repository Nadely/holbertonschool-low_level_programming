#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - deletes a hash table
 * @ht: the hash table
 * Return: deletes a hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		free(ht);

	else
	{
		free(ht->array);
		free(ht);
	}
}
