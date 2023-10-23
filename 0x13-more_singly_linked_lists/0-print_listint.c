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
	unsigned int i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
