#include <stdio.h>
#include <string.h>
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
	dog_t *snoopy;
	char *sv_name, *sv_owner;

	sv_name = malloc(sizeof(char) * (strlen(name) + 1));
	sv_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (sv_name == NULL)
		return (NULL);
	if (sv_owner == NULL)
		return (NULL);
	sv_name = name;
	sv_owner = owner;
	snoopy = malloc(sizeof(dog_t));
	if (snoopy == NULL)
		return (NULL);

	snoopy->name =  sv_name;
	snoopy->owner = sv_owner;
	snoopy->age = age;
	return (snoopy);
}
