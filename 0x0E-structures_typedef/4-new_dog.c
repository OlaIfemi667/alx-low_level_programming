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

	snoopy = malloc(sizeof(dog_t));
	if (snoopy == NULL)
		return (NULL);
	snoopy->name = malloc(sizeof(char) * (strlen(name) + 1));
	snoopy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (snoopy->name == NULL)
	{
		free(snoopy);
		return (NULL);
	}
	if (snoopy->owner == NULL)
	{
		free(snoopy);
		return (NULL);
	}

	snoopy->name = name;
	snoopy->owner = owner;
	snoopy->age = age;
	return (snoopy);
}
