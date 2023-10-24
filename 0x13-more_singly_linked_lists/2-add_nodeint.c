#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - ajouter noeud
 * @head: lists chainée
 * @n: data to add
 * Return: pointer to added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (head != NULL)
	{
		new->n = n;
		new->next = *head;
		if (new ==NULL)
			return (NULL);
		*head = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
