#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - afficher la chaine
 * @h: la structures
 * Return: le nombre de noeud
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
