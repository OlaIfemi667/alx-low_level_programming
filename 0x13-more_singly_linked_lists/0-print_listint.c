#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
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
