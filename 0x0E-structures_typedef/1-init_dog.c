#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog attribu initiation
 * @d: the dog
 * @name: his name
 * @age: age
 * @owner: propritétaire
 * Description: dooggggggg
 */

void init_dog(snoop_dog *d, char *name, float age, char *owner)
{
	if (d ==  NULL)
		d = malloc(sizeof(snoopdog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
