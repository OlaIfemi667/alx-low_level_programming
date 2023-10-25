#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end- ajouter noeud
 * @head: lists chainée
 * @n: data to add
 * Return: pointer to added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
