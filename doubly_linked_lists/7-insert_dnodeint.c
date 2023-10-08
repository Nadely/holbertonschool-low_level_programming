#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer
 * @idx: index position
 * @n: Value
 *
 * Description:inserts a new node at a given position
 * Return:inserts a new node at a given position
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;											 /* Pointeur vers le premier nœud de la liste doublement chaînée*/
	unsigned int i = 0;												 /*Compteur pour suivre la position actuelle dans la liste*/
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t)); /*Alloue de la mémoire pour le nouveau nœud*/

	if (new_node == NULL) /*Vérifie si l'allocation de mémoire a réussi*/
		return (NULL);
	new_node->n = n; /*Affecte la valeur n au nouveau nœud*/
	new_node->next = NULL;
	new_node->prev = NULL; /* Initialise le pointeur next et prev du nouveau nœud à NULL*/
	if (*h == NULL)		   /*Vérifie si la liste est vide*/
	{
		*h = new_node; /*Définit le nouveau nœud comme le premier élément de la liste*/
		return (new_node);
	}
	if (idx == 0) /*Insère le nouveau nœud en début de liste*/
	{
		new_node->next = *h;   /*Le prochain pointeur du nouveau nœud pointe vers l'ancien premier nœud*/
		(*h)->prev = new_node; /*Met à jour le pointeur prev de l'ancien premier nœud pour pointer vers le nouveau nœud*/
		*h = new_node;		   /*Définit le nouveau nœud comme le premier élément de la liste*/
		return (new_node);
	}
	while (node != NULL && i < idx - 1) /* Parcourt la liste jusqu'à atteindre la position d'index précédente*/
	{
		node = node->next; /*Passe au nœud suivant*/
		i++;			   /*Incrémente le compteur*/
	}
	if (node == NULL) /*Vérifie si la position d'index donnée est en dehors de la liste*/
	{
		free(new_node); /*Libère la mémoire allouée pour le nouveau nœud*/
		return (NULL);
	}
	new_node->next = node->next;	 /*Définit le prochain pointeur du nouveau nœud pour pointer vers le nœud suivant le nœud actuel */
	if (node->next != NULL)			 /*Vérifie si le nœud actuel n'est pas le dernier nœud de la liste*/
		node->next->prev = new_node; /*Met à jour le pointeur prev du nœud suivant pour pointer vers le nouveau nœud*/
	node->next = new_node;			 /*Met à jour le pointeur next du nœud actuel pour pointer vers le nouveau nœud*/
	new_node->prev = node;			 /*Met à jour le pointeur prev du nouveau nœud pour pointer vers le nœud actuel*/
	return (new_node);				 /*Retourne le nouveau nœud inséré dans la liste*/
}
