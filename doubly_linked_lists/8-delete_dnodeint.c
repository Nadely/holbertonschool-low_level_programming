#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index position
 *
 * Description:deletes the node at index
 * Return:deletes the node at index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int count = 0;

	if (*head == NULL) /*Vérifie si la liste est vide*/
		return (-1);   /*Echec de suppression*/

	if (index == 0) /*Suppression du premier nœud*/
	{
		*head = node->next; /*Mise à jour du pointeur head sur le suivant*/
		if (node->next != NULL)
		{
			node->next->prev = node->prev;
		}
		free(node); /* Libération de la mémoire*/
		return (1); /*Suppression réussie*/
	}
	/*Parcours de la liste jusqu'à l'index donné*/
	while (node != NULL && count < index)
	{
		node = node->next;
		count++;
	}
	/*Vérifie si l'index est supérieur à la taille de la liste*/
	if (node == NULL)
		return (-1); /*Echec de suppression*/

	node->prev->next = node->next; /*Contournement du nœud à supprimer*/

	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	free(node); /* Libération de la mémoire*/
	return (1); /*Suppression réussie*/
}
