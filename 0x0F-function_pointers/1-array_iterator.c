#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - appliquer une fonction au element dun tableau
 * @size: taille
 * @action: la fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 0 && *action != NULL && size == sizeof(array) / sizeof(int))
	{

		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

