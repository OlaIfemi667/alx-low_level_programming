#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - afficher
 * @d: le chien meme
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (name == NULL)
			d->name = "(nil)";
		if (owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %6.f\nOwner: %s\n");
	}
}
