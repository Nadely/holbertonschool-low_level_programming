#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *hash_table_create - pointer of hash
 * @size: size of the array
 * Return: that creates a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	if (size < 1) /*Vérification de la taille*/
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	/*Allocation de mémoire pour la structure de la table de hachage*/
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{ /*Allocation de mémoire pour le tableau de pointeurs*/
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	/*Initialisation des pointeurs à NULL*/
	{
		hash_table->array[i] = NULL;
	}

	/*Attribution de la taille à la structure*/
	hash_table->size = size;
	return (hash_table);
}
