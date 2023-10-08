#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_node - Allocates memory for a new hash node and initializes it.
 * @key: The key.
 * @value: The value associated with the key.
 * Return: A pointer to the new node or NULL if an error occurs.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	/*Allouer un nouvel espace mémoire pour le nouveau nœud*/

	if (new_node == NULL) /*Vérifier si l'allocation de mémoire a réussi*/
		return (NULL);

	new_node->key = strdup(key);
	/*Copier la clé dans le nouveau nœud*/
	if (new_node->key == NULL)
	/*Vérifier si la copie de la clé a réussi*/
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	/*Copier la valeur dans le nouveau nœud*/
	if (new_node->value == NULL)
	/*Vérifier si la copie de la valeur a réussi*/
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	/*Initialiser le nœud suivant à NULL*/

	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *current;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		/*Vérifier si la table de hachage, la clé ou la valeur sont nulles, ou vide*/
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/*Calculer l'index de la clé dans la table de hachage*/

	current = ht->array[index];
	/*Récupérer le nœud courant à l'index calculé*/

	while (current != NULL)
	/*Parcourir les nœuds de la liste chaînée à cet index*/
	{
		if (strcmp(current->key, key) == 0)
		/*Si la clé existe déjà, mettre à jour la valeur*/
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
		/*Passer au prochain nœud*/
	}

	new_node = create_node(key, value);
	/*Créer un nouveau nœud avec la clé et la valeur données*/
	if (new_node == NULL)
		/*Vérifier si la création du nouveau nœud a réussi*/
		return (0);

	new_node->next = ht->array[index];
	/*Ajouter le nouveau nœud au début de la liste chaînée à l'index calculé*/
	ht->array[index] = new_node;

	return (1);
}
