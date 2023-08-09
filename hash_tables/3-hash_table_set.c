#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_node - Allocates memory for a new hash node and initializes it.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the new node or NULL if an error occurs.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return NULL;

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return NULL;
	}

	new_node->next = NULL;

	return new_node;
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		return 0;

	size_t index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key already exists, update the value */
			free(current->value);
			current->value = strdup(value);
			return 1;
		}
		current = current->next;
	}

	hash_node_t *new_node = create_node(key, value);
	if (new_node == NULL)
		return 0;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}
