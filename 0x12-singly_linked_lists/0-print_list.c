#include "lists.h"

/**
 *  print_list - afficher la liste chainée
 *  @h: la liste chainée
 *  Return: le nombre de noeud
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
