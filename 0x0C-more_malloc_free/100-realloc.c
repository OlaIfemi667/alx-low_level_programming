#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - realoccation de mmémoire
 * @ptr: pointeur
 * @old_size: ancienne taille
 * @new_size: nouvlle taille
 * Return: un pointeur
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ancien;
	char *nouveau;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nouveau = malloc(new_size);
	if (nouveau == NULL)
		return (NULL);
	ancien = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nouveau[i] = ancien[i];
	}
	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
			nouveau[i] = ancien[i];
	}
	free(ptr);
	return (nouveau);
}
