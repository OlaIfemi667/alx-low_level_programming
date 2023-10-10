#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - nouveau chien
 * @name: nom
 * @age: age
 * @owner: propio
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t snoopy;
	char *sv_name, *sv_owner;

	sv_name = name;
	sv_owner = owner;
	snoopy = malloc(sizeof(dog_t));
	if (snoopy == NULL)
		return (NULL);

	snoopy->name =  name;
	snoopy->owner = owner;
	snoopy->age = age;
	return (snoopy);
}
