#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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
	snoopy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	snoopy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (snoopy->name == NULL)
	{
		free(snoopy);
		return (NULL);
	}
	if (snoopy->owner == NULL)
	{
		free(snoopy->name);
		free(snoopy);
		return (NULL);
	}

	_strcpy(snoopy->name, name);
	_strcpy(snoopy->owner, owner);
	snoopy->age = age;
	return (snoopy);
}
