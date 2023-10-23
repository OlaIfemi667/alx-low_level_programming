#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - afficher la chaine
 * @h: la structures
 * Return: le nombre de noeud
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
